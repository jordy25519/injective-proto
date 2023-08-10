// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: cosmos/upgrade/v1beta1/query.proto

#include "cosmos/upgrade/v1beta1/query.pb.h"
#include "cosmos/upgrade/v1beta1/query.grpc.pb.h"

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
namespace upgrade {
namespace v1beta1 {

static const char* Query_method_names[] = {
  "/cosmos.upgrade.v1beta1.Query/CurrentPlan",
  "/cosmos.upgrade.v1beta1.Query/AppliedPlan",
  "/cosmos.upgrade.v1beta1.Query/UpgradedConsensusState",
  "/cosmos.upgrade.v1beta1.Query/ModuleVersions",
  "/cosmos.upgrade.v1beta1.Query/Authority",
};

std::unique_ptr< Query::Stub> Query::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Query::Stub> stub(new Query::Stub(channel, options));
  return stub;
}

Query::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_CurrentPlan_(Query_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_AppliedPlan_(Query_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpgradedConsensusState_(Query_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ModuleVersions_(Query_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Authority_(Query_method_names[4], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Query::Stub::CurrentPlan(::grpc::ClientContext* context, const ::cosmos::upgrade::v1beta1::QueryCurrentPlanRequest& request, ::cosmos::upgrade::v1beta1::QueryCurrentPlanResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::cosmos::upgrade::v1beta1::QueryCurrentPlanRequest, ::cosmos::upgrade::v1beta1::QueryCurrentPlanResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_CurrentPlan_, context, request, response);
}

void Query::Stub::async::CurrentPlan(::grpc::ClientContext* context, const ::cosmos::upgrade::v1beta1::QueryCurrentPlanRequest* request, ::cosmos::upgrade::v1beta1::QueryCurrentPlanResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::cosmos::upgrade::v1beta1::QueryCurrentPlanRequest, ::cosmos::upgrade::v1beta1::QueryCurrentPlanResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CurrentPlan_, context, request, response, std::move(f));
}

void Query::Stub::async::CurrentPlan(::grpc::ClientContext* context, const ::cosmos::upgrade::v1beta1::QueryCurrentPlanRequest* request, ::cosmos::upgrade::v1beta1::QueryCurrentPlanResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CurrentPlan_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::cosmos::upgrade::v1beta1::QueryCurrentPlanResponse>* Query::Stub::PrepareAsyncCurrentPlanRaw(::grpc::ClientContext* context, const ::cosmos::upgrade::v1beta1::QueryCurrentPlanRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::cosmos::upgrade::v1beta1::QueryCurrentPlanResponse, ::cosmos::upgrade::v1beta1::QueryCurrentPlanRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_CurrentPlan_, context, request);
}

::grpc::ClientAsyncResponseReader< ::cosmos::upgrade::v1beta1::QueryCurrentPlanResponse>* Query::Stub::AsyncCurrentPlanRaw(::grpc::ClientContext* context, const ::cosmos::upgrade::v1beta1::QueryCurrentPlanRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncCurrentPlanRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Query::Stub::AppliedPlan(::grpc::ClientContext* context, const ::cosmos::upgrade::v1beta1::QueryAppliedPlanRequest& request, ::cosmos::upgrade::v1beta1::QueryAppliedPlanResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::cosmos::upgrade::v1beta1::QueryAppliedPlanRequest, ::cosmos::upgrade::v1beta1::QueryAppliedPlanResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_AppliedPlan_, context, request, response);
}

void Query::Stub::async::AppliedPlan(::grpc::ClientContext* context, const ::cosmos::upgrade::v1beta1::QueryAppliedPlanRequest* request, ::cosmos::upgrade::v1beta1::QueryAppliedPlanResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::cosmos::upgrade::v1beta1::QueryAppliedPlanRequest, ::cosmos::upgrade::v1beta1::QueryAppliedPlanResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_AppliedPlan_, context, request, response, std::move(f));
}

void Query::Stub::async::AppliedPlan(::grpc::ClientContext* context, const ::cosmos::upgrade::v1beta1::QueryAppliedPlanRequest* request, ::cosmos::upgrade::v1beta1::QueryAppliedPlanResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_AppliedPlan_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::cosmos::upgrade::v1beta1::QueryAppliedPlanResponse>* Query::Stub::PrepareAsyncAppliedPlanRaw(::grpc::ClientContext* context, const ::cosmos::upgrade::v1beta1::QueryAppliedPlanRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::cosmos::upgrade::v1beta1::QueryAppliedPlanResponse, ::cosmos::upgrade::v1beta1::QueryAppliedPlanRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_AppliedPlan_, context, request);
}

::grpc::ClientAsyncResponseReader< ::cosmos::upgrade::v1beta1::QueryAppliedPlanResponse>* Query::Stub::AsyncAppliedPlanRaw(::grpc::ClientContext* context, const ::cosmos::upgrade::v1beta1::QueryAppliedPlanRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncAppliedPlanRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Query::Stub::UpgradedConsensusState(::grpc::ClientContext* context, const ::cosmos::upgrade::v1beta1::QueryUpgradedConsensusStateRequest& request, ::cosmos::upgrade::v1beta1::QueryUpgradedConsensusStateResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::cosmos::upgrade::v1beta1::QueryUpgradedConsensusStateRequest, ::cosmos::upgrade::v1beta1::QueryUpgradedConsensusStateResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_UpgradedConsensusState_, context, request, response);
}

void Query::Stub::async::UpgradedConsensusState(::grpc::ClientContext* context, const ::cosmos::upgrade::v1beta1::QueryUpgradedConsensusStateRequest* request, ::cosmos::upgrade::v1beta1::QueryUpgradedConsensusStateResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::cosmos::upgrade::v1beta1::QueryUpgradedConsensusStateRequest, ::cosmos::upgrade::v1beta1::QueryUpgradedConsensusStateResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_UpgradedConsensusState_, context, request, response, std::move(f));
}

void Query::Stub::async::UpgradedConsensusState(::grpc::ClientContext* context, const ::cosmos::upgrade::v1beta1::QueryUpgradedConsensusStateRequest* request, ::cosmos::upgrade::v1beta1::QueryUpgradedConsensusStateResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_UpgradedConsensusState_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::cosmos::upgrade::v1beta1::QueryUpgradedConsensusStateResponse>* Query::Stub::PrepareAsyncUpgradedConsensusStateRaw(::grpc::ClientContext* context, const ::cosmos::upgrade::v1beta1::QueryUpgradedConsensusStateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::cosmos::upgrade::v1beta1::QueryUpgradedConsensusStateResponse, ::cosmos::upgrade::v1beta1::QueryUpgradedConsensusStateRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_UpgradedConsensusState_, context, request);
}

::grpc::ClientAsyncResponseReader< ::cosmos::upgrade::v1beta1::QueryUpgradedConsensusStateResponse>* Query::Stub::AsyncUpgradedConsensusStateRaw(::grpc::ClientContext* context, const ::cosmos::upgrade::v1beta1::QueryUpgradedConsensusStateRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncUpgradedConsensusStateRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Query::Stub::ModuleVersions(::grpc::ClientContext* context, const ::cosmos::upgrade::v1beta1::QueryModuleVersionsRequest& request, ::cosmos::upgrade::v1beta1::QueryModuleVersionsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::cosmos::upgrade::v1beta1::QueryModuleVersionsRequest, ::cosmos::upgrade::v1beta1::QueryModuleVersionsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_ModuleVersions_, context, request, response);
}

void Query::Stub::async::ModuleVersions(::grpc::ClientContext* context, const ::cosmos::upgrade::v1beta1::QueryModuleVersionsRequest* request, ::cosmos::upgrade::v1beta1::QueryModuleVersionsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::cosmos::upgrade::v1beta1::QueryModuleVersionsRequest, ::cosmos::upgrade::v1beta1::QueryModuleVersionsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ModuleVersions_, context, request, response, std::move(f));
}

void Query::Stub::async::ModuleVersions(::grpc::ClientContext* context, const ::cosmos::upgrade::v1beta1::QueryModuleVersionsRequest* request, ::cosmos::upgrade::v1beta1::QueryModuleVersionsResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ModuleVersions_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::cosmos::upgrade::v1beta1::QueryModuleVersionsResponse>* Query::Stub::PrepareAsyncModuleVersionsRaw(::grpc::ClientContext* context, const ::cosmos::upgrade::v1beta1::QueryModuleVersionsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::cosmos::upgrade::v1beta1::QueryModuleVersionsResponse, ::cosmos::upgrade::v1beta1::QueryModuleVersionsRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_ModuleVersions_, context, request);
}

::grpc::ClientAsyncResponseReader< ::cosmos::upgrade::v1beta1::QueryModuleVersionsResponse>* Query::Stub::AsyncModuleVersionsRaw(::grpc::ClientContext* context, const ::cosmos::upgrade::v1beta1::QueryModuleVersionsRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncModuleVersionsRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Query::Stub::Authority(::grpc::ClientContext* context, const ::cosmos::upgrade::v1beta1::QueryAuthorityRequest& request, ::cosmos::upgrade::v1beta1::QueryAuthorityResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::cosmos::upgrade::v1beta1::QueryAuthorityRequest, ::cosmos::upgrade::v1beta1::QueryAuthorityResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Authority_, context, request, response);
}

void Query::Stub::async::Authority(::grpc::ClientContext* context, const ::cosmos::upgrade::v1beta1::QueryAuthorityRequest* request, ::cosmos::upgrade::v1beta1::QueryAuthorityResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::cosmos::upgrade::v1beta1::QueryAuthorityRequest, ::cosmos::upgrade::v1beta1::QueryAuthorityResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Authority_, context, request, response, std::move(f));
}

