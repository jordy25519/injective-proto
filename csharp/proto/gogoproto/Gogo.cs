// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: gogoproto/gogo.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021, 8981
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Gogoproto {

  /// <summary>Holder for reflection information generated from gogoproto/gogo.proto</summary>
  public static partial class GogoReflection {

    #region Descriptor
    /// <summary>File descriptor for gogoproto/gogo.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static GogoReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "ChRnb2dvcHJvdG8vZ29nby5wcm90bxIJZ29nb3Byb3RvGiBnb29nbGUvcHJv",
            "dG9idWYvZGVzY3JpcHRvci5wcm90bzo7ChNnb3Byb3RvX2VudW1fcHJlZml4",
            "EhwuZ29vZ2xlLnByb3RvYnVmLkVudW1PcHRpb25zGLHkAyABKAg6PQoVZ29w",
            "cm90b19lbnVtX3N0cmluZ2VyEhwuZ29vZ2xlLnByb3RvYnVmLkVudW1PcHRp",
            "b25zGMXkAyABKAg6NQoNZW51bV9zdHJpbmdlchIcLmdvb2dsZS5wcm90b2J1",
            "Zi5FbnVtT3B0aW9ucxjG5AMgASgIOjcKD2VudW1fY3VzdG9tbmFtZRIcLmdv",
            "b2dsZS5wcm90b2J1Zi5FbnVtT3B0aW9ucxjH5AMgASgJOjAKCGVudW1kZWNs",
            "EhwuZ29vZ2xlLnByb3RvYnVmLkVudW1PcHRpb25zGMjkAyABKAg6QQoUZW51",
            "bXZhbHVlX2N1c3RvbW5hbWUSIS5nb29nbGUucHJvdG9idWYuRW51bVZhbHVl",
            "T3B0aW9ucxjRgwQgASgJOjsKE2dvcHJvdG9fZ2V0dGVyc19hbGwSHC5nb29n",
            "bGUucHJvdG9idWYuRmlsZU9wdGlvbnMYmewDIAEoCDo/Chdnb3Byb3RvX2Vu",
            "dW1fcHJlZml4X2FsbBIcLmdvb2dsZS5wcm90b2J1Zi5GaWxlT3B0aW9ucxia",
            "7AMgASgIOjwKFGdvcHJvdG9fc3RyaW5nZXJfYWxsEhwuZ29vZ2xlLnByb3Rv",
            "YnVmLkZpbGVPcHRpb25zGJvsAyABKAg6OQoRdmVyYm9zZV9lcXVhbF9hbGwS",
            "HC5nb29nbGUucHJvdG9idWYuRmlsZU9wdGlvbnMYnOwDIAEoCDowCghmYWNl",
            "X2FsbBIcLmdvb2dsZS5wcm90b2J1Zi5GaWxlT3B0aW9ucxid7AMgASgIOjQK",
            "DGdvc3RyaW5nX2FsbBIcLmdvb2dsZS5wcm90b2J1Zi5GaWxlT3B0aW9ucxie",
            "7AMgASgIOjQKDHBvcHVsYXRlX2FsbBIcLmdvb2dsZS5wcm90b2J1Zi5GaWxl",
            "T3B0aW9ucxif7AMgASgIOjQKDHN0cmluZ2VyX2FsbBIcLmdvb2dsZS5wcm90",
            "b2J1Zi5GaWxlT3B0aW9ucxig7AMgASgIOjMKC29ubHlvbmVfYWxsEhwuZ29v",
            "Z2xlLnByb3RvYnVmLkZpbGVPcHRpb25zGKHsAyABKAg6MQoJZXF1YWxfYWxs",
            "EhwuZ29vZ2xlLnByb3RvYnVmLkZpbGVPcHRpb25zGKXsAyABKAg6NwoPZGVz",
            "Y3JpcHRpb25fYWxsEhwuZ29vZ2xlLnByb3RvYnVmLkZpbGVPcHRpb25zGKbs",
            "AyABKAg6MwoLdGVzdGdlbl9hbGwSHC5nb29nbGUucHJvdG9idWYuRmlsZU9w",
            "dGlvbnMYp+wDIAEoCDo0CgxiZW5jaGdlbl9hbGwSHC5nb29nbGUucHJvdG9i",
            "dWYuRmlsZU9wdGlvbnMYqOwDIAEoCDo1Cg1tYXJzaGFsZXJfYWxsEhwuZ29v",
            "Z2xlLnByb3RvYnVmLkZpbGVPcHRpb25zGKnsAyABKAg6NwoPdW5tYXJzaGFs",
            "ZXJfYWxsEhwuZ29vZ2xlLnByb3RvYnVmLkZpbGVPcHRpb25zGKrsAyABKAg6",
            "PAoUc3RhYmxlX21hcnNoYWxlcl9hbGwSHC5nb29nbGUucHJvdG9idWYuRmls",
            "ZU9wdGlvbnMYq+wDIAEoCDoxCglzaXplcl9hbGwSHC5nb29nbGUucHJvdG9i",
            "dWYuRmlsZU9wdGlvbnMYrOwDIAEoCDpBChlnb3Byb3RvX2VudW1fc3RyaW5n",
            "ZXJfYWxsEhwuZ29vZ2xlLnByb3RvYnVmLkZpbGVPcHRpb25zGK3sAyABKAg6",
            "OQoRZW51bV9zdHJpbmdlcl9hbGwSHC5nb29nbGUucHJvdG9idWYuRmlsZU9w",
            "dGlvbnMYruwDIAEoCDo8ChR1bnNhZmVfbWFyc2hhbGVyX2FsbBIcLmdvb2ds",
            "ZS5wcm90b2J1Zi5GaWxlT3B0aW9ucxiv7AMgASgIOj4KFnVuc2FmZV91bm1h",
            "cnNoYWxlcl9hbGwSHC5nb29nbGUucHJvdG9idWYuRmlsZU9wdGlvbnMYsOwD",
            "IAEoCDpCChpnb3Byb3RvX2V4dGVuc2lvbnNfbWFwX2FsbBIcLmdvb2dsZS5w",
            "cm90b2J1Zi5GaWxlT3B0aW9ucxix7AMgASgIOkAKGGdvcHJvdG9fdW5yZWNv",
            "Z25pemVkX2FsbBIcLmdvb2dsZS5wcm90b2J1Zi5GaWxlT3B0aW9ucxiy7AMg",
            "ASgIOjgKEGdvZ29wcm90b19pbXBvcnQSHC5nb29nbGUucHJvdG9idWYuRmls",
            "ZU9wdGlvbnMYs+wDIAEoCDo2Cg5wcm90b3NpemVyX2FsbBIcLmdvb2dsZS5w",
            "cm90b2J1Zi5GaWxlT3B0aW9ucxi07AMgASgIOjMKC2NvbXBhcmVfYWxsEhwu",
            "Z29vZ2xlLnByb3RvYnVmLkZpbGVPcHRpb25zGLXsAyABKAg6NAoMdHlwZWRl",
            "Y2xfYWxsEhwuZ29vZ2xlLnByb3RvYnVmLkZpbGVPcHRpb25zGLbsAyABKAg6",
            "NAoMZW51bWRlY2xfYWxsEhwuZ29vZ2xlLnByb3RvYnVmLkZpbGVPcHRpb25z",
            "GLfsAyABKAg6PAoUZ29wcm90b19yZWdpc3RyYXRpb24SHC5nb29nbGUucHJv",
            "dG9idWYuRmlsZU9wdGlvbnMYuOwDIAEoCDo3Cg9tZXNzYWdlbmFtZV9hbGwS",
            "HC5nb29nbGUucHJvdG9idWYuRmlsZU9wdGlvbnMYuewDIAEoCDo9ChVnb3By",
            "b3RvX3NpemVjYWNoZV9hbGwSHC5nb29nbGUucHJvdG9idWYuRmlsZU9wdGlv",
            "bnMYuuwDIAEoCDo7ChNnb3Byb3RvX3Vua2V5ZWRfYWxsEhwuZ29vZ2xlLnBy",
            "b3RvYnVmLkZpbGVPcHRpb25zGLvsAyABKAg6OgoPZ29wcm90b19nZXR0ZXJz",
            "Eh8uZ29vZ2xlLnByb3RvYnVmLk1lc3NhZ2VPcHRpb25zGIH0AyABKAg6OwoQ",
            "Z29wcm90b19zdHJpbmdlchIfLmdvb2dsZS5wcm90b2J1Zi5NZXNzYWdlT3B0",
            "aW9ucxiD9AMgASgIOjgKDXZlcmJvc2VfZXF1YWwSHy5nb29nbGUucHJvdG9i",
            "dWYuTWVzc2FnZU9wdGlvbnMYhPQDIAEoCDovCgRmYWNlEh8uZ29vZ2xlLnBy",
            "b3RvYnVmLk1lc3NhZ2VPcHRpb25zGIX0AyABKAg6MwoIZ29zdHJpbmcSHy5n",
            "b29nbGUucHJvdG9idWYuTWVzc2FnZU9wdGlvbnMYhvQDIAEoCDozCghwb3B1",
            "bGF0ZRIfLmdvb2dsZS5wcm90b2J1Zi5NZXNzYWdlT3B0aW9ucxiH9AMgASgI",
            "OjMKCHN0cmluZ2VyEh8uZ29vZ2xlLnByb3RvYnVmLk1lc3NhZ2VPcHRpb25z",
            "GMCLBCABKAg6MgoHb25seW9uZRIfLmdvb2dsZS5wcm90b2J1Zi5NZXNzYWdl",
            "T3B0aW9ucxiJ9AMgASgIOjAKBWVxdWFsEh8uZ29vZ2xlLnByb3RvYnVmLk1l",
            "c3NhZ2VPcHRpb25zGI30AyABKAg6NgoLZGVzY3JpcHRpb24SHy5nb29nbGUu",
            "cHJvdG9idWYuTWVzc2FnZU9wdGlvbnMYjvQDIAEoCDoyCgd0ZXN0Z2VuEh8u",
            "Z29vZ2xlLnByb3RvYnVmLk1lc3NhZ2VPcHRpb25zGI/0AyABKAg6MwoIYmVu",
            "Y2hnZW4SHy5nb29nbGUucHJvdG9idWYuTWVzc2FnZU9wdGlvbnMYkPQDIAEo",
            "CDo0CgltYXJzaGFsZXISHy5nb29nbGUucHJvdG9idWYuTWVzc2FnZU9wdGlv",
            "bnMYkfQDIAEoCDo2Cgt1bm1hcnNoYWxlchIfLmdvb2dsZS5wcm90b2J1Zi5N",
            "ZXNzYWdlT3B0aW9ucxiS9AMgASgIOjsKEHN0YWJsZV9tYXJzaGFsZXISHy5n",
            "b29nbGUucHJvdG9idWYuTWVzc2FnZU9wdGlvbnMYk/QDIAEoCDowCgVzaXpl",
            "chIfLmdvb2dsZS5wcm90b2J1Zi5NZXNzYWdlT3B0aW9ucxiU9AMgASgIOjsK",
            "EHVuc2FmZV9tYXJzaGFsZXISHy5nb29nbGUucHJvdG9idWYuTWVzc2FnZU9w",
            "dGlvbnMYl/QDIAEoCDo9ChJ1bnNhZmVfdW5tYXJzaGFsZXISHy5nb29nbGUu",
            "cHJvdG9idWYuTWVzc2FnZU9wdGlvbnMYmPQDIAEoCDpBChZnb3Byb3RvX2V4",
            "dGVuc2lvbnNfbWFwEh8uZ29vZ2xlLnByb3RvYnVmLk1lc3NhZ2VPcHRpb25z",
            "GJn0AyABKAg6PwoUZ29wcm90b191bnJlY29nbml6ZWQSHy5nb29nbGUucHJv",
            "dG9idWYuTWVzc2FnZU9wdGlvbnMYmvQDIAEoCDo1Cgpwcm90b3NpemVyEh8u",
            "Z29vZ2xlLnByb3RvYnVmLk1lc3NhZ2VPcHRpb25zGJz0AyABKAg6MgoHY29t",
            "cGFyZRIfLmdvb2dsZS5wcm90b2J1Zi5NZXNzYWdlT3B0aW9ucxid9AMgASgI",
            "OjMKCHR5cGVkZWNsEh8uZ29vZ2xlLnByb3RvYnVmLk1lc3NhZ2VPcHRpb25z",
            "GJ70AyABKAg6NgoLbWVzc2FnZW5hbWUSHy5nb29nbGUucHJvdG9idWYuTWVz",
            "c2FnZU9wdGlvbnMYofQDIAEoCDo8ChFnb3Byb3RvX3NpemVjYWNoZRIfLmdv",
            "b2dsZS5wcm90b2J1Zi5NZXNzYWdlT3B0aW9ucxii9AMgASgIOjoKD2dvcHJv",
            "dG9fdW5rZXllZBIfLmdvb2dsZS5wcm90b2J1Zi5NZXNzYWdlT3B0aW9ucxij",
            "9AMgASgIOjEKCG51bGxhYmxlEh0uZ29vZ2xlLnByb3RvYnVmLkZpZWxkT3B0",
            "aW9ucxjp+wMgASgIOi4KBWVtYmVkEh0uZ29vZ2xlLnByb3RvYnVmLkZpZWxk",
            "T3B0aW9ucxjq+wMgASgIOjMKCmN1c3RvbXR5cGUSHS5nb29nbGUucHJvdG9i",
            "dWYuRmllbGRPcHRpb25zGOv7AyABKAk6MwoKY3VzdG9tbmFtZRIdLmdvb2ds",
            "ZS5wcm90b2J1Zi5GaWVsZE9wdGlvbnMY7PsDIAEoCTowCgdqc29udGFnEh0u",
            "Z29vZ2xlLnByb3RvYnVmLkZpZWxkT3B0aW9ucxjt+wMgASgJOjEKCG1vcmV0",
            "YWdzEh0uZ29vZ2xlLnByb3RvYnVmLkZpZWxkT3B0aW9ucxju+wMgASgJOjEK",
            "CGNhc3R0eXBlEh0uZ29vZ2xlLnByb3RvYnVmLkZpZWxkT3B0aW9ucxjv+wMg",
            "ASgJOjAKB2Nhc3RrZXkSHS5nb29nbGUucHJvdG9idWYuRmllbGRPcHRpb25z",
            "GPD7AyABKAk6MgoJY2FzdHZhbHVlEh0uZ29vZ2xlLnByb3RvYnVmLkZpZWxk",
            "T3B0aW9ucxjx+wMgASgJOjAKB3N0ZHRpbWUSHS5nb29nbGUucHJvdG9idWYu",
            "RmllbGRPcHRpb25zGPL7AyABKAg6NAoLc3RkZHVyYXRpb24SHS5nb29nbGUu",
            "cHJvdG9idWYuRmllbGRPcHRpb25zGPP7AyABKAg6MwoKd2t0cG9pbnRlchId",
            "Lmdvb2dsZS5wcm90b2J1Zi5GaWVsZE9wdGlvbnMY9PsDIAEoCDo1CgxjYXN0",
            "cmVwZWF0ZWQSHS5nb29nbGUucHJvdG9idWYuRmllbGRPcHRpb25zGPX7AyAB",
            "KAlCSAoTY29tLmdvb2dsZS5wcm90b2J1ZkIKR29Hb1Byb3Rvc1olZ2l0aHVi",
            "LmNvbS9jb3Ntb3MvZ29nb3Byb3RvL2dvZ29wcm90bw=="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { global::Google.Protobuf.Reflection.DescriptorReflection.Descriptor, },
          new pbr::GeneratedClrTypeInfo(null, new pb::Extension[] { GogoExtensions.GoprotoEnumPrefix, GogoExtensions.GoprotoEnumStringer, GogoExtensions.EnumStringer, GogoExtensions.EnumCustomname, GogoExtensions.Enumdecl, GogoExtensions.EnumvalueCustomname, GogoExtensions.GoprotoGettersAll, GogoExtensions.GoprotoEnumPrefixAll, GogoExtensions.GoprotoStringerAll, GogoExtensions.VerboseEqualAll, GogoExtensions.FaceAll, GogoExtensions.GostringAll, GogoExtensions.PopulateAll, GogoExtensions.StringerAll, GogoExtensions.OnlyoneAll, GogoExtensions.EqualAll, GogoExtensions.DescriptionAll, GogoExtensions.TestgenAll, GogoExtensions.BenchgenAll, GogoExtensions.MarshalerAll, GogoExtensions.UnmarshalerAll, GogoExtensions.StableMarshalerAll, GogoExtensions.SizerAll, GogoExtensions.GoprotoEnumStringerAll, GogoExtensions.EnumStringerAll, GogoExtensions.UnsafeMarshalerAll, GogoExtensions.UnsafeUnmarshalerAll, GogoExtensions.GoprotoExtensionsMapAll, GogoExtensions.GoprotoUnrecognizedAll, GogoExtensions.GogoprotoImport, GogoExtensions.ProtosizerAll, GogoExtensions.CompareAll, GogoExtensions.TypedeclAll, GogoExtensions.EnumdeclAll, GogoExtensions.GoprotoRegistration, GogoExtensions.MessagenameAll, GogoExtensions.GoprotoSizecacheAll, GogoExtensions.GoprotoUnkeyedAll, GogoExtensions.GoprotoGetters, GogoExtensions.GoprotoStringer, GogoExtensions.VerboseEqual, GogoExtensions.Face, GogoExtensions.Gostring, GogoExtensions.Populate, GogoExtensions.Stringer, GogoExtensions.Onlyone, GogoExtensions.Equal, GogoExtensions.Description, GogoExtensions.Testgen, GogoExtensions.Benchgen, GogoExtensions.Marshaler, GogoExtensions.Unmarshaler, GogoExtensions.StableMarshaler, GogoExtensions.Sizer, GogoExtensions.UnsafeMarshaler, GogoExtensions.UnsafeUnmarshaler, GogoExtensions.GoprotoExtensionsMap, GogoExtensions.GoprotoUnrecognized, GogoExtensions.Protosizer, GogoExtensions.Compare, GogoExtensions.Typedecl, GogoExtensions.Messagename, GogoExtensions.GoprotoSizecache, GogoExtensions.GoprotoUnkeyed, GogoExtensions.Nullable, GogoExtensions.Embed, GogoExtensions.Customtype, GogoExtensions.Customname, GogoExtensions.Jsontag, GogoExtensions.Moretags, GogoExtensions.Casttype, GogoExtensions.Castkey, GogoExtensions.Castvalue, GogoExtensions.Stdtime, GogoExtensions.Stdduration, GogoExtensions.Wktpointer, GogoExtensions.Castrepeated }, null));
    }
    #endregion

  }
  /// <summary>Holder for extension identifiers generated from the top level of gogoproto/gogo.proto</summary>
  public static partial class GogoExtensions {
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.EnumOptions, bool> GoprotoEnumPrefix =
      new pb::Extension<global::Google.Protobuf.Reflection.EnumOptions, bool>(62001, pb::FieldCodec.ForBool(496008, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.EnumOptions, bool> GoprotoEnumStringer =
      new pb::Extension<global::Google.Protobuf.Reflection.EnumOptions, bool>(62021, pb::FieldCodec.ForBool(496168, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.EnumOptions, bool> EnumStringer =
      new pb::Extension<global::Google.Protobuf.Reflection.EnumOptions, bool>(62022, pb::FieldCodec.ForBool(496176, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.EnumOptions, string> EnumCustomname =
      new pb::Extension<global::Google.Protobuf.Reflection.EnumOptions, string>(62023, pb::FieldCodec.ForString(496186, ""));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.EnumOptions, bool> Enumdecl =
      new pb::Extension<global::Google.Protobuf.Reflection.EnumOptions, bool>(62024, pb::FieldCodec.ForBool(496192, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.EnumValueOptions, string> EnumvalueCustomname =
      new pb::Extension<global::Google.Protobuf.Reflection.EnumValueOptions, string>(66001, pb::FieldCodec.ForString(528010, ""));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool> GoprotoGettersAll =
      new pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool>(63001, pb::FieldCodec.ForBool(504008, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool> GoprotoEnumPrefixAll =
      new pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool>(63002, pb::FieldCodec.ForBool(504016, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool> GoprotoStringerAll =
      new pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool>(63003, pb::FieldCodec.ForBool(504024, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool> VerboseEqualAll =
      new pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool>(63004, pb::FieldCodec.ForBool(504032, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool> FaceAll =
      new pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool>(63005, pb::FieldCodec.ForBool(504040, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool> GostringAll =
      new pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool>(63006, pb::FieldCodec.ForBool(504048, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool> PopulateAll =
      new pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool>(63007, pb::FieldCodec.ForBool(504056, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool> StringerAll =
      new pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool>(63008, pb::FieldCodec.ForBool(504064, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool> OnlyoneAll =
      new pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool>(63009, pb::FieldCodec.ForBool(504072, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool> EqualAll =
      new pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool>(63013, pb::FieldCodec.ForBool(504104, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool> DescriptionAll =
      new pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool>(63014, pb::FieldCodec.ForBool(504112, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool> TestgenAll =
      new pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool>(63015, pb::FieldCodec.ForBool(504120, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool> BenchgenAll =
      new pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool>(63016, pb::FieldCodec.ForBool(504128, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool> MarshalerAll =
      new pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool>(63017, pb::FieldCodec.ForBool(504136, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool> UnmarshalerAll =
      new pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool>(63018, pb::FieldCodec.ForBool(504144, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool> StableMarshalerAll =
      new pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool>(63019, pb::FieldCodec.ForBool(504152, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool> SizerAll =
      new pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool>(63020, pb::FieldCodec.ForBool(504160, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool> GoprotoEnumStringerAll =
      new pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool>(63021, pb::FieldCodec.ForBool(504168, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool> EnumStringerAll =
      new pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool>(63022, pb::FieldCodec.ForBool(504176, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool> UnsafeMarshalerAll =
      new pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool>(63023, pb::FieldCodec.ForBool(504184, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool> UnsafeUnmarshalerAll =
      new pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool>(63024, pb::FieldCodec.ForBool(504192, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool> GoprotoExtensionsMapAll =
      new pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool>(63025, pb::FieldCodec.ForBool(504200, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool> GoprotoUnrecognizedAll =
      new pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool>(63026, pb::FieldCodec.ForBool(504208, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool> GogoprotoImport =
      new pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool>(63027, pb::FieldCodec.ForBool(504216, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool> ProtosizerAll =
      new pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool>(63028, pb::FieldCodec.ForBool(504224, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool> CompareAll =
      new pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool>(63029, pb::FieldCodec.ForBool(504232, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool> TypedeclAll =
      new pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool>(63030, pb::FieldCodec.ForBool(504240, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool> EnumdeclAll =
      new pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool>(63031, pb::FieldCodec.ForBool(504248, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool> GoprotoRegistration =
      new pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool>(63032, pb::FieldCodec.ForBool(504256, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool> MessagenameAll =
      new pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool>(63033, pb::FieldCodec.ForBool(504264, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool> GoprotoSizecacheAll =
      new pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool>(63034, pb::FieldCodec.ForBool(504272, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool> GoprotoUnkeyedAll =
      new pb::Extension<global::Google.Protobuf.Reflection.FileOptions, bool>(63035, pb::FieldCodec.ForBool(504280, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool> GoprotoGetters =
      new pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool>(64001, pb::FieldCodec.ForBool(512008, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool> GoprotoStringer =
      new pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool>(64003, pb::FieldCodec.ForBool(512024, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool> VerboseEqual =
      new pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool>(64004, pb::FieldCodec.ForBool(512032, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool> Face =
      new pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool>(64005, pb::FieldCodec.ForBool(512040, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool> Gostring =
      new pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool>(64006, pb::FieldCodec.ForBool(512048, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool> Populate =
      new pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool>(64007, pb::FieldCodec.ForBool(512056, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool> Stringer =
      new pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool>(67008, pb::FieldCodec.ForBool(536064, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool> Onlyone =
      new pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool>(64009, pb::FieldCodec.ForBool(512072, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool> Equal =
      new pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool>(64013, pb::FieldCodec.ForBool(512104, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool> Description =
      new pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool>(64014, pb::FieldCodec.ForBool(512112, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool> Testgen =
      new pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool>(64015, pb::FieldCodec.ForBool(512120, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool> Benchgen =
      new pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool>(64016, pb::FieldCodec.ForBool(512128, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool> Marshaler =
      new pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool>(64017, pb::FieldCodec.ForBool(512136, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool> Unmarshaler =
      new pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool>(64018, pb::FieldCodec.ForBool(512144, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool> StableMarshaler =
      new pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool>(64019, pb::FieldCodec.ForBool(512152, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool> Sizer =
      new pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool>(64020, pb::FieldCodec.ForBool(512160, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool> UnsafeMarshaler =
      new pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool>(64023, pb::FieldCodec.ForBool(512184, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool> UnsafeUnmarshaler =
      new pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool>(64024, pb::FieldCodec.ForBool(512192, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool> GoprotoExtensionsMap =
      new pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool>(64025, pb::FieldCodec.ForBool(512200, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool> GoprotoUnrecognized =
      new pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool>(64026, pb::FieldCodec.ForBool(512208, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool> Protosizer =
      new pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool>(64028, pb::FieldCodec.ForBool(512224, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool> Compare =
      new pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool>(64029, pb::FieldCodec.ForBool(512232, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool> Typedecl =
      new pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool>(64030, pb::FieldCodec.ForBool(512240, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool> Messagename =
      new pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool>(64033, pb::FieldCodec.ForBool(512264, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool> GoprotoSizecache =
      new pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool>(64034, pb::FieldCodec.ForBool(512272, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool> GoprotoUnkeyed =
      new pb::Extension<global::Google.Protobuf.Reflection.MessageOptions, bool>(64035, pb::FieldCodec.ForBool(512280, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FieldOptions, bool> Nullable =
      new pb::Extension<global::Google.Protobuf.Reflection.FieldOptions, bool>(65001, pb::FieldCodec.ForBool(520008, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FieldOptions, bool> Embed =
      new pb::Extension<global::Google.Protobuf.Reflection.FieldOptions, bool>(65002, pb::FieldCodec.ForBool(520016, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FieldOptions, string> Customtype =
      new pb::Extension<global::Google.Protobuf.Reflection.FieldOptions, string>(65003, pb::FieldCodec.ForString(520026, ""));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FieldOptions, string> Customname =
      new pb::Extension<global::Google.Protobuf.Reflection.FieldOptions, string>(65004, pb::FieldCodec.ForString(520034, ""));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FieldOptions, string> Jsontag =
      new pb::Extension<global::Google.Protobuf.Reflection.FieldOptions, string>(65005, pb::FieldCodec.ForString(520042, ""));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FieldOptions, string> Moretags =
      new pb::Extension<global::Google.Protobuf.Reflection.FieldOptions, string>(65006, pb::FieldCodec.ForString(520050, ""));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FieldOptions, string> Casttype =
      new pb::Extension<global::Google.Protobuf.Reflection.FieldOptions, string>(65007, pb::FieldCodec.ForString(520058, ""));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FieldOptions, string> Castkey =
      new pb::Extension<global::Google.Protobuf.Reflection.FieldOptions, string>(65008, pb::FieldCodec.ForString(520066, ""));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FieldOptions, string> Castvalue =
      new pb::Extension<global::Google.Protobuf.Reflection.FieldOptions, string>(65009, pb::FieldCodec.ForString(520074, ""));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FieldOptions, bool> Stdtime =
      new pb::Extension<global::Google.Protobuf.Reflection.FieldOptions, bool>(65010, pb::FieldCodec.ForBool(520080, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FieldOptions, bool> Stdduration =
      new pb::Extension<global::Google.Protobuf.Reflection.FieldOptions, bool>(65011, pb::FieldCodec.ForBool(520088, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FieldOptions, bool> Wktpointer =
      new pb::Extension<global::Google.Protobuf.Reflection.FieldOptions, bool>(65012, pb::FieldCodec.ForBool(520096, false));
    public static readonly pb::Extension<global::Google.Protobuf.Reflection.FieldOptions, string> Castrepeated =
      new pb::Extension<global::Google.Protobuf.Reflection.FieldOptions, string>(65013, pb::FieldCodec.ForString(520106, ""));
  }

}

#endregion Designer generated code
