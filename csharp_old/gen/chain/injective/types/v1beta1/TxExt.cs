// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: injective/types/v1beta1/tx_ext.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021, 8981
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Injective.Types.V1Beta1 {

  /// <summary>Holder for reflection information generated from injective/types/v1beta1/tx_ext.proto</summary>
  public static partial class TxExtReflection {

    #region Descriptor
    /// <summary>File descriptor for injective/types/v1beta1/tx_ext.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static TxExtReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "CiRpbmplY3RpdmUvdHlwZXMvdjFiZXRhMS90eF9leHQucHJvdG8SF2luamVj",
            "dGl2ZS50eXBlcy52MWJldGExGhRnb2dvcHJvdG8vZ29nby5wcm90byJfChZF",
            "eHRlbnNpb25PcHRpb25zV2ViM1R4EhgKEHR5cGVkRGF0YUNoYWluSUQYASAB",
            "KAQSEAoIZmVlUGF5ZXIYAiABKAkSEwoLZmVlUGF5ZXJTaWcYAyABKAw6BIig",
            "HwBCP1o9Z2l0aHViLmNvbS9JbmplY3RpdmVMYWJzL2luamVjdGl2ZS1jb3Jl",
            "L2luamVjdGl2ZS1jaGFpbi90eXBlc2IGcHJvdG8z"));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { global::Gogoproto.GogoReflection.Descriptor, },
          new pbr::GeneratedClrTypeInfo(null, null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Injective.Types.V1Beta1.ExtensionOptionsWeb3Tx), global::Injective.Types.V1Beta1.ExtensionOptionsWeb3Tx.Parser, new[]{ "TypedDataChainID", "FeePayer", "FeePayerSig" }, null, null, null, null)
          }));
    }
    #endregion

  }
  #region Messages
  public sealed partial class ExtensionOptionsWeb3Tx : pb::IMessage<ExtensionOptionsWeb3Tx>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<ExtensionOptionsWeb3Tx> _parser = new pb::MessageParser<ExtensionOptionsWeb3Tx>(() => new ExtensionOptionsWeb3Tx());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pb::MessageParser<ExtensionOptionsWeb3Tx> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Injective.Types.V1Beta1.TxExtReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public ExtensionOptionsWeb3Tx() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public ExtensionOptionsWeb3Tx(ExtensionOptionsWeb3Tx other) : this() {
      typedDataChainID_ = other.typedDataChainID_;
      feePayer_ = other.feePayer_;
      feePayerSig_ = other.feePayerSig_;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public ExtensionOptionsWeb3Tx Clone() {
      return new ExtensionOptionsWeb3Tx(this);
    }

    /// <summary>Field number for the "typedDataChainID" field.</summary>
    public const int TypedDataChainIDFieldNumber = 1;
    private ulong typedDataChainID_;
    /// <summary>
    /// typedDataChainID used only in EIP712 Domain and should match
    /// Ethereum network ID in a Web3 provider (e.g. Metamask).
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public ulong TypedDataChainID {
      get { return typedDataChainID_; }
      set {
        typedDataChainID_ = value;
      }
    }

    /// <summary>Field number for the "feePayer" field.</summary>
    public const int FeePayerFieldNumber = 2;
    private string feePayer_ = "";
    /// <summary>
    /// feePayer is an account address for the fee payer. It will be validated
    /// during EIP712 signature checking.
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public string FeePayer {
      get { return feePayer_; }
      set {
        feePayer_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "feePayerSig" field.</summary>
    public const int FeePayerSigFieldNumber = 3;
    private pb::ByteString feePayerSig_ = pb::ByteString.Empty;
    /// <summary>
    /// feePayerSig is a signature data from the fee paying account,
    /// allows to perform fee delegation when using EIP712 Domain.
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public pb::ByteString FeePayerSig {
      get { return feePayerSig_; }
      set {
        feePayerSig_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override bool Equals(object other) {
      return Equals(other as ExtensionOptionsWeb3Tx);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public bool Equals(ExtensionOptionsWeb3Tx other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (TypedDataChainID != other.TypedDataChainID) return false;
      if (FeePayer != other.FeePayer) return false;
      if (FeePayerSig != other.FeePayerSig) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override int GetHashCode() {
      int hash = 1;
      if (TypedDataChainID != 0UL) hash ^= TypedDataChainID.GetHashCode();
      if (FeePayer.Length != 0) hash ^= FeePayer.GetHashCode();
      if (FeePayerSig.Length != 0) hash ^= FeePayerSig.GetHashCode();
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
      if (TypedDataChainID != 0UL) {
        output.WriteRawTag(8);
        output.WriteUInt64(TypedDataChainID);
      }
      if (FeePayer.Length != 0) {
        output.WriteRawTag(18);
        output.WriteString(FeePayer);
      }
      if (FeePayerSig.Length != 0) {
        output.WriteRawTag(26);
        output.WriteBytes(FeePayerSig);
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
      if (TypedDataChainID != 0UL) {
        output.WriteRawTag(8);
        output.WriteUInt64(TypedDataChainID);
      }
      if (FeePayer.Length != 0) {
        output.WriteRawTag(18);
        output.WriteString(FeePayer);
      }
      if (FeePayerSig.Length != 0) {
        output.WriteRawTag(26);
        output.WriteBytes(FeePayerSig);
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
      if (TypedDataChainID != 0UL) {
        size += 1 + pb::CodedOutputStream.ComputeUInt64Size(TypedDataChainID);
      }
      if (FeePayer.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(FeePayer);
      }
      if (FeePayerSig.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeBytesSize(FeePayerSig);
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public void MergeFrom(ExtensionOptionsWeb3Tx other) {
      if (other == null) {
        return;
      }
      if (other.TypedDataChainID != 0UL) {
        TypedDataChainID = other.TypedDataChainID;
      }
      if (other.FeePayer.Length != 0) {
        FeePayer = other.FeePayer;
      }
      if (other.FeePayerSig.Length != 0) {
        FeePayerSig = other.FeePayerSig;
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
          case 8: {
            TypedDataChainID = input.ReadUInt64();
            break;
          }
          case 18: {
            FeePayer = input.ReadString();
            break;
          }
          case 26: {
            FeePayerSig = input.ReadBytes();
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
          case 8: {
            TypedDataChainID = input.ReadUInt64();
            break;
          }
          case 18: {
            FeePayer = input.ReadString();
            break;
          }
          case 26: {
            FeePayerSig = input.ReadBytes();
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
