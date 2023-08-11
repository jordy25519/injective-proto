// This file is generated by rust-protobuf 2.28.0. Do not edit
// @generated

// https://github.com/rust-lang/rust-clippy/issues/702
#![allow(unknown_lints)]
#![allow(clippy::all)]

#![allow(unused_attributes)]
#![cfg_attr(rustfmt, rustfmt::skip)]

#![allow(box_pointers)]
#![allow(dead_code)]
#![allow(missing_docs)]
#![allow(non_camel_case_types)]
#![allow(non_snake_case)]
#![allow(non_upper_case_globals)]
#![allow(trivial_casts)]
#![allow(unused_imports)]
#![allow(unused_results)]
//! Generated file from `injective/types/v1beta1/tx_ext.proto`

/// Generated files are compatible only with the same version
/// of protobuf runtime.
// const _PROTOBUF_VERSION_CHECK: () = ::protobuf::VERSION_2_28_0;

#[derive(PartialEq,Clone,Default,Debug)]
pub struct ExtensionOptionsWeb3Tx {
    // message fields
    pub typedDataChainID: u64,
    pub feePayer: ::std::string::String,
    pub feePayerSig: ::std::vec::Vec<u8>,
    // special fields
    pub unknown_fields: ::protobuf::UnknownFields,
    pub cached_size: ::protobuf::CachedSize,
}

impl<'a> ::std::default::Default for &'a ExtensionOptionsWeb3Tx {
    fn default() -> &'a ExtensionOptionsWeb3Tx {
        <ExtensionOptionsWeb3Tx as ::protobuf::Message>::default_instance()
    }
}

impl ExtensionOptionsWeb3Tx {
    pub fn new() -> ExtensionOptionsWeb3Tx {
        ::std::default::Default::default()
    }

    // uint64 typedDataChainID = 1;


    pub fn get_typedDataChainID(&self) -> u64 {
        self.typedDataChainID
    }
    pub fn clear_typedDataChainID(&mut self) {
        self.typedDataChainID = 0;
    }

    // Param is passed by value, moved
    pub fn set_typedDataChainID(&mut self, v: u64) {
        self.typedDataChainID = v;
    }

    // string feePayer = 2;


    pub fn get_feePayer(&self) -> &str {
        &self.feePayer
    }
    pub fn clear_feePayer(&mut self) {
        self.feePayer.clear();
    }

    // Param is passed by value, moved
    pub fn set_feePayer(&mut self, v: ::std::string::String) {
        self.feePayer = v;
    }

    // Mutable pointer to the field.
    // If field is not initialized, it is initialized with default value first.
    pub fn mut_feePayer(&mut self) -> &mut ::std::string::String {
        &mut self.feePayer
    }

    // Take field
    pub fn take_feePayer(&mut self) -> ::std::string::String {
        ::std::mem::replace(&mut self.feePayer, ::std::string::String::new())
    }

    // bytes feePayerSig = 3;


    pub fn get_feePayerSig(&self) -> &[u8] {
        &self.feePayerSig
    }
    pub fn clear_feePayerSig(&mut self) {
        self.feePayerSig.clear();
    }

    // Param is passed by value, moved
    pub fn set_feePayerSig(&mut self, v: ::std::vec::Vec<u8>) {
        self.feePayerSig = v;
    }

    // Mutable pointer to the field.
    // If field is not initialized, it is initialized with default value first.
    pub fn mut_feePayerSig(&mut self) -> &mut ::std::vec::Vec<u8> {
        &mut self.feePayerSig
    }

    // Take field
    pub fn take_feePayerSig(&mut self) -> ::std::vec::Vec<u8> {
        ::std::mem::replace(&mut self.feePayerSig, ::std::vec::Vec::new())
    }
}

impl ::protobuf::Message for ExtensionOptionsWeb3Tx {
    fn is_initialized(&self) -> bool {
        true
    }

