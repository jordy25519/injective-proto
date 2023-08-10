// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: ibc/core/connection/v1/genesis.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021, 8981
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Ibc.Core.Connection.V1 {

  /// <summary>Holder for reflection information generated from ibc/core/connection/v1/genesis.proto</summary>
  public static partial class GenesisReflection {

    #region Descriptor
    /// <summary>File descriptor for ibc/core/connection/v1/genesis.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static GenesisReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "CiRpYmMvY29yZS9jb25uZWN0aW9uL3YxL2dlbmVzaXMucHJvdG8SFmliYy5j",
            "b3JlLmNvbm5lY3Rpb24udjEaFGdvZ29wcm90by9nb2dvLnByb3RvGidpYmMv",
            "Y29yZS9jb25uZWN0aW9uL3YxL2Nvbm5lY3Rpb24ucHJvdG8i/wEKDEdlbmVz",
            "aXNTdGF0ZRJHCgtjb25uZWN0aW9ucxgBIAMoCzIsLmliYy5jb3JlLmNvbm5l",
            "Y3Rpb24udjEuSWRlbnRpZmllZENvbm5lY3Rpb25CBMjeHwASTgoXY2xpZW50",
            "X2Nvbm5lY3Rpb25fcGF0aHMYAiADKAsyJy5pYmMuY29yZS5jb25uZWN0aW9u",
            "LnYxLkNvbm5lY3Rpb25QYXRoc0IEyN4fABIgChhuZXh0X2Nvbm5lY3Rpb25f",
            "c2VxdWVuY2UYAyABKAQSNAoGcGFyYW1zGAQgASgLMh4uaWJjLmNvcmUuY29u",
            "bmVjdGlvbi52MS5QYXJhbXNCBMjeHwBCPlo8Z2l0aHViLmNvbS9jb3Ntb3Mv",
            "aWJjLWdvL3Y3L21vZHVsZXMvY29yZS8wMy1jb25uZWN0aW9uL3R5cGVzYgZw",
            "cm90bzM="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { global::Gogoproto.GogoReflection.Descriptor, global::Ibc.Core.Connection.V1.ConnectionReflection.Descriptor, },
          new pbr::GeneratedClrTypeInfo(null, null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Ibc.Core.Connection.V1.GenesisState), global::Ibc.Core.Connection.V1.GenesisState.Parser, new[]{ "Connections", "ClientConnectionPaths", "NextConnectionSequence", "Params" }, null, null, null, null)
          }));
    }
    #endregion

  }
  #region Messages
  /// <summary>
  /// GenesisState defines the ibc connection submodule's genesis state.
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
      get { return global::Ibc.Core.Connection.V1.GenesisReflection.Descriptor.MessageTypes[0]; }
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
      connections_ = other.connections_.Clone();
      clientConnectionPaths_ = other.clientConnectionPaths_.Clone();
      nextConnectionSequence_ = other.nextConnectionSequence_;
      params_ = other.params_ != null ? other.params_.Clone() : null;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public GenesisState Clone() {
      return new GenesisState(this);
    }

    /// <summary>Field number for the "connections" field.</summary>
    public const int ConnectionsFieldNumber = 1;
    private static readonly pb::FieldCodec<global::Ibc.Core.Connection.V1.IdentifiedConnection> _repeated_connections_codec
        = pb::FieldCodec.ForMessage(10, global::Ibc.Core.Connection.V1.IdentifiedConnection.Parser);
    private readonly pbc::RepeatedField<global::Ibc.Core.Connection.V1.IdentifiedConnection> connections_ = new pbc::RepeatedField<global::Ibc.Core.Connection.V1.IdentifiedConnection>();
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public pbc::RepeatedField<global::Ibc.Core.Connection.V1.IdentifiedConnection> Connections {
      get { return connections_; }
    }

    /// <summary>Field number for the "client_connection_paths" field.</summary>
    public const int ClientConnectionPathsFieldNumber = 2;
    private static readonly pb::FieldCodec<global::Ibc.Core.Connection.V1.ConnectionPaths> _repeated_clientConnectionPaths_codec
        = pb::FieldCodec.ForMessage(18, global::Ibc.Core.Connection.V1.ConnectionPaths.Parser);
    private readonly pbc::RepeatedField<global::Ibc.Core.Connection.V1.ConnectionPaths> clientConnectionPaths_ = new pbc::RepeatedField<global::Ibc.Core.Connection.V1.ConnectionPaths>();
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public pbc::RepeatedField<global::Ibc.Core.Connection.V1.ConnectionPaths> ClientConnectionPaths {
      get { return clientConnectionPaths_; }
    }

    /// <summary>Field number for the "next_connection_sequence" field.</summary>
    public const int NextConnectionSequenceFieldNumber = 3;
    private ulong nextConnectionSequence_;
    /// <summary>
    /// the sequence for the next generated connection identifier
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public ulong NextConnectionSequence {
      get { return nextConnectionSequence_; }
      set {
        nextConnectionSequence_ = value;
      }
    }

    /// <summary>Field number for the "params" field.</summary>
    public const int ParamsFieldNumber = 4;
    private global::Ibc.Core.Connection.V1.Params params_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public global::Ibc.Core.Connection.V1.Params Params {
      get { return params_; }
      set {
        params_ = value;
      }
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
      if(!connections_.Equals(other.connections_)) return false;
      if(!clientConnectionPaths_.Equals(other.clientConnectionPaths_)) return false;
      if (NextConnectionSequence != other.NextConnectionSequence) return false;
      if (!object.Equals(Params, other.Params)) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override int GetHashCode() {
      int hash = 1;
      hash ^= connections_.GetHashCode();
      hash ^= clientConnectionPaths_.GetHashCode();
      if (NextConnectionSequence != 0UL) hash ^= NextConnectionSequence.GetHashCode();
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
      connections_.WriteTo(output, _repeated_connections_codec);
      clientConnectionPaths_.WriteTo(output, _repeated_clientConnectionPaths_codec);
      if (NextConnectionSequence != 0UL) {
        output.WriteRawTag(24);
        output.WriteUInt64(NextConnectionSequence);
      }
      if (params_ != null) {
        output.WriteRawTag(34);
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
      connections_.WriteTo(ref output, _repeated_connections_codec);
      clientConnectionPaths_.WriteTo(ref output, _repeated_clientConnectionPaths_codec);
      if (NextConnectionSequence != 0UL) {
        output.WriteRawTag(24);
        output.WriteUInt64(NextConnectionSequence);
      }
      if (params_ != null) {
        output.WriteRawTag(34);
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
      size += connections_.CalculateSize(_repeated_connections_codec);
      size += clientConnectionPaths_.CalculateSize(_repeated_clientConnectionPaths_codec);
      if (NextConnectionSequence != 0UL) {
        size += 1 + pb::CodedOutputStream.ComputeUInt64Size(NextConnectionSequence);
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
    public void MergeFrom(GenesisState other) {
      if (other == null) {
        return;
      }
      connections_.Add(other.connections_);
      clientConnectionPaths_.Add(other.clientConnectionPaths_);
      if (other.NextConnectionSequence != 0UL) {
        NextConnectionSequence = other.NextConnectionSequence;
      }
      if (other.params_ != null) {
        if (params_ == null) {
          Params = new global::Ibc.Core.Connection.V1.Params();
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
            connections_.AddEntriesFrom(input, _repeated_connections_codec);
            break;
          }
          case 18: {
            clientConnectionPaths_.AddEntriesFrom(input, _repeated_clientConnectionPaths_codec);
            break;
          }
          case 24: {
            NextConnectionSequence = input.ReadUInt64();
            break;
          }
          case 34: {
            if (params_ == null) {
              Params = new global::Ibc.Core.Connection.V1.Params();
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
            connections_.AddEntriesFrom(ref input, _repeated_connections_codec);
            break;
          }
          case 18: {
            clientConnectionPaths_.AddEntriesFrom(ref input, _repeated_clientConnectionPaths_codec);
            break;
          }
          case 24: {
            NextConnectionSequence = input.ReadUInt64();
            break;
          }
          case 34: {
            if (params_ == null) {
              Params = new global::Ibc.Core.Connection.V1.Params();
            }
            input.ReadMessage(Params);
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
