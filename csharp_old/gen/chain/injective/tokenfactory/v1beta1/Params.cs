// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: injective/tokenfactory/v1beta1/params.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021, 8981
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Injective.Tokenfactory.V1Beta1 {

  /// <summary>Holder for reflection information generated from injective/tokenfactory/v1beta1/params.proto</summary>
  public static partial class ParamsReflection {

    #region Descriptor
    /// <summary>File descriptor for injective/tokenfactory/v1beta1/params.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static ParamsReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "CitpbmplY3RpdmUvdG9rZW5mYWN0b3J5L3YxYmV0YTEvcGFyYW1zLnByb3Rv",
            "Eh5pbmplY3RpdmUudG9rZW5mYWN0b3J5LnYxYmV0YTEaFGdvZ29wcm90by9n",
            "b2dvLnByb3RvGjZpbmplY3RpdmUvdG9rZW5mYWN0b3J5L3YxYmV0YTEvYXV0",
            "aG9yaXR5TWV0YWRhdGEucHJvdG8aGWNvc21vc19wcm90by9jb3Ntb3MucHJv",
            "dG8aHmNvc21vcy9iYXNlL3YxYmV0YTEvY29pbi5wcm90byKPAQoGUGFyYW1z",
            "EoQBChJkZW5vbV9jcmVhdGlvbl9mZWUYASADKAsyGS5jb3Ntb3MuYmFzZS52",
            "MWJldGExLkNvaW5CTarfHyhnaXRodWIuY29tL2Nvc21vcy9jb3Ntb3Mtc2Rr",
            "L3R5cGVzLkNvaW5z8t4fGXlhbWw6ImRlbm9tX2NyZWF0aW9uX2ZlZSLI3h8A",
            "QlRaUmdpdGh1Yi5jb20vSW5qZWN0aXZlTGFicy9pbmplY3RpdmUtY29yZS9p",
            "bmplY3RpdmUtY2hhaW4vbW9kdWxlcy90b2tlbmZhY3RvcnkvdHlwZXNiBnBy",
            "b3RvMw=="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { global::Gogoproto.GogoReflection.Descriptor, global::Injective.Tokenfactory.V1Beta1.AuthorityMetadataReflection.Descriptor, global::CosmosProto.CosmosReflection.Descriptor, global::Cosmos.Base.V1Beta1.CoinReflection.Descriptor, },
          new pbr::GeneratedClrTypeInfo(null, null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Injective.Tokenfactory.V1Beta1.Params), global::Injective.Tokenfactory.V1Beta1.Params.Parser, new[]{ "DenomCreationFee" }, null, null, null, null)
          }));
    }
    #endregion

  }
  #region Messages
  /// <summary>
  /// Params defines the parameters for the tokenfactory module.
  /// </summary>
  public sealed partial class Params : pb::IMessage<Params>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<Params> _parser = new pb::MessageParser<Params>(() => new Params());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pb::MessageParser<Params> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Injective.Tokenfactory.V1Beta1.ParamsReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public Params() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public Params(Params other) : this() {
      denomCreationFee_ = other.denomCreationFee_.Clone();
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public Params Clone() {
      return new Params(this);
    }

    /// <summary>Field number for the "denom_creation_fee" field.</summary>
    public const int DenomCreationFeeFieldNumber = 1;
    private static readonly pb::FieldCodec<global::Cosmos.Base.V1Beta1.Coin> _repeated_denomCreationFee_codec
        = pb::FieldCodec.ForMessage(10, global::Cosmos.Base.V1Beta1.Coin.Parser);
    private readonly pbc::RepeatedField<global::Cosmos.Base.V1Beta1.Coin> denomCreationFee_ = new pbc::RepeatedField<global::Cosmos.Base.V1Beta1.Coin>();
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public pbc::RepeatedField<global::Cosmos.Base.V1Beta1.Coin> DenomCreationFee {
      get { return denomCreationFee_; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override bool Equals(object other) {
      return Equals(other as Params);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public bool Equals(Params other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if(!denomCreationFee_.Equals(other.denomCreationFee_)) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override int GetHashCode() {
      int hash = 1;
      hash ^= denomCreationFee_.GetHashCode();
      if (_unknownFields != null) {
        hash ^= _unknownFields.GetHashCode();
      }
      return hash;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override string ToString() {
      return pb::JsonFormatter.ToDiagnosticString(this);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public void WriteTo(pb::CodedOutputStream output) {
    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      output.WriteRawMessage(this);
    #else
      denomCreationFee_.WriteTo(output, _repeated_denomCreationFee_codec);
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    void pb::IBufferMessage.InternalWriteTo(ref pb::WriteContext output) {
      denomCreationFee_.WriteTo(ref output, _repeated_denomCreationFee_codec);
      if (_unknownFields != null) {
        _unknownFields.WriteTo(ref output);
      }
    }
    #endif

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public int CalculateSize() {
      int size = 0;
      size += denomCreationFee_.CalculateSize(_repeated_denomCreationFee_codec);
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public void MergeFrom(Params other) {
      if (other == null) {
        return;
      }
      denomCreationFee_.Add(other.denomCreationFee_);
      _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public void MergeFrom(pb::CodedInputStream input) {
    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      input.ReadRawMessage(this);
    #else
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);
            break;
          case 10: {
            denomCreationFee_.AddEntriesFrom(input, _repeated_denomCreationFee_codec);
            break;
          }
        }
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    void pb::IBufferMessage.InternalMergeFrom(ref pb::ParseContext input) {
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, ref input);
            break;
          case 10: {
            denomCreationFee_.AddEntriesFrom(ref input, _repeated_denomCreationFee_codec);
            break;
          }
        }
      }
    }
    #endif

  }

  #endregion

}

#endregion Designer generated code
