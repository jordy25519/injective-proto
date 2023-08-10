// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: ibc/applications/fee/v1/tx.proto

#include "ibc/applications/fee/v1/tx.pb.h"
#include "ibc/applications/fee/v1/tx.grpc.pb.h"

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
namespace fee {
namespace v1 {

static const char* Msg_method_names[] = {
  "/ibc.applications.fee.v1.Msg/RegisterPayee",
  "/ibc.applications.fee.v1.Msg/RegisterCounterpartyPayee",
  "/ibc.applications.fee.v1.Msg/PayPacketFee",
  "/ibc.applications.fee.v1.Msg/PayPacketFeeAsync",
};

std::unique_ptr< Msg::Stub> Msg::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Msg::Stub> stub(new Msg::Stub(channel, options));
  return stub;
}

Msg::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_RegisterPayee_(Msg_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_RegisterCounterpartyPayee_(Msg_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_PayPacketFee_(Msg_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_PayPacketFeeAsync_(Msg_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Msg::Stub::RegisterPayee(::grpc::ClientContext* context, const ::ibc::applications::fee::v1::MsgRegisterPayee& request, ::ibc::applications::fee::v1::MsgRegisterPayeeResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ibc::applications::fee::v1::MsgRegisterPayee, ::ibc::applications::fee::v1::MsgRegisterPayeeResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_RegisterPayee_, context, request, response);
}

void Msg::Stub::async::RegisterPayee(::grpc::ClientContext* context, const ::ibc::applications::fee::v1::MsgRegisterPayee* request, ::ibc::applications::fee::v1::MsgRegisterPayeeResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ibc::applications::fee::v1::MsgRegisterPayee, ::ibc::applications::fee::v1::MsgRegisterPayeeResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_RegisterPayee_, context, request, response, std::move(f));
}

void Msg::Stub::async::RegisterPayee(::grpc::ClientContext* context, const ::ibc::applications::fee::v1::MsgRegisterPayee* request, ::ibc::applications::fee::v1::MsgRegisterPayeeResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_RegisterPayee_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ibc::applications::fee::v1::MsgRegisterPayeeResponse>* Msg::Stub::PrepareAsyncRegisterPayeeRaw(::grpc::ClientContext* context, const ::ibc::applications::fee::v1::MsgRegisterPayee& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::ibc::applications::fee::v1::MsgRegisterPayeeResponse, ::ibc::applications::fee::v1::MsgRegisterPayee, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_RegisterPayee_, context, request);
}

::grpc::ClientAsyncResponseReader< ::ibc::applications::fee::v1::MsgRegisterPayeeResponse>* Msg::Stub::AsyncRegisterPayeeRaw(::grpc::ClientContext* context, const ::ibc::applications::fee::v1::MsgRegisterPayee& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncRegisterPayeeRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Msg::Stub::RegisterCounterpartyPayee(::grpc::ClientContext* context, const ::ibc::applications::fee::v1::MsgRegisterCounterpartyPayee& request, ::ibc::applications::fee::v1::MsgRegisterCounterpartyPayeeResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ibc::applications::fee::v1::MsgRegisterCounterpartyPayee, ::ibc::applications::fee::v1::MsgRegisterCounterpartyPayeeResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_RegisterCounterpartyPayee_, context, request, response);
}

void Msg::Stub::async::RegisterCounterpartyPayee(::grpc::ClientContext* context, const ::ibc::applications::fee::v1::MsgRegisterCounterpartyPayee* request, ::ibc::applications::fee::v1::MsgRegisterCounterpartyPayeeResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ibc::applications::fee::v1::MsgRegisterCounterpartyPayee, ::ibc::applications::fee::v1::MsgRegisterCounterpartyPayeeResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_RegisterCounterpartyPayee_, context, request, response, std::move(f));
}

void Msg::Stub::async::RegisterCounterpartyPayee(::grpc::ClientContext* context, const ::ibc::applications::fee::v1::MsgRegisterCounterpartyPayee* request, ::ibc::applications::fee::v1::MsgRegisterCounterpartyPayeeResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_RegisterCounterpartyPayee_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ibc::applications::fee::v1::MsgRegisterCounterpartyPayeeResponse>* Msg::Stub::PrepareAsyncRegisterCounterpartyPayeeRaw(::grpc::ClientContext* context, const ::ibc::applications::fee::v1::MsgRegisterCounterpartyPayee& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::ibc::applications::fee::v1::MsgRegisterCounterpartyPayeeResponse, ::ibc::applications::fee::v1::MsgRegisterCounterpartyPayee, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_RegisterCounterpartyPayee_, context, request);
}

::grpc::ClientAsyncResponseReader< ::ibc::applications::fee::v1::MsgRegisterCounterpartyPayeeResponse>* Msg::Stub::AsyncRegisterCounterpartyPayeeRaw(::grpc::ClientContext* context, const ::ibc::applications::fee::v1::MsgRegisterCounterpartyPayee& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncRegisterCounterpartyPayeeRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Msg::Stub::PayPacketFee(::grpc::ClientContext* context, const ::ibc::applications::fee::v1::MsgPayPacketFee& request, ::ibc::applications::fee::v1::MsgPayPacketFeeResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ibc::applications::fee::v1::MsgPayPacketFee, ::ibc::applications::fee::v1::MsgPayPacketFeeResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_PayPacketFee_, context, request, response);
}

void Msg::Stub::async::PayPacketFee(::grpc::ClientContext* context, const ::ibc::applications::fee::v1::MsgPayPacketFee* request, ::ibc::applications::fee::v1::MsgPayPacketFeeResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ibc::applications::fee::v1::MsgPayPacketFee, ::ibc::applications::fee::v1::MsgPayPacketFeeResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_PayPacketFee_, context, request, response, std::move(f));
}

void Msg::Stub::async::PayPacketFee(::grpc::ClientContext* context, const ::ibc::applications::fee::v1::MsgPayPacketFee* request, ::ibc::applications::fee::v1::MsgPayPacketFeeResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_PayPacketFee_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ibc::applications::fee::v1::MsgPayPacketFeeResponse>* Msg::Stub::PrepareAsyncPayPacketFeeRaw(::grpc::ClientContext* context, const ::ibc::applications::fee::v1::MsgPayPacketFee& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::ibc::applications::fee::v1::MsgPayPacketFeeResponse, ::ibc::applications::fee::v1::MsgPayPacketFee, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_PayPacketFee_, context, request);
}

::grpc::ClientAsyncResponseReader< ::ibc::applications::fee::v1::MsgPayPacketFeeResponse>* Msg::Stub::AsyncPayPacketFeeRaw(::grpc::ClientContext* context, const ::ibc::applications::fee::v1::MsgPayPacketFee& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncPayPacketFeeRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Msg::Stub::PayPacketFeeAsync(::grpc::ClientContext* context, const ::ibc::applications::fee::v1::MsgPayPacketFeeAsync& request, ::ibc::applications::fee::v1::MsgPayPacketFeeAsyncResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ibc::applications::fee::v1::MsgPayPacketFeeAsync, ::ibc::applications::fee::v1::MsgPayPacketFeeAsyncResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_PayPacketFeeAsync_, context, request, response);
}

void Msg::Stub::async::PayPacketFeeAsync(::grpc::ClientContext* context, const ::ibc::applications::fee::v1::MsgPayPacketFeeAsync* request, ::ibc::applications::fee::v1::MsgPayPacketFeeAsyncResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ibc::applications::fee::v1::MsgPayPacketFeeAsync, ::ibc::applications::fee::v1::MsgPayPacketFeeAsyncResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_PayPacketFeeAsync_, context, request, response, std::move(f));
}

