// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: exchange/injective_exchange_rpc.proto

#include "exchange/injective_exchange_rpc.pb.h"
#include "exchange/injective_exchange_rpc.grpc.pb.h"

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
namespace injective_exchange_rpc {

static const char* InjectiveExchangeRPC_method_names[] = {
  "/injective_exchange_rpc.InjectiveExchangeRPC/GetTx",
  "/injective_exchange_rpc.InjectiveExchangeRPC/PrepareTx",
  "/injective_exchange_rpc.InjectiveExchangeRPC/BroadcastTx",
  "/injective_exchange_rpc.InjectiveExchangeRPC/PrepareCosmosTx",
  "/injective_exchange_rpc.InjectiveExchangeRPC/BroadcastCosmosTx",
  "/injective_exchange_rpc.InjectiveExchangeRPC/GetFeePayer",
};

std::unique_ptr< InjectiveExchangeRPC::Stub> InjectiveExchangeRPC::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< InjectiveExchangeRPC::Stub> stub(new InjectiveExchangeRPC::Stub(channel, options));
  return stub;
}

InjectiveExchangeRPC::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_GetTx_(InjectiveExchangeRPC_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_PrepareTx_(InjectiveExchangeRPC_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_BroadcastTx_(InjectiveExchangeRPC_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_PrepareCosmosTx_(InjectiveExchangeRPC_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_BroadcastCosmosTx_(InjectiveExchangeRPC_method_names[4], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetFeePayer_(InjectiveExchangeRPC_method_names[5], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status InjectiveExchangeRPC::Stub::GetTx(::grpc::ClientContext* context, const ::injective_exchange_rpc::GetTxRequest& request, ::injective_exchange_rpc::GetTxResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::injective_exchange_rpc::GetTxRequest, ::injective_exchange_rpc::GetTxResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetTx_, context, request, response);
}

void InjectiveExchangeRPC::Stub::async::GetTx(::grpc::ClientContext* context, const ::injective_exchange_rpc::GetTxRequest* request, ::injective_exchange_rpc::GetTxResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::injective_exchange_rpc::GetTxRequest, ::injective_exchange_rpc::GetTxResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetTx_, context, request, response, std::move(f));
}

void InjectiveExchangeRPC::Stub::async::GetTx(::grpc::ClientContext* context, const ::injective_exchange_rpc::GetTxRequest* request, ::injective_exchange_rpc::GetTxResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetTx_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::injective_exchange_rpc::GetTxResponse>* InjectiveExchangeRPC::Stub::PrepareAsyncGetTxRaw(::grpc::ClientContext* context, const ::injective_exchange_rpc::GetTxRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::injective_exchange_rpc::GetTxResponse, ::injective_exchange_rpc::GetTxRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetTx_, context, request);
}

::grpc::ClientAsyncResponseReader< ::injective_exchange_rpc::GetTxResponse>* InjectiveExchangeRPC::Stub::AsyncGetTxRaw(::grpc::ClientContext* context, const ::injective_exchange_rpc::GetTxRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetTxRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status InjectiveExchangeRPC::Stub::PrepareTx(::grpc::ClientContext* context, const ::injective_exchange_rpc::PrepareTxRequest& request, ::injective_exchange_rpc::PrepareTxResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::injective_exchange_rpc::PrepareTxRequest, ::injective_exchange_rpc::PrepareTxResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_PrepareTx_, context, request, response);
}

void InjectiveExchangeRPC::Stub::async::PrepareTx(::grpc::ClientContext* context, const ::injective_exchange_rpc::PrepareTxRequest* request, ::injective_exchange_rpc::PrepareTxResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::injective_exchange_rpc::PrepareTxRequest, ::injective_exchange_rpc::PrepareTxResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_PrepareTx_, context, request, response, std::move(f));
}

void InjectiveExchangeRPC::Stub::async::PrepareTx(::grpc::ClientContext* context, const ::injective_exchange_rpc::PrepareTxRequest* request, ::injective_exchange_rpc::PrepareTxResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_PrepareTx_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::injective_exchange_rpc::PrepareTxResponse>* InjectiveExchangeRPC::Stub::PrepareAsyncPrepareTxRaw(::grpc::ClientContext* context, const ::injective_exchange_rpc::PrepareTxRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::injective_exchange_rpc::PrepareTxResponse, ::injective_exchange_rpc::PrepareTxRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_PrepareTx_, context, request);
}

::grpc::ClientAsyncResponseReader< ::injective_exchange_rpc::PrepareTxResponse>* InjectiveExchangeRPC::Stub::AsyncPrepareTxRaw(::grpc::ClientContext* context, const ::injective_exchange_rpc::PrepareTxRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncPrepareTxRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status InjectiveExchangeRPC::Stub::BroadcastTx(::grpc::ClientContext* context, const ::injective_exchange_rpc::BroadcastTxRequest& request, ::injective_exchange_rpc::BroadcastTxResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::injective_exchange_rpc::BroadcastTxRequest, ::injective_exchange_rpc::BroadcastTxResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_BroadcastTx_, context, request, response);
}

void InjectiveExchangeRPC::Stub::async::BroadcastTx(::grpc::ClientContext* context, const ::injective_exchange_rpc::BroadcastTxRequest* request, ::injective_exchange_rpc::BroadcastTxResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::injective_exchange_rpc::BroadcastTxRequest, ::injective_exchange_rpc::BroadcastTxResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_BroadcastTx_, context, request, response, std::move(f));
}

void InjectiveExchangeRPC::Stub::async::BroadcastTx(::grpc::ClientContext* context, const ::injective_exchange_rpc::BroadcastTxRequest* request, ::injective_exchange_rpc::BroadcastTxResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_BroadcastTx_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::injective_exchange_rpc::BroadcastTxResponse>* InjectiveExchangeRPC::Stub::PrepareAsyncBroadcastTxRaw(::grpc::ClientContext* context, const ::injective_exchange_rpc::BroadcastTxRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::injective_exchange_rpc::BroadcastTxResponse, ::injective_exchange_rpc::BroadcastTxRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_BroadcastTx_, context, request);
}

::grpc::ClientAsyncResponseReader< ::injective_exchange_rpc::BroadcastTxResponse>* InjectiveExchangeRPC::Stub::AsyncBroadcastTxRaw(::grpc::ClientContext* context, const ::injective_exchange_rpc::BroadcastTxRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncBroadcastTxRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status InjectiveExchangeRPC::Stub::PrepareCosmosTx(::grpc::ClientContext* context, const ::injective_exchange_rpc::PrepareCosmosTxRequest& request, ::injective_exchange_rpc::PrepareCosmosTxResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::injective_exchange_rpc::PrepareCosmosTxRequest, ::injective_exchange_rpc::PrepareCosmosTxResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_PrepareCosmosTx_, context, request, response);
}

void InjectiveExchangeRPC::Stub::async::PrepareCosmosTx(::grpc::ClientContext* context, const ::injective_exchange_rpc::PrepareCosmosTxRequest* request, ::injective_exchange_rpc::PrepareCosmosTxResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::injective_exchange_rpc::PrepareCosmosTxRequest, ::injective_exchange_rpc::PrepareCosmosTxResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_PrepareCosmosTx_, context, request, response, std::move(f));
}

void InjectiveExchangeRPC::Stub::async::PrepareCosmosTx(::grpc::ClientContext* context, const ::injective_exchange_rpc::PrepareCosmosTxRequest* request, ::injective_exchange_rpc::PrepareCosmosTxResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_PrepareCosmosTx_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::injective_exchange_rpc::PrepareCosmosTxResponse>* InjectiveExchangeRPC::Stub::PrepareAsyncPrepareCosmosTxRaw(::grpc::ClientContext* context, const ::injective_exchange_rpc::PrepareCosmosTxRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::injective_exchange_rpc::PrepareCosmosTxResponse, ::injective_exchange_rpc::PrepareCosmosTxRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_PrepareCosmosTx_, context, request);
}

::grpc::ClientAsyncResponseReader< ::injective_exchange_rpc::PrepareCosmosTxResponse>* InjectiveExchangeRPC::Stub::AsyncPrepareCosmosTxRaw(::grpc::ClientContext* context, const ::injective_exchange_rpc::PrepareCosmosTxRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncPrepareCosmosTxRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status InjectiveExchangeRPC::Stub::BroadcastCosmosTx(::grpc::ClientContext* context, const ::injective_exchange_rpc::BroadcastCosmosTxRequest& request, ::injective_exchange_rpc::BroadcastCosmosTxResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::injective_exchange_rpc::BroadcastCosmosTxRequest, ::injective_exchange_rpc::BroadcastCosmosTxResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_BroadcastCosmosTx_, context, request, response);
}

void InjectiveExchangeRPC::Stub::async::BroadcastCosmosTx(::grpc::ClientContext* context, const ::injective_exchange_rpc::BroadcastCosmosTxRequest* request, ::injective_exchange_rpc::BroadcastCosmosTxResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::injective_exchange_rpc::BroadcastCosmosTxRequest, ::injective_exchange_rpc::BroadcastCosmosTxResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_BroadcastCosmosTx_, context, request, response, std::move(f));
}

