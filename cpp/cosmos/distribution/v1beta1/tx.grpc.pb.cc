// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: cosmos/distribution/v1beta1/tx.proto

#include "cosmos/distribution/v1beta1/tx.pb.h"
#include "cosmos/distribution/v1beta1/tx.grpc.pb.h"

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
namespace distribution {
namespace v1beta1 {

static const char* Msg_method_names[] = {
  "/cosmos.distribution.v1beta1.Msg/SetWithdrawAddress",
  "/cosmos.distribution.v1beta1.Msg/WithdrawDelegatorReward",
  "/cosmos.distribution.v1beta1.Msg/WithdrawValidatorCommission",
  "/cosmos.distribution.v1beta1.Msg/FundCommunityPool",
  "/cosmos.distribution.v1beta1.Msg/UpdateParams",
  "/cosmos.distribution.v1beta1.Msg/CommunityPoolSpend",
};

std::unique_ptr< Msg::Stub> Msg::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Msg::Stub> stub(new Msg::Stub(channel, options));
  return stub;
}

Msg::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_SetWithdrawAddress_(Msg_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_WithdrawDelegatorReward_(Msg_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_WithdrawValidatorCommission_(Msg_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_FundCommunityPool_(Msg_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdateParams_(Msg_method_names[4], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CommunityPoolSpend_(Msg_method_names[5], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Msg::Stub::SetWithdrawAddress(::grpc::ClientContext* context, const ::cosmos::distribution::v1beta1::MsgSetWithdrawAddress& request, ::cosmos::distribution::v1beta1::MsgSetWithdrawAddressResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::cosmos::distribution::v1beta1::MsgSetWithdrawAddress, ::cosmos::distribution::v1beta1::MsgSetWithdrawAddressResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_SetWithdrawAddress_, context, request, response);
}

void Msg::Stub::async::SetWithdrawAddress(::grpc::ClientContext* context, const ::cosmos::distribution::v1beta1::MsgSetWithdrawAddress* request, ::cosmos::distribution::v1beta1::MsgSetWithdrawAddressResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::cosmos::distribution::v1beta1::MsgSetWithdrawAddress, ::cosmos::distribution::v1beta1::MsgSetWithdrawAddressResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetWithdrawAddress_, context, request, response, std::move(f));
}

void Msg::Stub::async::SetWithdrawAddress(::grpc::ClientContext* context, const ::cosmos::distribution::v1beta1::MsgSetWithdrawAddress* request, ::cosmos::distribution::v1beta1::MsgSetWithdrawAddressResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetWithdrawAddress_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::cosmos::distribution::v1beta1::MsgSetWithdrawAddressResponse>* Msg::Stub::PrepareAsyncSetWithdrawAddressRaw(::grpc::ClientContext* context, const ::cosmos::distribution::v1beta1::MsgSetWithdrawAddress& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::cosmos::distribution::v1beta1::MsgSetWithdrawAddressResponse, ::cosmos::distribution::v1beta1::MsgSetWithdrawAddress, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_SetWithdrawAddress_, context, request);
}

::grpc::ClientAsyncResponseReader< ::cosmos::distribution::v1beta1::MsgSetWithdrawAddressResponse>* Msg::Stub::AsyncSetWithdrawAddressRaw(::grpc::ClientContext* context, const ::cosmos::distribution::v1beta1::MsgSetWithdrawAddress& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSetWithdrawAddressRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Msg::Stub::WithdrawDelegatorReward(::grpc::ClientContext* context, const ::cosmos::distribution::v1beta1::MsgWithdrawDelegatorReward& request, ::cosmos::distribution::v1beta1::MsgWithdrawDelegatorRewardResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::cosmos::distribution::v1beta1::MsgWithdrawDelegatorReward, ::cosmos::distribution::v1beta1::MsgWithdrawDelegatorRewardResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_WithdrawDelegatorReward_, context, request, response);
}

void Msg::Stub::async::WithdrawDelegatorReward(::grpc::ClientContext* context, const ::cosmos::distribution::v1beta1::MsgWithdrawDelegatorReward* request, ::cosmos::distribution::v1beta1::MsgWithdrawDelegatorRewardResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::cosmos::distribution::v1beta1::MsgWithdrawDelegatorReward, ::cosmos::distribution::v1beta1::MsgWithdrawDelegatorRewardResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_WithdrawDelegatorReward_, context, request, response, std::move(f));
}

void Msg::Stub::async::WithdrawDelegatorReward(::grpc::ClientContext* context, const ::cosmos::distribution::v1beta1::MsgWithdrawDelegatorReward* request, ::cosmos::distribution::v1beta1::MsgWithdrawDelegatorRewardResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_WithdrawDelegatorReward_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::cosmos::distribution::v1beta1::MsgWithdrawDelegatorRewardResponse>* Msg::Stub::PrepareAsyncWithdrawDelegatorRewardRaw(::grpc::ClientContext* context, const ::cosmos::distribution::v1beta1::MsgWithdrawDelegatorReward& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::cosmos::distribution::v1beta1::MsgWithdrawDelegatorRewardResponse, ::cosmos::distribution::v1beta1::MsgWithdrawDelegatorReward, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_WithdrawDelegatorReward_, context, request);
}

::grpc::ClientAsyncResponseReader< ::cosmos::distribution::v1beta1::MsgWithdrawDelegatorRewardResponse>* Msg::Stub::AsyncWithdrawDelegatorRewardRaw(::grpc::ClientContext* context, const ::cosmos::distribution::v1beta1::MsgWithdrawDelegatorReward& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncWithdrawDelegatorRewardRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Msg::Stub::WithdrawValidatorCommission(::grpc::ClientContext* context, const ::cosmos::distribution::v1beta1::MsgWithdrawValidatorCommission& request, ::cosmos::distribution::v1beta1::MsgWithdrawValidatorCommissionResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::cosmos::distribution::v1beta1::MsgWithdrawValidatorCommission, ::cosmos::distribution::v1beta1::MsgWithdrawValidatorCommissionResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_WithdrawValidatorCommission_, context, request, response);
}

void Msg::Stub::async::WithdrawValidatorCommission(::grpc::ClientContext* context, const ::cosmos::distribution::v1beta1::MsgWithdrawValidatorCommission* request, ::cosmos::distribution::v1beta1::MsgWithdrawValidatorCommissionResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::cosmos::distribution::v1beta1::MsgWithdrawValidatorCommission, ::cosmos::distribution::v1beta1::MsgWithdrawValidatorCommissionResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_WithdrawValidatorCommission_, context, request, response, std::move(f));
}

void Msg::Stub::async::WithdrawValidatorCommission(::grpc::ClientContext* context, const ::cosmos::distribution::v1beta1::MsgWithdrawValidatorCommission* request, ::cosmos::distribution::v1beta1::MsgWithdrawValidatorCommissionResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_WithdrawValidatorCommission_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::cosmos::distribution::v1beta1::MsgWithdrawValidatorCommissionResponse>* Msg::Stub::PrepareAsyncWithdrawValidatorCommissionRaw(::grpc::ClientContext* context, const ::cosmos::distribution::v1beta1::MsgWithdrawValidatorCommission& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::cosmos::distribution::v1beta1::MsgWithdrawValidatorCommissionResponse, ::cosmos::distribution::v1beta1::MsgWithdrawValidatorCommission, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_WithdrawValidatorCommission_, context, request);
}

::grpc::ClientAsyncResponseReader< ::cosmos::distribution::v1beta1::MsgWithdrawValidatorCommissionResponse>* Msg::Stub::AsyncWithdrawValidatorCommissionRaw(::grpc::ClientContext* context, const ::cosmos::distribution::v1beta1::MsgWithdrawValidatorCommission& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncWithdrawValidatorCommissionRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Msg::Stub::FundCommunityPool(::grpc::ClientContext* context, const ::cosmos::distribution::v1beta1::MsgFundCommunityPool& request, ::cosmos::distribution::v1beta1::MsgFundCommunityPoolResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::cosmos::distribution::v1beta1::MsgFundCommunityPool, ::cosmos::distribution::v1beta1::MsgFundCommunityPoolResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_FundCommunityPool_, context, request, response);
}

void Msg::Stub::async::FundCommunityPool(::grpc::ClientContext* context, const ::cosmos::distribution::v1beta1::MsgFundCommunityPool* request, ::cosmos::distribution::v1beta1::MsgFundCommunityPoolResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::cosmos::distribution::v1beta1::MsgFundCommunityPool, ::cosmos::distribution::v1beta1::MsgFundCommunityPoolResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_FundCommunityPool_, context, request, response, std::move(f));
}

void Msg::Stub::async::FundCommunityPool(::grpc::ClientContext* context, const ::cosmos::distribution::v1beta1::MsgFundCommunityPool* request, ::cosmos::distribution::v1beta1::MsgFundCommunityPoolResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_FundCommunityPool_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::cosmos::distribution::v1beta1::MsgFundCommunityPoolResponse>* Msg::Stub::PrepareAsyncFundCommunityPoolRaw(::grpc::ClientContext* context, const ::cosmos::distribution::v1beta1::MsgFundCommunityPool& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::cosmos::distribution::v1beta1::MsgFundCommunityPoolResponse, ::cosmos::distribution::v1beta1::MsgFundCommunityPool, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_FundCommunityPool_, context, request);
}

::grpc::ClientAsyncResponseReader< ::cosmos::distribution::v1beta1::MsgFundCommunityPoolResponse>* Msg::Stub::AsyncFundCommunityPoolRaw(::grpc::ClientContext* context, const ::cosmos::distribution::v1beta1::MsgFundCommunityPool& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncFundCommunityPoolRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Msg::Stub::UpdateParams(::grpc::ClientContext* context, const ::cosmos::distribution::v1beta1::MsgUpdateParams& request, ::cosmos::distribution::v1beta1::MsgUpdateParamsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::cosmos::distribution::v1beta1::MsgUpdateParams, ::cosmos::distribution::v1beta1::MsgUpdateParamsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_UpdateParams_, context, request, response);
}

void Msg::Stub::async::UpdateParams(::grpc::ClientContext* context, const ::cosmos::distribution::v1beta1::MsgUpdateParams* request, ::cosmos::distribution::v1beta1::MsgUpdateParamsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::cosmos::distribution::v1beta1::MsgUpdateParams, ::cosmos::distribution::v1beta1::MsgUpdateParamsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_UpdateParams_, context, request, response, std::move(f));
}

void Msg::Stub::async::UpdateParams(::grpc::ClientContext* context, const ::cosmos::distribution::v1beta1::MsgUpdateParams* request, ::cosmos::distribution::v1beta1::MsgUpdateParamsResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_UpdateParams_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::cosmos::distribution::v1beta1::MsgUpdateParamsResponse>* Msg::Stub::PrepareAsyncUpdateParamsRaw(::grpc::ClientContext* context, const ::cosmos::distribution::v1beta1::MsgUpdateParams& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::cosmos::distribution::v1beta1::MsgUpdateParamsResponse, ::cosmos::distribution::v1beta1::MsgUpdateParams, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_UpdateParams_, context, request);
}

::grpc::ClientAsyncResponseReader< ::cosmos::distribution::v1beta1::MsgUpdateParamsResponse>* Msg::Stub::AsyncUpdateParamsRaw(::grpc::ClientContext* context, const ::cosmos::distribution::v1beta1::MsgUpdateParams& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncUpdateParamsRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Msg::Stub::CommunityPoolSpend(::grpc::ClientContext* context, const ::cosmos::distribution::v1beta1::MsgCommunityPoolSpend& request, ::cosmos::distribution::v1beta1::MsgCommunityPoolSpendResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::cosmos::distribution::v1beta1::MsgCommunityPoolSpend, ::cosmos::distribution::v1beta1::MsgCommunityPoolSpendResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_CommunityPoolSpend_, context, request, response);
}

void Msg::Stub::async::CommunityPoolSpend(::grpc::ClientContext* context, const ::cosmos::distribution::v1beta1::MsgCommunityPoolSpend* request, ::cosmos::distribution::v1beta1::MsgCommunityPoolSpendResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::cosmos::distribution::v1beta1::MsgCommunityPoolSpend, ::cosmos::distribution::v1beta1::MsgCommunityPoolSpendResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CommunityPoolSpend_, context, request, response, std::move(f));
}

