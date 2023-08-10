// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: injective/auction/v1beta1/tx.proto
// </auto-generated>
#pragma warning disable 0414, 1591, 8981, 0612
#region Designer generated code

using grpc = global::Grpc.Core;

namespace Injective.Auction.V1Beta1 {
  /// <summary>
  /// Msg defines the auction Msg service.
  /// </summary>
  public static partial class Msg
  {
    static readonly string __ServiceName = "injective.auction.v1beta1.Msg";

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
    static readonly grpc::Marshaller<global::Injective.Auction.V1Beta1.MsgBid> __Marshaller_injective_auction_v1beta1_MsgBid = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::Injective.Auction.V1Beta1.MsgBid.Parser));
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Marshaller<global::Injective.Auction.V1Beta1.MsgBidResponse> __Marshaller_injective_auction_v1beta1_MsgBidResponse = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::Injective.Auction.V1Beta1.MsgBidResponse.Parser));
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Marshaller<global::Injective.Auction.V1Beta1.MsgUpdateParams> __Marshaller_injective_auction_v1beta1_MsgUpdateParams = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::Injective.Auction.V1Beta1.MsgUpdateParams.Parser));
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Marshaller<global::Injective.Auction.V1Beta1.MsgUpdateParamsResponse> __Marshaller_injective_auction_v1beta1_MsgUpdateParamsResponse = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::Injective.Auction.V1Beta1.MsgUpdateParamsResponse.Parser));

    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Method<global::Injective.Auction.V1Beta1.MsgBid, global::Injective.Auction.V1Beta1.MsgBidResponse> __Method_Bid = new grpc::Method<global::Injective.Auction.V1Beta1.MsgBid, global::Injective.Auction.V1Beta1.MsgBidResponse>(
        grpc::MethodType.Unary,
        __ServiceName,
        "Bid",
        __Marshaller_injective_auction_v1beta1_MsgBid,
        __Marshaller_injective_auction_v1beta1_MsgBidResponse);

    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Method<global::Injective.Auction.V1Beta1.MsgUpdateParams, global::Injective.Auction.V1Beta1.MsgUpdateParamsResponse> __Method_UpdateParams = new grpc::Method<global::Injective.Auction.V1Beta1.MsgUpdateParams, global::Injective.Auction.V1Beta1.MsgUpdateParamsResponse>(
        grpc::MethodType.Unary,
        __ServiceName,
        "UpdateParams",
        __Marshaller_injective_auction_v1beta1_MsgUpdateParams,
        __Marshaller_injective_auction_v1beta1_MsgUpdateParamsResponse);

    /// <summary>Service descriptor</summary>
    public static global::Google.Protobuf.Reflection.ServiceDescriptor Descriptor
    {
      get { return global::Injective.Auction.V1Beta1.TxReflection.Descriptor.Services[0]; }
    }

    /// <summary>Base class for server-side implementations of Msg</summary>
    [grpc::BindServiceMethod(typeof(Msg), "BindService")]
    public abstract partial class MsgBase
    {
      /// <summary>
      /// Bid defines a method for placing a bid for an auction
      /// </summary>
      /// <param name="request">The request received from the client.</param>
      /// <param name="context">The context of the server-side call handler being invoked.</param>
      /// <returns>The response to send back to the client (wrapped by a task).</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::System.Threading.Tasks.Task<global::Injective.Auction.V1Beta1.MsgBidResponse> Bid(global::Injective.Auction.V1Beta1.MsgBid request, grpc::ServerCallContext context)
      {
        throw new grpc::RpcException(new grpc::Status(grpc::StatusCode.Unimplemented, ""));
      }

      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::System.Threading.Tasks.Task<global::Injective.Auction.V1Beta1.MsgUpdateParamsResponse> UpdateParams(global::Injective.Auction.V1Beta1.MsgUpdateParams request, grpc::ServerCallContext context)
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

      /// <summary>
      /// Bid defines a method for placing a bid for an auction
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="headers">The initial metadata to send with the call. This parameter is optional.</param>
      /// <param name="deadline">An optional deadline for the call. The call will be cancelled if deadline is hit.</param>
      /// <param name="cancellationToken">An optional token for canceling the call.</param>
      /// <returns>The response received from the server.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::Injective.Auction.V1Beta1.MsgBidResponse Bid(global::Injective.Auction.V1Beta1.MsgBid request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return Bid(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      /// <summary>
      /// Bid defines a method for placing a bid for an auction
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="options">The options for the call.</param>
      /// <returns>The response received from the server.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::Injective.Auction.V1Beta1.MsgBidResponse Bid(global::Injective.Auction.V1Beta1.MsgBid request, grpc::CallOptions options)
      {
        return CallInvoker.BlockingUnaryCall(__Method_Bid, null, options, request);
      }
      /// <summary>
      /// Bid defines a method for placing a bid for an auction
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="headers">The initial metadata to send with the call. This parameter is optional.</param>
      /// <param name="deadline">An optional deadline for the call. The call will be cancelled if deadline is hit.</param>
      /// <param name="cancellationToken">An optional token for canceling the call.</param>
      /// <returns>The call object.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncUnaryCall<global::Injective.Auction.V1Beta1.MsgBidResponse> BidAsync(global::Injective.Auction.V1Beta1.MsgBid request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return BidAsync(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      /// <summary>
      /// Bid defines a method for placing a bid for an auction
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="options">The options for the call.</param>
      /// <returns>The call object.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncUnaryCall<global::Injective.Auction.V1Beta1.MsgBidResponse> BidAsync(global::Injective.Auction.V1Beta1.MsgBid request, grpc::CallOptions options)
      {
        return CallInvoker.AsyncUnaryCall(__Method_Bid, null, options, request);
      }
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::Injective.Auction.V1Beta1.MsgUpdateParamsResponse UpdateParams(global::Injective.Auction.V1Beta1.MsgUpdateParams request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return UpdateParams(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::Injective.Auction.V1Beta1.MsgUpdateParamsResponse UpdateParams(global::Injective.Auction.V1Beta1.MsgUpdateParams request, grpc::CallOptions options)
      {
        return CallInvoker.BlockingUnaryCall(__Method_UpdateParams, null, options, request);
      }
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncUnaryCall<global::Injective.Auction.V1Beta1.MsgUpdateParamsResponse> UpdateParamsAsync(global::Injective.Auction.V1Beta1.MsgUpdateParams request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return UpdateParamsAsync(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncUnaryCall<global::Injective.Auction.V1Beta1.MsgUpdateParamsResponse> UpdateParamsAsync(global::Injective.Auction.V1Beta1.MsgUpdateParams request, grpc::CallOptions options)
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
          .AddMethod(__Method_Bid, serviceImpl.Bid)
          .AddMethod(__Method_UpdateParams, serviceImpl.UpdateParams).Build();
    }

    /// <summary>Register service method with a service binder with or without implementation. Useful when customizing the service binding logic.
    /// Note: this method is part of an experimental API that can change or be removed without any prior notice.</summary>
    /// <param name="serviceBinder">Service methods will be bound by calling <c>AddMethod</c> on this object.</param>
    /// <param name="serviceImpl">An object implementing the server-side handling logic.</param>
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    public static void BindService(grpc::ServiceBinderBase serviceBinder, MsgBase serviceImpl)
    {
      serviceBinder.AddMethod(__Method_Bid, serviceImpl == null ? null : new grpc::UnaryServerMethod<global::Injective.Auction.V1Beta1.MsgBid, global::Injective.Auction.V1Beta1.MsgBidResponse>(serviceImpl.Bid));
      serviceBinder.AddMethod(__Method_UpdateParams, serviceImpl == null ? null : new grpc::UnaryServerMethod<global::Injective.Auction.V1Beta1.MsgUpdateParams, global::Injective.Auction.V1Beta1.MsgUpdateParamsResponse>(serviceImpl.UpdateParams));
    }

  }
}
#endregion
