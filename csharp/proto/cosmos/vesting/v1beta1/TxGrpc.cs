// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: cosmos/vesting/v1beta1/tx.proto
// </auto-generated>
#pragma warning disable 0414, 1591, 8981, 0612
#region Designer generated code

using grpc = global::Grpc.Core;

namespace Cosmos.Vesting.V1Beta1 {
  /// <summary>
  /// Msg defines the bank Msg service.
  /// </summary>
  public static partial class Msg
  {
    static readonly string __ServiceName = "cosmos.vesting.v1beta1.Msg";

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
    static readonly grpc::Marshaller<global::Cosmos.Vesting.V1Beta1.MsgCreateVestingAccount> __Marshaller_cosmos_vesting_v1beta1_MsgCreateVestingAccount = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::Cosmos.Vesting.V1Beta1.MsgCreateVestingAccount.Parser));
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Marshaller<global::Cosmos.Vesting.V1Beta1.MsgCreateVestingAccountResponse> __Marshaller_cosmos_vesting_v1beta1_MsgCreateVestingAccountResponse = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::Cosmos.Vesting.V1Beta1.MsgCreateVestingAccountResponse.Parser));
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Marshaller<global::Cosmos.Vesting.V1Beta1.MsgCreatePermanentLockedAccount> __Marshaller_cosmos_vesting_v1beta1_MsgCreatePermanentLockedAccount = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::Cosmos.Vesting.V1Beta1.MsgCreatePermanentLockedAccount.Parser));
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Marshaller<global::Cosmos.Vesting.V1Beta1.MsgCreatePermanentLockedAccountResponse> __Marshaller_cosmos_vesting_v1beta1_MsgCreatePermanentLockedAccountResponse = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::Cosmos.Vesting.V1Beta1.MsgCreatePermanentLockedAccountResponse.Parser));
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Marshaller<global::Cosmos.Vesting.V1Beta1.MsgCreatePeriodicVestingAccount> __Marshaller_cosmos_vesting_v1beta1_MsgCreatePeriodicVestingAccount = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::Cosmos.Vesting.V1Beta1.MsgCreatePeriodicVestingAccount.Parser));
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Marshaller<global::Cosmos.Vesting.V1Beta1.MsgCreatePeriodicVestingAccountResponse> __Marshaller_cosmos_vesting_v1beta1_MsgCreatePeriodicVestingAccountResponse = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::Cosmos.Vesting.V1Beta1.MsgCreatePeriodicVestingAccountResponse.Parser));

    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Method<global::Cosmos.Vesting.V1Beta1.MsgCreateVestingAccount, global::Cosmos.Vesting.V1Beta1.MsgCreateVestingAccountResponse> __Method_CreateVestingAccount = new grpc::Method<global::Cosmos.Vesting.V1Beta1.MsgCreateVestingAccount, global::Cosmos.Vesting.V1Beta1.MsgCreateVestingAccountResponse>(
        grpc::MethodType.Unary,
        __ServiceName,
        "CreateVestingAccount",
        __Marshaller_cosmos_vesting_v1beta1_MsgCreateVestingAccount,
        __Marshaller_cosmos_vesting_v1beta1_MsgCreateVestingAccountResponse);

    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Method<global::Cosmos.Vesting.V1Beta1.MsgCreatePermanentLockedAccount, global::Cosmos.Vesting.V1Beta1.MsgCreatePermanentLockedAccountResponse> __Method_CreatePermanentLockedAccount = new grpc::Method<global::Cosmos.Vesting.V1Beta1.MsgCreatePermanentLockedAccount, global::Cosmos.Vesting.V1Beta1.MsgCreatePermanentLockedAccountResponse>(
        grpc::MethodType.Unary,
        __ServiceName,
        "CreatePermanentLockedAccount",
        __Marshaller_cosmos_vesting_v1beta1_MsgCreatePermanentLockedAccount,
        __Marshaller_cosmos_vesting_v1beta1_MsgCreatePermanentLockedAccountResponse);

    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Method<global::Cosmos.Vesting.V1Beta1.MsgCreatePeriodicVestingAccount, global::Cosmos.Vesting.V1Beta1.MsgCreatePeriodicVestingAccountResponse> __Method_CreatePeriodicVestingAccount = new grpc::Method<global::Cosmos.Vesting.V1Beta1.MsgCreatePeriodicVestingAccount, global::Cosmos.Vesting.V1Beta1.MsgCreatePeriodicVestingAccountResponse>(
        grpc::MethodType.Unary,
        __ServiceName,
        "CreatePeriodicVestingAccount",
        __Marshaller_cosmos_vesting_v1beta1_MsgCreatePeriodicVestingAccount,
        __Marshaller_cosmos_vesting_v1beta1_MsgCreatePeriodicVestingAccountResponse);

    /// <summary>Service descriptor</summary>
    public static global::Google.Protobuf.Reflection.ServiceDescriptor Descriptor
    {
      get { return global::Cosmos.Vesting.V1Beta1.TxReflection.Descriptor.Services[0]; }
    }

    /// <summary>Base class for server-side implementations of Msg</summary>
    [grpc::BindServiceMethod(typeof(Msg), "BindService")]
    public abstract partial class MsgBase
    {
      /// <summary>
      /// CreateVestingAccount defines a method that enables creating a vesting
      /// account.
      /// </summary>
      /// <param name="request">The request received from the client.</param>
      /// <param name="context">The context of the server-side call handler being invoked.</param>
      /// <returns>The response to send back to the client (wrapped by a task).</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::System.Threading.Tasks.Task<global::Cosmos.Vesting.V1Beta1.MsgCreateVestingAccountResponse> CreateVestingAccount(global::Cosmos.Vesting.V1Beta1.MsgCreateVestingAccount request, grpc::ServerCallContext context)
      {
        throw new grpc::RpcException(new grpc::Status(grpc::StatusCode.Unimplemented, ""));
      }

      /// <summary>
      /// CreatePermanentLockedAccount defines a method that enables creating a permanent
      /// locked account.
      ///
      /// Since: cosmos-sdk 0.46
      /// </summary>
      /// <param name="request">The request received from the client.</param>
      /// <param name="context">The context of the server-side call handler being invoked.</param>
      /// <returns>The response to send back to the client (wrapped by a task).</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::System.Threading.Tasks.Task<global::Cosmos.Vesting.V1Beta1.MsgCreatePermanentLockedAccountResponse> CreatePermanentLockedAccount(global::Cosmos.Vesting.V1Beta1.MsgCreatePermanentLockedAccount request, grpc::ServerCallContext context)
      {
        throw new grpc::RpcException(new grpc::Status(grpc::StatusCode.Unimplemented, ""));
      }

      /// <summary>
      /// CreatePeriodicVestingAccount defines a method that enables creating a
      /// periodic vesting account.
      ///
      /// Since: cosmos-sdk 0.46
      /// </summary>
      /// <param name="request">The request received from the client.</param>
      /// <param name="context">The context of the server-side call handler being invoked.</param>
      /// <returns>The response to send back to the client (wrapped by a task).</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::System.Threading.Tasks.Task<global::Cosmos.Vesting.V1Beta1.MsgCreatePeriodicVestingAccountResponse> CreatePeriodicVestingAccount(global::Cosmos.Vesting.V1Beta1.MsgCreatePeriodicVestingAccount request, grpc::ServerCallContext context)
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
      /// CreateVestingAccount defines a method that enables creating a vesting
      /// account.
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="headers">The initial metadata to send with the call. This parameter is optional.</param>
      /// <param name="deadline">An optional deadline for the call. The call will be cancelled if deadline is hit.</param>
      /// <param name="cancellationToken">An optional token for canceling the call.</param>
      /// <returns>The response received from the server.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::Cosmos.Vesting.V1Beta1.MsgCreateVestingAccountResponse CreateVestingAccount(global::Cosmos.Vesting.V1Beta1.MsgCreateVestingAccount request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return CreateVestingAccount(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      /// <summary>
      /// CreateVestingAccount defines a method that enables creating a vesting
      /// account.
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="options">The options for the call.</param>
      /// <returns>The response received from the server.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::Cosmos.Vesting.V1Beta1.MsgCreateVestingAccountResponse CreateVestingAccount(global::Cosmos.Vesting.V1Beta1.MsgCreateVestingAccount request, grpc::CallOptions options)
      {
        return CallInvoker.BlockingUnaryCall(__Method_CreateVestingAccount, null, options, request);
      }
      /// <summary>
      /// CreateVestingAccount defines a method that enables creating a vesting
      /// account.
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="headers">The initial metadata to send with the call. This parameter is optional.</param>
      /// <param name="deadline">An optional deadline for the call. The call will be cancelled if deadline is hit.</param>
      /// <param name="cancellationToken">An optional token for canceling the call.</param>
      /// <returns>The call object.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncUnaryCall<global::Cosmos.Vesting.V1Beta1.MsgCreateVestingAccountResponse> CreateVestingAccountAsync(global::Cosmos.Vesting.V1Beta1.MsgCreateVestingAccount request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return CreateVestingAccountAsync(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      /// <summary>
      /// CreateVestingAccount defines a method that enables creating a vesting
      /// account.
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="options">The options for the call.</param>
      /// <returns>The call object.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncUnaryCall<global::Cosmos.Vesting.V1Beta1.MsgCreateVestingAccountResponse> CreateVestingAccountAsync(global::Cosmos.Vesting.V1Beta1.MsgCreateVestingAccount request, grpc::CallOptions options)
      {
        return CallInvoker.AsyncUnaryCall(__Method_CreateVestingAccount, null, options, request);
      }
      /// <summary>
      /// CreatePermanentLockedAccount defines a method that enables creating a permanent
      /// locked account.
      ///
      /// Since: cosmos-sdk 0.46
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="headers">The initial metadata to send with the call. This parameter is optional.</param>
      /// <param name="deadline">An optional deadline for the call. The call will be cancelled if deadline is hit.</param>
      /// <param name="cancellationToken">An optional token for canceling the call.</param>
      /// <returns>The response received from the server.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::Cosmos.Vesting.V1Beta1.MsgCreatePermanentLockedAccountResponse CreatePermanentLockedAccount(global::Cosmos.Vesting.V1Beta1.MsgCreatePermanentLockedAccount request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return CreatePermanentLockedAccount(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      /// <summary>
      /// CreatePermanentLockedAccount defines a method that enables creating a permanent
      /// locked account.
      ///
      /// Since: cosmos-sdk 0.46
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="options">The options for the call.</param>
      /// <returns>The response received from the server.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::Cosmos.Vesting.V1Beta1.MsgCreatePermanentLockedAccountResponse CreatePermanentLockedAccount(global::Cosmos.Vesting.V1Beta1.MsgCreatePermanentLockedAccount request, grpc::CallOptions options)
      {
        return CallInvoker.BlockingUnaryCall(__Method_CreatePermanentLockedAccount, null, options, request);
      }
      /// <summary>
      /// CreatePermanentLockedAccount defines a method that enables creating a permanent
      /// locked account.
      ///
      /// Since: cosmos-sdk 0.46
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="headers">The initial metadata to send with the call. This parameter is optional.</param>
      /// <param name="deadline">An optional deadline for the call. The call will be cancelled if deadline is hit.</param>
      /// <param name="cancellationToken">An optional token for canceling the call.</param>
      /// <returns>The call object.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncUnaryCall<global::Cosmos.Vesting.V1Beta1.MsgCreatePermanentLockedAccountResponse> CreatePermanentLockedAccountAsync(global::Cosmos.Vesting.V1Beta1.MsgCreatePermanentLockedAccount request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return CreatePermanentLockedAccountAsync(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      /// <summary>
      /// CreatePermanentLockedAccount defines a method that enables creating a permanent
      /// locked account.
      ///
      /// Since: cosmos-sdk 0.46
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="options">The options for the call.</param>
      /// <returns>The call object.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncUnaryCall<global::Cosmos.Vesting.V1Beta1.MsgCreatePermanentLockedAccountResponse> CreatePermanentLockedAccountAsync(global::Cosmos.Vesting.V1Beta1.MsgCreatePermanentLockedAccount request, grpc::CallOptions options)
      {
        return CallInvoker.AsyncUnaryCall(__Method_CreatePermanentLockedAccount, null, options, request);
      }
      /// <summary>
      /// CreatePeriodicVestingAccount defines a method that enables creating a
      /// periodic vesting account.
      ///
      /// Since: cosmos-sdk 0.46
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="headers">The initial metadata to send with the call. This parameter is optional.</param>
      /// <param name="deadline">An optional deadline for the call. The call will be cancelled if deadline is hit.</param>
      /// <param name="cancellationToken">An optional token for canceling the call.</param>
      /// <returns>The response received from the server.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::Cosmos.Vesting.V1Beta1.MsgCreatePeriodicVestingAccountResponse CreatePeriodicVestingAccount(global::Cosmos.Vesting.V1Beta1.MsgCreatePeriodicVestingAccount request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return CreatePeriodicVestingAccount(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      /// <summary>
      /// CreatePeriodicVestingAccount defines a method that enables creating a
      /// periodic vesting account.
      ///
      /// Since: cosmos-sdk 0.46
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="options">The options for the call.</param>
      /// <returns>The response received from the server.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::Cosmos.Vesting.V1Beta1.MsgCreatePeriodicVestingAccountResponse CreatePeriodicVestingAccount(global::Cosmos.Vesting.V1Beta1.MsgCreatePeriodicVestingAccount request, grpc::CallOptions options)
      {
        return CallInvoker.BlockingUnaryCall(__Method_CreatePeriodicVestingAccount, null, options, request);
      }
      /// <summary>
      /// CreatePeriodicVestingAccount defines a method that enables creating a
      /// periodic vesting account.
      ///
      /// Since: cosmos-sdk 0.46
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="headers">The initial metadata to send with the call. This parameter is optional.</param>
      /// <param name="deadline">An optional deadline for the call. The call will be cancelled if deadline is hit.</param>
      /// <param name="cancellationToken">An optional token for canceling the call.</param>
      /// <returns>The call object.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncUnaryCall<global::Cosmos.Vesting.V1Beta1.MsgCreatePeriodicVestingAccountResponse> CreatePeriodicVestingAccountAsync(global::Cosmos.Vesting.V1Beta1.MsgCreatePeriodicVestingAccount request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return CreatePeriodicVestingAccountAsync(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      /// <summary>
      /// CreatePeriodicVestingAccount defines a method that enables creating a
      /// periodic vesting account.
      ///
      /// Since: cosmos-sdk 0.46
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="options">The options for the call.</param>
      /// <returns>The call object.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncUnaryCall<global::Cosmos.Vesting.V1Beta1.MsgCreatePeriodicVestingAccountResponse> CreatePeriodicVestingAccountAsync(global::Cosmos.Vesting.V1Beta1.MsgCreatePeriodicVestingAccount request, grpc::CallOptions options)
      {
        return CallInvoker.AsyncUnaryCall(__Method_CreatePeriodicVestingAccount, null, options, request);
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
          .AddMethod(__Method_CreateVestingAccount, serviceImpl.CreateVestingAccount)
          .AddMethod(__Method_CreatePermanentLockedAccount, serviceImpl.CreatePermanentLockedAccount)
          .AddMethod(__Method_CreatePeriodicVestingAccount, serviceImpl.CreatePeriodicVestingAccount).Build();
    }

    /// <summary>Register service method with a service binder with or without implementation. Useful when customizing the service binding logic.
    /// Note: this method is part of an experimental API that can change or be removed without any prior notice.</summary>
    /// <param name="serviceBinder">Service methods will be bound by calling <c>AddMethod</c> on this object.</param>
    /// <param name="serviceImpl">An object implementing the server-side handling logic.</param>
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    public static void BindService(grpc::ServiceBinderBase serviceBinder, MsgBase serviceImpl)
    {
      serviceBinder.AddMethod(__Method_CreateVestingAccount, serviceImpl == null ? null : new grpc::UnaryServerMethod<global::Cosmos.Vesting.V1Beta1.MsgCreateVestingAccount, global::Cosmos.Vesting.V1Beta1.MsgCreateVestingAccountResponse>(serviceImpl.CreateVestingAccount));
      serviceBinder.AddMethod(__Method_CreatePermanentLockedAccount, serviceImpl == null ? null : new grpc::UnaryServerMethod<global::Cosmos.Vesting.V1Beta1.MsgCreatePermanentLockedAccount, global::Cosmos.Vesting.V1Beta1.MsgCreatePermanentLockedAccountResponse>(serviceImpl.CreatePermanentLockedAccount));
      serviceBinder.AddMethod(__Method_CreatePeriodicVestingAccount, serviceImpl == null ? null : new grpc::UnaryServerMethod<global::Cosmos.Vesting.V1Beta1.MsgCreatePeriodicVestingAccount, global::Cosmos.Vesting.V1Beta1.MsgCreatePeriodicVestingAccountResponse>(serviceImpl.CreatePeriodicVestingAccount));
    }

  }
}
#endregion
