// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: cosmos/auth/module/v1/module.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021, 8981
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Cosmos.Auth.Module.V1 {

  /// <summary>Holder for reflection information generated from cosmos/auth/module/v1/module.proto</summary>
  public static partial class ModuleReflection {

    #region Descriptor
    /// <summary>File descriptor for cosmos/auth/module/v1/module.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static ModuleReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "CiJjb3Ntb3MvYXV0aC9tb2R1bGUvdjEvbW9kdWxlLnByb3RvEhVjb3Ntb3Mu",
            "YXV0aC5tb2R1bGUudjEaIGNvc21vcy9hcHAvdjFhbHBoYTEvbW9kdWxlLnBy",
            "b3RvIrMBCgZNb2R1bGUSFQoNYmVjaDMyX3ByZWZpeBgBIAEoCRJSChptb2R1",
            "bGVfYWNjb3VudF9wZXJtaXNzaW9ucxgCIAMoCzIuLmNvc21vcy5hdXRoLm1v",
            "ZHVsZS52MS5Nb2R1bGVBY2NvdW50UGVybWlzc2lvbhIRCglhdXRob3JpdHkY",
            "AyABKAk6K7rAltoBJQojZ2l0aHViLmNvbS9jb3Ntb3MvY29zbW9zLXNkay94",
            "L2F1dGgiPwoXTW9kdWxlQWNjb3VudFBlcm1pc3Npb24SDwoHYWNjb3VudBgB",
            "IAEoCRITCgtwZXJtaXNzaW9ucxgCIAMoCWIGcHJvdG8z"));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { global::Cosmos.App.V1Alpha1.ModuleReflection.Descriptor, },
          new pbr::GeneratedClrTypeInfo(null, null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Cosmos.Auth.Module.V1.Module), global::Cosmos.Auth.Module.V1.Module.Parser, new[]{ "Bech32Prefix", "ModuleAccountPermissions", "Authority" }, null, null, null, null),
            new pbr::GeneratedClrTypeInfo(typeof(global::Cosmos.Auth.Module.V1.ModuleAccountPermission), global::Cosmos.Auth.Module.V1.ModuleAccountPermission.Parser, new[]{ "Account", "Permissions" }, null, null, null, null)
          }));
    }
    #endregion

  }
  #region Messages
  /// <summary>
  /// Module is the config object for the auth module.
  /// </summary>
  public sealed partial class Module : pb::IMessage<Module>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<Module> _parser = new pb::MessageParser<Module>(() => new Module());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pb::MessageParser<Module> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Cosmos.Auth.Module.V1.ModuleReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public Module() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public Module(Module other) : this() {
      bech32Prefix_ = other.bech32Prefix_;
      moduleAccountPermissions_ = other.moduleAccountPermissions_.Clone();
      authority_ = other.authority_;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public Module Clone() {
      return new Module(this);
    }

    /// <summary>Field number for the "bech32_prefix" field.</summary>
    public const int Bech32PrefixFieldNumber = 1;
    private string bech32Prefix_ = "";
    /// <summary>
    /// bech32_prefix is the bech32 account prefix for the app.
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public string Bech32Prefix {
      get { return bech32Prefix_; }
      set {
        bech32Prefix_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "module_account_permissions" field.</summary>
    public const int ModuleAccountPermissionsFieldNumber = 2;
    private static readonly pb::FieldCodec<global::Cosmos.Auth.Module.V1.ModuleAccountPermission> _repeated_moduleAccountPermissions_codec
        = pb::FieldCodec.ForMessage(18, global::Cosmos.Auth.Module.V1.ModuleAccountPermission.Parser);
    private readonly pbc::RepeatedField<global::Cosmos.Auth.Module.V1.ModuleAccountPermission> moduleAccountPermissions_ = new pbc::RepeatedField<global::Cosmos.Auth.Module.V1.ModuleAccountPermission>();
    /// <summary>
    /// module_account_permissions are module account permissions.
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public pbc::RepeatedField<global::Cosmos.Auth.Module.V1.ModuleAccountPermission> ModuleAccountPermissions {
      get { return moduleAccountPermissions_; }
    }

    /// <summary>Field number for the "authority" field.</summary>
    public const int AuthorityFieldNumber = 3;
    private string authority_ = "";
    /// <summary>
    /// authority defines the custom module authority. If not set, defaults to the governance module.
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public string Authority {
      get { return authority_; }
      set {
        authority_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override bool Equals(object other) {
      return Equals(other as Module);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public bool Equals(Module other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (Bech32Prefix != other.Bech32Prefix) return false;
      if(!moduleAccountPermissions_.Equals(other.moduleAccountPermissions_)) return false;
      if (Authority != other.Authority) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override int GetHashCode() {
      int hash = 1;
      if (Bech32Prefix.Length != 0) hash ^= Bech32Prefix.GetHashCode();
      hash ^= moduleAccountPermissions_.GetHashCode();
      if (Authority.Length != 0) hash ^= Authority.GetHashCode();
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
      if (Bech32Prefix.Length != 0) {
        output.WriteRawTag(10);
        output.WriteString(Bech32Prefix);
      }
      moduleAccountPermissions_.WriteTo(output, _repeated_moduleAccountPermissions_codec);
      if (Authority.Length != 0) {
        output.WriteRawTag(26);
        output.WriteString(Authority);
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
      if (Bech32Prefix.Length != 0) {
        output.WriteRawTag(10);
        output.WriteString(Bech32Prefix);
      }
      moduleAccountPermissions_.WriteTo(ref output, _repeated_moduleAccountPermissions_codec);
      if (Authority.Length != 0) {
        output.WriteRawTag(26);
        output.WriteString(Authority);
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
      if (Bech32Prefix.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(Bech32Prefix);
      }
      size += moduleAccountPermissions_.CalculateSize(_repeated_moduleAccountPermissions_codec);
      if (Authority.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(Authority);
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public void MergeFrom(Module other) {
      if (other == null) {
        return;
      }
      if (other.Bech32Prefix.Length != 0) {
        Bech32Prefix = other.Bech32Prefix;
      }
      moduleAccountPermissions_.Add(other.moduleAccountPermissions_);
      if (other.Authority.Length != 0) {
        Authority = other.Authority;
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
            Bech32Prefix = input.ReadString();
            break;
          }
          case 18: {
            moduleAccountPermissions_.AddEntriesFrom(input, _repeated_moduleAccountPermissions_codec);
            break;
          }
          case 26: {
            Authority = input.ReadString();
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
            Bech32Prefix = input.ReadString();
            break;
          }
          case 18: {
            moduleAccountPermissions_.AddEntriesFrom(ref input, _repeated_moduleAccountPermissions_codec);
            break;
          }
          case 26: {
            Authority = input.ReadString();
            break;
          }
        }
      }
    }
    #endif

  }

  /// <summary>
  /// ModuleAccountPermission represents permissions for a module account.
  /// </summary>
  public sealed partial class ModuleAccountPermission : pb::IMessage<ModuleAccountPermission>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<ModuleAccountPermission> _parser = new pb::MessageParser<ModuleAccountPermission>(() => new ModuleAccountPermission());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pb::MessageParser<ModuleAccountPermission> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Cosmos.Auth.Module.V1.ModuleReflection.Descriptor.MessageTypes[1]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public ModuleAccountPermission() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public ModuleAccountPermission(ModuleAccountPermission other) : this() {
      account_ = other.account_;
      permissions_ = other.permissions_.Clone();
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public ModuleAccountPermission Clone() {
      return new ModuleAccountPermission(this);
    }

    /// <summary>Field number for the "account" field.</summary>
    public const int AccountFieldNumber = 1;
    private string account_ = "";
    /// <summary>
    /// account is the name of the module.
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public string Account {
      get { return account_; }
      set {
        account_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "permissions" field.</summary>
    public const int PermissionsFieldNumber = 2;
    private static readonly pb::FieldCodec<string> _repeated_permissions_codec
        = pb::FieldCodec.ForString(18);
    private readonly pbc::RepeatedField<string> permissions_ = new pbc::RepeatedField<string>();
    /// <summary>
    /// permissions are the permissions this module has. Currently recognized
    /// values are minter, burner and staking.
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public pbc::RepeatedField<string> Permissions {
      get { return permissions_; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override bool Equals(object other) {
      return Equals(other as ModuleAccountPermission);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public bool Equals(ModuleAccountPermission other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (Account != other.Account) return false;
      if(!permissions_.Equals(other.permissions_)) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override int GetHashCode() {
      int hash = 1;
      if (Account.Length != 0) hash ^= Account.GetHashCode();
      hash ^= permissions_.GetHashCode();
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
      if (Account.Length != 0) {
        output.WriteRawTag(10);
        output.WriteString(Account);
      }
      permissions_.WriteTo(output, _repeated_permissions_codec);
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    void pb::IBufferMessage.InternalWriteTo(ref pb::WriteContext output) {
      if (Account.Length != 0) {
        output.WriteRawTag(10);
        output.WriteString(Account);
      }
      permissions_.WriteTo(ref output, _repeated_permissions_codec);
      if (_unknownFields != null) {
        _unknownFields.WriteTo(ref output);
      }
    }
    #endif

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public int CalculateSize() {
      int size = 0;
      if (Account.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(Account);
      }
      size += permissions_.CalculateSize(_repeated_permissions_codec);
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public void MergeFrom(ModuleAccountPermission other) {
      if (other == null) {
        return;
      }
      if (other.Account.Length != 0) {
        Account = other.Account;
      }
      permissions_.Add(other.permissions_);
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
            Account = input.ReadString();
            break;
          }
          case 18: {
            permissions_.AddEntriesFrom(input, _repeated_permissions_codec);
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
            Account = input.ReadString();
            break;
          }
          case 18: {
            permissions_.AddEntriesFrom(ref input, _repeated_permissions_codec);
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
