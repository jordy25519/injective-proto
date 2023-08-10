// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: cosmos/slashing/v1beta1/query.proto

#include "cosmos/slashing/v1beta1/query.pb.h"
#include "cosmos/slashing/v1beta1/query.grpc.pb.h"

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
namespace slashing {
namespace v1beta1 {

static const char* Query_method_names[] = {
  "/cosmos.slashing.v1beta1.Query/Params",
  "/cosmos.slashing.v1beta1.Query/SigningInfo",
  "/cosmos.slashing.v1beta1.Query/SigningInfos",
};

std::unique_ptr< Query::Stub> Query::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Query::Stub> stub(new Query::Stub(channel, options));
  return stub;
}

Query::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Params_(Query_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SigningInfo_(Query_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SigningInfos_(Query_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Query::Stub::Params(::grpc::ClientContext* context, const ::cosmos::slashing::v1beta1::QueryParamsRequest& request, ::cosmos::slashing::v1beta1::QueryParamsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::cosmos::slashing::v1beta1::QueryParamsRequest, ::cosmos::slashing::v1beta1::QueryParamsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Params_, context, request, response);
}

void Query::Stub::async::Params(::grpc::ClientContext* context, const ::cosmos::slashing::v1beta1::QueryParamsRequest* request, ::cosmos::slashing::v1beta1::QueryParamsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::cosmos::slashing::v1beta1::QueryParamsRequest, ::cosmos::slashing::v1beta1::QueryParamsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Params_, context, request, response, std::move(f));
}

void Query::Stub::async::Params(::grpc::ClientContext* context, const ::cosmos::slashing::v1beta1::QueryParamsRequest* request, ::cosmos::slashing::v1beta1::QueryParamsResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Params_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::cosmos::slashing::v1beta1::QueryParamsResponse>* Query::Stub::PrepareAsyncParamsRaw(::grpc::ClientContext* context, const ::cosmos::slashing::v1beta1::QueryParamsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::cosmos::slashing::v1beta1::QueryParamsResponse, ::cosmos::slashing::v1beta1::QueryParamsRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Params_, context, request);
}

::grpc::ClientAsyncResponseReader< ::cosmos::slashing::v1beta1::QueryParamsResponse>* Query::Stub::AsyncParamsRaw(::grpc::ClientContext* context, const ::cosmos::slashing::v1beta1::QueryParamsRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncParamsRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Query::Stub::SigningInfo(::grpc::ClientContext* context, const ::cosmos::slashing::v1beta1::QuerySigningInfoRequest& request, ::cosmos::slashing::v1beta1::QuerySigningInfoResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::cosmos::slashing::v1beta1::QuerySigningInfoRequest, ::cosmos::slashing::v1beta1::QuerySigningInfoResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_SigningInfo_, context, request, response);
}

void Query::Stub::async::SigningInfo(::grpc::ClientContext* context, const ::cosmos::slashing::v1beta1::QuerySigningInfoRequest* request, ::cosmos::slashing::v1beta1::QuerySigningInfoResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::cosmos::slashing::v1beta1::QuerySigningInfoRequest, ::cosmos::slashing::v1beta1::QuerySigningInfoResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SigningInfo_, context, request, response, std::move(f));
}

void Query::Stub::async::SigningInfo(::grpc::ClientContext* context, const ::cosmos::slashing::v1beta1::QuerySigningInfoRequest* request, ::cosmos::slashing::v1beta1::QuerySigningInfoResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SigningInfo_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::cosmos::slashing::v1beta1::QuerySigningInfoResponse>* Query::Stub::PrepareAsyncSigningInfoRaw(::grpc::ClientContext* context, const ::cosmos::slashing::v1beta1::QuerySigningInfoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::cosmos::slashing::v1beta1::QuerySigningInfoResponse, ::cosmos::slashing::v1beta1::QuerySigningInfoRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_SigningInfo_, context, request);
}

::grpc::ClientAsyncResponseReader< ::cosmos::slashing::v1beta1::QuerySigningInfoResponse>* Query::Stub::AsyncSigningInfoRaw(::grpc::ClientContext* context, const ::cosmos::slashing::v1beta1::QuerySigningInfoRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSigningInfoRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Query::Stub::SigningInfos(::grpc::ClientContext* context, const ::cosmos::slashing::v1beta1::QuerySigningInfosRequest& request, ::cosmos::slashing::v1beta1::QuerySigningInfosResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::cosmos::slashing::v1beta1::QuerySigningInfosRequest, ::cosmos::slashing::v1beta1::QuerySigningInfosResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_SigningInfos_, context, request, response);
}

void Query::Stub::async::SigningInfos(::grpc::ClientContext* context, const ::cosmos::slashing::v1beta1::QuerySigningInfosRequest* request, ::cosmos::slashing::v1beta1::QuerySigningInfosResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::cosmos::slashing::v1beta1::QuerySigningInfosRequest, ::cosmos::slashing::v1beta1::QuerySigningInfosResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SigningInfos_, context, request, response, std::move(f));
}

