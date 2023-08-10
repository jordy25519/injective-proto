// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: ibc/core/channel/v1/tx.proto

#include "ibc/core/channel/v1/tx.pb.h"
#include "ibc/core/channel/v1/tx.grpc.pb.h"

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
namespace core {
namespace channel {
namespace v1 {

static const char* Msg_method_names[] = {
  "/ibc.core.channel.v1.Msg/ChannelOpenInit",
  "/ibc.core.channel.v1.Msg/ChannelOpenTry",
  "/ibc.core.channel.v1.Msg/ChannelOpenAck",
  "/ibc.core.channel.v1.Msg/ChannelOpenConfirm",
  "/ibc.core.channel.v1.Msg/ChannelCloseInit",
  "/ibc.core.channel.v1.Msg/ChannelCloseConfirm",
  "/ibc.core.channel.v1.Msg/RecvPacket",
  "/ibc.core.channel.v1.Msg/Timeout",
  "/ibc.core.channel.v1.Msg/TimeoutOnClose",
  "/ibc.core.channel.v1.Msg/Acknowledgement",
};

std::unique_ptr< Msg::Stub> Msg::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Msg::Stub> stub(new Msg::Stub(channel, options));
  return stub;
}

Msg::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_ChannelOpenInit_(Msg_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ChannelOpenTry_(Msg_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ChannelOpenAck_(Msg_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ChannelOpenConfirm_(Msg_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ChannelCloseInit_(Msg_method_names[4], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ChannelCloseConfirm_(Msg_method_names[5], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_RecvPacket_(Msg_method_names[6], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Timeout_(Msg_method_names[7], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_TimeoutOnClose_(Msg_method_names[8], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Acknowledgement_(Msg_method_names[9], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Msg::Stub::ChannelOpenInit(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgChannelOpenInit& request, ::ibc::core::channel::v1::MsgChannelOpenInitResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ibc::core::channel::v1::MsgChannelOpenInit, ::ibc::core::channel::v1::MsgChannelOpenInitResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_ChannelOpenInit_, context, request, response);
}

void Msg::Stub::async::ChannelOpenInit(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgChannelOpenInit* request, ::ibc::core::channel::v1::MsgChannelOpenInitResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ibc::core::channel::v1::MsgChannelOpenInit, ::ibc::core::channel::v1::MsgChannelOpenInitResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ChannelOpenInit_, context, request, response, std::move(f));
}

void Msg::Stub::async::ChannelOpenInit(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgChannelOpenInit* request, ::ibc::core::channel::v1::MsgChannelOpenInitResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ChannelOpenInit_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ibc::core::channel::v1::MsgChannelOpenInitResponse>* Msg::Stub::PrepareAsyncChannelOpenInitRaw(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgChannelOpenInit& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::ibc::core::channel::v1::MsgChannelOpenInitResponse, ::ibc::core::channel::v1::MsgChannelOpenInit, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_ChannelOpenInit_, context, request);
}

::grpc::ClientAsyncResponseReader< ::ibc::core::channel::v1::MsgChannelOpenInitResponse>* Msg::Stub::AsyncChannelOpenInitRaw(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgChannelOpenInit& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncChannelOpenInitRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Msg::Stub::ChannelOpenTry(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgChannelOpenTry& request, ::ibc::core::channel::v1::MsgChannelOpenTryResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ibc::core::channel::v1::MsgChannelOpenTry, ::ibc::core::channel::v1::MsgChannelOpenTryResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_ChannelOpenTry_, context, request, response);
}

void Msg::Stub::async::ChannelOpenTry(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgChannelOpenTry* request, ::ibc::core::channel::v1::MsgChannelOpenTryResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ibc::core::channel::v1::MsgChannelOpenTry, ::ibc::core::channel::v1::MsgChannelOpenTryResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ChannelOpenTry_, context, request, response, std::move(f));
}

void Msg::Stub::async::ChannelOpenTry(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgChannelOpenTry* request, ::ibc::core::channel::v1::MsgChannelOpenTryResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ChannelOpenTry_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ibc::core::channel::v1::MsgChannelOpenTryResponse>* Msg::Stub::PrepareAsyncChannelOpenTryRaw(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgChannelOpenTry& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::ibc::core::channel::v1::MsgChannelOpenTryResponse, ::ibc::core::channel::v1::MsgChannelOpenTry, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_ChannelOpenTry_, context, request);
}

::grpc::ClientAsyncResponseReader< ::ibc::core::channel::v1::MsgChannelOpenTryResponse>* Msg::Stub::AsyncChannelOpenTryRaw(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgChannelOpenTry& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncChannelOpenTryRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Msg::Stub::ChannelOpenAck(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgChannelOpenAck& request, ::ibc::core::channel::v1::MsgChannelOpenAckResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ibc::core::channel::v1::MsgChannelOpenAck, ::ibc::core::channel::v1::MsgChannelOpenAckResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_ChannelOpenAck_, context, request, response);
}

void Msg::Stub::async::ChannelOpenAck(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgChannelOpenAck* request, ::ibc::core::channel::v1::MsgChannelOpenAckResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ibc::core::channel::v1::MsgChannelOpenAck, ::ibc::core::channel::v1::MsgChannelOpenAckResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ChannelOpenAck_, context, request, response, std::move(f));
}

void Msg::Stub::async::ChannelOpenAck(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgChannelOpenAck* request, ::ibc::core::channel::v1::MsgChannelOpenAckResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ChannelOpenAck_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ibc::core::channel::v1::MsgChannelOpenAckResponse>* Msg::Stub::PrepareAsyncChannelOpenAckRaw(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgChannelOpenAck& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::ibc::core::channel::v1::MsgChannelOpenAckResponse, ::ibc::core::channel::v1::MsgChannelOpenAck, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_ChannelOpenAck_, context, request);
}

::grpc::ClientAsyncResponseReader< ::ibc::core::channel::v1::MsgChannelOpenAckResponse>* Msg::Stub::AsyncChannelOpenAckRaw(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgChannelOpenAck& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncChannelOpenAckRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Msg::Stub::ChannelOpenConfirm(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgChannelOpenConfirm& request, ::ibc::core::channel::v1::MsgChannelOpenConfirmResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ibc::core::channel::v1::MsgChannelOpenConfirm, ::ibc::core::channel::v1::MsgChannelOpenConfirmResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_ChannelOpenConfirm_, context, request, response);
}

void Msg::Stub::async::ChannelOpenConfirm(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgChannelOpenConfirm* request, ::ibc::core::channel::v1::MsgChannelOpenConfirmResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ibc::core::channel::v1::MsgChannelOpenConfirm, ::ibc::core::channel::v1::MsgChannelOpenConfirmResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ChannelOpenConfirm_, context, request, response, std::move(f));
}

void Msg::Stub::async::ChannelOpenConfirm(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgChannelOpenConfirm* request, ::ibc::core::channel::v1::MsgChannelOpenConfirmResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ChannelOpenConfirm_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ibc::core::channel::v1::MsgChannelOpenConfirmResponse>* Msg::Stub::PrepareAsyncChannelOpenConfirmRaw(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgChannelOpenConfirm& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::ibc::core::channel::v1::MsgChannelOpenConfirmResponse, ::ibc::core::channel::v1::MsgChannelOpenConfirm, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_ChannelOpenConfirm_, context, request);
}

::grpc::ClientAsyncResponseReader< ::ibc::core::channel::v1::MsgChannelOpenConfirmResponse>* Msg::Stub::AsyncChannelOpenConfirmRaw(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgChannelOpenConfirm& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncChannelOpenConfirmRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Msg::Stub::ChannelCloseInit(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgChannelCloseInit& request, ::ibc::core::channel::v1::MsgChannelCloseInitResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ibc::core::channel::v1::MsgChannelCloseInit, ::ibc::core::channel::v1::MsgChannelCloseInitResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_ChannelCloseInit_, context, request, response);
}

void Msg::Stub::async::ChannelCloseInit(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgChannelCloseInit* request, ::ibc::core::channel::v1::MsgChannelCloseInitResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ibc::core::channel::v1::MsgChannelCloseInit, ::ibc::core::channel::v1::MsgChannelCloseInitResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ChannelCloseInit_, context, request, response, std::move(f));
}

void Msg::Stub::async::ChannelCloseInit(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgChannelCloseInit* request, ::ibc::core::channel::v1::MsgChannelCloseInitResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ChannelCloseInit_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ibc::core::channel::v1::MsgChannelCloseInitResponse>* Msg::Stub::PrepareAsyncChannelCloseInitRaw(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgChannelCloseInit& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::ibc::core::channel::v1::MsgChannelCloseInitResponse, ::ibc::core::channel::v1::MsgChannelCloseInit, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_ChannelCloseInit_, context, request);
}

::grpc::ClientAsyncResponseReader< ::ibc::core::channel::v1::MsgChannelCloseInitResponse>* Msg::Stub::AsyncChannelCloseInitRaw(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgChannelCloseInit& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncChannelCloseInitRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Msg::Stub::ChannelCloseConfirm(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgChannelCloseConfirm& request, ::ibc::core::channel::v1::MsgChannelCloseConfirmResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ibc::core::channel::v1::MsgChannelCloseConfirm, ::ibc::core::channel::v1::MsgChannelCloseConfirmResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_ChannelCloseConfirm_, context, request, response);
}

void Msg::Stub::async::ChannelCloseConfirm(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgChannelCloseConfirm* request, ::ibc::core::channel::v1::MsgChannelCloseConfirmResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ibc::core::channel::v1::MsgChannelCloseConfirm, ::ibc::core::channel::v1::MsgChannelCloseConfirmResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ChannelCloseConfirm_, context, request, response, std::move(f));
}

void Msg::Stub::async::ChannelCloseConfirm(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgChannelCloseConfirm* request, ::ibc::core::channel::v1::MsgChannelCloseConfirmResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ChannelCloseConfirm_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ibc::core::channel::v1::MsgChannelCloseConfirmResponse>* Msg::Stub::PrepareAsyncChannelCloseConfirmRaw(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgChannelCloseConfirm& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::ibc::core::channel::v1::MsgChannelCloseConfirmResponse, ::ibc::core::channel::v1::MsgChannelCloseConfirm, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_ChannelCloseConfirm_, context, request);
}

::grpc::ClientAsyncResponseReader< ::ibc::core::channel::v1::MsgChannelCloseConfirmResponse>* Msg::Stub::AsyncChannelCloseConfirmRaw(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgChannelCloseConfirm& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncChannelCloseConfirmRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Msg::Stub::RecvPacket(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgRecvPacket& request, ::ibc::core::channel::v1::MsgRecvPacketResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ibc::core::channel::v1::MsgRecvPacket, ::ibc::core::channel::v1::MsgRecvPacketResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_RecvPacket_, context, request, response);
}

void Msg::Stub::async::RecvPacket(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgRecvPacket* request, ::ibc::core::channel::v1::MsgRecvPacketResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ibc::core::channel::v1::MsgRecvPacket, ::ibc::core::channel::v1::MsgRecvPacketResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_RecvPacket_, context, request, response, std::move(f));
}

void Msg::Stub::async::RecvPacket(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgRecvPacket* request, ::ibc::core::channel::v1::MsgRecvPacketResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_RecvPacket_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ibc::core::channel::v1::MsgRecvPacketResponse>* Msg::Stub::PrepareAsyncRecvPacketRaw(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgRecvPacket& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::ibc::core::channel::v1::MsgRecvPacketResponse, ::ibc::core::channel::v1::MsgRecvPacket, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_RecvPacket_, context, request);
}

::grpc::ClientAsyncResponseReader< ::ibc::core::channel::v1::MsgRecvPacketResponse>* Msg::Stub::AsyncRecvPacketRaw(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgRecvPacket& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncRecvPacketRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Msg::Stub::Timeout(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgTimeout& request, ::ibc::core::channel::v1::MsgTimeoutResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ibc::core::channel::v1::MsgTimeout, ::ibc::core::channel::v1::MsgTimeoutResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Timeout_, context, request, response);
}

void Msg::Stub::async::Timeout(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgTimeout* request, ::ibc::core::channel::v1::MsgTimeoutResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ibc::core::channel::v1::MsgTimeout, ::ibc::core::channel::v1::MsgTimeoutResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Timeout_, context, request, response, std::move(f));
}

void Msg::Stub::async::Timeout(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgTimeout* request, ::ibc::core::channel::v1::MsgTimeoutResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Timeout_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ibc::core::channel::v1::MsgTimeoutResponse>* Msg::Stub::PrepareAsyncTimeoutRaw(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgTimeout& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::ibc::core::channel::v1::MsgTimeoutResponse, ::ibc::core::channel::v1::MsgTimeout, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Timeout_, context, request);
}

::grpc::ClientAsyncResponseReader< ::ibc::core::channel::v1::MsgTimeoutResponse>* Msg::Stub::AsyncTimeoutRaw(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgTimeout& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncTimeoutRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Msg::Stub::TimeoutOnClose(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgTimeoutOnClose& request, ::ibc::core::channel::v1::MsgTimeoutOnCloseResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ibc::core::channel::v1::MsgTimeoutOnClose, ::ibc::core::channel::v1::MsgTimeoutOnCloseResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_TimeoutOnClose_, context, request, response);
}

void Msg::Stub::async::TimeoutOnClose(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgTimeoutOnClose* request, ::ibc::core::channel::v1::MsgTimeoutOnCloseResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ibc::core::channel::v1::MsgTimeoutOnClose, ::ibc::core::channel::v1::MsgTimeoutOnCloseResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_TimeoutOnClose_, context, request, response, std::move(f));
}

void Msg::Stub::async::TimeoutOnClose(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgTimeoutOnClose* request, ::ibc::core::channel::v1::MsgTimeoutOnCloseResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_TimeoutOnClose_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ibc::core::channel::v1::MsgTimeoutOnCloseResponse>* Msg::Stub::PrepareAsyncTimeoutOnCloseRaw(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgTimeoutOnClose& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::ibc::core::channel::v1::MsgTimeoutOnCloseResponse, ::ibc::core::channel::v1::MsgTimeoutOnClose, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_TimeoutOnClose_, context, request);
}

::grpc::ClientAsyncResponseReader< ::ibc::core::channel::v1::MsgTimeoutOnCloseResponse>* Msg::Stub::AsyncTimeoutOnCloseRaw(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgTimeoutOnClose& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncTimeoutOnCloseRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Msg::Stub::Acknowledgement(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgAcknowledgement& request, ::ibc::core::channel::v1::MsgAcknowledgementResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ibc::core::channel::v1::MsgAcknowledgement, ::ibc::core::channel::v1::MsgAcknowledgementResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Acknowledgement_, context, request, response);
}

void Msg::Stub::async::Acknowledgement(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgAcknowledgement* request, ::ibc::core::channel::v1::MsgAcknowledgementResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ibc::core::channel::v1::MsgAcknowledgement, ::ibc::core::channel::v1::MsgAcknowledgementResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Acknowledgement_, context, request, response, std::move(f));
}

void Msg::Stub::async::Acknowledgement(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgAcknowledgement* request, ::ibc::core::channel::v1::MsgAcknowledgementResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Acknowledgement_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ibc::core::channel::v1::MsgAcknowledgementResponse>* Msg::Stub::PrepareAsyncAcknowledgementRaw(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgAcknowledgement& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::ibc::core::channel::v1::MsgAcknowledgementResponse, ::ibc::core::channel::v1::MsgAcknowledgement, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Acknowledgement_, context, request);
}

::grpc::ClientAsyncResponseReader< ::ibc::core::channel::v1::MsgAcknowledgementResponse>* Msg::Stub::AsyncAcknowledgementRaw(::grpc::ClientContext* context, const ::ibc::core::channel::v1::MsgAcknowledgement& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncAcknowledgementRaw(context, request, cq);
  result->StartCall();
  return result;
}

Msg::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Msg_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Msg::Service, ::ibc::core::channel::v1::MsgChannelOpenInit, ::ibc::core::channel::v1::MsgChannelOpenInitResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Msg::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ibc::core::channel::v1::MsgChannelOpenInit* req,
             ::ibc::core::channel::v1::MsgChannelOpenInitResponse* resp) {
               return service->ChannelOpenInit(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Msg_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Msg::Service, ::ibc::core::channel::v1::MsgChannelOpenTry, ::ibc::core::channel::v1::MsgChannelOpenTryResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Msg::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ibc::core::channel::v1::MsgChannelOpenTry* req,
             ::ibc::core::channel::v1::MsgChannelOpenTryResponse* resp) {
               return service->ChannelOpenTry(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Msg_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Msg::Service, ::ibc::core::channel::v1::MsgChannelOpenAck, ::ibc::core::channel::v1::MsgChannelOpenAckResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Msg::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ibc::core::channel::v1::MsgChannelOpenAck* req,
             ::ibc::core::channel::v1::MsgChannelOpenAckResponse* resp) {
               return service->ChannelOpenAck(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Msg_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Msg::Service, ::ibc::core::channel::v1::MsgChannelOpenConfirm, ::ibc::core::channel::v1::MsgChannelOpenConfirmResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Msg::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ibc::core::channel::v1::MsgChannelOpenConfirm* req,
             ::ibc::core::channel::v1::MsgChannelOpenConfirmResponse* resp) {
               return service->ChannelOpenConfirm(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Msg_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Msg::Service, ::ibc::core::channel::v1::MsgChannelCloseInit, ::ibc::core::channel::v1::MsgChannelCloseInitResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Msg::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ibc::core::channel::v1::MsgChannelCloseInit* req,
             ::ibc::core::channel::v1::MsgChannelCloseInitResponse* resp) {
               return service->ChannelCloseInit(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Msg_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Msg::Service, ::ibc::core::channel::v1::MsgChannelCloseConfirm, ::ibc::core::channel::v1::MsgChannelCloseConfirmResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Msg::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ibc::core::channel::v1::MsgChannelCloseConfirm* req,
             ::ibc::core::channel::v1::MsgChannelCloseConfirmResponse* resp) {
               return service->ChannelCloseConfirm(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Msg_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Msg::Service, ::ibc::core::channel::v1::MsgRecvPacket, ::ibc::core::channel::v1::MsgRecvPacketResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Msg::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ibc::core::channel::v1::MsgRecvPacket* req,
             ::ibc::core::channel::v1::MsgRecvPacketResponse* resp) {
               return service->RecvPacket(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Msg_method_names[7],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Msg::Service, ::ibc::core::channel::v1::MsgTimeout, ::ibc::core::channel::v1::MsgTimeoutResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Msg::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ibc::core::channel::v1::MsgTimeout* req,
             ::ibc::core::channel::v1::MsgTimeoutResponse* resp) {
               return service->Timeout(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Msg_method_names[8],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Msg::Service, ::ibc::core::channel::v1::MsgTimeoutOnClose, ::ibc::core::channel::v1::MsgTimeoutOnCloseResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Msg::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ibc::core::channel::v1::MsgTimeoutOnClose* req,
             ::ibc::core::channel::v1::MsgTimeoutOnCloseResponse* resp) {
               return service->TimeoutOnClose(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Msg_method_names[9],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Msg::Service, ::ibc::core::channel::v1::MsgAcknowledgement, ::ibc::core::channel::v1::MsgAcknowledgementResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Msg::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ibc::core::channel::v1::MsgAcknowledgement* req,
             ::ibc::core::channel::v1::MsgAcknowledgementResponse* resp) {
               return service->Acknowledgement(ctx, req, resp);
             }, this)));
}

Msg::Service::~Service() {
}

::grpc::Status Msg::Service::ChannelOpenInit(::grpc::ServerContext* context, const ::ibc::core::channel::v1::MsgChannelOpenInit* request, ::ibc::core::channel::v1::MsgChannelOpenInitResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Msg::Service::ChannelOpenTry(::grpc::ServerContext* context, const ::ibc::core::channel::v1::MsgChannelOpenTry* request, ::ibc::core::channel::v1::MsgChannelOpenTryResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Msg::Service::ChannelOpenAck(::grpc::ServerContext* context, const ::ibc::core::channel::v1::MsgChannelOpenAck* request, ::ibc::core::channel::v1::MsgChannelOpenAckResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Msg::Service::ChannelOpenConfirm(::grpc::ServerContext* context, const ::ibc::core::channel::v1::MsgChannelOpenConfirm* request, ::ibc::core::channel::v1::MsgChannelOpenConfirmResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Msg::Service::ChannelCloseInit(::grpc::ServerContext* context, const ::ibc::core::channel::v1::MsgChannelCloseInit* request, ::ibc::core::channel::v1::MsgChannelCloseInitResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Msg::Service::ChannelCloseConfirm(::grpc::ServerContext* context, const ::ibc::core::channel::v1::MsgChannelCloseConfirm* request, ::ibc::core::channel::v1::MsgChannelCloseConfirmResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Msg::Service::RecvPacket(::grpc::ServerContext* context, const ::ibc::core::channel::v1::MsgRecvPacket* request, ::ibc::core::channel::v1::MsgRecvPacketResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Msg::Service::Timeout(::grpc::ServerContext* context, const ::ibc::core::channel::v1::MsgTimeout* request, ::ibc::core::channel::v1::MsgTimeoutResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Msg::Service::TimeoutOnClose(::grpc::ServerContext* context, const ::ibc::core::channel::v1::MsgTimeoutOnClose* request, ::ibc::core::channel::v1::MsgTimeoutOnCloseResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Msg::Service::Acknowledgement(::grpc::ServerContext* context, const ::ibc::core::channel::v1::MsgAcknowledgement* request, ::ibc::core::channel::v1::MsgAcknowledgementResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace ibc
}  // namespace core
}  // namespace channel
}  // namespace v1