void Query::Stub::async::Authority(::grpc::ClientContext* context, const ::cosmos::upgrade::v1beta1::QueryAuthorityRequest* request, ::cosmos::upgrade::v1beta1::QueryAuthorityResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Authority_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::cosmos::upgrade::v1beta1::QueryAuthorityResponse>* Query::Stub::PrepareAsyncAuthorityRaw(::grpc::ClientContext* context, const ::cosmos::upgrade::v1beta1::QueryAuthorityRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::cosmos::upgrade::v1beta1::QueryAuthorityResponse, ::cosmos::upgrade::v1beta1::QueryAuthorityRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Authority_, context, request);
}

::grpc::ClientAsyncResponseReader< ::cosmos::upgrade::v1beta1::QueryAuthorityResponse>* Query::Stub::AsyncAuthorityRaw(::grpc::ClientContext* context, const ::cosmos::upgrade::v1beta1::QueryAuthorityRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncAuthorityRaw(context, request, cq);
  result->StartCall();
  return result;
}

Query::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Query_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Query::Service, ::cosmos::upgrade::v1beta1::QueryCurrentPlanRequest, ::cosmos::upgrade::v1beta1::QueryCurrentPlanResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Query::Service* service,
             ::grpc::ServerContext* ctx,
             const ::cosmos::upgrade::v1beta1::QueryCurrentPlanRequest* req,
             ::cosmos::upgrade::v1beta1::QueryCurrentPlanResponse* resp) {
               return service->CurrentPlan(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Query_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Query::Service, ::cosmos::upgrade::v1beta1::QueryAppliedPlanRequest, ::cosmos::upgrade::v1beta1::QueryAppliedPlanResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Query::Service* service,
             ::grpc::ServerContext* ctx,
             const ::cosmos::upgrade::v1beta1::QueryAppliedPlanRequest* req,
             ::cosmos::upgrade::v1beta1::QueryAppliedPlanResponse* resp) {
               return service->AppliedPlan(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Query_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Query::Service, ::cosmos::upgrade::v1beta1::QueryUpgradedConsensusStateRequest, ::cosmos::upgrade::v1beta1::QueryUpgradedConsensusStateResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Query::Service* service,
             ::grpc::ServerContext* ctx,
             const ::cosmos::upgrade::v1beta1::QueryUpgradedConsensusStateRequest* req,
             ::cosmos::upgrade::v1beta1::QueryUpgradedConsensusStateResponse* resp) {
               return service->UpgradedConsensusState(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Query_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Query::Service, ::cosmos::upgrade::v1beta1::QueryModuleVersionsRequest, ::cosmos::upgrade::v1beta1::QueryModuleVersionsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Query::Service* service,
             ::grpc::ServerContext* ctx,
             const ::cosmos::upgrade::v1beta1::QueryModuleVersionsRequest* req,
             ::cosmos::upgrade::v1beta1::QueryModuleVersionsResponse* resp) {
               return service->ModuleVersions(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Query_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Query::Service, ::cosmos::upgrade::v1beta1::QueryAuthorityRequest, ::cosmos::upgrade::v1beta1::QueryAuthorityResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Query::Service* service,
             ::grpc::ServerContext* ctx,
             const ::cosmos::upgrade::v1beta1::QueryAuthorityRequest* req,
             ::cosmos::upgrade::v1beta1::QueryAuthorityResponse* resp) {
               return service->Authority(ctx, req, resp);
             }, this)));
}

