use protobuf_codegen_pure::Customize;
use std::{env, fs, io, path::Path};

fn list_files(dir: &Path, path_vec: &mut Vec<String>) -> io::Result<()> {
    if dir.is_dir() {
        for entry in fs::read_dir(dir)? {
            let entry = entry?;
            let path = entry.path();
            if path.is_dir() {
                list_files(&path, path_vec)?;
            } else {
                let cloned_path = entry.path().clone();
                path_vec.push(String::from(cloned_path.to_str().unwrap()));
            }
        }
    }
    Ok(())
}

fn main() {
    let should_generate = env::var_os("CARGO_FEATURE_PROTO").is_some();
    if !should_generate {
        return;
    }

    for dir in fs::read_dir("../proto/chain/injective").unwrap() {
        let customizer = Customize {
            gen_mod_rs: Some(true),
            lite_runtime: Some(true),
            ..Default::default()
        };

        let dir_name = String::from(dir.unwrap().file_name().to_str().unwrap());
        let main_dir = format!("../proto/chain/injective/{}", dir_name);
        let out_dir = format!("src/chain/injective/{}", dir_name);
        let mut sub_dirs: Vec<String> = Vec::new();

        let _ = list_files(Path::new(main_dir.as_str()), &mut sub_dirs);
        let _ = fs::create_dir(out_dir.clone());

        protobuf_codegen_pure::Codegen::new()
            .out_dir(out_dir)
            .inputs(sub_dirs)
            .includes(["../proto/chain", "../proto/chain/injective"])
            .customize(customizer)
            .run()
            .expect("Protobuf codegen failed");
    }

    let customizer = Customize {
        gen_mod_rs: Some(true),
        lite_runtime: Some(true),
        ..Default::default()
    };
    // generate indexer rpc
    let mut sub_dirs: Vec<String> = Vec::new();
    let _ = list_files(Path::new("../proto/indexer"), &mut sub_dirs);
    let out_dir = String::from("src/indexer");
    let _ = fs::create_dir(out_dir.clone());
    protobuf_codegen_pure::Codegen::new()
        .out_dir(out_dir)
        .inputs(sub_dirs)
        .includes(["../proto/indexer"])
        .customize(customizer)
        .run()
        .expect("Protobuf codegen for indexer failed");
}