void Msg::Stub::async::CommunityPoolSpend(::grpc::ClientContext* context, const ::cosmos::distribution::v1beta1::MsgCommunityPoolSpend* request, ::cosmos::distribution::v1beta1::MsgCommunityPoolSpendResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CommunityPoolSpend_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::cosmos::distribution::v1beta1::MsgCommunityPoolSpendResponse>* Msg::Stub::PrepareAsyncCommunityPoolSpendRaw(::grpc::ClientContext* context, const ::cosmos::distribution::v1beta1::MsgCommunityPoolSpend& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::cosmos::distribution::v1beta1::MsgCommunityPoolSpendResponse, ::cosmos::distribution::v1beta1::MsgCommunityPoolSpend, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_CommunityPoolSpend_, context, request);
}

::grpc::ClientAsyncResponseReader< ::cosmos::distribution::v1beta1::MsgCommunityPoolSpendResponse>* Msg::Stub::AsyncCommunityPoolSpendRaw(::grpc::ClientContext* context, const ::cosmos::distribution::v1beta1::MsgCommunityPoolSpend& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncCommunityPoolSpendRaw(context, request, cq);
  result->StartCall();
  return result;
}

Msg::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Msg_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Msg::Service, ::cosmos::distribution::v1beta1::MsgSetWithdrawAddress, ::cosmos::distribution::v1beta1::MsgSetWithdrawAddressResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Msg::Service* service,
             ::grpc::ServerContext* ctx,
             const ::cosmos::distribution::v1beta1::MsgSetWithdrawAddress* req,
             ::cosmos::distribution::v1beta1::MsgSetWithdrawAddressResponse* resp) {
               return service->SetWithdrawAddress(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Msg_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Msg::Service, ::cosmos::distribution::v1beta1::MsgWithdrawDelegatorReward, ::cosmos::distribution::v1beta1::MsgWithdrawDelegatorRewardResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Msg::Service* service,
             ::grpc::ServerContext* ctx,
             const ::cosmos::distribution::v1beta1::MsgWithdrawDelegatorReward* req,
             ::cosmos::distribution::v1beta1::MsgWithdrawDelegatorRewardResponse* resp) {
               return service->WithdrawDelegatorReward(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Msg_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Msg::Service, ::cosmos::distribution::v1beta1::MsgWithdrawValidatorCommission, ::cosmos::distribution::v1beta1::MsgWithdrawValidatorCommissionResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Msg::Service* service,
             ::grpc::ServerContext* ctx,
             const ::cosmos::distribution::v1beta1::MsgWithdrawValidatorCommission* req,
             ::cosmos::distribution::v1beta1::MsgWithdrawValidatorCommissionResponse* resp) {
               return service->WithdrawValidatorCommission(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Msg_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Msg::Service, ::cosmos::distribution::v1beta1::MsgFundCommunityPool, ::cosmos::distribution::v1beta1::MsgFundCommunityPoolResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Msg::Service* service,
             ::grpc::ServerContext* ctx,
             const ::cosmos::distribution::v1beta1::MsgFundCommunityPool* req,
             ::cosmos::distribution::v1beta1::MsgFundCommunityPoolResponse* resp) {
               return service->FundCommunityPool(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Msg_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Msg::Service, ::cosmos::distribution::v1beta1::MsgUpdateParams, ::cosmos::distribution::v1beta1::MsgUpdateParamsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Msg::Service* service,
             ::grpc::ServerContext* ctx,
             const ::cosmos::distribution::v1beta1::MsgUpdateParams* req,
             ::cosmos::distribution::v1beta1::MsgUpdateParamsResponse* resp) {
               return service->UpdateParams(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Msg_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Msg::Service, ::cosmos::distribution::v1beta1::MsgCommunityPoolSpend, ::cosmos::distribution::v1beta1::MsgCommunityPoolSpendResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Msg::Service* service,
             ::grpc::ServerContext* ctx,
             const ::cosmos::distribution::v1beta1::MsgCommunityPoolSpend* req,
             ::cosmos::distribution::v1beta1::MsgCommunityPoolSpendResponse* resp) {
               return service->CommunityPoolSpend(ctx, req, resp);
             }, this)));
}

Msg::Service::~Service() {
}

::grpc::Status Msg::Service::SetWithdrawAddress(::grpc::ServerContext* context, const ::cosmos::distribution::v1beta1::MsgSetWithdrawAddress* request, ::cosmos::distribution::v1beta1::MsgSetWithdrawAddressResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Msg::Service::WithdrawDelegatorReward(::grpc::ServerContext* context, const ::cosmos::distribution::v1beta1::MsgWithdrawDelegatorReward* request, ::cosmos::distribution::v1beta1::MsgWithdrawDelegatorRewardResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Msg::Service::WithdrawValidatorCommission(::grpc::ServerContext* context, const ::cosmos::distribution::v1beta1::MsgWithdrawValidatorCommission* request, ::cosmos::distribution::v1beta1::MsgWithdrawValidatorCommissionResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Msg::Service::FundCommunityPool(::grpc::ServerContext* context, const ::cosmos::distribution::v1beta1::MsgFundCommunityPool* request, ::cosmos::distribution::v1beta1::MsgFundCommunityPoolResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Msg::Service::UpdateParams(::grpc::ServerContext* context, const ::cosmos::distribution::v1beta1::MsgUpdateParams* request, ::cosmos::distribution::v1beta1::MsgUpdateParamsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Msg::Service::CommunityPoolSpend(::grpc::ServerContext* context, const ::cosmos::distribution::v1beta1::MsgCommunityPoolSpend* request, ::cosmos::distribution::v1beta1::MsgCommunityPoolSpendResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace cosmos
}  // namespace distribution
}  // namespace v1beta1