void InjectiveExchangeRPC::Stub::async::BroadcastCosmosTx(::grpc::ClientContext* context, const ::injective_exchange_rpc::BroadcastCosmosTxRequest* request, ::injective_exchange_rpc::BroadcastCosmosTxResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_BroadcastCosmosTx_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::injective_exchange_rpc::BroadcastCosmosTxResponse>* InjectiveExchangeRPC::Stub::PrepareAsyncBroadcastCosmosTxRaw(::grpc::ClientContext* context, const ::injective_exchange_rpc::BroadcastCosmosTxRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::injective_exchange_rpc::BroadcastCosmosTxResponse, ::injective_exchange_rpc::BroadcastCosmosTxRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_BroadcastCosmosTx_, context, request);
}

::grpc::ClientAsyncResponseReader< ::injective_exchange_rpc::BroadcastCosmosTxResponse>* InjectiveExchangeRPC::Stub::AsyncBroadcastCosmosTxRaw(::grpc::ClientContext* context, const ::injective_exchange_rpc::BroadcastCosmosTxRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncBroadcastCosmosTxRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status InjectiveExchangeRPC::Stub::GetFeePayer(::grpc::ClientContext* context, const ::injective_exchange_rpc::GetFeePayerRequest& request, ::injective_exchange_rpc::GetFeePayerResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::injective_exchange_rpc::GetFeePayerRequest, ::injective_exchange_rpc::GetFeePayerResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetFeePayer_, context, request, response);
}

