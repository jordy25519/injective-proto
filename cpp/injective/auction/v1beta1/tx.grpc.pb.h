// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: injective/auction/v1beta1/tx.proto
#ifndef GRPC_injective_2fauction_2fv1beta1_2ftx_2eproto__INCLUDED
#define GRPC_injective_2fauction_2fv1beta1_2ftx_2eproto__INCLUDED

#include "injective/auction/v1beta1/tx.pb.h"

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

namespace injective {
namespace auction {
namespace v1beta1 {

// Msg defines the auction Msg service.
class Msg final {
 public:
  static constexpr char const* service_full_name() {
    return "injective.auction.v1beta1.Msg";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Bid defines a method for placing a bid for an auction
    virtual ::grpc::Status Bid(::grpc::ClientContext* context, const ::injective::auction::v1beta1::MsgBid& request, ::injective::auction::v1beta1::MsgBidResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::injective::auction::v1beta1::MsgBidResponse>> AsyncBid(::grpc::ClientContext* context, const ::injective::auction::v1beta1::MsgBid& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::injective::auction::v1beta1::MsgBidResponse>>(AsyncBidRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::injective::auction::v1beta1::MsgBidResponse>> PrepareAsyncBid(::grpc::ClientContext* context, const ::injective::auction::v1beta1::MsgBid& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::injective::auction::v1beta1::MsgBidResponse>>(PrepareAsyncBidRaw(context, request, cq));
    }
    virtual ::grpc::Status UpdateParams(::grpc::ClientContext* context, const ::injective::auction::v1beta1::MsgUpdateParams& request, ::injective::auction::v1beta1::MsgUpdateParamsResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::injective::auction::v1beta1::MsgUpdateParamsResponse>> AsyncUpdateParams(::grpc::ClientContext* context, const ::injective::auction::v1beta1::MsgUpdateParams& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::injective::auction::v1beta1::MsgUpdateParamsResponse>>(AsyncUpdateParamsRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::injective::auction::v1beta1::MsgUpdateParamsResponse>> PrepareAsyncUpdateParams(::grpc::ClientContext* context, const ::injective::auction::v1beta1::MsgUpdateParams& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::injective::auction::v1beta1::MsgUpdateParamsResponse>>(PrepareAsyncUpdateParamsRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      // Bid defines a method for placing a bid for an auction
      virtual void Bid(::grpc::ClientContext* context, const ::injective::auction::v1beta1::MsgBid* request, ::injective::auction::v1beta1::MsgBidResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Bid(::grpc::ClientContext* context, const ::injective::auction::v1beta1::MsgBid* request, ::injective::auction::v1beta1::MsgBidResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void UpdateParams(::grpc::ClientContext* context, const ::injective::auction::v1beta1::MsgUpdateParams* request, ::injective::auction::v1beta1::MsgUpdateParamsResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void UpdateParams(::grpc::ClientContext* context, const ::injective::auction::v1beta1::MsgUpdateParams* request, ::injective::auction::v1beta1::MsgUpdateParamsResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::injective::auction::v1beta1::MsgBidResponse>* AsyncBidRaw(::grpc::ClientContext* context, const ::injective::auction::v1beta1::MsgBid& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::injective::auction::v1beta1::MsgBidResponse>* PrepareAsyncBidRaw(::grpc::ClientContext* context, const ::injective::auction::v1beta1::MsgBid& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::injective::auction::v1beta1::MsgUpdateParamsResponse>* AsyncUpdateParamsRaw(::grpc::ClientContext* context, const ::injective::auction::v1beta1::MsgUpdateParams& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::injective::auction::v1beta1::MsgUpdateParamsResponse>* PrepareAsyncUpdateParamsRaw(::grpc::ClientContext* context, const ::injective::auction::v1beta1::MsgUpdateParams& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status Bid(::grpc::ClientContext* context, const ::injective::auction::v1beta1::MsgBid& request, ::injective::auction::v1beta1::MsgBidResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::injective::auction::v1beta1::MsgBidResponse>> AsyncBid(::grpc::ClientContext* context, const ::injective::auction::v1beta1::MsgBid& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::injective::auction::v1beta1::MsgBidResponse>>(AsyncBidRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::injective::auction::v1beta1::MsgBidResponse>> PrepareAsyncBid(::grpc::ClientContext* context, const ::injective::auction::v1beta1::MsgBid& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::injective::auction::v1beta1::MsgBidResponse>>(PrepareAsyncBidRaw(context, request, cq));
    }
    ::grpc::Status UpdateParams(::grpc::ClientContext* context, const ::injective::auction::v1beta1::MsgUpdateParams& request, ::injective::auction::v1beta1::MsgUpdateParamsResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::injective::auction::v1beta1::MsgUpdateParamsResponse>> AsyncUpdateParams(::grpc::ClientContext* context, const ::injective::auction::v1beta1::MsgUpdateParams& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::injective::auction::v1beta1::MsgUpdateParamsResponse>>(AsyncUpdateParamsRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::injective::auction::v1beta1::MsgUpdateParamsResponse>> PrepareAsyncUpdateParams(::grpc::ClientContext* context, const ::injective::auction::v1beta1::MsgUpdateParams& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::injective::auction::v1beta1::MsgUpdateParamsResponse>>(PrepareAsyncUpdateParamsRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void Bid(::grpc::ClientContext* context, const ::injective::auction::v1beta1::MsgBid* request, ::injective::auction::v1beta1::MsgBidResponse* response, std::function<void(::grpc::Status)>) override;
      void Bid(::grpc::ClientContext* context, const ::injective::auction::v1beta1::MsgBid* request, ::injective::auction::v1beta1::MsgBidResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      void UpdateParams(::grpc::ClientContext* context, const ::injective::auction::v1beta1::MsgUpdateParams* request, ::injective::auction::v1beta1::MsgUpdateParamsResponse* response, std::function<void(::grpc::Status)>) override;
      void UpdateParams(::grpc::ClientContext* context, const ::injective::auction::v1beta1::MsgUpdateParams* request, ::injective::auction::v1beta1::MsgUpdateParamsResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
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
    ::grpc::ClientAsyncResponseReader< ::injective::auction::v1beta1::MsgBidResponse>* AsyncBidRaw(::grpc::ClientContext* context, const ::injective::auction::v1beta1::MsgBid& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::injective::auction::v1beta1::MsgBidResponse>* PrepareAsyncBidRaw(::grpc::ClientContext* context, const ::injective::auction::v1beta1::MsgBid& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::injective::auction::v1beta1::MsgUpdateParamsResponse>* AsyncUpdateParamsRaw(::grpc::ClientContext* context, const ::injective::auction::v1beta1::MsgUpdateParams& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::injective::auction::v1beta1::MsgUpdateParamsResponse>* PrepareAsyncUpdateParamsRaw(::grpc::ClientContext* context, const ::injective::auction::v1beta1::MsgUpdateParams& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Bid_;
    const ::grpc::internal::RpcMethod rpcmethod_UpdateParams_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Bid defines a method for placing a bid for an auction
    virtual ::grpc::Status Bid(::grpc::ServerContext* context, const ::injective::auction::v1beta1::MsgBid* request, ::injective::auction::v1beta1::MsgBidResponse* response);
    virtual ::grpc::Status UpdateParams(::grpc::ServerContext* context, const ::injective::auction::v1beta1::MsgUpdateParams* request, ::injective::auction::v1beta1::MsgUpdateParamsResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Bid : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Bid() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Bid() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Bid(::grpc::ServerContext* /*context*/, const ::injective::auction::v1beta1::MsgBid* /*request*/, ::injective::auction::v1beta1::MsgBidResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestBid(::grpc::ServerContext* context, ::injective::auction::v1beta1::MsgBid* request, ::grpc::ServerAsyncResponseWriter< ::injective::auction::v1beta1::MsgBidResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_UpdateParams : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_UpdateParams() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_UpdateParams() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UpdateParams(::grpc::ServerContext* /*context*/, const ::injective::auction::v1beta1::MsgUpdateParams* /*request*/, ::injective::auction::v1beta1::MsgUpdateParamsResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestUpdateParams(::grpc::ServerContext* context, ::injective::auction::v1beta1::MsgUpdateParams* request, ::grpc::ServerAsyncResponseWriter< ::injective::auction::v1beta1::MsgUpdateParamsResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Bid<WithAsyncMethod_UpdateParams<Service > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_Bid : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Bid() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::injective::auction::v1beta1::MsgBid, ::injective::auction::v1beta1::MsgBidResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::injective::auction::v1beta1::MsgBid* request, ::injective::auction::v1beta1::MsgBidResponse* response) { return this->Bid(context, request, response); }));}
    void SetMessageAllocatorFor_Bid(
        ::grpc::MessageAllocator< ::injective::auction::v1beta1::MsgBid, ::injective::auction::v1beta1::MsgBidResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::injective::auction::v1beta1::MsgBid, ::injective::auction::v1beta1::MsgBidResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_Bid() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Bid(::grpc::ServerContext* /*context*/, const ::injective::auction::v1beta1::MsgBid* /*request*/, ::injective::auction::v1beta1::MsgBidResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Bid(
      ::grpc::CallbackServerContext* /*context*/, const ::injective::auction::v1beta1::MsgBid* /*request*/, ::injective::auction::v1beta1::MsgBidResponse* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_UpdateParams : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_UpdateParams() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::injective::auction::v1beta1::MsgUpdateParams, ::injective::auction::v1beta1::MsgUpdateParamsResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::injective::auction::v1beta1::MsgUpdateParams* request, ::injective::auction::v1beta1::MsgUpdateParamsResponse* response) { return this->UpdateParams(context, request, response); }));}
    void SetMessageAllocatorFor_UpdateParams(
        ::grpc::MessageAllocator< ::injective::auction::v1beta1::MsgUpdateParams, ::injective::auction::v1beta1::MsgUpdateParamsResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::injective::auction::v1beta1::MsgUpdateParams, ::injective::auction::v1beta1::MsgUpdateParamsResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_UpdateParams() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UpdateParams(::grpc::ServerContext* /*context*/, const ::injective::auction::v1beta1::MsgUpdateParams* /*request*/, ::injective::auction::v1beta1::MsgUpdateParamsResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* UpdateParams(
      ::grpc::CallbackServerContext* /*context*/, const ::injective::auction::v1beta1::MsgUpdateParams* /*request*/, ::injective::auction::v1beta1::MsgUpdateParamsResponse* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_Bid<WithCallbackMethod_UpdateParams<Service > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_Bid : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Bid() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Bid() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Bid(::grpc::ServerContext* /*context*/, const ::injective::auction::v1beta1::MsgBid* /*request*/, ::injective::auction::v1beta1::MsgBidResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_UpdateParams : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_UpdateParams() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_UpdateParams() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UpdateParams(::grpc::ServerContext* /*context*/, const ::injective::auction::v1beta1::MsgUpdateParams* /*request*/, ::injective::auction::v1beta1::MsgUpdateParamsResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_Bid : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Bid() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_Bid() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Bid(::grpc::ServerContext* /*context*/, const ::injective::auction::v1beta1::MsgBid* /*request*/, ::injective::auction::v1beta1::MsgBidResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestBid(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_UpdateParams : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_UpdateParams() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_UpdateParams() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UpdateParams(::grpc::ServerContext* /*context*/, const ::injective::auction::v1beta1::MsgUpdateParams* /*request*/, ::injective::auction::v1beta1::MsgUpdateParamsResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestUpdateParams(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Bid : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Bid() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Bid(context, request, response); }));
    }
    ~WithRawCallbackMethod_Bid() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Bid(::grpc::ServerContext* /*context*/, const ::injective::auction::v1beta1::MsgBid* /*request*/, ::injective::auction::v1beta1::MsgBidResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Bid(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_UpdateParams : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_UpdateParams() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->UpdateParams(context, request, response); }));
    }
    ~WithRawCallbackMethod_UpdateParams() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UpdateParams(::grpc::ServerContext* /*context*/, const ::injective::auction::v1beta1::MsgUpdateParams* /*request*/, ::injective::auction::v1beta1::MsgUpdateParamsResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* UpdateParams(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Bid : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Bid() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::injective::auction::v1beta1::MsgBid, ::injective::auction::v1beta1::MsgBidResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::injective::auction::v1beta1::MsgBid, ::injective::auction::v1beta1::MsgBidResponse>* streamer) {
                       return this->StreamedBid(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_Bid() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Bid(::grpc::ServerContext* /*context*/, const ::injective::auction::v1beta1::MsgBid* /*request*/, ::injective::auction::v1beta1::MsgBidResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedBid(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::injective::auction::v1beta1::MsgBid,::injective::auction::v1beta1::MsgBidResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_UpdateParams : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_UpdateParams() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::injective::auction::v1beta1::MsgUpdateParams, ::injective::auction::v1beta1::MsgUpdateParamsResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::injective::auction::v1beta1::MsgUpdateParams, ::injective::auction::v1beta1::MsgUpdateParamsResponse>* streamer) {
                       return this->StreamedUpdateParams(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_UpdateParams() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status UpdateParams(::grpc::ServerContext* /*context*/, const ::injective::auction::v1beta1::MsgUpdateParams* /*request*/, ::injective::auction::v1beta1::MsgUpdateParamsResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedUpdateParams(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::injective::auction::v1beta1::MsgUpdateParams,::injective::auction::v1beta1::MsgUpdateParamsResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Bid<WithStreamedUnaryMethod_UpdateParams<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Bid<WithStreamedUnaryMethod_UpdateParams<Service > > StreamedService;
};

}  // namespace v1beta1
}  // namespace auction
}  // namespace injective


#endif  // GRPC_injective_2fauction_2fv1beta1_2ftx_2eproto__INCLUDED
