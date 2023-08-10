// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: cosmos/feegrant/v1beta1/tx.proto
// Original file comments:
// Since: cosmos-sdk 0.43
#ifndef GRPC_cosmos_2ffeegrant_2fv1beta1_2ftx_2eproto__INCLUDED
#define GRPC_cosmos_2ffeegrant_2fv1beta1_2ftx_2eproto__INCLUDED

#include "cosmos/feegrant/v1beta1/tx.pb.h"

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

namespace cosmos {
namespace feegrant {
namespace v1beta1 {

// Msg defines the feegrant msg service.
class Msg final {
 public:
  static constexpr char const* service_full_name() {
    return "cosmos.feegrant.v1beta1.Msg";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // GrantAllowance grants fee allowance to the grantee on the granter's
    // account with the provided expiration time.
    virtual ::grpc::Status GrantAllowance(::grpc::ClientContext* context, const ::cosmos::feegrant::v1beta1::MsgGrantAllowance& request, ::cosmos::feegrant::v1beta1::MsgGrantAllowanceResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::cosmos::feegrant::v1beta1::MsgGrantAllowanceResponse>> AsyncGrantAllowance(::grpc::ClientContext* context, const ::cosmos::feegrant::v1beta1::MsgGrantAllowance& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::cosmos::feegrant::v1beta1::MsgGrantAllowanceResponse>>(AsyncGrantAllowanceRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::cosmos::feegrant::v1beta1::MsgGrantAllowanceResponse>> PrepareAsyncGrantAllowance(::grpc::ClientContext* context, const ::cosmos::feegrant::v1beta1::MsgGrantAllowance& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::cosmos::feegrant::v1beta1::MsgGrantAllowanceResponse>>(PrepareAsyncGrantAllowanceRaw(context, request, cq));
    }
    // RevokeAllowance revokes any fee allowance of granter's account that
    // has been granted to the grantee.
    virtual ::grpc::Status RevokeAllowance(::grpc::ClientContext* context, const ::cosmos::feegrant::v1beta1::MsgRevokeAllowance& request, ::cosmos::feegrant::v1beta1::MsgRevokeAllowanceResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::cosmos::feegrant::v1beta1::MsgRevokeAllowanceResponse>> AsyncRevokeAllowance(::grpc::ClientContext* context, const ::cosmos::feegrant::v1beta1::MsgRevokeAllowance& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::cosmos::feegrant::v1beta1::MsgRevokeAllowanceResponse>>(AsyncRevokeAllowanceRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::cosmos::feegrant::v1beta1::MsgRevokeAllowanceResponse>> PrepareAsyncRevokeAllowance(::grpc::ClientContext* context, const ::cosmos::feegrant::v1beta1::MsgRevokeAllowance& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::cosmos::feegrant::v1beta1::MsgRevokeAllowanceResponse>>(PrepareAsyncRevokeAllowanceRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      // GrantAllowance grants fee allowance to the grantee on the granter's
      // account with the provided expiration time.
      virtual void GrantAllowance(::grpc::ClientContext* context, const ::cosmos::feegrant::v1beta1::MsgGrantAllowance* request, ::cosmos::feegrant::v1beta1::MsgGrantAllowanceResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void GrantAllowance(::grpc::ClientContext* context, const ::cosmos::feegrant::v1beta1::MsgGrantAllowance* request, ::cosmos::feegrant::v1beta1::MsgGrantAllowanceResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      // RevokeAllowance revokes any fee allowance of granter's account that
      // has been granted to the grantee.
      virtual void RevokeAllowance(::grpc::ClientContext* context, const ::cosmos::feegrant::v1beta1::MsgRevokeAllowance* request, ::cosmos::feegrant::v1beta1::MsgRevokeAllowanceResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void RevokeAllowance(::grpc::ClientContext* context, const ::cosmos::feegrant::v1beta1::MsgRevokeAllowance* request, ::cosmos::feegrant::v1beta1::MsgRevokeAllowanceResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::cosmos::feegrant::v1beta1::MsgGrantAllowanceResponse>* AsyncGrantAllowanceRaw(::grpc::ClientContext* context, const ::cosmos::feegrant::v1beta1::MsgGrantAllowance& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::cosmos::feegrant::v1beta1::MsgGrantAllowanceResponse>* PrepareAsyncGrantAllowanceRaw(::grpc::ClientContext* context, const ::cosmos::feegrant::v1beta1::MsgGrantAllowance& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::cosmos::feegrant::v1beta1::MsgRevokeAllowanceResponse>* AsyncRevokeAllowanceRaw(::grpc::ClientContext* context, const ::cosmos::feegrant::v1beta1::MsgRevokeAllowance& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::cosmos::feegrant::v1beta1::MsgRevokeAllowanceResponse>* PrepareAsyncRevokeAllowanceRaw(::grpc::ClientContext* context, const ::cosmos::feegrant::v1beta1::MsgRevokeAllowance& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status GrantAllowance(::grpc::ClientContext* context, const ::cosmos::feegrant::v1beta1::MsgGrantAllowance& request, ::cosmos::feegrant::v1beta1::MsgGrantAllowanceResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::cosmos::feegrant::v1beta1::MsgGrantAllowanceResponse>> AsyncGrantAllowance(::grpc::ClientContext* context, const ::cosmos::feegrant::v1beta1::MsgGrantAllowance& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::cosmos::feegrant::v1beta1::MsgGrantAllowanceResponse>>(AsyncGrantAllowanceRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::cosmos::feegrant::v1beta1::MsgGrantAllowanceResponse>> PrepareAsyncGrantAllowance(::grpc::ClientContext* context, const ::cosmos::feegrant::v1beta1::MsgGrantAllowance& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::cosmos::feegrant::v1beta1::MsgGrantAllowanceResponse>>(PrepareAsyncGrantAllowanceRaw(context, request, cq));
    }
    ::grpc::Status RevokeAllowance(::grpc::ClientContext* context, const ::cosmos::feegrant::v1beta1::MsgRevokeAllowance& request, ::cosmos::feegrant::v1beta1::MsgRevokeAllowanceResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::cosmos::feegrant::v1beta1::MsgRevokeAllowanceResponse>> AsyncRevokeAllowance(::grpc::ClientContext* context, const ::cosmos::feegrant::v1beta1::MsgRevokeAllowance& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::cosmos::feegrant::v1beta1::MsgRevokeAllowanceResponse>>(AsyncRevokeAllowanceRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::cosmos::feegrant::v1beta1::MsgRevokeAllowanceResponse>> PrepareAsyncRevokeAllowance(::grpc::ClientContext* context, const ::cosmos::feegrant::v1beta1::MsgRevokeAllowance& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::cosmos::feegrant::v1beta1::MsgRevokeAllowanceResponse>>(PrepareAsyncRevokeAllowanceRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void GrantAllowance(::grpc::ClientContext* context, const ::cosmos::feegrant::v1beta1::MsgGrantAllowance* request, ::cosmos::feegrant::v1beta1::MsgGrantAllowanceResponse* response, std::function<void(::grpc::Status)>) override;
      void GrantAllowance(::grpc::ClientContext* context, const ::cosmos::feegrant::v1beta1::MsgGrantAllowance* request, ::cosmos::feegrant::v1beta1::MsgGrantAllowanceResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      void RevokeAllowance(::grpc::ClientContext* context, const ::cosmos::feegrant::v1beta1::MsgRevokeAllowance* request, ::cosmos::feegrant::v1beta1::MsgRevokeAllowanceResponse* response, std::function<void(::grpc::Status)>) override;
      void RevokeAllowance(::grpc::ClientContext* context, const ::cosmos::feegrant::v1beta1::MsgRevokeAllowance* request, ::cosmos::feegrant::v1beta1::MsgRevokeAllowanceResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
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
    ::grpc::ClientAsyncResponseReader< ::cosmos::feegrant::v1beta1::MsgGrantAllowanceResponse>* AsyncGrantAllowanceRaw(::grpc::ClientContext* context, const ::cosmos::feegrant::v1beta1::MsgGrantAllowance& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::cosmos::feegrant::v1beta1::MsgGrantAllowanceResponse>* PrepareAsyncGrantAllowanceRaw(::grpc::ClientContext* context, const ::cosmos::feegrant::v1beta1::MsgGrantAllowance& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::cosmos::feegrant::v1beta1::MsgRevokeAllowanceResponse>* AsyncRevokeAllowanceRaw(::grpc::ClientContext* context, const ::cosmos::feegrant::v1beta1::MsgRevokeAllowance& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::cosmos::feegrant::v1beta1::MsgRevokeAllowanceResponse>* PrepareAsyncRevokeAllowanceRaw(::grpc::ClientContext* context, const ::cosmos::feegrant::v1beta1::MsgRevokeAllowance& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_GrantAllowance_;
    const ::grpc::internal::RpcMethod rpcmethod_RevokeAllowance_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // GrantAllowance grants fee allowance to the grantee on the granter's
    // account with the provided expiration time.
    virtual ::grpc::Status GrantAllowance(::grpc::ServerContext* context, const ::cosmos::feegrant::v1beta1::MsgGrantAllowance* request, ::cosmos::feegrant::v1beta1::MsgGrantAllowanceResponse* response);
    // RevokeAllowance revokes any fee allowance of granter's account that
    // has been granted to the grantee.
    virtual ::grpc::Status RevokeAllowance(::grpc::ServerContext* context, const ::cosmos::feegrant::v1beta1::MsgRevokeAllowance* request, ::cosmos::feegrant::v1beta1::MsgRevokeAllowanceResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_GrantAllowance : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_GrantAllowance() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_GrantAllowance() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GrantAllowance(::grpc::ServerContext* /*context*/, const ::cosmos::feegrant::v1beta1::MsgGrantAllowance* /*request*/, ::cosmos::feegrant::v1beta1::MsgGrantAllowanceResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGrantAllowance(::grpc::ServerContext* context, ::cosmos::feegrant::v1beta1::MsgGrantAllowance* request, ::grpc::ServerAsyncResponseWriter< ::cosmos::feegrant::v1beta1::MsgGrantAllowanceResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_RevokeAllowance : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_RevokeAllowance() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_RevokeAllowance() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status RevokeAllowance(::grpc::ServerContext* /*context*/, const ::cosmos::feegrant::v1beta1::MsgRevokeAllowance* /*request*/, ::cosmos::feegrant::v1beta1::MsgRevokeAllowanceResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestRevokeAllowance(::grpc::ServerContext* context, ::cosmos::feegrant::v1beta1::MsgRevokeAllowance* request, ::grpc::ServerAsyncResponseWriter< ::cosmos::feegrant::v1beta1::MsgRevokeAllowanceResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GrantAllowance<WithAsyncMethod_RevokeAllowance<Service > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_GrantAllowance : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_GrantAllowance() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::cosmos::feegrant::v1beta1::MsgGrantAllowance, ::cosmos::feegrant::v1beta1::MsgGrantAllowanceResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::cosmos::feegrant::v1beta1::MsgGrantAllowance* request, ::cosmos::feegrant::v1beta1::MsgGrantAllowanceResponse* response) { return this->GrantAllowance(context, request, response); }));}
    void SetMessageAllocatorFor_GrantAllowance(
        ::grpc::MessageAllocator< ::cosmos::feegrant::v1beta1::MsgGrantAllowance, ::cosmos::feegrant::v1beta1::MsgGrantAllowanceResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::cosmos::feegrant::v1beta1::MsgGrantAllowance, ::cosmos::feegrant::v1beta1::MsgGrantAllowanceResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_GrantAllowance() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GrantAllowance(::grpc::ServerContext* /*context*/, const ::cosmos::feegrant::v1beta1::MsgGrantAllowance* /*request*/, ::cosmos::feegrant::v1beta1::MsgGrantAllowanceResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* GrantAllowance(
      ::grpc::CallbackServerContext* /*context*/, const ::cosmos::feegrant::v1beta1::MsgGrantAllowance* /*request*/, ::cosmos::feegrant::v1beta1::MsgGrantAllowanceResponse* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_RevokeAllowance : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_RevokeAllowance() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::cosmos::feegrant::v1beta1::MsgRevokeAllowance, ::cosmos::feegrant::v1beta1::MsgRevokeAllowanceResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::cosmos::feegrant::v1beta1::MsgRevokeAllowance* request, ::cosmos::feegrant::v1beta1::MsgRevokeAllowanceResponse* response) { return this->RevokeAllowance(context, request, response); }));}
    void SetMessageAllocatorFor_RevokeAllowance(
        ::grpc::MessageAllocator< ::cosmos::feegrant::v1beta1::MsgRevokeAllowance, ::cosmos::feegrant::v1beta1::MsgRevokeAllowanceResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::cosmos::feegrant::v1beta1::MsgRevokeAllowance, ::cosmos::feegrant::v1beta1::MsgRevokeAllowanceResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_RevokeAllowance() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status RevokeAllowance(::grpc::ServerContext* /*context*/, const ::cosmos::feegrant::v1beta1::MsgRevokeAllowance* /*request*/, ::cosmos::feegrant::v1beta1::MsgRevokeAllowanceResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* RevokeAllowance(
      ::grpc::CallbackServerContext* /*context*/, const ::cosmos::feegrant::v1beta1::MsgRevokeAllowance* /*request*/, ::cosmos::feegrant::v1beta1::MsgRevokeAllowanceResponse* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_GrantAllowance<WithCallbackMethod_RevokeAllowance<Service > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_GrantAllowance : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_GrantAllowance() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GrantAllowance() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GrantAllowance(::grpc::ServerContext* /*context*/, const ::cosmos::feegrant::v1beta1::MsgGrantAllowance* /*request*/, ::cosmos::feegrant::v1beta1::MsgGrantAllowanceResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_RevokeAllowance : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_RevokeAllowance() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_RevokeAllowance() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status RevokeAllowance(::grpc::ServerContext* /*context*/, const ::cosmos::feegrant::v1beta1::MsgRevokeAllowance* /*request*/, ::cosmos::feegrant::v1beta1::MsgRevokeAllowanceResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_GrantAllowance : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_GrantAllowance() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_GrantAllowance() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GrantAllowance(::grpc::ServerContext* /*context*/, const ::cosmos::feegrant::v1beta1::MsgGrantAllowance* /*request*/, ::cosmos::feegrant::v1beta1::MsgGrantAllowanceResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGrantAllowance(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_RevokeAllowance : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_RevokeAllowance() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_RevokeAllowance() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status RevokeAllowance(::grpc::ServerContext* /*context*/, const ::cosmos::feegrant::v1beta1::MsgRevokeAllowance* /*request*/, ::cosmos::feegrant::v1beta1::MsgRevokeAllowanceResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestRevokeAllowance(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_GrantAllowance : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_GrantAllowance() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->GrantAllowance(context, request, response); }));
    }
    ~WithRawCallbackMethod_GrantAllowance() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GrantAllowance(::grpc::ServerContext* /*context*/, const ::cosmos::feegrant::v1beta1::MsgGrantAllowance* /*request*/, ::cosmos::feegrant::v1beta1::MsgGrantAllowanceResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* GrantAllowance(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_RevokeAllowance : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_RevokeAllowance() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->RevokeAllowance(context, request, response); }));
    }
    ~WithRawCallbackMethod_RevokeAllowance() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status RevokeAllowance(::grpc::ServerContext* /*context*/, const ::cosmos::feegrant::v1beta1::MsgRevokeAllowance* /*request*/, ::cosmos::feegrant::v1beta1::MsgRevokeAllowanceResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* RevokeAllowance(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GrantAllowance : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_GrantAllowance() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::cosmos::feegrant::v1beta1::MsgGrantAllowance, ::cosmos::feegrant::v1beta1::MsgGrantAllowanceResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::cosmos::feegrant::v1beta1::MsgGrantAllowance, ::cosmos::feegrant::v1beta1::MsgGrantAllowanceResponse>* streamer) {
                       return this->StreamedGrantAllowance(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_GrantAllowance() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GrantAllowance(::grpc::ServerContext* /*context*/, const ::cosmos::feegrant::v1beta1::MsgGrantAllowance* /*request*/, ::cosmos::feegrant::v1beta1::MsgGrantAllowanceResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGrantAllowance(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::cosmos::feegrant::v1beta1::MsgGrantAllowance,::cosmos::feegrant::v1beta1::MsgGrantAllowanceResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_RevokeAllowance : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_RevokeAllowance() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::cosmos::feegrant::v1beta1::MsgRevokeAllowance, ::cosmos::feegrant::v1beta1::MsgRevokeAllowanceResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::cosmos::feegrant::v1beta1::MsgRevokeAllowance, ::cosmos::feegrant::v1beta1::MsgRevokeAllowanceResponse>* streamer) {
                       return this->StreamedRevokeAllowance(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_RevokeAllowance() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status RevokeAllowance(::grpc::ServerContext* /*context*/, const ::cosmos::feegrant::v1beta1::MsgRevokeAllowance* /*request*/, ::cosmos::feegrant::v1beta1::MsgRevokeAllowanceResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedRevokeAllowance(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::cosmos::feegrant::v1beta1::MsgRevokeAllowance,::cosmos::feegrant::v1beta1::MsgRevokeAllowanceResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_GrantAllowance<WithStreamedUnaryMethod_RevokeAllowance<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_GrantAllowance<WithStreamedUnaryMethod_RevokeAllowance<Service > > StreamedService;
};

}  // namespace v1beta1
}  // namespace feegrant
}  // namespace cosmos


#endif  // GRPC_cosmos_2ffeegrant_2fv1beta1_2ftx_2eproto__INCLUDED