void InjectiveExchangeRPC::Stub::async::GetFeePayer(::grpc::ClientContext* context, const ::injective_exchange_rpc::GetFeePayerRequest* request, ::injective_exchange_rpc::GetFeePayerResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::injective_exchange_rpc::GetFeePayerRequest, ::injective_exchange_rpc::GetFeePayerResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetFeePayer_, context, request, response, std::move(f));
}

void InjectiveExchangeRPC::Stub::async::GetFeePayer(::grpc::ClientContext* context, const ::injective_exchange_rpc::GetFeePayerRequest* request, ::injective_exchange_rpc::GetFeePayerResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetFeePayer_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::injective_exchange_rpc::GetFeePayerResponse>* InjectiveExchangeRPC::Stub::PrepareAsyncGetFeePayerRaw(::grpc::ClientContext* context, const ::injective_exchange_rpc::GetFeePayerRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::injective_exchange_rpc::GetFeePayerResponse, ::injective_exchange_rpc::GetFeePayerRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetFeePayer_, context, request);
}

::grpc::ClientAsyncResponseReader< ::injective_exchange_rpc::GetFeePayerResponse>* InjectiveExchangeRPC::Stub::AsyncGetFeePayerRaw(::grpc::ClientContext* context, const ::injective_exchange_rpc::GetFeePayerRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetFeePayerRaw(context, request, cq);
  result->StartCall();
  return result;
}

