// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ibc/applications/interchain_accounts/host/v1/host.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ibc_2fapplications_2finterchain_5faccounts_2fhost_2fv1_2fhost_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_ibc_2fapplications_2finterchain_5faccounts_2fhost_2fv1_2fhost_2eproto_2epb_2eh

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
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_ibc_2fapplications_2finterchain_5faccounts_2fhost_2fv1_2fhost_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ibc_2fapplications_2finterchain_5faccounts_2fhost_2fv1_2fhost_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_ibc_2fapplications_2finterchain_5faccounts_2fhost_2fv1_2fhost_2eproto;
namespace ibc {
namespace applications {
namespace interchain_accounts {
namespace host {
namespace v1 {
class Params;
struct ParamsDefaultTypeInternal;
extern ParamsDefaultTypeInternal _Params_default_instance_;
}  // namespace v1
}  // namespace host
}  // namespace interchain_accounts
}  // namespace applications
}  // namespace ibc
PROTOBUF_NAMESPACE_OPEN
template <>
::ibc::applications::interchain_accounts::host::v1::Params* Arena::CreateMaybeMessage<::ibc::applications::interchain_accounts::host::v1::Params>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace ibc {
namespace applications {
namespace interchain_accounts {
namespace host {
namespace v1 {

// ===================================================================


// -------------------------------------------------------------------

class Params final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ibc.applications.interchain_accounts.host.v1.Params) */ {
 public:
  inline Params() : Params(nullptr) {}
  ~Params() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR Params(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Params(const Params& from);
  Params(Params&& from) noexcept
    : Params() {
    *this = ::std::move(from);
  }

  inline Params& operator=(const Params& from) {
    CopyFrom(from);
    return *this;
  }
  inline Params& operator=(Params&& from) noexcept {
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
  static const Params& default_instance() {
    return *internal_default_instance();
  }
  static inline const Params* internal_default_instance() {
    return reinterpret_cast<const Params*>(
               &_Params_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Params& a, Params& b) {
    a.Swap(&b);
  }
  inline void Swap(Params* other) {
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
  void UnsafeArenaSwap(Params* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Params* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Params>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Params& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Params& from) {
    Params::MergeImpl(*this, from);
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
  void InternalSwap(Params* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "ibc.applications.interchain_accounts.host.v1.Params";
  }
  protected:
  explicit Params(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAllowMessagesFieldNumber = 2,
    kHostEnabledFieldNumber = 1,
  };
  // repeated string allow_messages = 2 [json_name = "allowMessages"];
  int allow_messages_size() const;
  private:
  int _internal_allow_messages_size() const;

  public:
  void clear_allow_messages() ;
  const std::string& allow_messages(int index) const;
  std::string* mutable_allow_messages(int index);
  void set_allow_messages(int index, const std::string& value);
  void set_allow_messages(int index, std::string&& value);
  void set_allow_messages(int index, const char* value);
  void set_allow_messages(int index, const char* value, std::size_t size);
  void set_allow_messages(int index, absl::string_view value);
  std::string* add_allow_messages();
  void add_allow_messages(const std::string& value);
  void add_allow_messages(std::string&& value);
  void add_allow_messages(const char* value);
  void add_allow_messages(const char* value, std::size_t size);
  void add_allow_messages(absl::string_view value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& allow_messages() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_allow_messages();

  private:
  const std::string& _internal_allow_messages(int index) const;
  std::string* _internal_add_allow_messages();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& _internal_allow_messages() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* _internal_mutable_allow_messages();

  public:
  // bool host_enabled = 1 [json_name = "hostEnabled"];
  void clear_host_enabled() ;
  bool host_enabled() const;
  void set_host_enabled(bool value);

  private:
  bool _internal_host_enabled() const;
  void _internal_set_host_enabled(bool value);

  public:
  // @@protoc_insertion_point(class_scope:ibc.applications.interchain_accounts.host.v1.Params)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> allow_messages_;
    bool host_enabled_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_ibc_2fapplications_2finterchain_5faccounts_2fhost_2fv1_2fhost_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Params

// bool host_enabled = 1 [json_name = "hostEnabled"];
inline void Params::clear_host_enabled() {
  _impl_.host_enabled_ = false;
}
inline bool Params::host_enabled() const {
  // @@protoc_insertion_point(field_get:ibc.applications.interchain_accounts.host.v1.Params.host_enabled)
  return _internal_host_enabled();
}
inline void Params::set_host_enabled(bool value) {
  _internal_set_host_enabled(value);
  // @@protoc_insertion_point(field_set:ibc.applications.interchain_accounts.host.v1.Params.host_enabled)
}
inline bool Params::_internal_host_enabled() const {
  return _impl_.host_enabled_;
}
inline void Params::_internal_set_host_enabled(bool value) {
  ;
  _impl_.host_enabled_ = value;
}

// repeated string allow_messages = 2 [json_name = "allowMessages"];
inline int Params::_internal_allow_messages_size() const {
  return _impl_.allow_messages_.size();
}
inline int Params::allow_messages_size() const {
  return _internal_allow_messages_size();
}
inline void Params::clear_allow_messages() {
  _internal_mutable_allow_messages()->Clear();
}
inline std::string* Params::add_allow_messages() {
  std::string* _s = _internal_add_allow_messages();
  // @@protoc_insertion_point(field_add_mutable:ibc.applications.interchain_accounts.host.v1.Params.allow_messages)
  return _s;
}
inline const std::string& Params::allow_messages(int index) const {
  // @@protoc_insertion_point(field_get:ibc.applications.interchain_accounts.host.v1.Params.allow_messages)
  return _internal_allow_messages(index);
}
inline std::string* Params::mutable_allow_messages(int index) {
  // @@protoc_insertion_point(field_mutable:ibc.applications.interchain_accounts.host.v1.Params.allow_messages)
  return _internal_mutable_allow_messages()->Mutable(index);
}
inline void Params::set_allow_messages(int index, const std::string& value) {
  _internal_mutable_allow_messages()->Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:ibc.applications.interchain_accounts.host.v1.Params.allow_messages)
}
inline void Params::set_allow_messages(int index, std::string&& value) {
  _internal_mutable_allow_messages()->Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:ibc.applications.interchain_accounts.host.v1.Params.allow_messages)
}
inline void Params::set_allow_messages(int index, const char* value) {
  ABSL_DCHECK(value != nullptr);
  _internal_mutable_allow_messages()->Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:ibc.applications.interchain_accounts.host.v1.Params.allow_messages)
}
inline void Params::set_allow_messages(int index, const char* value,
                              std::size_t size) {
  _internal_mutable_allow_messages()->Mutable(index)->assign(
      reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:ibc.applications.interchain_accounts.host.v1.Params.allow_messages)
}
inline void Params::set_allow_messages(int index, absl::string_view value) {
  _internal_mutable_allow_messages()->Mutable(index)->assign(value.data(),
                                                     value.size());
  // @@protoc_insertion_point(field_set_string_piece:ibc.applications.interchain_accounts.host.v1.Params.allow_messages)
}
inline void Params::add_allow_messages(const std::string& value) {
  _internal_mutable_allow_messages()->Add()->assign(value);
  // @@protoc_insertion_point(field_add:ibc.applications.interchain_accounts.host.v1.Params.allow_messages)
}
inline void Params::add_allow_messages(std::string&& value) {
  _internal_mutable_allow_messages()->Add(std::move(value));
  // @@protoc_insertion_point(field_add:ibc.applications.interchain_accounts.host.v1.Params.allow_messages)
}
inline void Params::add_allow_messages(const char* value) {
  ABSL_DCHECK(value != nullptr);
  _internal_mutable_allow_messages()->Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:ibc.applications.interchain_accounts.host.v1.Params.allow_messages)
}
inline void Params::add_allow_messages(const char* value, std::size_t size) {
  _internal_mutable_allow_messages()->Add()->assign(
      reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:ibc.applications.interchain_accounts.host.v1.Params.allow_messages)
}
inline void Params::add_allow_messages(absl::string_view value) {
  _internal_mutable_allow_messages()->Add()->assign(value.data(), value.size());
  // @@protoc_insertion_point(field_add_string_piece:ibc.applications.interchain_accounts.host.v1.Params.allow_messages)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
Params::allow_messages() const {
  // @@protoc_insertion_point(field_list:ibc.applications.interchain_accounts.host.v1.Params.allow_messages)
  return _internal_allow_messages();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* Params::mutable_allow_messages() {
  // @@protoc_insertion_point(field_mutable_list:ibc.applications.interchain_accounts.host.v1.Params.allow_messages)
  return _internal_mutable_allow_messages();
}
inline const std::string& Params::_internal_allow_messages(int index) const {
  return _internal_allow_messages().Get(index);
}
inline std::string* Params::_internal_add_allow_messages() {
  return _internal_mutable_allow_messages()->Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
Params::_internal_allow_messages() const {
  return _impl_.allow_messages_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
Params::_internal_mutable_allow_messages() {
  return &_impl_.allow_messages_;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace host
}  // namespace interchain_accounts
}  // namespace applications
}  // namespace ibc


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_ibc_2fapplications_2finterchain_5faccounts_2fhost_2fv1_2fhost_2eproto_2epb_2eh
