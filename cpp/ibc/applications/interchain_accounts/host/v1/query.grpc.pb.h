// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: ibc/applications/interchain_accounts/host/v1/query.proto
#ifndef GRPC_ibc_2fapplications_2finterchain_5faccounts_2fhost_2fv1_2fquery_2eproto__INCLUDED
#define GRPC_ibc_2fapplications_2finterchain_5faccounts_2fhost_2fv1_2fquery_2eproto__INCLUDED

#include "ibc/applications/interchain_accounts/host/v1/query.pb.h"

#include <functional>
#include <grpcpp/generic/async_generic_service.h>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/client_context.h>
#include <grpcpp/completion_queue.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/proto_utils.h>
#include <grpcpp/impl/rpc_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/status.h>
#include <grpcpp/support/stub_options.h>
#include <grpcpp/support/sync_stream.h>

namespace ibc {
namespace applications {
namespace interchain_accounts {
namespace host {
namespace v1 {

// Query provides defines the gRPC querier service.
class Query final {
 public:
  static constexpr char const* service_full_name() {
    return "ibc.applications.interchain_accounts.host.v1.Query";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Params queries all parameters of the ICA host submodule.
    virtual ::grpc::Status Params(::grpc::ClientContext* context, const ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest& request, ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse>> AsyncParams(::grpc::ClientContext* context, const ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse>>(AsyncParamsRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse>> PrepareAsyncParams(::grpc::ClientContext* context, const ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse>>(PrepareAsyncParamsRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      // Params queries all parameters of the ICA host submodule.
      virtual void Params(::grpc::ClientContext* context, const ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest* request, ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Params(::grpc::ClientContext* context, const ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest* request, ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse>* AsyncParamsRaw(::grpc::ClientContext* context, const ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse>* PrepareAsyncParamsRaw(::grpc::ClientContext* context, const ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status Params(::grpc::ClientContext* context, const ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest& request, ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse>> AsyncParams(::grpc::ClientContext* context, const ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse>>(AsyncParamsRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse>> PrepareAsyncParams(::grpc::ClientContext* context, const ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse>>(PrepareAsyncParamsRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void Params(::grpc::ClientContext* context, const ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest* request, ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse* response, std::function<void(::grpc::Status)>) override;
      void Params(::grpc::ClientContext* context, const ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest* request, ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse>* AsyncParamsRaw(::grpc::ClientContext* context, const ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse>* PrepareAsyncParamsRaw(::grpc::ClientContext* context, const ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Params_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Params queries all parameters of the ICA host submodule.
    virtual ::grpc::Status Params(::grpc::ServerContext* context, const ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest* request, ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Params : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Params() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Params() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Params(::grpc::ServerContext* /*context*/, const ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest* /*request*/, ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestParams(::grpc::ServerContext* context, ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest* request, ::grpc::ServerAsyncResponseWriter< ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Params<Service > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_Params : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Params() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest, ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest* request, ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse* response) { return this->Params(context, request, response); }));}
    void SetMessageAllocatorFor_Params(
        ::grpc::MessageAllocator< ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest, ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest, ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_Params() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Params(::grpc::ServerContext* /*context*/, const ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest* /*request*/, ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Params(
      ::grpc::CallbackServerContext* /*context*/, const ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest* /*request*/, ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_Params<Service > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_Params : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Params() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Params() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Params(::grpc::ServerContext* /*context*/, const ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest* /*request*/, ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_Params : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Params() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_Params() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Params(::grpc::ServerContext* /*context*/, const ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest* /*request*/, ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestParams(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Params : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Params() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Params(context, request, response); }));
    }
    ~WithRawCallbackMethod_Params() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Params(::grpc::ServerContext* /*context*/, const ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest* /*request*/, ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Params(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Params : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Params() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest, ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest, ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse>* streamer) {
                       return this->StreamedParams(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_Params() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Params(::grpc::ServerContext* /*context*/, const ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest* /*request*/, ::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedParams(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::ibc::applications::interchain_accounts::host::v1::QueryParamsRequest,::ibc::applications::interchain_accounts::host::v1::QueryParamsResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Params<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Params<Service > StreamedService;
};

}  // namespace v1
}  // namespace host
}  // namespace interchain_accounts
}  // namespace applications
}  // namespace ibc


#endif  // GRPC_ibc_2fapplications_2finterchain_5faccounts_2fhost_2fv1_2fquery_2eproto__INCLUDED
