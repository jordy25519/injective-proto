// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: cosmos/authz/v1beta1/query.proto

#include "cosmos/authz/v1beta1/query.pb.h"
#include "cosmos/authz/v1beta1/query.grpc.pb.h"

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
namespace authz {
namespace v1beta1 {

static const char* Query_method_names[] = {
  "/cosmos.authz.v1beta1.Query/Grants",
  "/cosmos.authz.v1beta1.Query/GranterGrants",
  "/cosmos.authz.v1beta1.Query/GranteeGrants",
};

std::unique_ptr< Query::Stub> Query::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Query::Stub> stub(new Query::Stub(channel, options));
  return stub;
}

Query::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Grants_(Query_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GranterGrants_(Query_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GranteeGrants_(Query_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Query::Stub::Grants(::grpc::ClientContext* context, const ::cosmos::authz::v1beta1::QueryGrantsRequest& request, ::cosmos::authz::v1beta1::QueryGrantsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::cosmos::authz::v1beta1::QueryGrantsRequest, ::cosmos::authz::v1beta1::QueryGrantsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Grants_, context, request, response);
}

void Query::Stub::async::Grants(::grpc::ClientContext* context, const ::cosmos::authz::v1beta1::QueryGrantsRequest* request, ::cosmos::authz::v1beta1::QueryGrantsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::cosmos::authz::v1beta1::QueryGrantsRequest, ::cosmos::authz::v1beta1::QueryGrantsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Grants_, context, request, response, std::move(f));
}

void Query::Stub::async::Grants(::grpc::ClientContext* context, const ::cosmos::authz::v1beta1::QueryGrantsRequest* request, ::cosmos::authz::v1beta1::QueryGrantsResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Grants_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::cosmos::authz::v1beta1::QueryGrantsResponse>* Query::Stub::PrepareAsyncGrantsRaw(::grpc::ClientContext* context, const ::cosmos::authz::v1beta1::QueryGrantsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::cosmos::authz::v1beta1::QueryGrantsResponse, ::cosmos::authz::v1beta1::QueryGrantsRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Grants_, context, request);
}

::grpc::ClientAsyncResponseReader< ::cosmos::authz::v1beta1::QueryGrantsResponse>* Query::Stub::AsyncGrantsRaw(::grpc::ClientContext* context, const ::cosmos::authz::v1beta1::QueryGrantsRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGrantsRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Query::Stub::GranterGrants(::grpc::ClientContext* context, const ::cosmos::authz::v1beta1::QueryGranterGrantsRequest& request, ::cosmos::authz::v1beta1::QueryGranterGrantsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::cosmos::authz::v1beta1::QueryGranterGrantsRequest, ::cosmos::authz::v1beta1::QueryGranterGrantsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GranterGrants_, context, request, response);
}

void Query::Stub::async::GranterGrants(::grpc::ClientContext* context, const ::cosmos::authz::v1beta1::QueryGranterGrantsRequest* request, ::cosmos::authz::v1beta1::QueryGranterGrantsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::cosmos::authz::v1beta1::QueryGranterGrantsRequest, ::cosmos::authz::v1beta1::QueryGranterGrantsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GranterGrants_, context, request, response, std::move(f));
}

void Query::Stub::async::GranterGrants(::grpc::ClientContext* context, const ::cosmos::authz::v1beta1::QueryGranterGrantsRequest* request, ::cosmos::authz::v1beta1::QueryGranterGrantsResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GranterGrants_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::cosmos::authz::v1beta1::QueryGranterGrantsResponse>* Query::Stub::PrepareAsyncGranterGrantsRaw(::grpc::ClientContext* context, const ::cosmos::authz::v1beta1::QueryGranterGrantsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::cosmos::authz::v1beta1::QueryGranterGrantsResponse, ::cosmos::authz::v1beta1::QueryGranterGrantsRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GranterGrants_, context, request);
}

::grpc::ClientAsyncResponseReader< ::cosmos::authz::v1beta1::QueryGranterGrantsResponse>* Query::Stub::AsyncGranterGrantsRaw(::grpc::ClientContext* context, const ::cosmos::authz::v1beta1::QueryGranterGrantsRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGranterGrantsRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Query::Stub::GranteeGrants(::grpc::ClientContext* context, const ::cosmos::authz::v1beta1::QueryGranteeGrantsRequest& request, ::cosmos::authz::v1beta1::QueryGranteeGrantsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::cosmos::authz::v1beta1::QueryGranteeGrantsRequest, ::cosmos::authz::v1beta1::QueryGranteeGrantsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GranteeGrants_, context, request, response);
}

void Query::Stub::async::GranteeGrants(::grpc::ClientContext* context, const ::cosmos::authz::v1beta1::QueryGranteeGrantsRequest* request, ::cosmos::authz::v1beta1::QueryGranteeGrantsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::cosmos::authz::v1beta1::QueryGranteeGrantsRequest, ::cosmos::authz::v1beta1::QueryGranteeGrantsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GranteeGrants_, context, request, response, std::move(f));
}