    fn merge_from(&mut self, is: &mut ::protobuf::CodedInputStream<'_>) -> ::protobuf::ProtobufResult<()> {
        while !is.eof()? {
            let (field_number, wire_type) = is.read_tag_unpack()?;
            match field_number {
                1 => {
                    if wire_type != ::protobuf::wire_format::WireTypeVarint {
                        return ::std::result::Result::Err(::protobuf::rt::unexpected_wire_type(wire_type));
                    }
                    let tmp = is.read_uint64()?;
                    self.typedDataChainID = tmp;
                },
                2 => {
                    ::protobuf::rt::read_singular_proto3_string_into(wire_type, is, &mut self.feePayer)?;
                },
                3 => {
                    ::protobuf::rt::read_singular_proto3_bytes_into(wire_type, is, &mut self.feePayerSig)?;
                },
                _ => {
                    ::protobuf::rt::read_unknown_or_skip_group(field_number, wire_type, is, self.mut_unknown_fields())?;
                },
            };
        }
        ::std::result::Result::Ok(())
    }

    // Compute sizes of nested messages
    #[allow(unused_variables)]
    fn compute_size(&self) -> u32 {
        let mut my_size = 0;
        if self.typedDataChainID != 0 {
            my_size += ::protobuf::rt::value_size(1, self.typedDataChainID, ::protobuf::wire_format::WireTypeVarint);
        }
        if !self.feePayer.is_empty() {
            my_size += ::protobuf::rt::string_size(2, &self.feePayer);
        }
        if !self.feePayerSig.is_empty() {
            my_size += ::protobuf::rt::bytes_size(3, &self.feePayerSig);
        }
        my_size += ::protobuf::rt::unknown_fields_size(self.get_unknown_fields());
        self.cached_size.set(my_size);
        my_size
    }

    fn write_to_with_cached_sizes(&self, os: &mut ::protobuf::CodedOutputStream<'_>) -> ::protobuf::ProtobufResult<()> {
        if self.typedDataChainID != 0 {
            os.write_uint64(1, self.typedDataChainID)?;
        }
        if !self.feePayer.is_empty() {
            os.write_string(2, &self.feePayer)?;
        }
        if !self.feePayerSig.is_empty() {
            os.write_bytes(3, &self.feePayerSig)?;
        }
        os.write_unknown_fields(self.get_unknown_fields())?;
        ::std::result::Result::Ok(())
    }

    fn get_cached_size(&self) -> u32 {
        self.cached_size.get()
    }

    fn get_unknown_fields(&self) -> &::protobuf::UnknownFields {
        &self.unknown_fields
    }

    fn mut_unknown_fields(&mut self) -> &mut ::protobuf::UnknownFields {
        &mut self.unknown_fields
    }

    fn as_any(&self) -> &dyn (::std::any::Any) {
        self as &dyn (::std::any::Any)
    }
    fn as_any_mut(&mut self) -> &mut dyn (::std::any::Any) {
        self as &mut dyn (::std::any::Any)
    }
    fn into_any(self: ::std::boxed::Box<Self>) -> ::std::boxed::Box<dyn (::std::any::Any)> {
        self
    }

    fn descriptor(&self) -> &'static ::protobuf::reflect::MessageDescriptor {
        Self::descriptor_static()
    }

    fn new() -> ExtensionOptionsWeb3Tx {
        ExtensionOptionsWeb3Tx::new()
    }

    fn default_instance() -> &'static ExtensionOptionsWeb3Tx {
        static instance: ::protobuf::rt::LazyV2<ExtensionOptionsWeb3Tx> = ::protobuf::rt::LazyV2::INIT;
        instance.get(ExtensionOptionsWeb3Tx::new)
    }
}

impl ::protobuf::Clear for ExtensionOptionsWeb3Tx {
    fn clear(&mut self) {
        self.typedDataChainID = 0;
        self.feePayer.clear();
        self.feePayerSig.clear();
        self.unknown_fields.clear();
    }
}

impl ::protobuf::reflect::ProtobufValue for ExtensionOptionsWeb3Tx {
    fn as_ref(&self) -> ::protobuf::reflect::ReflectValueRef {
        ::protobuf::reflect::ReflectValueRef::Message(self)
    }
}