void Query::Stub::async::SigningInfos(::grpc::ClientContext* context, const ::cosmos::slashing::v1beta1::QuerySigningInfosRequest* request, ::cosmos::slashing::v1beta1::QuerySigningInfosResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SigningInfos_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::cosmos::slashing::v1beta1::QuerySigningInfosResponse>* Query::Stub::PrepareAsyncSigningInfosRaw(::grpc::ClientContext* context, const ::cosmos::slashing::v1beta1::QuerySigningInfosRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::cosmos::slashing::v1beta1::QuerySigningInfosResponse, ::cosmos::slashing::v1beta1::QuerySigningInfosRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_SigningInfos_, context, request);
}

::grpc::ClientAsyncResponseReader< ::cosmos::slashing::v1beta1::QuerySigningInfosResponse>* Query::Stub::AsyncSigningInfosRaw(::grpc::ClientContext* context, const ::cosmos::slashing::v1beta1::QuerySigningInfosRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSigningInfosRaw(context, request, cq);
  result->StartCall();
  return result;
}

Query::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Query_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Query::Service, ::cosmos::slashing::v1beta1::QueryParamsRequest, ::cosmos::slashing::v1beta1::QueryParamsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Query::Service* service,
             ::grpc::ServerContext* ctx,
             const ::cosmos::slashing::v1beta1::QueryParamsRequest* req,
             ::cosmos::slashing::v1beta1::QueryParamsResponse* resp) {
               return service->Params(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Query_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Query::Service, ::cosmos::slashing::v1beta1::QuerySigningInfoRequest, ::cosmos::slashing::v1beta1::QuerySigningInfoResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Query::Service* service,
             ::grpc::ServerContext* ctx,
             const ::cosmos::slashing::v1beta1::QuerySigningInfoRequest* req,
             ::cosmos::slashing::v1beta1::QuerySigningInfoResponse* resp) {
               return service->SigningInfo(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Query_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Query::Service, ::cosmos::slashing::v1beta1::QuerySigningInfosRequest, ::cosmos::slashing::v1beta1::QuerySigningInfosResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Query::Service* service,
             ::grpc::ServerContext* ctx,
             const ::cosmos::slashing::v1beta1::QuerySigningInfosRequest* req,
             ::cosmos::slashing::v1beta1::QuerySigningInfosResponse* resp) {
               return service->SigningInfos(ctx, req, resp);
             }, this)));
}

Query::Service::~Service() {
}

::grpc::Status Query::Service::Params(::grpc::ServerContext* context, const ::cosmos::slashing::v1beta1::QueryParamsRequest* request, ::cosmos::slashing::v1beta1::QueryParamsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Query::Service::SigningInfo(::grpc::ServerContext* context, const ::cosmos::slashing::v1beta1::QuerySigningInfoRequest* request, ::cosmos::slashing::v1beta1::QuerySigningInfoResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Query::Service::SigningInfos(::grpc::ServerContext* context, const ::cosmos::slashing::v1beta1::QuerySigningInfosRequest* request, ::cosmos::slashing::v1beta1::QuerySigningInfosResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace cosmos
}  // namespace slashing
}  // namespace v1beta1

