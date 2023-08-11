// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: injective_portfolio_rpc.proto
// </auto-generated>
// Original file comments:
// Code generated with goa v3.5.2, DO NOT EDIT.
//
// InjectivePortfolioRPC protocol buffer definition
//
// Command:
// $$ goa gen github.com/InjectiveLabs/injective-indexer/api/design -o ../
//
#pragma warning disable 0414, 1591, 8981
#region Designer generated code

using grpc = global::Grpc.Core;

namespace InjectivePortfolioRpc {
  /// <summary>
  /// InjectivePortfolioRPC defines gRPC API of Exchange Portfolio provider.
  /// </summary>
  public static partial class InjectivePortfolioRPC
  {
    static readonly string __ServiceName = "injective_portfolio_rpc.InjectivePortfolioRPC";

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
    static readonly grpc::Marshaller<global::InjectivePortfolioRpc.AccountPortfolioRequest> __Marshaller_injective_portfolio_rpc_AccountPortfolioRequest = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::InjectivePortfolioRpc.AccountPortfolioRequest.Parser));
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Marshaller<global::InjectivePortfolioRpc.AccountPortfolioResponse> __Marshaller_injective_portfolio_rpc_AccountPortfolioResponse = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::InjectivePortfolioRpc.AccountPortfolioResponse.Parser));
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Marshaller<global::InjectivePortfolioRpc.StreamAccountPortfolioRequest> __Marshaller_injective_portfolio_rpc_StreamAccountPortfolioRequest = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::InjectivePortfolioRpc.StreamAccountPortfolioRequest.Parser));
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Marshaller<global::InjectivePortfolioRpc.StreamAccountPortfolioResponse> __Marshaller_injective_portfolio_rpc_StreamAccountPortfolioResponse = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::InjectivePortfolioRpc.StreamAccountPortfolioResponse.Parser));

    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Method<global::InjectivePortfolioRpc.AccountPortfolioRequest, global::InjectivePortfolioRpc.AccountPortfolioResponse> __Method_AccountPortfolio = new grpc::Method<global::InjectivePortfolioRpc.AccountPortfolioRequest, global::InjectivePortfolioRpc.AccountPortfolioResponse>(
        grpc::MethodType.Unary,
        __ServiceName,
        "AccountPortfolio",
        __Marshaller_injective_portfolio_rpc_AccountPortfolioRequest,
        __Marshaller_injective_portfolio_rpc_AccountPortfolioResponse);

    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Method<global::InjectivePortfolioRpc.StreamAccountPortfolioRequest, global::InjectivePortfolioRpc.StreamAccountPortfolioResponse> __Method_StreamAccountPortfolio = new grpc::Method<global::InjectivePortfolioRpc.StreamAccountPortfolioRequest, global::InjectivePortfolioRpc.StreamAccountPortfolioResponse>(
        grpc::MethodType.ServerStreaming,
        __ServiceName,
        "StreamAccountPortfolio",
        __Marshaller_injective_portfolio_rpc_StreamAccountPortfolioRequest,
        __Marshaller_injective_portfolio_rpc_StreamAccountPortfolioResponse);

    /// <summary>Service descriptor</summary>
    public static global::Google.Protobuf.Reflection.ServiceDescriptor Descriptor
    {
      get { return global::InjectivePortfolioRpc.InjectivePortfolioRpcReflection.Descriptor.Services[0]; }
    }

    /// <summary>Client for InjectivePortfolioRPC</summary>
    public partial class InjectivePortfolioRPCClient : grpc::ClientBase<InjectivePortfolioRPCClient>
    {
      /// <summary>Creates a new client for InjectivePortfolioRPC</summary>
      /// <param name="channel">The channel to use to make remote calls.</param>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public InjectivePortfolioRPCClient(grpc::ChannelBase channel) : base(channel)
      {
      }
      /// <summary>Creates a new client for InjectivePortfolioRPC that uses a custom <c>CallInvoker</c>.</summary>
      /// <param name="callInvoker">The callInvoker to use to make remote calls.</param>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public InjectivePortfolioRPCClient(grpc::CallInvoker callInvoker) : base(callInvoker)
      {
      }
      /// <summary>Protected parameterless constructor to allow creation of test doubles.</summary>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      protected InjectivePortfolioRPCClient() : base()
      {
      }
      /// <summary>Protected constructor to allow creation of configured clients.</summary>
      /// <param name="configuration">The client configuration.</param>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      protected InjectivePortfolioRPCClient(ClientBaseConfiguration configuration) : base(configuration)
      {
      }

      /// <summary>
      /// Provide the account's portfolio
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="headers">The initial metadata to send with the call. This parameter is optional.</param>
      /// <param name="deadline">An optional deadline for the call. The call will be cancelled if deadline is hit.</param>
      /// <param name="cancellationToken">An optional token for canceling the call.</param>
      /// <returns>The response received from the server.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::InjectivePortfolioRpc.AccountPortfolioResponse AccountPortfolio(global::InjectivePortfolioRpc.AccountPortfolioRequest request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return AccountPortfolio(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      /// <summary>
      /// Provide the account's portfolio
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="options">The options for the call.</param>
      /// <returns>The response received from the server.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::InjectivePortfolioRpc.AccountPortfolioResponse AccountPortfolio(global::InjectivePortfolioRpc.AccountPortfolioRequest request, grpc::CallOptions options)
      {
        return CallInvoker.BlockingUnaryCall(__Method_AccountPortfolio, null, options, request);
      }
      /// <summary>
      /// Provide the account's portfolio
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="headers">The initial metadata to send with the call. This parameter is optional.</param>
      /// <param name="deadline">An optional deadline for the call. The call will be cancelled if deadline is hit.</param>
      /// <param name="cancellationToken">An optional token for canceling the call.</param>
      /// <returns>The call object.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncUnaryCall<global::InjectivePortfolioRpc.AccountPortfolioResponse> AccountPortfolioAsync(global::InjectivePortfolioRpc.AccountPortfolioRequest request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return AccountPortfolioAsync(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      /// <summary>
      /// Provide the account's portfolio
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="options">The options for the call.</param>
      /// <returns>The call object.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncUnaryCall<global::InjectivePortfolioRpc.AccountPortfolioResponse> AccountPortfolioAsync(global::InjectivePortfolioRpc.AccountPortfolioRequest request, grpc::CallOptions options)
      {
        return CallInvoker.AsyncUnaryCall(__Method_AccountPortfolio, null, options, request);
      }
      /// <summary>
      /// Stream the account's portfolio
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="headers">The initial metadata to send with the call. This parameter is optional.</param>
      /// <param name="deadline">An optional deadline for the call. The call will be cancelled if deadline is hit.</param>
      /// <param name="cancellationToken">An optional token for canceling the call.</param>
      /// <returns>The call object.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncServerStreamingCall<global::InjectivePortfolioRpc.StreamAccountPortfolioResponse> StreamAccountPortfolio(global::InjectivePortfolioRpc.StreamAccountPortfolioRequest request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return StreamAccountPortfolio(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      /// <summary>
      /// Stream the account's portfolio
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="options">The options for the call.</param>
      /// <returns>The call object.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncServerStreamingCall<global::InjectivePortfolioRpc.StreamAccountPortfolioResponse> StreamAccountPortfolio(global::InjectivePortfolioRpc.StreamAccountPortfolioRequest request, grpc::CallOptions options)
      {
        return CallInvoker.AsyncServerStreamingCall(__Method_StreamAccountPortfolio, null, options, request);
      }
      /// <summary>Creates a new instance of client from given <c>ClientBaseConfiguration</c>.</summary>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      protected override InjectivePortfolioRPCClient NewInstance(ClientBaseConfiguration configuration)
      {
        return new InjectivePortfolioRPCClient(configuration);
      }
    }

  }
}
#endregion