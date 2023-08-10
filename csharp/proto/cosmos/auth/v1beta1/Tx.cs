// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: cosmos/auth/v1beta1/tx.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021, 8981
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Cosmos.Auth.V1Beta1 {

  /// <summary>Holder for reflection information generated from cosmos/auth/v1beta1/tx.proto</summary>
  public static partial class TxReflection {

    #region Descriptor
    /// <summary>File descriptor for cosmos/auth/v1beta1/tx.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static TxReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "Chxjb3Ntb3MvYXV0aC92MWJldGExL3R4LnByb3RvEhNjb3Ntb3MuYXV0aC52",
            "MWJldGExGhRnb2dvcHJvdG8vZ29nby5wcm90bxoZY29zbW9zX3Byb3RvL2Nv",
            "c21vcy5wcm90bxoXY29zbW9zL21zZy92MS9tc2cucHJvdG8aEWFtaW5vL2Ft",
            "aW5vLnByb3RvGh5jb3Ntb3MvYXV0aC92MWJldGExL2F1dGgucHJvdG8irAEK",
            "D01zZ1VwZGF0ZVBhcmFtcxIrCglhdXRob3JpdHkYASABKAlCGNK0LRRjb3Nt",
            "b3MuQWRkcmVzc1N0cmluZxI2CgZwYXJhbXMYAiABKAsyGy5jb3Ntb3MuYXV0",
            "aC52MWJldGExLlBhcmFtc0IJyN4fAKjnsCoBOjSC57AqCWF1dGhvcml0eYrn",
            "sCohY29zbW9zLXNkay94L2F1dGgvTXNnVXBkYXRlUGFyYW1zIhkKF01zZ1Vw",
            "ZGF0ZVBhcmFtc1Jlc3BvbnNlMnAKA01zZxJiCgxVcGRhdGVQYXJhbXMSJC5j",
            "b3Ntb3MuYXV0aC52MWJldGExLk1zZ1VwZGF0ZVBhcmFtcxosLmNvc21vcy5h",
            "dXRoLnYxYmV0YTEuTXNnVXBkYXRlUGFyYW1zUmVzcG9uc2UaBYDnsCoBQita",
            "KWdpdGh1Yi5jb20vY29zbW9zL2Nvc21vcy1zZGsveC9hdXRoL3R5cGVzYgZw",
            "cm90bzM="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { global::Gogoproto.GogoReflection.Descriptor, global::CosmosProto.CosmosReflection.Descriptor, global::Cosmos.Msg.V1.MsgReflection.Descriptor, global::Amino.AminoReflection.Descriptor, global::Cosmos.Auth.V1Beta1.AuthReflection.Descriptor, },
          new pbr::GeneratedClrTypeInfo(null, null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Cosmos.Auth.V1Beta1.MsgUpdateParams), global::Cosmos.Auth.V1Beta1.MsgUpdateParams.Parser, new[]{ "Authority", "Params" }, null, null, null, null),
            new pbr::GeneratedClrTypeInfo(typeof(global::Cosmos.Auth.V1Beta1.MsgUpdateParamsResponse), global::Cosmos.Auth.V1Beta1.MsgUpdateParamsResponse.Parser, null, null, null, null, null)
          }));
    }
    #endregion

  }
  #region Messages
  /// <summary>
  /// MsgUpdateParams is the Msg/UpdateParams request type.
  ///
  /// Since: cosmos-sdk 0.47
  /// </summary>
  public sealed partial class MsgUpdateParams : pb::IMessage<MsgUpdateParams>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<MsgUpdateParams> _parser = new pb::MessageParser<MsgUpdateParams>(() => new MsgUpdateParams());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pb::MessageParser<MsgUpdateParams> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Cosmos.Auth.V1Beta1.TxReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public MsgUpdateParams() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public MsgUpdateParams(MsgUpdateParams other) : this() {
      authority_ = other.authority_;
      params_ = other.params_ != null ? other.params_.Clone() : null;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public MsgUpdateParams Clone() {
      return new MsgUpdateParams(this);
    }

    /// <summary>Field number for the "authority" field.</summary>
    public const int AuthorityFieldNumber = 1;
    private string authority_ = "";
    /// <summary>
    /// authority is the address that controls the module (defaults to x/gov unless overwritten).
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public string Authority {
      get { return authority_; }
      set {
        authority_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "params" field.</summary>
    public const int ParamsFieldNumber = 2;
    private global::Cosmos.Auth.V1Beta1.Params params_;
    /// <summary>
    /// params defines the x/auth parameters to update.
    ///
    /// NOTE: All parameters must be supplied.
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public global::Cosmos.Auth.V1Beta1.Params Params {
      get { return params_; }
      set {
        params_ = value;
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override bool Equals(object other) {
      return Equals(other as MsgUpdateParams);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public bool Equals(MsgUpdateParams other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (Authority != other.Authority) return false;
      if (!object.Equals(Params, other.Params)) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override int GetHashCode() {
      int hash = 1;
      if (Authority.Length != 0) hash ^= Authority.GetHashCode();
      if (params_ != null) hash ^= Params.GetHashCode();
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
      if (Authority.Length != 0) {
        output.WriteRawTag(10);
        output.WriteString(Authority);
      }
      if (params_ != null) {
        output.WriteRawTag(18);
        output.WriteMessage(Params);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    void pb::IBufferMessage.InternalWriteTo(ref pb::WriteContext output) {
      if (Authority.Length != 0) {
        output.WriteRawTag(10);
        output.WriteString(Authority);
      }
      if (params_ != null) {
        output.WriteRawTag(18);
        output.WriteMessage(Params);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(ref output);
      }
    }
    #endif

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public int CalculateSize() {
      int size = 0;
      if (Authority.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(Authority);
      }
      if (params_ != null) {
        size += 1 + pb::CodedOutputStream.ComputeMessageSize(Params);
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public void MergeFrom(MsgUpdateParams other) {
      if (other == null) {
        return;
      }
      if (other.Authority.Length != 0) {
        Authority = other.Authority;
      }
      if (other.params_ != null) {
        if (params_ == null) {
          Params = new global::Cosmos.Auth.V1Beta1.Params();
        }
        Params.MergeFrom(other.Params);
      }
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
            Authority = input.ReadString();
            break;
          }
          case 18: {
            if (params_ == null) {
              Params = new global::Cosmos.Auth.V1Beta1.Params();
            }
            input.ReadMessage(Params);
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
            Authority = input.ReadString();
            break;
          }
          case 18: {
            if (params_ == null) {
              Params = new global::Cosmos.Auth.V1Beta1.Params();
            }
            input.ReadMessage(Params);
            break;
          }
        }
      }
    }
    #endif

  }

  /// <summary>
  /// MsgUpdateParamsResponse defines the response structure for executing a
  /// MsgUpdateParams message.
  ///
  /// Since: cosmos-sdk 0.47
  /// </summary>
  public sealed partial class MsgUpdateParamsResponse : pb::IMessage<MsgUpdateParamsResponse>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<MsgUpdateParamsResponse> _parser = new pb::MessageParser<MsgUpdateParamsResponse>(() => new MsgUpdateParamsResponse());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pb::MessageParser<MsgUpdateParamsResponse> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Cosmos.Auth.V1Beta1.TxReflection.Descriptor.MessageTypes[1]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public MsgUpdateParamsResponse() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public MsgUpdateParamsResponse(MsgUpdateParamsResponse other) : this() {
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public MsgUpdateParamsResponse Clone() {
      return new MsgUpdateParamsResponse(this);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override bool Equals(object other) {
      return Equals(other as MsgUpdateParamsResponse);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public bool Equals(MsgUpdateParamsResponse other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override int GetHashCode() {
      int hash = 1;
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
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    void pb::IBufferMessage.InternalWriteTo(ref pb::WriteContext output) {
      if (_unknownFields != null) {
        _unknownFields.WriteTo(ref output);
      }
    }
    #endif

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public int CalculateSize() {
      int size = 0;
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public void MergeFrom(MsgUpdateParamsResponse other) {
      if (other == null) {
        return;
      }
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
        }
      }
    }
    #endif

  }

  #endregion

}

#endregion Designer generated code
