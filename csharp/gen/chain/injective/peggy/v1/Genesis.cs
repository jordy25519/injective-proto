// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: injective/peggy/v1/genesis.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021, 8981
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Injective.Peggy.V1 {

  /// <summary>Holder for reflection information generated from injective/peggy/v1/genesis.proto</summary>
  public static partial class GenesisReflection {

    #region Descriptor
    /// <summary>File descriptor for injective/peggy/v1/genesis.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static GenesisReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "CiBpbmplY3RpdmUvcGVnZ3kvdjEvZ2VuZXNpcy5wcm90bxISaW5qZWN0aXZl",
            "LnBlZ2d5LnYxGhRnb2dvcHJvdG8vZ29nby5wcm90bxoeaW5qZWN0aXZlL3Bl",
            "Z2d5L3YxL3R5cGVzLnByb3RvGh1pbmplY3RpdmUvcGVnZ3kvdjEvbXNncy5w",
            "cm90bxoeaW5qZWN0aXZlL3BlZ2d5L3YxL2JhdGNoLnByb3RvGiRpbmplY3Rp",
            "dmUvcGVnZ3kvdjEvYXR0ZXN0YXRpb24ucHJvdG8aH2luamVjdGl2ZS9wZWdn",
            "eS92MS9wYXJhbXMucHJvdG8aHmNvc21vcy9iYXNlL3YxYmV0YTEvY29pbi5w",
            "cm90byKABgoMR2VuZXNpc1N0YXRlEioKBnBhcmFtcxgBIAEoCzIaLmluamVj",
            "dGl2ZS5wZWdneS52MS5QYXJhbXMSGwoTbGFzdF9vYnNlcnZlZF9ub25jZRgC",
            "IAEoBBIrCgd2YWxzZXRzGAMgAygLMhouaW5qZWN0aXZlLnBlZ2d5LnYxLlZh",
            "bHNldBI9Cg92YWxzZXRfY29uZmlybXMYBCADKAsyJC5pbmplY3RpdmUucGVn",
            "Z3kudjEuTXNnVmFsc2V0Q29uZmlybRI0CgdiYXRjaGVzGAUgAygLMiMuaW5q",
            "ZWN0aXZlLnBlZ2d5LnYxLk91dGdvaW5nVHhCYXRjaBI7Cg5iYXRjaF9jb25m",
            "aXJtcxgGIAMoCzIjLmluamVjdGl2ZS5wZWdneS52MS5Nc2dDb25maXJtQmF0",
            "Y2gSNQoMYXR0ZXN0YXRpb25zGAcgAygLMh8uaW5qZWN0aXZlLnBlZ2d5LnYx",
            "LkF0dGVzdGF0aW9uEk8KFm9yY2hlc3RyYXRvcl9hZGRyZXNzZXMYCCADKAsy",
            "Ly5pbmplY3RpdmUucGVnZ3kudjEuTXNnU2V0T3JjaGVzdHJhdG9yQWRkcmVz",
            "c2VzEjkKD2VyYzIwX3RvX2Rlbm9tcxgJIAMoCzIgLmluamVjdGl2ZS5wZWdn",
            "eS52MS5FUkMyMFRvRGVub20SQwoTdW5iYXRjaGVkX3RyYW5zZmVycxgKIAMo",
            "CzImLmluamVjdGl2ZS5wZWdneS52MS5PdXRnb2luZ1RyYW5zZmVyVHgSJQod",
            "bGFzdF9vYnNlcnZlZF9ldGhlcmV1bV9oZWlnaHQYCyABKAQSHgoWbGFzdF9v",
            "dXRnb2luZ19iYXRjaF9pZBgMIAEoBBIdChVsYXN0X291dGdvaW5nX3Bvb2xf",
            "aWQYDSABKAQSPgoUbGFzdF9vYnNlcnZlZF92YWxzZXQYDiABKAsyGi5pbmpl",
            "Y3RpdmUucGVnZ3kudjEuVmFsc2V0QgTI3h8AEhoKEmV0aGVyZXVtX2JsYWNr",
            "bGlzdBgPIAMoCUJNWktnaXRodWIuY29tL0luamVjdGl2ZUxhYnMvaW5qZWN0",
            "aXZlLWNvcmUvaW5qZWN0aXZlLWNoYWluL21vZHVsZXMvcGVnZ3kvdHlwZXNi",
            "BnByb3RvMw=="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { global::Gogoproto.GogoReflection.Descriptor, global::Injective.Peggy.V1.TypesReflection.Descriptor, global::Injective.Peggy.V1.MsgsReflection.Descriptor, global::Injective.Peggy.V1.BatchReflection.Descriptor, global::Injective.Peggy.V1.AttestationReflection.Descriptor, global::Injective.Peggy.V1.ParamsReflection.Descriptor, global::Cosmos.Base.V1Beta1.CoinReflection.Descriptor, },
          new pbr::GeneratedClrTypeInfo(null, null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Injective.Peggy.V1.GenesisState), global::Injective.Peggy.V1.GenesisState.Parser, new[]{ "Params", "LastObservedNonce", "Valsets", "ValsetConfirms", "Batches", "BatchConfirms", "Attestations", "OrchestratorAddresses", "Erc20ToDenoms", "UnbatchedTransfers", "LastObservedEthereumHeight", "LastOutgoingBatchId", "LastOutgoingPoolId", "LastObservedValset", "EthereumBlacklist" }, null, null, null, null)
          }));
    }
    #endregion

  }
  #region Messages
  /// <summary>
  /// GenesisState struct
  /// </summary>
  public sealed partial class GenesisState : pb::IMessage<GenesisState>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<GenesisState> _parser = new pb::MessageParser<GenesisState>(() => new GenesisState());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pb::MessageParser<GenesisState> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Injective.Peggy.V1.GenesisReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public GenesisState() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public GenesisState(GenesisState other) : this() {
      params_ = other.params_ != null ? other.params_.Clone() : null;
      lastObservedNonce_ = other.lastObservedNonce_;
      valsets_ = other.valsets_.Clone();
      valsetConfirms_ = other.valsetConfirms_.Clone();
      batches_ = other.batches_.Clone();
      batchConfirms_ = other.batchConfirms_.Clone();
      attestations_ = other.attestations_.Clone();
      orchestratorAddresses_ = other.orchestratorAddresses_.Clone();
      erc20ToDenoms_ = other.erc20ToDenoms_.Clone();
      unbatchedTransfers_ = other.unbatchedTransfers_.Clone();
      lastObservedEthereumHeight_ = other.lastObservedEthereumHeight_;
      lastOutgoingBatchId_ = other.lastOutgoingBatchId_;
      lastOutgoingPoolId_ = other.lastOutgoingPoolId_;
      lastObservedValset_ = other.lastObservedValset_ != null ? other.lastObservedValset_.Clone() : null;
      ethereumBlacklist_ = other.ethereumBlacklist_.Clone();
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public GenesisState Clone() {
      return new GenesisState(this);
    }

    /// <summary>Field number for the "params" field.</summary>
    public const int ParamsFieldNumber = 1;
    private global::Injective.Peggy.V1.Params params_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public global::Injective.Peggy.V1.Params Params {
      get { return params_; }
      set {
        params_ = value;
      }
    }

    /// <summary>Field number for the "last_observed_nonce" field.</summary>
    public const int LastObservedNonceFieldNumber = 2;
    private ulong lastObservedNonce_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public ulong LastObservedNonce {
      get { return lastObservedNonce_; }
      set {
        lastObservedNonce_ = value;
      }
    }

    /// <summary>Field number for the "valsets" field.</summary>
    public const int ValsetsFieldNumber = 3;
    private static readonly pb::FieldCodec<global::Injective.Peggy.V1.Valset> _repeated_valsets_codec
        = pb::FieldCodec.ForMessage(26, global::Injective.Peggy.V1.Valset.Parser);
    private readonly pbc::RepeatedField<global::Injective.Peggy.V1.Valset> valsets_ = new pbc::RepeatedField<global::Injective.Peggy.V1.Valset>();
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public pbc::RepeatedField<global::Injective.Peggy.V1.Valset> Valsets {
      get { return valsets_; }
    }

    /// <summary>Field number for the "valset_confirms" field.</summary>
    public const int ValsetConfirmsFieldNumber = 4;
    private static readonly pb::FieldCodec<global::Injective.Peggy.V1.MsgValsetConfirm> _repeated_valsetConfirms_codec
        = pb::FieldCodec.ForMessage(34, global::Injective.Peggy.V1.MsgValsetConfirm.Parser);
    private readonly pbc::RepeatedField<global::Injective.Peggy.V1.MsgValsetConfirm> valsetConfirms_ = new pbc::RepeatedField<global::Injective.Peggy.V1.MsgValsetConfirm>();
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public pbc::RepeatedField<global::Injective.Peggy.V1.MsgValsetConfirm> ValsetConfirms {
      get { return valsetConfirms_; }
    }

    /// <summary>Field number for the "batches" field.</summary>
    public const int BatchesFieldNumber = 5;
    private static readonly pb::FieldCodec<global::Injective.Peggy.V1.OutgoingTxBatch> _repeated_batches_codec
        = pb::FieldCodec.ForMessage(42, global::Injective.Peggy.V1.OutgoingTxBatch.Parser);
    private readonly pbc::RepeatedField<global::Injective.Peggy.V1.OutgoingTxBatch> batches_ = new pbc::RepeatedField<global::Injective.Peggy.V1.OutgoingTxBatch>();
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public pbc::RepeatedField<global::Injective.Peggy.V1.OutgoingTxBatch> Batches {
      get { return batches_; }
    }

    /// <summary>Field number for the "batch_confirms" field.</summary>
    public const int BatchConfirmsFieldNumber = 6;
    private static readonly pb::FieldCodec<global::Injective.Peggy.V1.MsgConfirmBatch> _repeated_batchConfirms_codec
        = pb::FieldCodec.ForMessage(50, global::Injective.Peggy.V1.MsgConfirmBatch.Parser);
    private readonly pbc::RepeatedField<global::Injective.Peggy.V1.MsgConfirmBatch> batchConfirms_ = new pbc::RepeatedField<global::Injective.Peggy.V1.MsgConfirmBatch>();
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public pbc::RepeatedField<global::Injective.Peggy.V1.MsgConfirmBatch> BatchConfirms {
      get { return batchConfirms_; }
    }

    /// <summary>Field number for the "attestations" field.</summary>
    public const int AttestationsFieldNumber = 7;
    private static readonly pb::FieldCodec<global::Injective.Peggy.V1.Attestation> _repeated_attestations_codec
        = pb::FieldCodec.ForMessage(58, global::Injective.Peggy.V1.Attestation.Parser);
    private readonly pbc::RepeatedField<global::Injective.Peggy.V1.Attestation> attestations_ = new pbc::RepeatedField<global::Injective.Peggy.V1.Attestation>();
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public pbc::RepeatedField<global::Injective.Peggy.V1.Attestation> Attestations {
      get { return attestations_; }
    }

    /// <summary>Field number for the "orchestrator_addresses" field.</summary>
    public const int OrchestratorAddressesFieldNumber = 8;
    private static readonly pb::FieldCodec<global::Injective.Peggy.V1.MsgSetOrchestratorAddresses> _repeated_orchestratorAddresses_codec
        = pb::FieldCodec.ForMessage(66, global::Injective.Peggy.V1.MsgSetOrchestratorAddresses.Parser);
    private readonly pbc::RepeatedField<global::Injective.Peggy.V1.MsgSetOrchestratorAddresses> orchestratorAddresses_ = new pbc::RepeatedField<global::Injective.Peggy.V1.MsgSetOrchestratorAddresses>();
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public pbc::RepeatedField<global::Injective.Peggy.V1.MsgSetOrchestratorAddresses> OrchestratorAddresses {
      get { return orchestratorAddresses_; }
    }

    /// <summary>Field number for the "erc20_to_denoms" field.</summary>
    public const int Erc20ToDenomsFieldNumber = 9;
    private static readonly pb::FieldCodec<global::Injective.Peggy.V1.ERC20ToDenom> _repeated_erc20ToDenoms_codec
        = pb::FieldCodec.ForMessage(74, global::Injective.Peggy.V1.ERC20ToDenom.Parser);
    private readonly pbc::RepeatedField<global::Injective.Peggy.V1.ERC20ToDenom> erc20ToDenoms_ = new pbc::RepeatedField<global::Injective.Peggy.V1.ERC20ToDenom>();
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public pbc::RepeatedField<global::Injective.Peggy.V1.ERC20ToDenom> Erc20ToDenoms {
      get { return erc20ToDenoms_; }
    }

    /// <summary>Field number for the "unbatched_transfers" field.</summary>
    public const int UnbatchedTransfersFieldNumber = 10;
    private static readonly pb::FieldCodec<global::Injective.Peggy.V1.OutgoingTransferTx> _repeated_unbatchedTransfers_codec
        = pb::FieldCodec.ForMessage(82, global::Injective.Peggy.V1.OutgoingTransferTx.Parser);
    private readonly pbc::RepeatedField<global::Injective.Peggy.V1.OutgoingTransferTx> unbatchedTransfers_ = new pbc::RepeatedField<global::Injective.Peggy.V1.OutgoingTransferTx>();
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public pbc::RepeatedField<global::Injective.Peggy.V1.OutgoingTransferTx> UnbatchedTransfers {
      get { return unbatchedTransfers_; }
    }

    /// <summary>Field number for the "last_observed_ethereum_height" field.</summary>
    public const int LastObservedEthereumHeightFieldNumber = 11;
    private ulong lastObservedEthereumHeight_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public ulong LastObservedEthereumHeight {
      get { return lastObservedEthereumHeight_; }
      set {
        lastObservedEthereumHeight_ = value;
      }
    }

    /// <summary>Field number for the "last_outgoing_batch_id" field.</summary>
    public const int LastOutgoingBatchIdFieldNumber = 12;
    private ulong lastOutgoingBatchId_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public ulong LastOutgoingBatchId {
      get { return lastOutgoingBatchId_; }
      set {
        lastOutgoingBatchId_ = value;
      }
    }

    /// <summary>Field number for the "last_outgoing_pool_id" field.</summary>
    public const int LastOutgoingPoolIdFieldNumber = 13;
    private ulong lastOutgoingPoolId_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public ulong LastOutgoingPoolId {
      get { return lastOutgoingPoolId_; }
      set {
        lastOutgoingPoolId_ = value;
      }
    }

    /// <summary>Field number for the "last_observed_valset" field.</summary>
    public const int LastObservedValsetFieldNumber = 14;
    private global::Injective.Peggy.V1.Valset lastObservedValset_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public global::Injective.Peggy.V1.Valset LastObservedValset {
      get { return lastObservedValset_; }
      set {
        lastObservedValset_ = value;
      }
    }

    /// <summary>Field number for the "ethereum_blacklist" field.</summary>
    public const int EthereumBlacklistFieldNumber = 15;
    private static readonly pb::FieldCodec<string> _repeated_ethereumBlacklist_codec
        = pb::FieldCodec.ForString(122);
    private readonly pbc::RepeatedField<string> ethereumBlacklist_ = new pbc::RepeatedField<string>();
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public pbc::RepeatedField<string> EthereumBlacklist {
      get { return ethereumBlacklist_; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override bool Equals(object other) {
      return Equals(other as GenesisState);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public bool Equals(GenesisState other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (!object.Equals(Params, other.Params)) return false;
      if (LastObservedNonce != other.LastObservedNonce) return false;
      if(!valsets_.Equals(other.valsets_)) return false;
      if(!valsetConfirms_.Equals(other.valsetConfirms_)) return false;
      if(!batches_.Equals(other.batches_)) return false;
      if(!batchConfirms_.Equals(other.batchConfirms_)) return false;
      if(!attestations_.Equals(other.attestations_)) return false;
      if(!orchestratorAddresses_.Equals(other.orchestratorAddresses_)) return false;
      if(!erc20ToDenoms_.Equals(other.erc20ToDenoms_)) return false;
      if(!unbatchedTransfers_.Equals(other.unbatchedTransfers_)) return false;
      if (LastObservedEthereumHeight != other.LastObservedEthereumHeight) return false;
      if (LastOutgoingBatchId != other.LastOutgoingBatchId) return false;
      if (LastOutgoingPoolId != other.LastOutgoingPoolId) return false;
      if (!object.Equals(LastObservedValset, other.LastObservedValset)) return false;
      if(!ethereumBlacklist_.Equals(other.ethereumBlacklist_)) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override int GetHashCode() {
      int hash = 1;
      if (params_ != null) hash ^= Params.GetHashCode();
      if (LastObservedNonce != 0UL) hash ^= LastObservedNonce.GetHashCode();
      hash ^= valsets_.GetHashCode();
      hash ^= valsetConfirms_.GetHashCode();
      hash ^= batches_.GetHashCode();
      hash ^= batchConfirms_.GetHashCode();
      hash ^= attestations_.GetHashCode();
      hash ^= orchestratorAddresses_.GetHashCode();
      hash ^= erc20ToDenoms_.GetHashCode();
      hash ^= unbatchedTransfers_.GetHashCode();
      if (LastObservedEthereumHeight != 0UL) hash ^= LastObservedEthereumHeight.GetHashCode();
      if (LastOutgoingBatchId != 0UL) hash ^= LastOutgoingBatchId.GetHashCode();
      if (LastOutgoingPoolId != 0UL) hash ^= LastOutgoingPoolId.GetHashCode();
      if (lastObservedValset_ != null) hash ^= LastObservedValset.GetHashCode();
      hash ^= ethereumBlacklist_.GetHashCode();
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
      if (params_ != null) {
        output.WriteRawTag(10);
        output.WriteMessage(Params);
      }
      if (LastObservedNonce != 0UL) {
        output.WriteRawTag(16);
        output.WriteUInt64(LastObservedNonce);
      }
      valsets_.WriteTo(output, _repeated_valsets_codec);
      valsetConfirms_.WriteTo(output, _repeated_valsetConfirms_codec);
      batches_.WriteTo(output, _repeated_batches_codec);
      batchConfirms_.WriteTo(output, _repeated_batchConfirms_codec);
      attestations_.WriteTo(output, _repeated_attestations_codec);
      orchestratorAddresses_.WriteTo(output, _repeated_orchestratorAddresses_codec);
      erc20ToDenoms_.WriteTo(output, _repeated_erc20ToDenoms_codec);
      unbatchedTransfers_.WriteTo(output, _repeated_unbatchedTransfers_codec);
      if (LastObservedEthereumHeight != 0UL) {
        output.WriteRawTag(88);
        output.WriteUInt64(LastObservedEthereumHeight);
      }
      if (LastOutgoingBatchId != 0UL) {
        output.WriteRawTag(96);
        output.WriteUInt64(LastOutgoingBatchId);
      }
      if (LastOutgoingPoolId != 0UL) {
        output.WriteRawTag(104);
        output.WriteUInt64(LastOutgoingPoolId);
      }
      if (lastObservedValset_ != null) {
        output.WriteRawTag(114);
        output.WriteMessage(LastObservedValset);
      }
      ethereumBlacklist_.WriteTo(output, _repeated_ethereumBlacklist_codec);
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    void pb::IBufferMessage.InternalWriteTo(ref pb::WriteContext output) {
      if (params_ != null) {
        output.WriteRawTag(10);
        output.WriteMessage(Params);
      }
      if (LastObservedNonce != 0UL) {
        output.WriteRawTag(16);
        output.WriteUInt64(LastObservedNonce);
      }
      valsets_.WriteTo(ref output, _repeated_valsets_codec);
      valsetConfirms_.WriteTo(ref output, _repeated_valsetConfirms_codec);
      batches_.WriteTo(ref output, _repeated_batches_codec);
      batchConfirms_.WriteTo(ref output, _repeated_batchConfirms_codec);
      attestations_.WriteTo(ref output, _repeated_attestations_codec);
      orchestratorAddresses_.WriteTo(ref output, _repeated_orchestratorAddresses_codec);
      erc20ToDenoms_.WriteTo(ref output, _repeated_erc20ToDenoms_codec);
      unbatchedTransfers_.WriteTo(ref output, _repeated_unbatchedTransfers_codec);
      if (LastObservedEthereumHeight != 0UL) {
        output.WriteRawTag(88);
        output.WriteUInt64(LastObservedEthereumHeight);
      }
      if (LastOutgoingBatchId != 0UL) {
        output.WriteRawTag(96);
        output.WriteUInt64(LastOutgoingBatchId);
      }
      if (LastOutgoingPoolId != 0UL) {
        output.WriteRawTag(104);
        output.WriteUInt64(LastOutgoingPoolId);
      }
      if (lastObservedValset_ != null) {
        output.WriteRawTag(114);
        output.WriteMessage(LastObservedValset);
      }
      ethereumBlacklist_.WriteTo(ref output, _repeated_ethereumBlacklist_codec);
      if (_unknownFields != null) {
        _unknownFields.WriteTo(ref output);
      }
    }
    #endif

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public int CalculateSize() {
      int size = 0;
      if (params_ != null) {
        size += 1 + pb::CodedOutputStream.ComputeMessageSize(Params);
      }
      if (LastObservedNonce != 0UL) {
        size += 1 + pb::CodedOutputStream.ComputeUInt64Size(LastObservedNonce);
      }
      size += valsets_.CalculateSize(_repeated_valsets_codec);
      size += valsetConfirms_.CalculateSize(_repeated_valsetConfirms_codec);
      size += batches_.CalculateSize(_repeated_batches_codec);
      size += batchConfirms_.CalculateSize(_repeated_batchConfirms_codec);
      size += attestations_.CalculateSize(_repeated_attestations_codec);
      size += orchestratorAddresses_.CalculateSize(_repeated_orchestratorAddresses_codec);
      size += erc20ToDenoms_.CalculateSize(_repeated_erc20ToDenoms_codec);
      size += unbatchedTransfers_.CalculateSize(_repeated_unbatchedTransfers_codec);
      if (LastObservedEthereumHeight != 0UL) {
        size += 1 + pb::CodedOutputStream.ComputeUInt64Size(LastObservedEthereumHeight);
      }
      if (LastOutgoingBatchId != 0UL) {
        size += 1 + pb::CodedOutputStream.ComputeUInt64Size(LastOutgoingBatchId);
      }
      if (LastOutgoingPoolId != 0UL) {
        size += 1 + pb::CodedOutputStream.ComputeUInt64Size(LastOutgoingPoolId);
      }
      if (lastObservedValset_ != null) {
        size += 1 + pb::CodedOutputStream.ComputeMessageSize(LastObservedValset);
      }
      size += ethereumBlacklist_.CalculateSize(_repeated_ethereumBlacklist_codec);
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public void MergeFrom(GenesisState other) {
      if (other == null) {
        return;
      }
      if (other.params_ != null) {
        if (params_ == null) {
          Params = new global::Injective.Peggy.V1.Params();
        }
        Params.MergeFrom(other.Params);
      }
      if (other.LastObservedNonce != 0UL) {
        LastObservedNonce = other.LastObservedNonce;
      }
      valsets_.Add(other.valsets_);
      valsetConfirms_.Add(other.valsetConfirms_);
      batches_.Add(other.batches_);
      batchConfirms_.Add(other.batchConfirms_);
      attestations_.Add(other.attestations_);
      orchestratorAddresses_.Add(other.orchestratorAddresses_);
      erc20ToDenoms_.Add(other.erc20ToDenoms_);
      unbatchedTransfers_.Add(other.unbatchedTransfers_);
      if (other.LastObservedEthereumHeight != 0UL) {
        LastObservedEthereumHeight = other.LastObservedEthereumHeight;
      }
      if (other.LastOutgoingBatchId != 0UL) {
        LastOutgoingBatchId = other.LastOutgoingBatchId;
      }
      if (other.LastOutgoingPoolId != 0UL) {
        LastOutgoingPoolId = other.LastOutgoingPoolId;
      }
      if (other.lastObservedValset_ != null) {
        if (lastObservedValset_ == null) {
          LastObservedValset = new global::Injective.Peggy.V1.Valset();
        }
        LastObservedValset.MergeFrom(other.LastObservedValset);
      }
      ethereumBlacklist_.Add(other.ethereumBlacklist_);
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
            if (params_ == null) {
              Params = new global::Injective.Peggy.V1.Params();
            }
            input.ReadMessage(Params);
            break;
          }
          case 16: {
            LastObservedNonce = input.ReadUInt64();
            break;
          }
          case 26: {
            valsets_.AddEntriesFrom(input, _repeated_valsets_codec);
            break;
          }
          case 34: {
            valsetConfirms_.AddEntriesFrom(input, _repeated_valsetConfirms_codec);
            break;
          }
          case 42: {
            batches_.AddEntriesFrom(input, _repeated_batches_codec);
            break;
          }
          case 50: {
            batchConfirms_.AddEntriesFrom(input, _repeated_batchConfirms_codec);
            break;
          }
          case 58: {
            attestations_.AddEntriesFrom(input, _repeated_attestations_codec);
            break;
          }
          case 66: {
            orchestratorAddresses_.AddEntriesFrom(input, _repeated_orchestratorAddresses_codec);
            break;
          }
          case 74: {
            erc20ToDenoms_.AddEntriesFrom(input, _repeated_erc20ToDenoms_codec);
            break;
          }
          case 82: {
            unbatchedTransfers_.AddEntriesFrom(input, _repeated_unbatchedTransfers_codec);
            break;
          }
          case 88: {
            LastObservedEthereumHeight = input.ReadUInt64();
            break;
          }
          case 96: {
            LastOutgoingBatchId = input.ReadUInt64();
            break;
          }
          case 104: {
            LastOutgoingPoolId = input.ReadUInt64();
            break;
          }
          case 114: {
            if (lastObservedValset_ == null) {
              LastObservedValset = new global::Injective.Peggy.V1.Valset();
            }
            input.ReadMessage(LastObservedValset);
            break;
          }
          case 122: {
            ethereumBlacklist_.AddEntriesFrom(input, _repeated_ethereumBlacklist_codec);
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
            if (params_ == null) {
              Params = new global::Injective.Peggy.V1.Params();
            }
            input.ReadMessage(Params);
            break;
          }
          case 16: {
            LastObservedNonce = input.ReadUInt64();
            break;
          }
          case 26: {
            valsets_.AddEntriesFrom(ref input, _repeated_valsets_codec);
            break;
          }
          case 34: {
            valsetConfirms_.AddEntriesFrom(ref input, _repeated_valsetConfirms_codec);
            break;
          }
          case 42: {
            batches_.AddEntriesFrom(ref input, _repeated_batches_codec);
            break;
          }
          case 50: {
            batchConfirms_.AddEntriesFrom(ref input, _repeated_batchConfirms_codec);
            break;
          }
          case 58: {
            attestations_.AddEntriesFrom(ref input, _repeated_attestations_codec);
            break;
          }
          case 66: {
            orchestratorAddresses_.AddEntriesFrom(ref input, _repeated_orchestratorAddresses_codec);
            break;
          }
          case 74: {
            erc20ToDenoms_.AddEntriesFrom(ref input, _repeated_erc20ToDenoms_codec);
            break;
          }
          case 82: {
            unbatchedTransfers_.AddEntriesFrom(ref input, _repeated_unbatchedTransfers_codec);
            break;
          }
          case 88: {
            LastObservedEthereumHeight = input.ReadUInt64();
            break;
          }
          case 96: {
            LastOutgoingBatchId = input.ReadUInt64();
            break;
          }
          case 104: {
            LastOutgoingPoolId = input.ReadUInt64();
            break;
          }
          case 114: {
            if (lastObservedValset_ == null) {
              LastObservedValset = new global::Injective.Peggy.V1.Valset();
            }
            input.ReadMessage(LastObservedValset);
            break;
          }
          case 122: {
            ethereumBlacklist_.AddEntriesFrom(ref input, _repeated_ethereumBlacklist_codec);
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
