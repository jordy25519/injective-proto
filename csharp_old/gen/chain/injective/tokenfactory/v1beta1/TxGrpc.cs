// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: injective/tokenfactory/v1beta1/tx.proto
// </auto-generated>
#pragma warning disable 0414, 1591, 8981
#region Designer generated code

using grpc = global::Grpc.Core;

namespace Injective.Tokenfactory.V1Beta1 {
  /// <summary>
  /// Msg defines the tokefactory module's gRPC message service.
  /// </summary>
  public static partial class Msg
  {
    static readonly string __ServiceName = "injective.tokenfactory.v1beta1.Msg";

    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static void __Helper_SerializeMessage(global::Google.Protobuf.IMessage message, grpc::SerializationContext context)
    {
      #if !GRPC_DISABLE_PROTOBUF_BUFFER_SERIALIZATION
      if (message is global::Google.Protobuf.IBufferMessage)
      {
        context.SetPayloadLength(message.CalculateSize());
        global::Google.Protobuf.MessageExtensions.WriteTo(message, context.GetBufferWriter());
        context.Complete();
        return;
      }
      #endif
      context.Complete(global::Google.Protobuf.MessageExtensions.ToByteArray(message));
    }

    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static class __Helper_MessageCache<T>
    {
      public static readonly bool IsBufferMessage = global::System.Reflection.IntrospectionExtensions.GetTypeInfo(typeof(global::Google.Protobuf.IBufferMessage)).IsAssignableFrom(typeof(T));
    }

    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static T __Helper_DeserializeMessage<T>(grpc::DeserializationContext context, global::Google.Protobuf.MessageParser<T> parser) where T : global::Google.Protobuf.IMessage<T>
    {
      #if !GRPC_DISABLE_PROTOBUF_BUFFER_SERIALIZATION
      if (__Helper_MessageCache<T>.IsBufferMessage)
      {
        return parser.ParseFrom(context.PayloadAsReadOnlySequence());
      }
      #endif
      return parser.ParseFrom(context.PayloadAsNewBuffer());
    }

    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Marshaller<global::Injective.Tokenfactory.V1Beta1.MsgCreateDenom> __Marshaller_injective_tokenfactory_v1beta1_MsgCreateDenom = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::Injective.Tokenfactory.V1Beta1.MsgCreateDenom.Parser));
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Marshaller<global::Injective.Tokenfactory.V1Beta1.MsgCreateDenomResponse> __Marshaller_injective_tokenfactory_v1beta1_MsgCreateDenomResponse = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::Injective.Tokenfactory.V1Beta1.MsgCreateDenomResponse.Parser));
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Marshaller<global::Injective.Tokenfactory.V1Beta1.MsgMint> __Marshaller_injective_tokenfactory_v1beta1_MsgMint = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::Injective.Tokenfactory.V1Beta1.MsgMint.Parser));
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Marshaller<global::Injective.Tokenfactory.V1Beta1.MsgMintResponse> __Marshaller_injective_tokenfactory_v1beta1_MsgMintResponse = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::Injective.Tokenfactory.V1Beta1.MsgMintResponse.Parser));
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Marshaller<global::Injective.Tokenfactory.V1Beta1.MsgBurn> __Marshaller_injective_tokenfactory_v1beta1_MsgBurn = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::Injective.Tokenfactory.V1Beta1.MsgBurn.Parser));
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Marshaller<global::Injective.Tokenfactory.V1Beta1.MsgBurnResponse> __Marshaller_injective_tokenfactory_v1beta1_MsgBurnResponse = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::Injective.Tokenfactory.V1Beta1.MsgBurnResponse.Parser));
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Marshaller<global::Injective.Tokenfactory.V1Beta1.MsgChangeAdmin> __Marshaller_injective_tokenfactory_v1beta1_MsgChangeAdmin = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::Injective.Tokenfactory.V1Beta1.MsgChangeAdmin.Parser));
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Marshaller<global::Injective.Tokenfactory.V1Beta1.MsgChangeAdminResponse> __Marshaller_injective_tokenfactory_v1beta1_MsgChangeAdminResponse = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::Injective.Tokenfactory.V1Beta1.MsgChangeAdminResponse.Parser));
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Marshaller<global::Injective.Tokenfactory.V1Beta1.MsgSetDenomMetadata> __Marshaller_injective_tokenfactory_v1beta1_MsgSetDenomMetadata = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::Injective.Tokenfactory.V1Beta1.MsgSetDenomMetadata.Parser));
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Marshaller<global::Injective.Tokenfactory.V1Beta1.MsgSetDenomMetadataResponse> __Marshaller_injective_tokenfactory_v1beta1_MsgSetDenomMetadataResponse = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::Injective.Tokenfactory.V1Beta1.MsgSetDenomMetadataResponse.Parser));
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Marshaller<global::Injective.Tokenfactory.V1Beta1.MsgUpdateParams> __Marshaller_injective_tokenfactory_v1beta1_MsgUpdateParams = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::Injective.Tokenfactory.V1Beta1.MsgUpdateParams.Parser));
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Marshaller<global::Injective.Tokenfactory.V1Beta1.MsgUpdateParamsResponse> __Marshaller_injective_tokenfactory_v1beta1_MsgUpdateParamsResponse = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::Injective.Tokenfactory.V1Beta1.MsgUpdateParamsResponse.Parser));

    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Method<global::Injective.Tokenfactory.V1Beta1.MsgCreateDenom, global::Injective.Tokenfactory.V1Beta1.MsgCreateDenomResponse> __Method_CreateDenom = new grpc::Method<global::Injective.Tokenfactory.V1Beta1.MsgCreateDenom, global::Injective.Tokenfactory.V1Beta1.MsgCreateDenomResponse>(
        grpc::MethodType.Unary,
        __ServiceName,
        "CreateDenom",
        __Marshaller_injective_tokenfactory_v1beta1_MsgCreateDenom,
        __Marshaller_injective_tokenfactory_v1beta1_MsgCreateDenomResponse);

    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Method<global::Injective.Tokenfactory.V1Beta1.MsgMint, global::Injective.Tokenfactory.V1Beta1.MsgMintResponse> __Method_Mint = new grpc::Method<global::Injective.Tokenfactory.V1Beta1.MsgMint, global::Injective.Tokenfactory.V1Beta1.MsgMintResponse>(
        grpc::MethodType.Unary,
        __ServiceName,
        "Mint",
        __Marshaller_injective_tokenfactory_v1beta1_MsgMint,
        __Marshaller_injective_tokenfactory_v1beta1_MsgMintResponse);

    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Method<global::Injective.Tokenfactory.V1Beta1.MsgBurn, global::Injective.Tokenfactory.V1Beta1.MsgBurnResponse> __Method_Burn = new grpc::Method<global::Injective.Tokenfactory.V1Beta1.MsgBurn, global::Injective.Tokenfactory.V1Beta1.MsgBurnResponse>(
        grpc::MethodType.Unary,
        __ServiceName,
        "Burn",
        __Marshaller_injective_tokenfactory_v1beta1_MsgBurn,
        __Marshaller_injective_tokenfactory_v1beta1_MsgBurnResponse);

    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Method<global::Injective.Tokenfactory.V1Beta1.MsgChangeAdmin, global::Injective.Tokenfactory.V1Beta1.MsgChangeAdminResponse> __Method_ChangeAdmin = new grpc::Method<global::Injective.Tokenfactory.V1Beta1.MsgChangeAdmin, global::Injective.Tokenfactory.V1Beta1.MsgChangeAdminResponse>(
        grpc::MethodType.Unary,
        __ServiceName,
        "ChangeAdmin",
        __Marshaller_injective_tokenfactory_v1beta1_MsgChangeAdmin,
        __Marshaller_injective_tokenfactory_v1beta1_MsgChangeAdminResponse);

    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Method<global::Injective.Tokenfactory.V1Beta1.MsgSetDenomMetadata, global::Injective.Tokenfactory.V1Beta1.MsgSetDenomMetadataResponse> __Method_SetDenomMetadata = new grpc::Method<global::Injective.Tokenfactory.V1Beta1.MsgSetDenomMetadata, global::Injective.Tokenfactory.V1Beta1.MsgSetDenomMetadataResponse>(
        grpc::MethodType.Unary,
        __ServiceName,
        "SetDenomMetadata",
        __Marshaller_injective_tokenfactory_v1beta1_MsgSetDenomMetadata,
        __Marshaller_injective_tokenfactory_v1beta1_MsgSetDenomMetadataResponse);

    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Method<global::Injective.Tokenfactory.V1Beta1.MsgUpdateParams, global::Injective.Tokenfactory.V1Beta1.MsgUpdateParamsResponse> __Method_UpdateParams = new grpc::Method<global::Injective.Tokenfactory.V1Beta1.MsgUpdateParams, global::Injective.Tokenfactory.V1Beta1.MsgUpdateParamsResponse>(
        grpc::MethodType.Unary,
        __ServiceName,
        "UpdateParams",
        __Marshaller_injective_tokenfactory_v1beta1_MsgUpdateParams,
        __Marshaller_injective_tokenfactory_v1beta1_MsgUpdateParamsResponse);

    /// <summary>Service descriptor</summary>
    public static global::Google.Protobuf.Reflection.ServiceDescriptor Descriptor
    {
      get { return global::Injective.Tokenfactory.V1Beta1.TxReflection.Descriptor.Services[0]; }
    }

    /// <summary>Base class for server-side implementations of Msg</summary>
    [grpc::BindServiceMethod(typeof(Msg), "BindService")]
    public abstract partial class MsgBase
    {
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::System.Threading.Tasks.Task<global::Injective.Tokenfactory.V1Beta1.MsgCreateDenomResponse> CreateDenom(global::Injective.Tokenfactory.V1Beta1.MsgCreateDenom request, grpc::ServerCallContext context)
      {
        throw new grpc::RpcException(new grpc::Status(grpc::StatusCode.Unimplemented, ""));
      }

      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::System.Threading.Tasks.Task<global::Injective.Tokenfactory.V1Beta1.MsgMintResponse> Mint(global::Injective.Tokenfactory.V1Beta1.MsgMint request, grpc::ServerCallContext context)
      {
        throw new grpc::RpcException(new grpc::Status(grpc::StatusCode.Unimplemented, ""));
      }

      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::System.Threading.Tasks.Task<global::Injective.Tokenfactory.V1Beta1.MsgBurnResponse> Burn(global::Injective.Tokenfactory.V1Beta1.MsgBurn request, grpc::ServerCallContext context)
      {
        throw new grpc::RpcException(new grpc::Status(grpc::StatusCode.Unimplemented, ""));
      }

      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::System.Threading.Tasks.Task<global::Injective.Tokenfactory.V1Beta1.MsgChangeAdminResponse> ChangeAdmin(global::Injective.Tokenfactory.V1Beta1.MsgChangeAdmin request, grpc::ServerCallContext context)
      {
        throw new grpc::RpcException(new grpc::Status(grpc::StatusCode.Unimplemented, ""));
      }

      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::System.Threading.Tasks.Task<global::Injective.Tokenfactory.V1Beta1.MsgSetDenomMetadataResponse> SetDenomMetadata(global::Injective.Tokenfactory.V1Beta1.MsgSetDenomMetadata request, grpc::ServerCallContext context)
      {
        throw new grpc::RpcException(new grpc::Status(grpc::StatusCode.Unimplemented, ""));
      }

      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::System.Threading.Tasks.Task<global::Injective.Tokenfactory.V1Beta1.MsgUpdateParamsResponse> UpdateParams(global::Injective.Tokenfactory.V1Beta1.MsgUpdateParams request, grpc::ServerCallContext context)
      {
        throw new grpc::RpcException(new grpc::Status(grpc::StatusCode.Unimplemented, ""));
      }

    }

    /// <summary>Client for Msg</summary>
    public partial class MsgClient : grpc::ClientBase<MsgClient>
    {
      /// <summary>Creates a new client for Msg</summary>
      /// <param name="channel">The channel to use to make remote calls.</param>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public MsgClient(grpc::ChannelBase channel) : base(channel)
      {
      }
      /// <summary>Creates a new client for Msg that uses a custom <c>CallInvoker</c>.</summary>
      /// <param name="callInvoker">The callInvoker to use to make remote calls.</param>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public MsgClient(grpc::CallInvoker callInvoker) : base(callInvoker)
      {
      }
      /// <summary>Protected parameterless constructor to allow creation of test doubles.</summary>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      protected MsgClient() : base()
      {
      }
      /// <summary>Protected constructor to allow creation of configured clients.</summary>
      /// <param name="configuration">The client configuration.</param>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      protected MsgClient(ClientBaseConfiguration configuration) : base(configuration)
      {
      }

      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::Injective.Tokenfactory.V1Beta1.MsgCreateDenomResponse CreateDenom(global::Injective.Tokenfactory.V1Beta1.MsgCreateDenom request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return CreateDenom(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::Injective.Tokenfactory.V1Beta1.MsgCreateDenomResponse CreateDenom(global::Injective.Tokenfactory.V1Beta1.MsgCreateDenom request, grpc::CallOptions options)
      {
        return CallInvoker.BlockingUnaryCall(__Method_CreateDenom, null, options, request);
      }
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncUnaryCall<global::Injective.Tokenfactory.V1Beta1.MsgCreateDenomResponse> CreateDenomAsync(global::Injective.Tokenfactory.V1Beta1.MsgCreateDenom request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return CreateDenomAsync(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncUnaryCall<global::Injective.Tokenfactory.V1Beta1.MsgCreateDenomResponse> CreateDenomAsync(global::Injective.Tokenfactory.V1Beta1.MsgCreateDenom request, grpc::CallOptions options)
      {
        return CallInvoker.AsyncUnaryCall(__Method_CreateDenom, null, options, request);
      }
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::Injective.Tokenfactory.V1Beta1.MsgMintResponse Mint(global::Injective.Tokenfactory.V1Beta1.MsgMint request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return Mint(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::Injective.Tokenfactory.V1Beta1.MsgMintResponse Mint(global::Injective.Tokenfactory.V1Beta1.MsgMint request, grpc::CallOptions options)
      {
        return CallInvoker.BlockingUnaryCall(__Method_Mint, null, options, request);
      }
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncUnaryCall<global::Injective.Tokenfactory.V1Beta1.MsgMintResponse> MintAsync(global::Injective.Tokenfactory.V1Beta1.MsgMint request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return MintAsync(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncUnaryCall<global::Injective.Tokenfactory.V1Beta1.MsgMintResponse> MintAsync(global::Injective.Tokenfactory.V1Beta1.MsgMint request, grpc::CallOptions options)
      {
        return CallInvoker.AsyncUnaryCall(__Method_Mint, null, options, request);
      }
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::Injective.Tokenfactory.V1Beta1.MsgBurnResponse Burn(global::Injective.Tokenfactory.V1Beta1.MsgBurn request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return Burn(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::Injective.Tokenfactory.V1Beta1.MsgBurnResponse Burn(global::Injective.Tokenfactory.V1Beta1.MsgBurn request, grpc::CallOptions options)
      {
        return CallInvoker.BlockingUnaryCall(__Method_Burn, null, options, request);
      }
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncUnaryCall<global::Injective.Tokenfactory.V1Beta1.MsgBurnResponse> BurnAsync(global::Injective.Tokenfactory.V1Beta1.MsgBurn request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return BurnAsync(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncUnaryCall<global::Injective.Tokenfactory.V1Beta1.MsgBurnResponse> BurnAsync(global::Injective.Tokenfactory.V1Beta1.MsgBurn request, grpc::CallOptions options)
      {
        return CallInvoker.AsyncUnaryCall(__Method_Burn, null, options, request);
      }
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::Injective.Tokenfactory.V1Beta1.MsgChangeAdminResponse ChangeAdmin(global::Injective.Tokenfactory.V1Beta1.MsgChangeAdmin request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return ChangeAdmin(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::Injective.Tokenfactory.V1Beta1.MsgChangeAdminResponse ChangeAdmin(global::Injective.Tokenfactory.V1Beta1.MsgChangeAdmin request, grpc::CallOptions options)
      {
        return CallInvoker.BlockingUnaryCall(__Method_ChangeAdmin, null, options, request);
      }
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncUnaryCall<global::Injective.Tokenfactory.V1Beta1.MsgChangeAdminResponse> ChangeAdminAsync(global::Injective.Tokenfactory.V1Beta1.MsgChangeAdmin request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return ChangeAdminAsync(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncUnaryCall<global::Injective.Tokenfactory.V1Beta1.MsgChangeAdminResponse> ChangeAdminAsync(global::Injective.Tokenfactory.V1Beta1.MsgChangeAdmin request, grpc::CallOptions options)
      {
        return CallInvoker.AsyncUnaryCall(__Method_ChangeAdmin, null, options, request);
      }
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::Injective.Tokenfactory.V1Beta1.MsgSetDenomMetadataResponse SetDenomMetadata(global::Injective.Tokenfactory.V1Beta1.MsgSetDenomMetadata request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return SetDenomMetadata(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::Injective.Tokenfactory.V1Beta1.MsgSetDenomMetadataResponse SetDenomMetadata(global::Injective.Tokenfactory.V1Beta1.MsgSetDenomMetadata request, grpc::CallOptions options)
      {
        return CallInvoker.BlockingUnaryCall(__Method_SetDenomMetadata, null, options, request);
      }
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncUnaryCall<global::Injective.Tokenfactory.V1Beta1.MsgSetDenomMetadataResponse> SetDenomMetadataAsync(global::Injective.Tokenfactory.V1Beta1.MsgSetDenomMetadata request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return SetDenomMetadataAsync(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncUnaryCall<global::Injective.Tokenfactory.V1Beta1.MsgSetDenomMetadataResponse> SetDenomMetadataAsync(global::Injective.Tokenfactory.V1Beta1.MsgSetDenomMetadata request, grpc::CallOptions options)
      {
        return CallInvoker.AsyncUnaryCall(__Method_SetDenomMetadata, null, options, request);
      }
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::Injective.Tokenfactory.V1Beta1.MsgUpdateParamsResponse UpdateParams(global::Injective.Tokenfactory.V1Beta1.MsgUpdateParams request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return UpdateParams(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::Injective.Tokenfactory.V1Beta1.MsgUpdateParamsResponse UpdateParams(global::Injective.Tokenfactory.V1Beta1.MsgUpdateParams request, grpc::CallOptions options)
      {
        return CallInvoker.BlockingUnaryCall(__Method_UpdateParams, null, options, request);
      }
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncUnaryCall<global::Injective.Tokenfactory.V1Beta1.MsgUpdateParamsResponse> UpdateParamsAsync(global::Injective.Tokenfactory.V1Beta1.MsgUpdateParams request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return UpdateParamsAsync(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncUnaryCall<global::Injective.Tokenfactory.V1Beta1.MsgUpdateParamsResponse> UpdateParamsAsync(global::Injective.Tokenfactory.V1Beta1.MsgUpdateParams request, grpc::CallOptions options)
      {
        return CallInvoker.AsyncUnaryCall(__Method_UpdateParams, null, options, request);
      }
      /// <summary>Creates a new instance of client from given <c>ClientBaseConfiguration</c>.</summary>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      protected override MsgClient NewInstance(ClientBaseConfiguration configuration)
      {
        return new MsgClient(configuration);
      }
    }

    /// <summary>Creates service definition that can be registered with a server</summary>
    /// <param name="serviceImpl">An object implementing the server-side handling logic.</param>
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    public static grpc::ServerServiceDefinition BindService(MsgBase serviceImpl)
    {
      return grpc::ServerServiceDefinition.CreateBuilder()
          .AddMethod(__Method_CreateDenom, serviceImpl.CreateDenom)
          .AddMethod(__Method_Mint, serviceImpl.Mint)
          .AddMethod(__Method_Burn, serviceImpl.Burn)
          .AddMethod(__Method_ChangeAdmin, serviceImpl.ChangeAdmin)
          .AddMethod(__Method_SetDenomMetadata, serviceImpl.SetDenomMetadata)
          .AddMethod(__Method_UpdateParams, serviceImpl.UpdateParams).Build();
    }

    /// <summary>Register service method with a service binder with or without implementation. Useful when customizing the service binding logic.
    /// Note: this method is part of an experimental API that can change or be removed without any prior notice.</summary>
    /// <param name="serviceBinder">Service methods will be bound by calling <c>AddMethod</c> on this object.</param>
    /// <param name="serviceImpl">An object implementing the server-side handling logic.</param>
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    public static void BindService(grpc::ServiceBinderBase serviceBinder, MsgBase serviceImpl)
    {
      serviceBinder.AddMethod(__Method_CreateDenom, serviceImpl == null ? null : new grpc::UnaryServerMethod<global::Injective.Tokenfactory.V1Beta1.MsgCreateDenom, global::Injective.Tokenfactory.V1Beta1.MsgCreateDenomResponse>(serviceImpl.CreateDenom));
      serviceBinder.AddMethod(__Method_Mint, serviceImpl == null ? null : new grpc::UnaryServerMethod<global::Injective.Tokenfactory.V1Beta1.MsgMint, global::Injective.Tokenfactory.V1Beta1.MsgMintResponse>(serviceImpl.Mint));
      serviceBinder.AddMethod(__Method_Burn, serviceImpl == null ? null : new grpc::UnaryServerMethod<global::Injective.Tokenfactory.V1Beta1.MsgBurn, global::Injective.Tokenfactory.V1Beta1.MsgBurnResponse>(serviceImpl.Burn));
      serviceBinder.AddMethod(__Method_ChangeAdmin, serviceImpl == null ? null : new grpc::UnaryServerMethod<global::Injective.Tokenfactory.V1Beta1.MsgChangeAdmin, global::Injective.Tokenfactory.V1Beta1.MsgChangeAdminResponse>(serviceImpl.ChangeAdmin));
      serviceBinder.AddMethod(__Method_SetDenomMetadata, serviceImpl == null ? null : new grpc::UnaryServerMethod<global::Injective.Tokenfactory.V1Beta1.MsgSetDenomMetadata, global::Injective.Tokenfactory.V1Beta1.MsgSetDenomMetadataResponse>(serviceImpl.SetDenomMetadata));
      serviceBinder.AddMethod(__Method_UpdateParams, serviceImpl == null ? null : new grpc::UnaryServerMethod<global::Injective.Tokenfactory.V1Beta1.MsgUpdateParams, global::Injective.Tokenfactory.V1Beta1.MsgUpdateParamsResponse>(serviceImpl.UpdateParams));
    }

  }
}
#endregion