void Msg::Stub::async::PayPacketFeeAsync(::grpc::ClientContext* context, const ::ibc::applications::fee::v1::MsgPayPacketFeeAsync* request, ::ibc::applications::fee::v1::MsgPayPacketFeeAsyncResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_PayPacketFeeAsync_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ibc::applications::fee::v1::MsgPayPacketFeeAsyncResponse>* Msg::Stub::PrepareAsyncPayPacketFeeAsyncRaw(::grpc::ClientContext* context, const ::ibc::applications::fee::v1::MsgPayPacketFeeAsync& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::ibc::applications::fee::v1::MsgPayPacketFeeAsyncResponse, ::ibc::applications::fee::v1::MsgPayPacketFeeAsync, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_PayPacketFeeAsync_, context, request);
}

::grpc::ClientAsyncResponseReader< ::ibc::applications::fee::v1::MsgPayPacketFeeAsyncResponse>* Msg::Stub::AsyncPayPacketFeeAsyncRaw(::grpc::ClientContext* context, const ::ibc::applications::fee::v1::MsgPayPacketFeeAsync& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncPayPacketFeeAsyncRaw(context, request, cq);
  result->StartCall();
  return result;
}

Msg::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Msg_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Msg::Service, ::ibc::applications::fee::v1::MsgRegisterPayee, ::ibc::applications::fee::v1::MsgRegisterPayeeResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Msg::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ibc::applications::fee::v1::MsgRegisterPayee* req,
             ::ibc::applications::fee::v1::MsgRegisterPayeeResponse* resp) {
               return service->RegisterPayee(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Msg_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Msg::Service, ::ibc::applications::fee::v1::MsgRegisterCounterpartyPayee, ::ibc::applications::fee::v1::MsgRegisterCounterpartyPayeeResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Msg::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ibc::applications::fee::v1::MsgRegisterCounterpartyPayee* req,
             ::ibc::applications::fee::v1::MsgRegisterCounterpartyPayeeResponse* resp) {
               return service->RegisterCounterpartyPayee(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Msg_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Msg::Service, ::ibc::applications::fee::v1::MsgPayPacketFee, ::ibc::applications::fee::v1::MsgPayPacketFeeResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Msg::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ibc::applications::fee::v1::MsgPayPacketFee* req,
             ::ibc::applications::fee::v1::MsgPayPacketFeeResponse* resp) {
               return service->PayPacketFee(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Msg_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Msg::Service, ::ibc::applications::fee::v1::MsgPayPacketFeeAsync, ::ibc::applications::fee::v1::MsgPayPacketFeeAsyncResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Msg::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ibc::applications::fee::v1::MsgPayPacketFeeAsync* req,
             ::ibc::applications::fee::v1::MsgPayPacketFeeAsyncResponse* resp) {
               return service->PayPacketFeeAsync(ctx, req, resp);
             }, this)));
}

Msg::Service::~Service() {
}

::grpc::Status Msg::Service::RegisterPayee(::grpc::ServerContext* context, const ::ibc::applications::fee::v1::MsgRegisterPayee* request, ::ibc::applications::fee::v1::MsgRegisterPayeeResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Msg::Service::RegisterCounterpartyPayee(::grpc::ServerContext* context, const ::ibc::applications::fee::v1::MsgRegisterCounterpartyPayee* request, ::ibc::applications::fee::v1::MsgRegisterCounterpartyPayeeResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Msg::Service::PayPacketFee(::grpc::ServerContext* context, const ::ibc::applications::fee::v1::MsgPayPacketFee* request, ::ibc::applications::fee::v1::MsgPayPacketFeeResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Msg::Service::PayPacketFeeAsync(::grpc::ServerContext* context, const ::ibc::applications::fee::v1::MsgPayPacketFeeAsync* request, ::ibc::applications::fee::v1::MsgPayPacketFeeAsyncResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace ibc
}  // namespace applications
}  // namespace fee
}  // namespace v1

