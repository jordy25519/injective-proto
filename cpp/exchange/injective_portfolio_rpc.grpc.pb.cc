// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: exchange/injective_portfolio_rpc.proto

#include "exchange/injective_portfolio_rpc.pb.h"
#include "exchange/injective_portfolio_rpc.grpc.pb.h"

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
namespace injective_portfolio_rpc {

static const char* InjectivePortfolioRPC_method_names[] = {
  "/injective_portfolio_rpc.InjectivePortfolioRPC/AccountPortfolio",
};

std::unique_ptr< InjectivePortfolioRPC::Stub> InjectivePortfolioRPC::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< InjectivePortfolioRPC::Stub> stub(new InjectivePortfolioRPC::Stub(channel, options));
  return stub;
}

InjectivePortfolioRPC::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_AccountPortfolio_(InjectivePortfolioRPC_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status InjectivePortfolioRPC::Stub::AccountPortfolio(::grpc::ClientContext* context, const ::injective_portfolio_rpc::AccountPortfolioRequest& request, ::injective_portfolio_rpc::AccountPortfolioResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::injective_portfolio_rpc::AccountPortfolioRequest, ::injective_portfolio_rpc::AccountPortfolioResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_AccountPortfolio_, context, request, response);
}

void InjectivePortfolioRPC::Stub::async::AccountPortfolio(::grpc::ClientContext* context, const ::injective_portfolio_rpc::AccountPortfolioRequest* request, ::injective_portfolio_rpc::AccountPortfolioResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::injective_portfolio_rpc::AccountPortfolioRequest, ::injective_portfolio_rpc::AccountPortfolioResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_AccountPortfolio_, context, request, response, std::move(f));
}

void InjectivePortfolioRPC::Stub::async::AccountPortfolio(::grpc::ClientContext* context, const ::injective_portfolio_rpc::AccountPortfolioRequest* request, ::injective_portfolio_rpc::AccountPortfolioResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_AccountPortfolio_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::injective_portfolio_rpc::AccountPortfolioResponse>* InjectivePortfolioRPC::Stub::PrepareAsyncAccountPortfolioRaw(::grpc::ClientContext* context, const ::injective_portfolio_rpc::AccountPortfolioRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::injective_portfolio_rpc::AccountPortfolioResponse, ::injective_portfolio_rpc::AccountPortfolioRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_AccountPortfolio_, context, request);
}

::grpc::ClientAsyncResponseReader< ::injective_portfolio_rpc::AccountPortfolioResponse>* InjectivePortfolioRPC::Stub::AsyncAccountPortfolioRaw(::grpc::ClientContext* context, const ::injective_portfolio_rpc::AccountPortfolioRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncAccountPortfolioRaw(context, request, cq);
  result->StartCall();
  return result;
}

InjectivePortfolioRPC::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      InjectivePortfolioRPC_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< InjectivePortfolioRPC::Service, ::injective_portfolio_rpc::AccountPortfolioRequest, ::injective_portfolio_rpc::AccountPortfolioResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](InjectivePortfolioRPC::Service* service,
             ::grpc::ServerContext* ctx,
             const ::injective_portfolio_rpc::AccountPortfolioRequest* req,
             ::injective_portfolio_rpc::AccountPortfolioResponse* resp) {
               return service->AccountPortfolio(ctx, req, resp);
             }, this)));
}

InjectivePortfolioRPC::Service::~Service() {
}

::grpc::Status InjectivePortfolioRPC::Service::AccountPortfolio(::grpc::ServerContext* context, const ::injective_portfolio_rpc::AccountPortfolioRequest* request, ::injective_portfolio_rpc::AccountPortfolioResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace injective_portfolio_rpc