Query::Service::~Service() {
}

::grpc::Status Query::Service::CurrentPlan(::grpc::ServerContext* context, const ::cosmos::upgrade::v1beta1::QueryCurrentPlanRequest* request, ::cosmos::upgrade::v1beta1::QueryCurrentPlanResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Query::Service::AppliedPlan(::grpc::ServerContext* context, const ::cosmos::upgrade::v1beta1::QueryAppliedPlanRequest* request, ::cosmos::upgrade::v1beta1::QueryAppliedPlanResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Query::Service::UpgradedConsensusState(::grpc::ServerContext* context, const ::cosmos::upgrade::v1beta1::QueryUpgradedConsensusStateRequest* request, ::cosmos::upgrade::v1beta1::QueryUpgradedConsensusStateResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Query::Service::ModuleVersions(::grpc::ServerContext* context, const ::cosmos::upgrade::v1beta1::QueryModuleVersionsRequest* request, ::cosmos::upgrade::v1beta1::QueryModuleVersionsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Query::Service::Authority(::grpc::ServerContext* context, const ::cosmos::upgrade::v1beta1::QueryAuthorityRequest* request, ::cosmos::upgrade::v1beta1::QueryAuthorityResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace cosmos
}  // namespace upgrade
}  // namespace v1beta1

