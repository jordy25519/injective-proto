// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: cosmos/base/node/v1beta1/query.proto

#include "cosmos/base/node/v1beta1/query.pb.h"
#include "cosmos/base/node/v1beta1/query.grpc.pb.h"

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
namespace cosmos {
namespace base {
namespace node {
namespace v1beta1 {

static const char* Service_method_names[] = {
  "/cosmos.base.node.v1beta1.Service/Config",
};

std::unique_ptr< Service::Stub> Service::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Service::Stub> stub(new Service::Stub(channel, options));
  return stub;
}

Service::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Config_(Service_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Service::Stub::Config(::grpc::ClientContext* context, const ::cosmos::base::node::v1beta1::ConfigRequest& request, ::cosmos::base::node::v1beta1::ConfigResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::cosmos::base::node::v1beta1::ConfigRequest, ::cosmos::base::node::v1beta1::ConfigResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Config_, context, request, response);
}

void Service::Stub::async::Config(::grpc::ClientContext* context, const ::cosmos::base::node::v1beta1::ConfigRequest* request, ::cosmos::base::node::v1beta1::ConfigResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::cosmos::base::node::v1beta1::ConfigRequest, ::cosmos::base::node::v1beta1::ConfigResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Config_, context, request, response, std::move(f));
}

void Service::Stub::async::Config(::grpc::ClientContext* context, const ::cosmos::base::node::v1beta1::ConfigRequest* request, ::cosmos::base::node::v1beta1::ConfigResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Config_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::cosmos::base::node::v1beta1::ConfigResponse>* Service::Stub::PrepareAsyncConfigRaw(::grpc::ClientContext* context, const ::cosmos::base::node::v1beta1::ConfigRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::cosmos::base::node::v1beta1::ConfigResponse, ::cosmos::base::node::v1beta1::ConfigRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Config_, context, request);
}

::grpc::ClientAsyncResponseReader< ::cosmos::base::node::v1beta1::ConfigResponse>* Service::Stub::AsyncConfigRaw(::grpc::ClientContext* context, const ::cosmos::base::node::v1beta1::ConfigRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncConfigRaw(context, request, cq);
  result->StartCall();
  return result;
}

Service::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Service_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Service::Service, ::cosmos::base::node::v1beta1::ConfigRequest, ::cosmos::base::node::v1beta1::ConfigResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Service::Service* service,
             ::grpc::ServerContext* ctx,
             const ::cosmos::base::node::v1beta1::ConfigRequest* req,
             ::cosmos::base::node::v1beta1::ConfigResponse* resp) {
               return service->Config(ctx, req, resp);
             }, this)));
}

Service::Service::~Service() {
}

::grpc::Status Service::Service::Config(::grpc::ServerContext* context, const ::cosmos::base::node::v1beta1::ConfigRequest* request, ::cosmos::base::node::v1beta1::ConfigResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace cosmos
}  // namespace base
}  // namespace node
}  // namespace v1beta1

