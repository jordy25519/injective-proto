// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: ibc/applications/interchain_accounts/host/v1/tx.proto

#include "ibc/applications/interchain_accounts/host/v1/tx.pb.h"
#include "ibc/applications/interchain_accounts/host/v1/tx.grpc.pb.h"

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

static const char* Msg_method_names[] = {
  "/ibc.applications.interchain_accounts.host.v1.Msg/UpdateParams",
};

std::unique_ptr< Msg::Stub> Msg::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Msg::Stub> stub(new Msg::Stub(channel, options));
  return stub;
}

Msg::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_UpdateParams_(Msg_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Msg::Stub::UpdateParams(::grpc::ClientContext* context, const ::ibc::applications::interchain_accounts::host::v1::MsgUpdateParams& request, ::ibc::applications::interchain_accounts::host::v1::MsgUpdateParamsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ibc::applications::interchain_accounts::host::v1::MsgUpdateParams, ::ibc::applications::interchain_accounts::host::v1::MsgUpdateParamsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_UpdateParams_, context, request, response);
}

void Msg::Stub::async::UpdateParams(::grpc::ClientContext* context, const ::ibc::applications::interchain_accounts::host::v1::MsgUpdateParams* request, ::ibc::applications::interchain_accounts::host::v1::MsgUpdateParamsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ibc::applications::interchain_accounts::host::v1::MsgUpdateParams, ::ibc::applications::interchain_accounts::host::v1::MsgUpdateParamsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_UpdateParams_, context, request, response, std::move(f));
}

void Msg::Stub::async::UpdateParams(::grpc::ClientContext* context, const ::ibc::applications::interchain_accounts::host::v1::MsgUpdateParams* request, ::ibc::applications::interchain_accounts::host::v1::MsgUpdateParamsResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_UpdateParams_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ibc::applications::interchain_accounts::host::v1::MsgUpdateParamsResponse>* Msg::Stub::PrepareAsyncUpdateParamsRaw(::grpc::ClientContext* context, const ::ibc::applications::interchain_accounts::host::v1::MsgUpdateParams& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::ibc::applications::interchain_accounts::host::v1::MsgUpdateParamsResponse, ::ibc::applications::interchain_accounts::host::v1::MsgUpdateParams, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_UpdateParams_, context, request);
}

::grpc::ClientAsyncResponseReader< ::ibc::applications::interchain_accounts::host::v1::MsgUpdateParamsResponse>* Msg::Stub::AsyncUpdateParamsRaw(::grpc::ClientContext* context, const ::ibc::applications::interchain_accounts::host::v1::MsgUpdateParams& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncUpdateParamsRaw(context, request, cq);
  result->StartCall();
  return result;
}

Msg::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Msg_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Msg::Service, ::ibc::applications::interchain_accounts::host::v1::MsgUpdateParams, ::ibc::applications::interchain_accounts::host::v1::MsgUpdateParamsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Msg::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ibc::applications::interchain_accounts::host::v1::MsgUpdateParams* req,
             ::ibc::applications::interchain_accounts::host::v1::MsgUpdateParamsResponse* resp) {
               return service->UpdateParams(ctx, req, resp);
             }, this)));
}

Msg::Service::~Service() {
}

::grpc::Status Msg::Service::UpdateParams(::grpc::ServerContext* context, const ::ibc::applications::interchain_accounts::host::v1::MsgUpdateParams* request, ::ibc::applications::interchain_accounts::host::v1::MsgUpdateParamsResponse* response) {
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

