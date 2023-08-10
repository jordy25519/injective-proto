// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: ibc/applications/interchain_accounts/host/v1/query.proto

#include "ibc/applications/interchain_accounts/host/v1/query.pb.h"
#include "ibc/applications/interchain_accounts/host/v1/query.grpc.pb.h"

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
namespace ibc {
namespace applications {
namespace interchain_accounts {
namespace host {
namespace v1 {

static const char* Query_method_names[] = {
  "/ibc.applications.interchain_accounts.host.v1.Query/Params",
};

std::unique_ptr< Query::Stub> Query::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Query::Stub> stub(new Query::Stub(channel, options));
  return stub;
}

Query::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Params_(Query_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Query::Stub::Params(::grpc::ClientContext* context, const ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest& request, ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest, ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Params_, context, request, response);
}

void Query::Stub::async::Params(::grpc::ClientContext* context, const ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest* request, ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest, ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Params_, context, request, response, std::move(f));
}

void Query::Stub::async::Params(::grpc::ClientContext* context, const ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest* request, ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Params_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse>* Query::Stub::PrepareAsyncParamsRaw(::grpc::ClientContext* context, const ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse, ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Params_, context, request);
}

::grpc::ClientAsyncResponseReader< ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse>* Query::Stub::AsyncParamsRaw(::grpc::ClientContext* context, const ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncParamsRaw(context, request, cq);
  result->StartCall();
  return result;
}

Query::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Query_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Query::Service, ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest, ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Query::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest* req,
             ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse* resp) {
               return service->Params(ctx, req, resp);
             }, this)));
}

Query::Service::~Service() {
}

::grpc::Status Query::Service::Params(::grpc::ServerContext* context, const ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest* request, ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace ibc
}  // namespace applications
}  // namespace interchain_accounts
}  // namespace host
}  // namespace v1

