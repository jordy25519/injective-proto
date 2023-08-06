// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: injective/wasmx/v1/wasmx.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021, 8981
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Injective.Wasmx.V1 {

  /// <summary>Holder for reflection information generated from injective/wasmx/v1/wasmx.proto</summary>
  public static partial class WasmxReflection {

    #region Descriptor
    /// <summary>File descriptor for injective/wasmx/v1/wasmx.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static WasmxReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "Ch5pbmplY3RpdmUvd2FzbXgvdjEvd2FzbXgucHJvdG8SEmluamVjdGl2ZS53",
            "YXNteC52MRoUZ29nb3Byb3RvL2dvZ28ucHJvdG8aIWluamVjdGl2ZS93YXNt",
            "eC92MS9wcm9wb3NhbC5wcm90byKGAQoGUGFyYW1zEhwKFGlzX2V4ZWN1dGlv",
            "bl9lbmFibGVkGAEgASgIEiEKGW1heF9iZWdpbl9ibG9ja190b3RhbF9nYXMY",
            "AiABKAQSHgoWbWF4X2NvbnRyYWN0X2dhc19saW1pdBgDIAEoBBIVCg1taW5f",
            "Z2FzX3ByaWNlGAQgASgEOgTooB8BIt4BChJSZWdpc3RlcmVkQ29udHJhY3QS",
            "EQoJZ2FzX2xpbWl0GAEgASgEEhEKCWdhc19wcmljZRgCIAEoBBIVCg1pc19l",
            "eGVjdXRhYmxlGAMgASgIEhUKB2NvZGVfaWQYBCABKARCBMjeHwESGwoNYWRt",
            "aW5fYWRkcmVzcxgFIAEoCUIEyN4fARIdCg9ncmFudGVyX2FkZHJlc3MYBiAB",
            "KAlCBMjeHwESMgoJZnVuZF9tb2RlGAcgASgOMh8uaW5qZWN0aXZlLndhc214",
            "LnYxLkZ1bmRpbmdNb2RlOgTooB8BQk1aS2dpdGh1Yi5jb20vSW5qZWN0aXZl",
            "TGFicy9pbmplY3RpdmUtY29yZS9pbmplY3RpdmUtY2hhaW4vbW9kdWxlcy93",
            "YXNteC90eXBlc2IGcHJvdG8z"));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { global::Gogoproto.GogoReflection.Descriptor, global::Injective.Wasmx.V1.ProposalReflection.Descriptor, },
          new pbr::GeneratedClrTypeInfo(null, null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Injective.Wasmx.V1.Params), global::Injective.Wasmx.V1.Params.Parser, new[]{ "IsExecutionEnabled", "MaxBeginBlockTotalGas", "MaxContractGasLimit", "MinGasPrice" }, null, null, null, null),
            new pbr::GeneratedClrTypeInfo(typeof(global::Injective.Wasmx.V1.RegisteredContract), global::Injective.Wasmx.V1.RegisteredContract.Parser, new[]{ "GasLimit", "GasPrice", "IsExecutable", "CodeId", "AdminAddress", "GranterAddress", "FundMode" }, null, null, null, null)
          }));
    }
    #endregion

  }
  #region Messages
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
      get { return global::Injective.Wasmx.V1.WasmxReflection.Descriptor.MessageTypes[0]; }
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
      isExecutionEnabled_ = other.isExecutionEnabled_;
      maxBeginBlockTotalGas_ = other.maxBeginBlockTotalGas_;
      maxContractGasLimit_ = other.maxContractGasLimit_;
      minGasPrice_ = other.minGasPrice_;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public Params Clone() {
      return new Params(this);
    }

    /// <summary>Field number for the "is_execution_enabled" field.</summary>
    public const int IsExecutionEnabledFieldNumber = 1;
    private bool isExecutionEnabled_;
    /// <summary>
    /// Set the status to active to indicate that contracts can be executed in
    /// begin blocker.
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public bool IsExecutionEnabled {
      get { return isExecutionEnabled_; }
      set {
        isExecutionEnabled_ = value;
      }
    }

    /// <summary>Field number for the "max_begin_block_total_gas" field.</summary>
    public const int MaxBeginBlockTotalGasFieldNumber = 2;
    private ulong maxBeginBlockTotalGas_;
    /// <summary>
    /// Maximum aggregate total gas to be used for the contract executions in the
    /// BeginBlocker.
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public ulong MaxBeginBlockTotalGas {
      get { return maxBeginBlockTotalGas_; }
      set {
        maxBeginBlockTotalGas_ = value;
      }
    }

    /// <summary>Field number for the "max_contract_gas_limit" field.</summary>
    public const int MaxContractGasLimitFieldNumber = 3;
    private ulong maxContractGasLimit_;
    /// <summary>
    /// the maximum gas limit each individual contract can consume in the
    /// BeginBlocker.
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public ulong MaxContractGasLimit {
      get { return maxContractGasLimit_; }
      set {
        maxContractGasLimit_ = value;
      }
    }

    /// <summary>Field number for the "min_gas_price" field.</summary>
    public const int MinGasPriceFieldNumber = 4;
    private ulong minGasPrice_;
    /// <summary>
    /// min_gas_price defines the minimum gas price the contracts must pay to be
    /// executed in the BeginBlocker.
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public ulong MinGasPrice {
      get { return minGasPrice_; }
      set {
        minGasPrice_ = value;
      }
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
      if (IsExecutionEnabled != other.IsExecutionEnabled) return false;
      if (MaxBeginBlockTotalGas != other.MaxBeginBlockTotalGas) return false;
      if (MaxContractGasLimit != other.MaxContractGasLimit) return false;
      if (MinGasPrice != other.MinGasPrice) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override int GetHashCode() {
      int hash = 1;
      if (IsExecutionEnabled != false) hash ^= IsExecutionEnabled.GetHashCode();
      if (MaxBeginBlockTotalGas != 0UL) hash ^= MaxBeginBlockTotalGas.GetHashCode();
      if (MaxContractGasLimit != 0UL) hash ^= MaxContractGasLimit.GetHashCode();
      if (MinGasPrice != 0UL) hash ^= MinGasPrice.GetHashCode();
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
      if (IsExecutionEnabled != false) {
        output.WriteRawTag(8);
        output.WriteBool(IsExecutionEnabled);
      }
      if (MaxBeginBlockTotalGas != 0UL) {
        output.WriteRawTag(16);
        output.WriteUInt64(MaxBeginBlockTotalGas);
      }
      if (MaxContractGasLimit != 0UL) {
        output.WriteRawTag(24);
        output.WriteUInt64(MaxContractGasLimit);
      }
      if (MinGasPrice != 0UL) {
        output.WriteRawTag(32);
        output.WriteUInt64(MinGasPrice);
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
      if (IsExecutionEnabled != false) {
        output.WriteRawTag(8);
        output.WriteBool(IsExecutionEnabled);
      }
      if (MaxBeginBlockTotalGas != 0UL) {
        output.WriteRawTag(16);
        output.WriteUInt64(MaxBeginBlockTotalGas);
      }
      if (MaxContractGasLimit != 0UL) {
        output.WriteRawTag(24);
        output.WriteUInt64(MaxContractGasLimit);
      }
      if (MinGasPrice != 0UL) {
        output.WriteRawTag(32);
        output.WriteUInt64(MinGasPrice);
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
      if (IsExecutionEnabled != false) {
        size += 1 + 1;
      }
      if (MaxBeginBlockTotalGas != 0UL) {
        size += 1 + pb::CodedOutputStream.ComputeUInt64Size(MaxBeginBlockTotalGas);
      }
      if (MaxContractGasLimit != 0UL) {
        size += 1 + pb::CodedOutputStream.ComputeUInt64Size(MaxContractGasLimit);
      }
      if (MinGasPrice != 0UL) {
        size += 1 + pb::CodedOutputStream.ComputeUInt64Size(MinGasPrice);
      }
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
      if (other.IsExecutionEnabled != false) {
        IsExecutionEnabled = other.IsExecutionEnabled;
      }
      if (other.MaxBeginBlockTotalGas != 0UL) {
        MaxBeginBlockTotalGas = other.MaxBeginBlockTotalGas;
      }
      if (other.MaxContractGasLimit != 0UL) {
        MaxContractGasLimit = other.MaxContractGasLimit;
      }
      if (other.MinGasPrice != 0UL) {
        MinGasPrice = other.MinGasPrice;
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
            IsExecutionEnabled = input.ReadBool();
            break;
          }
          case 16: {
            MaxBeginBlockTotalGas = input.ReadUInt64();
            break;
          }
          case 24: {
            MaxContractGasLimit = input.ReadUInt64();
            break;
          }
          case 32: {
            MinGasPrice = input.ReadUInt64();
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
            IsExecutionEnabled = input.ReadBool();
            break;
          }
          case 16: {
            MaxBeginBlockTotalGas = input.ReadUInt64();
            break;
          }
          case 24: {
            MaxContractGasLimit = input.ReadUInt64();
            break;
          }
          case 32: {
            MinGasPrice = input.ReadUInt64();
            break;
          }
        }
      }
    }
    #endif

  }

  public sealed partial class RegisteredContract : pb::IMessage<RegisteredContract>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<RegisteredContract> _parser = new pb::MessageParser<RegisteredContract>(() => new RegisteredContract());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pb::MessageParser<RegisteredContract> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Injective.Wasmx.V1.WasmxReflection.Descriptor.MessageTypes[1]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public RegisteredContract() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public RegisteredContract(RegisteredContract other) : this() {
      gasLimit_ = other.gasLimit_;
      gasPrice_ = other.gasPrice_;
      isExecutable_ = other.isExecutable_;
      codeId_ = other.codeId_;
      adminAddress_ = other.adminAddress_;
      granterAddress_ = other.granterAddress_;
      fundMode_ = other.fundMode_;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public RegisteredContract Clone() {
      return new RegisteredContract(this);
    }

    /// <summary>Field number for the "gas_limit" field.</summary>
    public const int GasLimitFieldNumber = 1;
    private ulong gasLimit_;
    /// <summary>
    /// limit of gas per BB execution
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public ulong GasLimit {
      get { return gasLimit_; }
      set {
        gasLimit_ = value;
      }
    }

    /// <summary>Field number for the "gas_price" field.</summary>
    public const int GasPriceFieldNumber = 2;
    private ulong gasPrice_;
    /// <summary>
    /// gas price that contract is willing to pay for execution in BeginBlocker
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public ulong GasPrice {
      get { return gasPrice_; }
      set {
        gasPrice_ = value;
      }
    }

    /// <summary>Field number for the "is_executable" field.</summary>
    public const int IsExecutableFieldNumber = 3;
    private bool isExecutable_;
    /// <summary>
    /// is contract currently active
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public bool IsExecutable {
      get { return isExecutable_; }
      set {
        isExecutable_ = value;
      }
    }

    /// <summary>Field number for the "code_id" field.</summary>
    public const int CodeIdFieldNumber = 4;
    private ulong codeId_;
    /// <summary>
    /// code_id that is allowed to be executed (to prevent malicious updates) - if
    /// nil/0 any code_id can be executed
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public ulong CodeId {
      get { return codeId_; }
      set {
        codeId_ = value;
      }
    }

    /// <summary>Field number for the "admin_address" field.</summary>
    public const int AdminAddressFieldNumber = 5;
    private string adminAddress_ = "";
    /// <summary>
    /// optional - admin addr that is allowed to update contract data
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public string AdminAddress {
      get { return adminAddress_; }
      set {
        adminAddress_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "granter_address" field.</summary>
    public const int GranterAddressFieldNumber = 6;
    private string granterAddress_ = "";
    /// <summary>
    /// Optional: address of the contract granting fee
    /// Must be set if fund_mode is GrantOnly
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public string GranterAddress {
      get { return granterAddress_; }
      set {
        granterAddress_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "fund_mode" field.</summary>
    public const int FundModeFieldNumber = 7;
    private global::Injective.Wasmx.V1.FundingMode fundMode_ = global::Injective.Wasmx.V1.FundingMode.Unspecified;
    /// <summary>
    /// funding mode
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public global::Injective.Wasmx.V1.FundingMode FundMode {
      get { return fundMode_; }
      set {
        fundMode_ = value;
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override bool Equals(object other) {
      return Equals(other as RegisteredContract);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public bool Equals(RegisteredContract other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (GasLimit != other.GasLimit) return false;
      if (GasPrice != other.GasPrice) return false;
      if (IsExecutable != other.IsExecutable) return false;
      if (CodeId != other.CodeId) return false;
      if (AdminAddress != other.AdminAddress) return false;
      if (GranterAddress != other.GranterAddress) return false;
      if (FundMode != other.FundMode) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override int GetHashCode() {
      int hash = 1;
      if (GasLimit != 0UL) hash ^= GasLimit.GetHashCode();
      if (GasPrice != 0UL) hash ^= GasPrice.GetHashCode();
      if (IsExecutable != false) hash ^= IsExecutable.GetHashCode();
      if (CodeId != 0UL) hash ^= CodeId.GetHashCode();
      if (AdminAddress.Length != 0) hash ^= AdminAddress.GetHashCode();
      if (GranterAddress.Length != 0) hash ^= GranterAddress.GetHashCode();
      if (FundMode != global::Injective.Wasmx.V1.FundingMode.Unspecified) hash ^= FundMode.GetHashCode();
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
      if (GasLimit != 0UL) {
        output.WriteRawTag(8);
        output.WriteUInt64(GasLimit);
      }
      if (GasPrice != 0UL) {
        output.WriteRawTag(16);
        output.WriteUInt64(GasPrice);
      }
      if (IsExecutable != false) {
        output.WriteRawTag(24);
        output.WriteBool(IsExecutable);
      }
      if (CodeId != 0UL) {
        output.WriteRawTag(32);
        output.WriteUInt64(CodeId);
      }
      if (AdminAddress.Length != 0) {
        output.WriteRawTag(42);
        output.WriteString(AdminAddress);
      }
      if (GranterAddress.Length != 0) {
        output.WriteRawTag(50);
        output.WriteString(GranterAddress);
      }
      if (FundMode != global::Injective.Wasmx.V1.FundingMode.Unspecified) {
        output.WriteRawTag(56);
        output.WriteEnum((int) FundMode);
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
      if (GasLimit != 0UL) {
        output.WriteRawTag(8);
        output.WriteUInt64(GasLimit);
      }
      if (GasPrice != 0UL) {
        output.WriteRawTag(16);
        output.WriteUInt64(GasPrice);
      }
      if (IsExecutable != false) {
        output.WriteRawTag(24);
        output.WriteBool(IsExecutable);
      }
      if (CodeId != 0UL) {
        output.WriteRawTag(32);
        output.WriteUInt64(CodeId);
      }
      if (AdminAddress.Length != 0) {
        output.WriteRawTag(42);
        output.WriteString(AdminAddress);
      }
      if (GranterAddress.Length != 0) {
        output.WriteRawTag(50);
        output.WriteString(GranterAddress);
      }
      if (FundMode != global::Injective.Wasmx.V1.FundingMode.Unspecified) {
        output.WriteRawTag(56);
        output.WriteEnum((int) FundMode);
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
      if (GasLimit != 0UL) {
        size += 1 + pb::CodedOutputStream.ComputeUInt64Size(GasLimit);
      }
      if (GasPrice != 0UL) {
        size += 1 + pb::CodedOutputStream.ComputeUInt64Size(GasPrice);
      }
      if (IsExecutable != false) {
        size += 1 + 1;
      }
      if (CodeId != 0UL) {
        size += 1 + pb::CodedOutputStream.ComputeUInt64Size(CodeId);
      }
      if (AdminAddress.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(AdminAddress);
      }
      if (GranterAddress.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(GranterAddress);
      }
      if (FundMode != global::Injective.Wasmx.V1.FundingMode.Unspecified) {
        size += 1 + pb::CodedOutputStream.ComputeEnumSize((int) FundMode);
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public void MergeFrom(RegisteredContract other) {
      if (other == null) {
        return;
      }
      if (other.GasLimit != 0UL) {
        GasLimit = other.GasLimit;
      }
      if (other.GasPrice != 0UL) {
        GasPrice = other.GasPrice;
      }
      if (other.IsExecutable != false) {
        IsExecutable = other.IsExecutable;
      }
      if (other.CodeId != 0UL) {
        CodeId = other.CodeId;
      }
      if (other.AdminAddress.Length != 0) {
        AdminAddress = other.AdminAddress;
      }
      if (other.GranterAddress.Length != 0) {
        GranterAddress = other.GranterAddress;
      }
      if (other.FundMode != global::Injective.Wasmx.V1.FundingMode.Unspecified) {
        FundMode = other.FundMode;
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
            GasLimit = input.ReadUInt64();
            break;
          }
          case 16: {
            GasPrice = input.ReadUInt64();
            break;
          }
          case 24: {
            IsExecutable = input.ReadBool();
            break;
          }
          case 32: {
            CodeId = input.ReadUInt64();
            break;
          }
          case 42: {
            AdminAddress = input.ReadString();
            break;
          }
          case 50: {
            GranterAddress = input.ReadString();
            break;
          }
          case 56: {
            FundMode = (global::Injective.Wasmx.V1.FundingMode) input.ReadEnum();
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
            GasLimit = input.ReadUInt64();
            break;
          }
          case 16: {
            GasPrice = input.ReadUInt64();
            break;
          }
          case 24: {
            IsExecutable = input.ReadBool();
            break;
          }
          case 32: {
            CodeId = input.ReadUInt64();
            break;
          }
          case 42: {
            AdminAddress = input.ReadString();
            break;
          }
          case 50: {
            GranterAddress = input.ReadString();
            break;
          }
          case 56: {
            FundMode = (global::Injective.Wasmx.V1.FundingMode) input.ReadEnum();
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
