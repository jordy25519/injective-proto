// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cosmos/autocli/v1/query.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_cosmos_2fautocli_2fv1_2fquery_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_cosmos_2fautocli_2fv1_2fquery_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4023000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4023004 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_bases.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/map.h"  // IWYU pragma: export
#include "google/protobuf/map_entry.h"
#include "google/protobuf/map_field_inl.h"
#include "google/protobuf/unknown_field_set.h"
#include "cosmos/autocli/v1/options.pb.h"
#include "cosmos/query/v1/query.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_cosmos_2fautocli_2fv1_2fquery_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_cosmos_2fautocli_2fv1_2fquery_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_cosmos_2fautocli_2fv1_2fquery_2eproto;
namespace cosmos {
namespace autocli {
namespace v1 {
class AppOptionsRequest;
struct AppOptionsRequestDefaultTypeInternal;
extern AppOptionsRequestDefaultTypeInternal _AppOptionsRequest_default_instance_;
class AppOptionsResponse;
struct AppOptionsResponseDefaultTypeInternal;
extern AppOptionsResponseDefaultTypeInternal _AppOptionsResponse_default_instance_;
class AppOptionsResponse_ModuleOptionsEntry_DoNotUse;
struct AppOptionsResponse_ModuleOptionsEntry_DoNotUseDefaultTypeInternal;
extern AppOptionsResponse_ModuleOptionsEntry_DoNotUseDefaultTypeInternal _AppOptionsResponse_ModuleOptionsEntry_DoNotUse_default_instance_;
}  // namespace v1
}  // namespace autocli
}  // namespace cosmos
PROTOBUF_NAMESPACE_OPEN
template <>
::cosmos::autocli::v1::AppOptionsRequest* Arena::CreateMaybeMessage<::cosmos::autocli::v1::AppOptionsRequest>(Arena*);
template <>
::cosmos::autocli::v1::AppOptionsResponse* Arena::CreateMaybeMessage<::cosmos::autocli::v1::AppOptionsResponse>(Arena*);
template <>
::cosmos::autocli::v1::AppOptionsResponse_ModuleOptionsEntry_DoNotUse* Arena::CreateMaybeMessage<::cosmos::autocli::v1::AppOptionsResponse_ModuleOptionsEntry_DoNotUse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace cosmos {
namespace autocli {
namespace v1 {

// ===================================================================


// -------------------------------------------------------------------

class AppOptionsRequest final :
    public ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase /* @@protoc_insertion_point(class_definition:cosmos.autocli.v1.AppOptionsRequest) */ {
 public:
  inline AppOptionsRequest() : AppOptionsRequest(nullptr) {}
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR AppOptionsRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  AppOptionsRequest(const AppOptionsRequest& from);
  AppOptionsRequest(AppOptionsRequest&& from) noexcept
    : AppOptionsRequest() {
    *this = ::std::move(from);
  }

  inline AppOptionsRequest& operator=(const AppOptionsRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline AppOptionsRequest& operator=(AppOptionsRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const AppOptionsRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const AppOptionsRequest* internal_default_instance() {
    return reinterpret_cast<const AppOptionsRequest*>(
               &_AppOptionsRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(AppOptionsRequest& a, AppOptionsRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(AppOptionsRequest* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(AppOptionsRequest* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  AppOptionsRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<AppOptionsRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyFrom;
  inline void CopyFrom(const AppOptionsRequest& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl(*this, from);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeFrom;
  void MergeFrom(const AppOptionsRequest& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl(*this, from);
  }
  public:

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "cosmos.autocli.v1.AppOptionsRequest";
  }
  protected:
  explicit AppOptionsRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:cosmos.autocli.v1.AppOptionsRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
  };
  friend struct ::TableStruct_cosmos_2fautocli_2fv1_2fquery_2eproto;
};// -------------------------------------------------------------------

class AppOptionsResponse_ModuleOptionsEntry_DoNotUse final : public ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<AppOptionsResponse_ModuleOptionsEntry_DoNotUse, 
    std::string, ::cosmos::autocli::v1::ModuleOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_MESSAGE> {
public:
  typedef ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<AppOptionsResponse_ModuleOptionsEntry_DoNotUse, 
    std::string, ::cosmos::autocli::v1::ModuleOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_MESSAGE> SuperType;
  AppOptionsResponse_ModuleOptionsEntry_DoNotUse();
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR AppOptionsResponse_ModuleOptionsEntry_DoNotUse(
      ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);
  explicit AppOptionsResponse_ModuleOptionsEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  void MergeFrom(const AppOptionsResponse_ModuleOptionsEntry_DoNotUse& other);
  static const AppOptionsResponse_ModuleOptionsEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const AppOptionsResponse_ModuleOptionsEntry_DoNotUse*>(&_AppOptionsResponse_ModuleOptionsEntry_DoNotUse_default_instance_); }
  static bool ValidateKey(std::string* s) {
    return ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(s->data(), static_cast<int>(s->size()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE, "cosmos.autocli.v1.AppOptionsResponse.ModuleOptionsEntry.key");
 }
  static bool ValidateValue(void*) { return true; }
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  friend struct ::TableStruct_cosmos_2fautocli_2fv1_2fquery_2eproto;
};
// -------------------------------------------------------------------

class AppOptionsResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:cosmos.autocli.v1.AppOptionsResponse) */ {
 public:
  inline AppOptionsResponse() : AppOptionsResponse(nullptr) {}
  ~AppOptionsResponse() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR AppOptionsResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  AppOptionsResponse(const AppOptionsResponse& from);
  AppOptionsResponse(AppOptionsResponse&& from) noexcept
    : AppOptionsResponse() {
    *this = ::std::move(from);
  }

  inline AppOptionsResponse& operator=(const AppOptionsResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline AppOptionsResponse& operator=(AppOptionsResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const AppOptionsResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const AppOptionsResponse* internal_default_instance() {
    return reinterpret_cast<const AppOptionsResponse*>(
               &_AppOptionsResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(AppOptionsResponse& a, AppOptionsResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(AppOptionsResponse* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(AppOptionsResponse* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  AppOptionsResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<AppOptionsResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const AppOptionsResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const AppOptionsResponse& from) {
    AppOptionsResponse::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(AppOptionsResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "cosmos.autocli.v1.AppOptionsResponse";
  }
  protected:
  explicit AppOptionsResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  enum : int {
    kModuleOptionsFieldNumber = 1,
  };
  // map<string, .cosmos.autocli.v1.ModuleOptions> module_options = 1 [json_name = "moduleOptions"];
  int module_options_size() const;
  private:
  int _internal_module_options_size() const;

  public:
  void clear_module_options() ;
  private:
  const ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::cosmos::autocli::v1::ModuleOptions >&
      _internal_module_options() const;
  ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::cosmos::autocli::v1::ModuleOptions >*
      _internal_mutable_module_options();
  public:
  const ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::cosmos::autocli::v1::ModuleOptions >&
      module_options() const;
  ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::cosmos::autocli::v1::ModuleOptions >*
      mutable_module_options();
  // @@protoc_insertion_point(class_scope:cosmos.autocli.v1.AppOptionsResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::MapField<
        AppOptionsResponse_ModuleOptionsEntry_DoNotUse,
        std::string, ::cosmos::autocli::v1::ModuleOptions,
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_MESSAGE> module_options_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_cosmos_2fautocli_2fv1_2fquery_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// AppOptionsRequest

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// AppOptionsResponse

// map<string, .cosmos.autocli.v1.ModuleOptions> module_options = 1 [json_name = "moduleOptions"];
inline int AppOptionsResponse::_internal_module_options_size() const {
  return _impl_.module_options_.size();
}
inline int AppOptionsResponse::module_options_size() const {
  return _internal_module_options_size();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::cosmos::autocli::v1::ModuleOptions >&
AppOptionsResponse::_internal_module_options() const {
  return _impl_.module_options_.GetMap();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::cosmos::autocli::v1::ModuleOptions >&
AppOptionsResponse::module_options() const {
  // @@protoc_insertion_point(field_map:cosmos.autocli.v1.AppOptionsResponse.module_options)
  return _internal_module_options();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::cosmos::autocli::v1::ModuleOptions >*
AppOptionsResponse::_internal_mutable_module_options() {
  return _impl_.module_options_.MutableMap();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::cosmos::autocli::v1::ModuleOptions >*
AppOptionsResponse::mutable_module_options() {
  // @@protoc_insertion_point(field_mutable_map:cosmos.autocli.v1.AppOptionsResponse.module_options)
  return _internal_mutable_module_options();
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace autocli
}  // namespace cosmos


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_cosmos_2fautocli_2fv1_2fquery_2eproto_2epb_2eh