InjectiveExchangeRPC::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      InjectiveExchangeRPC_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< InjectiveExchangeRPC::Service, ::injective_exchange_rpc::GetTxRequest, ::injective_exchange_rpc::GetTxResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](InjectiveExchangeRPC::Service* service,
             ::grpc::ServerContext* ctx,
             const ::injective_exchange_rpc::GetTxRequest* req,
             ::injective_exchange_rpc::GetTxResponse* resp) {
               return service->GetTx(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      InjectiveExchangeRPC_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< InjectiveExchangeRPC::Service, ::injective_exchange_rpc::PrepareTxRequest, ::injective_exchange_rpc::PrepareTxResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](InjectiveExchangeRPC::Service* service,
             ::grpc::ServerContext* ctx,
             const ::injective_exchange_rpc::PrepareTxRequest* req,
             ::injective_exchange_rpc::PrepareTxResponse* resp) {
               return service->PrepareTx(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      InjectiveExchangeRPC_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< InjectiveExchangeRPC::Service, ::injective_exchange_rpc::BroadcastTxRequest, ::injective_exchange_rpc::BroadcastTxResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](InjectiveExchangeRPC::Service* service,
             ::grpc::ServerContext* ctx,
             const ::injective_exchange_rpc::BroadcastTxRequest* req,
             ::injective_exchange_rpc::BroadcastTxResponse* resp) {
               return service->BroadcastTx(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      InjectiveExchangeRPC_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< InjectiveExchangeRPC::Service, ::injective_exchange_rpc::PrepareCosmosTxRequest, ::injective_exchange_rpc::PrepareCosmosTxResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](InjectiveExchangeRPC::Service* service,
             ::grpc::ServerContext* ctx,
             const ::injective_exchange_rpc::PrepareCosmosTxRequest* req,
             ::injective_exchange_rpc::PrepareCosmosTxResponse* resp) {
               return service->PrepareCosmosTx(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      InjectiveExchangeRPC_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< InjectiveExchangeRPC::Service, ::injective_exchange_rpc::BroadcastCosmosTxRequest, ::injective_exchange_rpc::BroadcastCosmosTxResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](InjectiveExchangeRPC::Service* service,
             ::grpc::ServerContext* ctx,
             const ::injective_exchange_rpc::BroadcastCosmosTxRequest* req,
             ::injective_exchange_rpc::BroadcastCosmosTxResponse* resp) {
               return service->BroadcastCosmosTx(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      InjectiveExchangeRPC_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< InjectiveExchangeRPC::Service, ::injective_exchange_rpc::GetFeePayerRequest, ::injective_exchange_rpc::GetFeePayerResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](InjectiveExchangeRPC::Service* service,
             ::grpc::ServerContext* ctx,
             const ::injective_exchange_rpc::GetFeePayerRequest* req,
             ::injective_exchange_rpc::GetFeePayerResponse* resp) {
               return service->GetFeePayer(ctx, req, resp);
             }, this)));
}

InjectiveExchangeRPC::Service::~Service() {
}

::grpc::Status InjectiveExchangeRPC::Service::GetTx(::grpc::ServerContext* context, const ::injective_exchange_rpc::GetTxRequest* request, ::injective_exchange_rpc::GetTxResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status InjectiveExchangeRPC::Service::PrepareTx(::grpc::ServerContext* context, const ::injective_exchange_rpc::PrepareTxRequest* request, ::injective_exchange_rpc::PrepareTxResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status InjectiveExchangeRPC::Service::BroadcastTx(::grpc::ServerContext* context, const ::injective_exchange_rpc::BroadcastTxRequest* request, ::injective_exchange_rpc::BroadcastTxResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status InjectiveExchangeRPC::Service::PrepareCosmosTx(::grpc::ServerContext* context, const ::injective_exchange_rpc::PrepareCosmosTxRequest* request, ::injective_exchange_rpc::PrepareCosmosTxResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status InjectiveExchangeRPC::Service::BroadcastCosmosTx(::grpc::ServerContext* context, const ::injective_exchange_rpc::BroadcastCosmosTxRequest* request, ::injective_exchange_rpc::BroadcastCosmosTxResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status InjectiveExchangeRPC::Service::GetFeePayer(::grpc::ServerContext* context, const ::injective_exchange_rpc::GetFeePayerRequest* request, ::injective_exchange_rpc::GetFeePayerResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace injective_exchange_rpc