void Query::Stub::async::GranteeGrants(::grpc::ClientContext* context, const ::cosmos::authz::v1beta1::QueryGranteeGrantsRequest* request, ::cosmos::authz::v1beta1::QueryGranteeGrantsResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GranteeGrants_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::cosmos::authz::v1beta1::QueryGranteeGrantsResponse>* Query::Stub::PrepareAsyncGranteeGrantsRaw(::grpc::ClientContext* context, const ::cosmos::authz::v1beta1::QueryGranteeGrantsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::cosmos::authz::v1beta1::QueryGranteeGrantsResponse, ::cosmos::authz::v1beta1::QueryGranteeGrantsRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GranteeGrants_, context, request);
}

::grpc::ClientAsyncResponseReader< ::cosmos::authz::v1beta1::QueryGranteeGrantsResponse>* Query::Stub::AsyncGranteeGrantsRaw(::grpc::ClientContext* context, const ::cosmos::authz::v1beta1::QueryGranteeGrantsRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGranteeGrantsRaw(context, request, cq);
  result->StartCall();
  return result;
}

Query::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Query_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Query::Service, ::cosmos::authz::v1beta1::QueryGrantsRequest, ::cosmos::authz::v1beta1::QueryGrantsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Query::Service* service,
             ::grpc::ServerContext* ctx,
             const ::cosmos::authz::v1beta1::QueryGrantsRequest* req,
             ::cosmos::authz::v1beta1::QueryGrantsResponse* resp) {
               return service->Grants(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Query_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Query::Service, ::cosmos::authz::v1beta1::QueryGranterGrantsRequest, ::cosmos::authz::v1beta1::QueryGranterGrantsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Query::Service* service,
             ::grpc::ServerContext* ctx,
             const ::cosmos::authz::v1beta1::QueryGranterGrantsRequest* req,
             ::cosmos::authz::v1beta1::QueryGranterGrantsResponse* resp) {
               return service->GranterGrants(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Query_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Query::Service, ::cosmos::authz::v1beta1::QueryGranteeGrantsRequest, ::cosmos::authz::v1beta1::QueryGranteeGrantsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Query::Service* service,
             ::grpc::ServerContext* ctx,
             const ::cosmos::authz::v1beta1::QueryGranteeGrantsRequest* req,
             ::cosmos::authz::v1beta1::QueryGranteeGrantsResponse* resp) {
               return service->GranteeGrants(ctx, req, resp);
             }, this)));
}

Query::Service::~Service() {
}

::grpc::Status Query::Service::Grants(::grpc::ServerContext* context, const ::cosmos::authz::v1beta1::QueryGrantsRequest* request, ::cosmos::authz::v1beta1::QueryGrantsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Query::Service::GranterGrants(::grpc::ServerContext* context, const ::cosmos::authz::v1beta1::QueryGranterGrantsRequest* request, ::cosmos::authz::v1beta1::QueryGranterGrantsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Query::Service::GranteeGrants(::grpc::ServerContext* context, const ::cosmos::authz::v1beta1::QueryGranteeGrantsRequest* request, ::cosmos::authz::v1beta1::QueryGranteeGrantsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace cosmos
}  // namespace authz
}  // namespace v1beta1

