// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: tendermint/rpc/grpc/types.proto

#include "tendermint/rpc/grpc/types.pb.h"
#include "tendermint/rpc/grpc/types.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
namespace tendermint {
namespace rpc {
namespace grpc {

static const char* BroadcastAPI_method_names[] = {
  "/tendermint.rpc.grpc.BroadcastAPI/Ping",
  "/tendermint.rpc.grpc.BroadcastAPI/BroadcastTx",
};

std::unique_ptr< BroadcastAPI::Stub> BroadcastAPI::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< BroadcastAPI::Stub> stub(new BroadcastAPI::Stub(channel, options));
  return stub;
}

BroadcastAPI::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Ping_(BroadcastAPI_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_BroadcastTx_(BroadcastAPI_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status BroadcastAPI::Stub::Ping(::grpc::ClientContext* context, const ::tendermint::rpc::grpc::RequestPing& request, ::tendermint::rpc::grpc::ResponsePing* response) {
  return ::grpc::internal::BlockingUnaryCall< ::tendermint::rpc::grpc::RequestPing, ::tendermint::rpc::grpc::ResponsePing, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Ping_, context, request, response);
}

void BroadcastAPI::Stub::async::Ping(::grpc::ClientContext* context, const ::tendermint::rpc::grpc::RequestPing* request, ::tendermint::rpc::grpc::ResponsePing* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::tendermint::rpc::grpc::RequestPing, ::tendermint::rpc::grpc::ResponsePing, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Ping_, context, request, response, std::move(f));
}

void BroadcastAPI::Stub::async::Ping(::grpc::ClientContext* context, const ::tendermint::rpc::grpc::RequestPing* request, ::tendermint::rpc::grpc::ResponsePing* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Ping_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::tendermint::rpc::grpc::ResponsePing>* BroadcastAPI::Stub::PrepareAsyncPingRaw(::grpc::ClientContext* context, const ::tendermint::rpc::grpc::RequestPing& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::tendermint::rpc::grpc::ResponsePing, ::tendermint::rpc::grpc::RequestPing, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Ping_, context, request);
}

::grpc::ClientAsyncResponseReader< ::tendermint::rpc::grpc::ResponsePing>* BroadcastAPI::Stub::AsyncPingRaw(::grpc::ClientContext* context, const ::tendermint::rpc::grpc::RequestPing& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncPingRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status BroadcastAPI::Stub::BroadcastTx(::grpc::ClientContext* context, const ::tendermint::rpc::grpc::RequestBroadcastTx& request, ::tendermint::rpc::grpc::ResponseBroadcastTx* response) {
  return ::grpc::internal::BlockingUnaryCall< ::tendermint::rpc::grpc::RequestBroadcastTx, ::tendermint::rpc::grpc::ResponseBroadcastTx, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_BroadcastTx_, context, request, response);
}

void BroadcastAPI::Stub::async::BroadcastTx(::grpc::ClientContext* context, const ::tendermint::rpc::grpc::RequestBroadcastTx* request, ::tendermint::rpc::grpc::ResponseBroadcastTx* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::tendermint::rpc::grpc::RequestBroadcastTx, ::tendermint::rpc::grpc::ResponseBroadcastTx, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_BroadcastTx_, context, request, response, std::move(f));
}

void BroadcastAPI::Stub::async::BroadcastTx(::grpc::ClientContext* context, const ::tendermint::rpc::grpc::RequestBroadcastTx* request, ::tendermint::rpc::grpc::ResponseBroadcastTx* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_BroadcastTx_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::tendermint::rpc::grpc::ResponseBroadcastTx>* BroadcastAPI::Stub::PrepareAsyncBroadcastTxRaw(::grpc::ClientContext* context, const ::tendermint::rpc::grpc::RequestBroadcastTx& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::tendermint::rpc::grpc::ResponseBroadcastTx, ::tendermint::rpc::grpc::RequestBroadcastTx, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_BroadcastTx_, context, request);
}

::grpc::ClientAsyncResponseReader< ::tendermint::rpc::grpc::ResponseBroadcastTx>* BroadcastAPI::Stub::AsyncBroadcastTxRaw(::grpc::ClientContext* context, const ::tendermint::rpc::grpc::RequestBroadcastTx& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncBroadcastTxRaw(context, request, cq);
  result->StartCall();
  return result;
}

BroadcastAPI::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      BroadcastAPI_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< BroadcastAPI::Service, ::tendermint::rpc::grpc::RequestPing, ::tendermint::rpc::grpc::ResponsePing, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](BroadcastAPI::Service* service,
             ::grpc::ServerContext* ctx,
             const ::tendermint::rpc::grpc::RequestPing* req,
             ::tendermint::rpc::grpc::ResponsePing* resp) {
               return service->Ping(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      BroadcastAPI_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< BroadcastAPI::Service, ::tendermint::rpc::grpc::RequestBroadcastTx, ::tendermint::rpc::grpc::ResponseBroadcastTx, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](BroadcastAPI::Service* service,
             ::grpc::ServerContext* ctx,
             const ::tendermint::rpc::grpc::RequestBroadcastTx* req,
             ::tendermint::rpc::grpc::ResponseBroadcastTx* resp) {
               return service->BroadcastTx(ctx, req, resp);
             }, this)));
}

BroadcastAPI::Service::~Service() {
}

::grpc::Status BroadcastAPI::Service::Ping(::grpc::ServerContext* context, const ::tendermint::rpc::grpc::RequestPing* request, ::tendermint::rpc::grpc::ResponsePing* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status BroadcastAPI::Service::BroadcastTx(::grpc::ServerContext* context, const ::tendermint::rpc::grpc::RequestBroadcastTx* request, ::tendermint::rpc::grpc::ResponseBroadcastTx* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace tendermint
}  // namespace rpc
}  // namespace grpc

