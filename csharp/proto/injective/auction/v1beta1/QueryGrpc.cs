// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: injective/auction/v1beta1/query.proto
// </auto-generated>
#pragma warning disable 0414, 1591, 8981, 0612
#region Designer generated code

using grpc = global::Grpc.Core;

namespace Injective.Auction.V1Beta1 {
  /// <summary>
  /// Query defines the gRPC querier service.
  /// </summary>
  public static partial class Query
  {
    static readonly string __ServiceName = "injective.auction.v1beta1.Query";

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
    static readonly grpc::Marshaller<global::Injective.Auction.V1Beta1.QueryAuctionParamsRequest> __Marshaller_injective_auction_v1beta1_QueryAuctionParamsRequest = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::Injective.Auction.V1Beta1.QueryAuctionParamsRequest.Parser));
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Marshaller<global::Injective.Auction.V1Beta1.QueryAuctionParamsResponse> __Marshaller_injective_auction_v1beta1_QueryAuctionParamsResponse = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::Injective.Auction.V1Beta1.QueryAuctionParamsResponse.Parser));
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Marshaller<global::Injective.Auction.V1Beta1.QueryCurrentAuctionBasketRequest> __Marshaller_injective_auction_v1beta1_QueryCurrentAuctionBasketRequest = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::Injective.Auction.V1Beta1.QueryCurrentAuctionBasketRequest.Parser));
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Marshaller<global::Injective.Auction.V1Beta1.QueryCurrentAuctionBasketResponse> __Marshaller_injective_auction_v1beta1_QueryCurrentAuctionBasketResponse = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::Injective.Auction.V1Beta1.QueryCurrentAuctionBasketResponse.Parser));
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Marshaller<global::Injective.Auction.V1Beta1.QueryModuleStateRequest> __Marshaller_injective_auction_v1beta1_QueryModuleStateRequest = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::Injective.Auction.V1Beta1.QueryModuleStateRequest.Parser));
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Marshaller<global::Injective.Auction.V1Beta1.QueryModuleStateResponse> __Marshaller_injective_auction_v1beta1_QueryModuleStateResponse = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::Injective.Auction.V1Beta1.QueryModuleStateResponse.Parser));

    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Method<global::Injective.Auction.V1Beta1.QueryAuctionParamsRequest, global::Injective.Auction.V1Beta1.QueryAuctionParamsResponse> __Method_AuctionParams = new grpc::Method<global::Injective.Auction.V1Beta1.QueryAuctionParamsRequest, global::Injective.Auction.V1Beta1.QueryAuctionParamsResponse>(
        grpc::MethodType.Unary,
        __ServiceName,
        "AuctionParams",
        __Marshaller_injective_auction_v1beta1_QueryAuctionParamsRequest,
        __Marshaller_injective_auction_v1beta1_QueryAuctionParamsResponse);

    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Method<global::Injective.Auction.V1Beta1.QueryCurrentAuctionBasketRequest, global::Injective.Auction.V1Beta1.QueryCurrentAuctionBasketResponse> __Method_CurrentAuctionBasket = new grpc::Method<global::Injective.Auction.V1Beta1.QueryCurrentAuctionBasketRequest, global::Injective.Auction.V1Beta1.QueryCurrentAuctionBasketResponse>(
        grpc::MethodType.Unary,
        __ServiceName,
        "CurrentAuctionBasket",
        __Marshaller_injective_auction_v1beta1_QueryCurrentAuctionBasketRequest,
        __Marshaller_injective_auction_v1beta1_QueryCurrentAuctionBasketResponse);

    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Method<global::Injective.Auction.V1Beta1.QueryModuleStateRequest, global::Injective.Auction.V1Beta1.QueryModuleStateResponse> __Method_AuctionModuleState = new grpc::Method<global::Injective.Auction.V1Beta1.QueryModuleStateRequest, global::Injective.Auction.V1Beta1.QueryModuleStateResponse>(
        grpc::MethodType.Unary,
        __ServiceName,
        "AuctionModuleState",
        __Marshaller_injective_auction_v1beta1_QueryModuleStateRequest,
        __Marshaller_injective_auction_v1beta1_QueryModuleStateResponse);

    /// <summary>Service descriptor</summary>
    public static global::Google.Protobuf.Reflection.ServiceDescriptor Descriptor
    {
      get { return global::Injective.Auction.V1Beta1.QueryReflection.Descriptor.Services[0]; }
    }

    /// <summary>Base class for server-side implementations of Query</summary>
    [grpc::BindServiceMethod(typeof(Query), "BindService")]
    public abstract partial class QueryBase
    {
      /// <summary>
      /// Retrieves auction params
      /// </summary>
      /// <param name="request">The request received from the client.</param>
      /// <param name="context">The context of the server-side call handler being invoked.</param>
      /// <returns>The response to send back to the client (wrapped by a task).</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::System.Threading.Tasks.Task<global::Injective.Auction.V1Beta1.QueryAuctionParamsResponse> AuctionParams(global::Injective.Auction.V1Beta1.QueryAuctionParamsRequest request, grpc::ServerCallContext context)
      {
        throw new grpc::RpcException(new grpc::Status(grpc::StatusCode.Unimplemented, ""));
      }

      /// <summary>
      /// Retrieves current auction basket with current highest bid and bidder
      /// </summary>
      /// <param name="request">The request received from the client.</param>
      /// <param name="context">The context of the server-side call handler being invoked.</param>
      /// <returns>The response to send back to the client (wrapped by a task).</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::System.Threading.Tasks.Task<global::Injective.Auction.V1Beta1.QueryCurrentAuctionBasketResponse> CurrentAuctionBasket(global::Injective.Auction.V1Beta1.QueryCurrentAuctionBasketRequest request, grpc::ServerCallContext context)
      {
        throw new grpc::RpcException(new grpc::Status(grpc::StatusCode.Unimplemented, ""));
      }

      /// <summary>
      /// Retrieves the entire auction module's state
      /// </summary>
      /// <param name="request">The request received from the client.</param>
      /// <param name="context">The context of the server-side call handler being invoked.</param>
      /// <returns>The response to send back to the client (wrapped by a task).</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::System.Threading.Tasks.Task<global::Injective.Auction.V1Beta1.QueryModuleStateResponse> AuctionModuleState(global::Injective.Auction.V1Beta1.QueryModuleStateRequest request, grpc::ServerCallContext context)
      {
        throw new grpc::RpcException(new grpc::Status(grpc::StatusCode.Unimplemented, ""));
      }

    }

    /// <summary>Client for Query</summary>
    public partial class QueryClient : grpc::ClientBase<QueryClient>
    {
      /// <summary>Creates a new client for Query</summary>
      /// <param name="channel">The channel to use to make remote calls.</param>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public QueryClient(grpc::ChannelBase channel) : base(channel)
      {
      }
      /// <summary>Creates a new client for Query that uses a custom <c>CallInvoker</c>.</summary>
      /// <param name="callInvoker">The callInvoker to use to make remote calls.</param>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public QueryClient(grpc::CallInvoker callInvoker) : base(callInvoker)
      {
      }
      /// <summary>Protected parameterless constructor to allow creation of test doubles.</summary>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      protected QueryClient() : base()
      {
      }
      /// <summary>Protected constructor to allow creation of configured clients.</summary>
      /// <param name="configuration">The client configuration.</param>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      protected QueryClient(ClientBaseConfiguration configuration) : base(configuration)
      {
      }

      /// <summary>
      /// Retrieves auction params
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="headers">The initial metadata to send with the call. This parameter is optional.</param>
      /// <param name="deadline">An optional deadline for the call. The call will be cancelled if deadline is hit.</param>
      /// <param name="cancellationToken">An optional token for canceling the call.</param>
      /// <returns>The response received from the server.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::Injective.Auction.V1Beta1.QueryAuctionParamsResponse AuctionParams(global::Injective.Auction.V1Beta1.QueryAuctionParamsRequest request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return AuctionParams(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      /// <summary>
      /// Retrieves auction params
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="options">The options for the call.</param>
      /// <returns>The response received from the server.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::Injective.Auction.V1Beta1.QueryAuctionParamsResponse AuctionParams(global::Injective.Auction.V1Beta1.QueryAuctionParamsRequest request, grpc::CallOptions options)
      {
        return CallInvoker.BlockingUnaryCall(__Method_AuctionParams, null, options, request);
      }
      /// <summary>
      /// Retrieves auction params
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="headers">The initial metadata to send with the call. This parameter is optional.</param>
      /// <param name="deadline">An optional deadline for the call. The call will be cancelled if deadline is hit.</param>
      /// <param name="cancellationToken">An optional token for canceling the call.</param>
      /// <returns>The call object.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncUnaryCall<global::Injective.Auction.V1Beta1.QueryAuctionParamsResponse> AuctionParamsAsync(global::Injective.Auction.V1Beta1.QueryAuctionParamsRequest request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return AuctionParamsAsync(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      /// <summary>
      /// Retrieves auction params
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="options">The options for the call.</param>
      /// <returns>The call object.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncUnaryCall<global::Injective.Auction.V1Beta1.QueryAuctionParamsResponse> AuctionParamsAsync(global::Injective.Auction.V1Beta1.QueryAuctionParamsRequest request, grpc::CallOptions options)
      {
        return CallInvoker.AsyncUnaryCall(__Method_AuctionParams, null, options, request);
      }
      /// <summary>
      /// Retrieves current auction basket with current highest bid and bidder
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="headers">The initial metadata to send with the call. This parameter is optional.</param>
      /// <param name="deadline">An optional deadline for the call. The call will be cancelled if deadline is hit.</param>
      /// <param name="cancellationToken">An optional token for canceling the call.</param>
      /// <returns>The response received from the server.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::Injective.Auction.V1Beta1.QueryCurrentAuctionBasketResponse CurrentAuctionBasket(global::Injective.Auction.V1Beta1.QueryCurrentAuctionBasketRequest request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return CurrentAuctionBasket(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      /// <summary>
      /// Retrieves current auction basket with current highest bid and bidder
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="options">The options for the call.</param>
      /// <returns>The response received from the server.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::Injective.Auction.V1Beta1.QueryCurrentAuctionBasketResponse CurrentAuctionBasket(global::Injective.Auction.V1Beta1.QueryCurrentAuctionBasketRequest request, grpc::CallOptions options)
      {
        return CallInvoker.BlockingUnaryCall(__Method_CurrentAuctionBasket, null, options, request);
      }
      /// <summary>
      /// Retrieves current auction basket with current highest bid and bidder
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="headers">The initial metadata to send with the call. This parameter is optional.</param>
      /// <param name="deadline">An optional deadline for the call. The call will be cancelled if deadline is hit.</param>
      /// <param name="cancellationToken">An optional token for canceling the call.</param>
      /// <returns>The call object.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncUnaryCall<global::Injective.Auction.V1Beta1.QueryCurrentAuctionBasketResponse> CurrentAuctionBasketAsync(global::Injective.Auction.V1Beta1.QueryCurrentAuctionBasketRequest request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return CurrentAuctionBasketAsync(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      /// <summary>
      /// Retrieves current auction basket with current highest bid and bidder
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="options">The options for the call.</param>
      /// <returns>The call object.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncUnaryCall<global::Injective.Auction.V1Beta1.QueryCurrentAuctionBasketResponse> CurrentAuctionBasketAsync(global::Injective.Auction.V1Beta1.QueryCurrentAuctionBasketRequest request, grpc::CallOptions options)
      {
        return CallInvoker.AsyncUnaryCall(__Method_CurrentAuctionBasket, null, options, request);
      }
      /// <summary>
      /// Retrieves the entire auction module's state
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="headers">The initial metadata to send with the call. This parameter is optional.</param>
      /// <param name="deadline">An optional deadline for the call. The call will be cancelled if deadline is hit.</param>
      /// <param name="cancellationToken">An optional token for canceling the call.</param>
      /// <returns>The response received from the server.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::Injective.Auction.V1Beta1.QueryModuleStateResponse AuctionModuleState(global::Injective.Auction.V1Beta1.QueryModuleStateRequest request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return AuctionModuleState(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      /// <summary>
      /// Retrieves the entire auction module's state
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="options">The options for the call.</param>
      /// <returns>The response received from the server.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::Injective.Auction.V1Beta1.QueryModuleStateResponse AuctionModuleState(global::Injective.Auction.V1Beta1.QueryModuleStateRequest request, grpc::CallOptions options)
      {
        return CallInvoker.BlockingUnaryCall(__Method_AuctionModuleState, null, options, request);
      }
      /// <summary>
      /// Retrieves the entire auction module's state
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="headers">The initial metadata to send with the call. This parameter is optional.</param>
      /// <param name="deadline">An optional deadline for the call. The call will be cancelled if deadline is hit.</param>
      /// <param name="cancellationToken">An optional token for canceling the call.</param>
      /// <returns>The call object.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncUnaryCall<global::Injective.Auction.V1Beta1.QueryModuleStateResponse> AuctionModuleStateAsync(global::Injective.Auction.V1Beta1.QueryModuleStateRequest request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return AuctionModuleStateAsync(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      /// <summary>
      /// Retrieves the entire auction module's state
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="options">The options for the call.</param>
      /// <returns>The call object.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncUnaryCall<global::Injective.Auction.V1Beta1.QueryModuleStateResponse> AuctionModuleStateAsync(global::Injective.Auction.V1Beta1.QueryModuleStateRequest request, grpc::CallOptions options)
      {
        return CallInvoker.AsyncUnaryCall(__Method_AuctionModuleState, null, options, request);
      }
      /// <summary>Creates a new instance of client from given <c>ClientBaseConfiguration</c>.</summary>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      protected override QueryClient NewInstance(ClientBaseConfiguration configuration)
      {
        return new QueryClient(configuration);
      }
    }

    /// <summary>Creates service definition that can be registered with a server</summary>
    /// <param name="serviceImpl">An object implementing the server-side handling logic.</param>
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    public static grpc::ServerServiceDefinition BindService(QueryBase serviceImpl)
    {
      return grpc::ServerServiceDefinition.CreateBuilder()
          .AddMethod(__Method_AuctionParams, serviceImpl.AuctionParams)
          .AddMethod(__Method_CurrentAuctionBasket, serviceImpl.CurrentAuctionBasket)
          .AddMethod(__Method_AuctionModuleState, serviceImpl.AuctionModuleState).Build();
    }

    /// <summary>Register service method with a service binder with or without implementation. Useful when customizing the service binding logic.
    /// Note: this method is part of an experimental API that can change or be removed without any prior notice.</summary>
    /// <param name="serviceBinder">Service methods will be bound by calling <c>AddMethod</c> on this object.</param>
    /// <param name="serviceImpl">An object implementing the server-side handling logic.</param>
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    public static void BindService(grpc::ServiceBinderBase serviceBinder, QueryBase serviceImpl)
    {
      serviceBinder.AddMethod(__Method_AuctionParams, serviceImpl == null ? null : new grpc::UnaryServerMethod<global::Injective.Auction.V1Beta1.QueryAuctionParamsRequest, global::Injective.Auction.V1Beta1.QueryAuctionParamsResponse>(serviceImpl.AuctionParams));
      serviceBinder.AddMethod(__Method_CurrentAuctionBasket, serviceImpl == null ? null : new grpc::UnaryServerMethod<global::Injective.Auction.V1Beta1.QueryCurrentAuctionBasketRequest, global::Injective.Auction.V1Beta1.QueryCurrentAuctionBasketResponse>(serviceImpl.CurrentAuctionBasket));
      serviceBinder.AddMethod(__Method_AuctionModuleState, serviceImpl == null ? null : new grpc::UnaryServerMethod<global::Injective.Auction.V1Beta1.QueryModuleStateRequest, global::Injective.Auction.V1Beta1.QueryModuleStateResponse>(serviceImpl.AuctionModuleState));
    }

  }
}
#endregion
