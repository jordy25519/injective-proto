// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: injective/wasmx/v1/query.proto
// </auto-generated>
#pragma warning disable 0414, 1591, 8981
#region Designer generated code

using grpc = global::Grpc.Core;

namespace Injective.Wasmx.V1 {
  /// <summary>
  /// Query defines the gRPC querier service.
  /// </summary>
  public static partial class Query
  {
    static readonly string __ServiceName = "injective.wasmx.v1.Query";

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
    static readonly grpc::Marshaller<global::Injective.Wasmx.V1.QueryWasmxParamsRequest> __Marshaller_injective_wasmx_v1_QueryWasmxParamsRequest = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::Injective.Wasmx.V1.QueryWasmxParamsRequest.Parser));
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Marshaller<global::Injective.Wasmx.V1.QueryWasmxParamsResponse> __Marshaller_injective_wasmx_v1_QueryWasmxParamsResponse = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::Injective.Wasmx.V1.QueryWasmxParamsResponse.Parser));
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Marshaller<global::Injective.Wasmx.V1.QueryContractRegistrationInfoRequest> __Marshaller_injective_wasmx_v1_QueryContractRegistrationInfoRequest = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::Injective.Wasmx.V1.QueryContractRegistrationInfoRequest.Parser));
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Marshaller<global::Injective.Wasmx.V1.QueryContractRegistrationInfoResponse> __Marshaller_injective_wasmx_v1_QueryContractRegistrationInfoResponse = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::Injective.Wasmx.V1.QueryContractRegistrationInfoResponse.Parser));
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Marshaller<global::Injective.Wasmx.V1.QueryModuleStateRequest> __Marshaller_injective_wasmx_v1_QueryModuleStateRequest = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::Injective.Wasmx.V1.QueryModuleStateRequest.Parser));
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Marshaller<global::Injective.Wasmx.V1.QueryModuleStateResponse> __Marshaller_injective_wasmx_v1_QueryModuleStateResponse = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::Injective.Wasmx.V1.QueryModuleStateResponse.Parser));

    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Method<global::Injective.Wasmx.V1.QueryWasmxParamsRequest, global::Injective.Wasmx.V1.QueryWasmxParamsResponse> __Method_WasmxParams = new grpc::Method<global::Injective.Wasmx.V1.QueryWasmxParamsRequest, global::Injective.Wasmx.V1.QueryWasmxParamsResponse>(
        grpc::MethodType.Unary,
        __ServiceName,
        "WasmxParams",
        __Marshaller_injective_wasmx_v1_QueryWasmxParamsRequest,
        __Marshaller_injective_wasmx_v1_QueryWasmxParamsResponse);

    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Method<global::Injective.Wasmx.V1.QueryContractRegistrationInfoRequest, global::Injective.Wasmx.V1.QueryContractRegistrationInfoResponse> __Method_ContractRegistrationInfo = new grpc::Method<global::Injective.Wasmx.V1.QueryContractRegistrationInfoRequest, global::Injective.Wasmx.V1.QueryContractRegistrationInfoResponse>(
        grpc::MethodType.Unary,
        __ServiceName,
        "ContractRegistrationInfo",
        __Marshaller_injective_wasmx_v1_QueryContractRegistrationInfoRequest,
        __Marshaller_injective_wasmx_v1_QueryContractRegistrationInfoResponse);

    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Method<global::Injective.Wasmx.V1.QueryModuleStateRequest, global::Injective.Wasmx.V1.QueryModuleStateResponse> __Method_WasmxModuleState = new grpc::Method<global::Injective.Wasmx.V1.QueryModuleStateRequest, global::Injective.Wasmx.V1.QueryModuleStateResponse>(
        grpc::MethodType.Unary,
        __ServiceName,
        "WasmxModuleState",
        __Marshaller_injective_wasmx_v1_QueryModuleStateRequest,
        __Marshaller_injective_wasmx_v1_QueryModuleStateResponse);

    /// <summary>Service descriptor</summary>
    public static global::Google.Protobuf.Reflection.ServiceDescriptor Descriptor
    {
      get { return global::Injective.Wasmx.V1.QueryReflection.Descriptor.Services[0]; }
    }

    /// <summary>Base class for server-side implementations of Query</summary>
    [grpc::BindServiceMethod(typeof(Query), "BindService")]
    public abstract partial class QueryBase
    {
      /// <summary>
      /// Retrieves wasmx params
      /// </summary>
      /// <param name="request">The request received from the client.</param>
      /// <param name="context">The context of the server-side call handler being invoked.</param>
      /// <returns>The response to send back to the client (wrapped by a task).</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::System.Threading.Tasks.Task<global::Injective.Wasmx.V1.QueryWasmxParamsResponse> WasmxParams(global::Injective.Wasmx.V1.QueryWasmxParamsRequest request, grpc::ServerCallContext context)
      {
        throw new grpc::RpcException(new grpc::Status(grpc::StatusCode.Unimplemented, ""));
      }

      /// <summary>
      /// Retrieves contract registration info
      /// </summary>
      /// <param name="request">The request received from the client.</param>
      /// <param name="context">The context of the server-side call handler being invoked.</param>
      /// <returns>The response to send back to the client (wrapped by a task).</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::System.Threading.Tasks.Task<global::Injective.Wasmx.V1.QueryContractRegistrationInfoResponse> ContractRegistrationInfo(global::Injective.Wasmx.V1.QueryContractRegistrationInfoRequest request, grpc::ServerCallContext context)
      {
        throw new grpc::RpcException(new grpc::Status(grpc::StatusCode.Unimplemented, ""));
      }

      /// <summary>
      /// Retrieves the entire wasmx module's state
      /// </summary>
      /// <param name="request">The request received from the client.</param>
      /// <param name="context">The context of the server-side call handler being invoked.</param>
      /// <returns>The response to send back to the client (wrapped by a task).</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::System.Threading.Tasks.Task<global::Injective.Wasmx.V1.QueryModuleStateResponse> WasmxModuleState(global::Injective.Wasmx.V1.QueryModuleStateRequest request, grpc::ServerCallContext context)
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
      /// Retrieves wasmx params
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="headers">The initial metadata to send with the call. This parameter is optional.</param>
      /// <param name="deadline">An optional deadline for the call. The call will be cancelled if deadline is hit.</param>
      /// <param name="cancellationToken">An optional token for canceling the call.</param>
      /// <returns>The response received from the server.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::Injective.Wasmx.V1.QueryWasmxParamsResponse WasmxParams(global::Injective.Wasmx.V1.QueryWasmxParamsRequest request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return WasmxParams(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      /// <summary>
      /// Retrieves wasmx params
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="options">The options for the call.</param>
      /// <returns>The response received from the server.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::Injective.Wasmx.V1.QueryWasmxParamsResponse WasmxParams(global::Injective.Wasmx.V1.QueryWasmxParamsRequest request, grpc::CallOptions options)
      {
        return CallInvoker.BlockingUnaryCall(__Method_WasmxParams, null, options, request);
      }
      /// <summary>
      /// Retrieves wasmx params
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="headers">The initial metadata to send with the call. This parameter is optional.</param>
      /// <param name="deadline">An optional deadline for the call. The call will be cancelled if deadline is hit.</param>
      /// <param name="cancellationToken">An optional token for canceling the call.</param>
      /// <returns>The call object.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncUnaryCall<global::Injective.Wasmx.V1.QueryWasmxParamsResponse> WasmxParamsAsync(global::Injective.Wasmx.V1.QueryWasmxParamsRequest request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return WasmxParamsAsync(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      /// <summary>
      /// Retrieves wasmx params
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="options">The options for the call.</param>
      /// <returns>The call object.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncUnaryCall<global::Injective.Wasmx.V1.QueryWasmxParamsResponse> WasmxParamsAsync(global::Injective.Wasmx.V1.QueryWasmxParamsRequest request, grpc::CallOptions options)
      {
        return CallInvoker.AsyncUnaryCall(__Method_WasmxParams, null, options, request);
      }
      /// <summary>
      /// Retrieves contract registration info
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="headers">The initial metadata to send with the call. This parameter is optional.</param>
      /// <param name="deadline">An optional deadline for the call. The call will be cancelled if deadline is hit.</param>
      /// <param name="cancellationToken">An optional token for canceling the call.</param>
      /// <returns>The response received from the server.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::Injective.Wasmx.V1.QueryContractRegistrationInfoResponse ContractRegistrationInfo(global::Injective.Wasmx.V1.QueryContractRegistrationInfoRequest request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return ContractRegistrationInfo(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      /// <summary>
      /// Retrieves contract registration info
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="options">The options for the call.</param>
      /// <returns>The response received from the server.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::Injective.Wasmx.V1.QueryContractRegistrationInfoResponse ContractRegistrationInfo(global::Injective.Wasmx.V1.QueryContractRegistrationInfoRequest request, grpc::CallOptions options)
      {
        return CallInvoker.BlockingUnaryCall(__Method_ContractRegistrationInfo, null, options, request);
      }
      /// <summary>
      /// Retrieves contract registration info
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="headers">The initial metadata to send with the call. This parameter is optional.</param>
      /// <param name="deadline">An optional deadline for the call. The call will be cancelled if deadline is hit.</param>
      /// <param name="cancellationToken">An optional token for canceling the call.</param>
      /// <returns>The call object.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncUnaryCall<global::Injective.Wasmx.V1.QueryContractRegistrationInfoResponse> ContractRegistrationInfoAsync(global::Injective.Wasmx.V1.QueryContractRegistrationInfoRequest request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return ContractRegistrationInfoAsync(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      /// <summary>
      /// Retrieves contract registration info
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="options">The options for the call.</param>
      /// <returns>The call object.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncUnaryCall<global::Injective.Wasmx.V1.QueryContractRegistrationInfoResponse> ContractRegistrationInfoAsync(global::Injective.Wasmx.V1.QueryContractRegistrationInfoRequest request, grpc::CallOptions options)
      {
        return CallInvoker.AsyncUnaryCall(__Method_ContractRegistrationInfo, null, options, request);
      }
      /// <summary>
      /// Retrieves the entire wasmx module's state
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="headers">The initial metadata to send with the call. This parameter is optional.</param>
      /// <param name="deadline">An optional deadline for the call. The call will be cancelled if deadline is hit.</param>
      /// <param name="cancellationToken">An optional token for canceling the call.</param>
      /// <returns>The response received from the server.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::Injective.Wasmx.V1.QueryModuleStateResponse WasmxModuleState(global::Injective.Wasmx.V1.QueryModuleStateRequest request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return WasmxModuleState(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      /// <summary>
      /// Retrieves the entire wasmx module's state
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="options">The options for the call.</param>
      /// <returns>The response received from the server.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::Injective.Wasmx.V1.QueryModuleStateResponse WasmxModuleState(global::Injective.Wasmx.V1.QueryModuleStateRequest request, grpc::CallOptions options)
      {
        return CallInvoker.BlockingUnaryCall(__Method_WasmxModuleState, null, options, request);
      }
      /// <summary>
      /// Retrieves the entire wasmx module's state
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="headers">The initial metadata to send with the call. This parameter is optional.</param>
      /// <param name="deadline">An optional deadline for the call. The call will be cancelled if deadline is hit.</param>
      /// <param name="cancellationToken">An optional token for canceling the call.</param>
      /// <returns>The call object.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncUnaryCall<global::Injective.Wasmx.V1.QueryModuleStateResponse> WasmxModuleStateAsync(global::Injective.Wasmx.V1.QueryModuleStateRequest request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return WasmxModuleStateAsync(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      /// <summary>
      /// Retrieves the entire wasmx module's state
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="options">The options for the call.</param>
      /// <returns>The call object.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncUnaryCall<global::Injective.Wasmx.V1.QueryModuleStateResponse> WasmxModuleStateAsync(global::Injective.Wasmx.V1.QueryModuleStateRequest request, grpc::CallOptions options)
      {
        return CallInvoker.AsyncUnaryCall(__Method_WasmxModuleState, null, options, request);
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
          .AddMethod(__Method_WasmxParams, serviceImpl.WasmxParams)
          .AddMethod(__Method_ContractRegistrationInfo, serviceImpl.ContractRegistrationInfo)
          .AddMethod(__Method_WasmxModuleState, serviceImpl.WasmxModuleState).Build();
    }

    /// <summary>Register service method with a service binder with or without implementation. Useful when customizing the service binding logic.
    /// Note: this method is part of an experimental API that can change or be removed without any prior notice.</summary>
    /// <param name="serviceBinder">Service methods will be bound by calling <c>AddMethod</c> on this object.</param>
    /// <param name="serviceImpl">An object implementing the server-side handling logic.</param>
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    public static void BindService(grpc::ServiceBinderBase serviceBinder, QueryBase serviceImpl)
    {
      serviceBinder.AddMethod(__Method_WasmxParams, serviceImpl == null ? null : new grpc::UnaryServerMethod<global::Injective.Wasmx.V1.QueryWasmxParamsRequest, global::Injective.Wasmx.V1.QueryWasmxParamsResponse>(serviceImpl.WasmxParams));
      serviceBinder.AddMethod(__Method_ContractRegistrationInfo, serviceImpl == null ? null : new grpc::UnaryServerMethod<global::Injective.Wasmx.V1.QueryContractRegistrationInfoRequest, global::Injective.Wasmx.V1.QueryContractRegistrationInfoResponse>(serviceImpl.ContractRegistrationInfo));
      serviceBinder.AddMethod(__Method_WasmxModuleState, serviceImpl == null ? null : new grpc::UnaryServerMethod<global::Injective.Wasmx.V1.QueryModuleStateRequest, global::Injective.Wasmx.V1.QueryModuleStateResponse>(serviceImpl.WasmxModuleState));
    }

  }
}
#endregion
