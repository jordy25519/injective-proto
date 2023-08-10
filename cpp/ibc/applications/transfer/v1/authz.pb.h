// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ibc/applications/transfer/v1/authz.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ibc_2fapplications_2ftransfer_2fv1_2fauthz_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_ibc_2fapplications_2ftransfer_2fv1_2fauthz_2eproto_2epb_2eh

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
#include "cosmos_proto/cosmos.pb.h"
#include "gogoproto/gogo.pb.h"
#include "cosmos/base/v1beta1/coin.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_ibc_2fapplications_2ftransfer_2fv1_2fauthz_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ibc_2fapplications_2ftransfer_2fv1_2fauthz_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_ibc_2fapplications_2ftransfer_2fv1_2fauthz_2eproto;
namespace ibc {
namespace applications {
namespace transfer {
namespace v1 {
class Allocation;
struct AllocationDefaultTypeInternal;
extern AllocationDefaultTypeInternal _Allocation_default_instance_;
class TransferAuthorization;
struct TransferAuthorizationDefaultTypeInternal;
extern TransferAuthorizationDefaultTypeInternal _TransferAuthorization_default_instance_;
}  // namespace v1
}  // namespace transfer
}  // namespace applications
}  // namespace ibc
PROTOBUF_NAMESPACE_OPEN
template <>
::ibc::applications::transfer::v1::Allocation* Arena::CreateMaybeMessage<::ibc::applications::transfer::v1::Allocation>(Arena*);
template <>
::ibc::applications::transfer::v1::TransferAuthorization* Arena::CreateMaybeMessage<::ibc::applications::transfer::v1::TransferAuthorization>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace ibc {
namespace applications {
namespace transfer {
namespace v1 {

// ===================================================================


// -------------------------------------------------------------------

class Allocation final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ibc.applications.transfer.v1.Allocation) */ {
 public:
  inline Allocation() : Allocation(nullptr) {}
  ~Allocation() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR Allocation(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Allocation(const Allocation& from);
  Allocation(Allocation&& from) noexcept
    : Allocation() {
    *this = ::std::move(from);
  }

  inline Allocation& operator=(const Allocation& from) {
    CopyFrom(from);
    return *this;
  }
  inline Allocation& operator=(Allocation&& from) noexcept {
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
  static const Allocation& default_instance() {
    return *internal_default_instance();
  }
  static inline const Allocation* internal_default_instance() {
    return reinterpret_cast<const Allocation*>(
               &_Allocation_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Allocation& a, Allocation& b) {
    a.Swap(&b);
  }
  inline void Swap(Allocation* other) {
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
  void UnsafeArenaSwap(Allocation* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Allocation* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Allocation>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Allocation& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Allocation& from) {
    Allocation::MergeImpl(*this, from);
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
  void InternalSwap(Allocation* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "ibc.applications.transfer.v1.Allocation";
  }
  protected:
  explicit Allocation(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSpendLimitFieldNumber = 3,
    kAllowListFieldNumber = 4,
    kSourcePortFieldNumber = 1,
    kSourceChannelFieldNumber = 2,
  };
  // repeated .cosmos.base.v1beta1.Coin spend_limit = 3 [json_name = "spendLimit", (.gogoproto.nullable) = false, (.gogoproto.castrepeated) = "github.com/cosmos/cosmos-sdk/types.Coins"];
  int spend_limit_size() const;
  private:
  int _internal_spend_limit_size() const;

  public:
  void clear_spend_limit() ;
  ::cosmos::base::v1beta1::Coin* mutable_spend_limit(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::cosmos::base::v1beta1::Coin >*
      mutable_spend_limit();
  private:
  const ::cosmos::base::v1beta1::Coin& _internal_spend_limit(int index) const;
  ::cosmos::base::v1beta1::Coin* _internal_add_spend_limit();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::cosmos::base::v1beta1::Coin>& _internal_spend_limit() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::cosmos::base::v1beta1::Coin>* _internal_mutable_spend_limit();
  public:
  const ::cosmos::base::v1beta1::Coin& spend_limit(int index) const;
  ::cosmos::base::v1beta1::Coin* add_spend_limit();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::cosmos::base::v1beta1::Coin >&
      spend_limit() const;
  // repeated string allow_list = 4 [json_name = "allowList"];
  int allow_list_size() const;
  private:
  int _internal_allow_list_size() const;

  public:
  void clear_allow_list() ;
  const std::string& allow_list(int index) const;
  std::string* mutable_allow_list(int index);
  void set_allow_list(int index, const std::string& value);
  void set_allow_list(int index, std::string&& value);
  void set_allow_list(int index, const char* value);
  void set_allow_list(int index, const char* value, std::size_t size);
  void set_allow_list(int index, absl::string_view value);
  std::string* add_allow_list();
  void add_allow_list(const std::string& value);
  void add_allow_list(std::string&& value);
  void add_allow_list(const char* value);
  void add_allow_list(const char* value, std::size_t size);
  void add_allow_list(absl::string_view value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& allow_list() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_allow_list();

  private:
  const std::string& _internal_allow_list(int index) const;
  std::string* _internal_add_allow_list();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& _internal_allow_list() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* _internal_mutable_allow_list();

  public:
  // string source_port = 1 [json_name = "sourcePort"];
  void clear_source_port() ;
  const std::string& source_port() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_source_port(Arg_&& arg, Args_... args);
  std::string* mutable_source_port();
  PROTOBUF_NODISCARD std::string* release_source_port();
  void set_allocated_source_port(std::string* ptr);

  private:
  const std::string& _internal_source_port() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_source_port(
      const std::string& value);
  std::string* _internal_mutable_source_port();

  public:
  // string source_channel = 2 [json_name = "sourceChannel"];
  void clear_source_channel() ;
  const std::string& source_channel() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_source_channel(Arg_&& arg, Args_... args);
  std::string* mutable_source_channel();
  PROTOBUF_NODISCARD std::string* release_source_channel();
  void set_allocated_source_channel(std::string* ptr);

  private:
  const std::string& _internal_source_channel() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_source_channel(
      const std::string& value);
  std::string* _internal_mutable_source_channel();

  public:
  // @@protoc_insertion_point(class_scope:ibc.applications.transfer.v1.Allocation)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::cosmos::base::v1beta1::Coin > spend_limit_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> allow_list_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr source_port_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr source_channel_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_ibc_2fapplications_2ftransfer_2fv1_2fauthz_2eproto;
};// -------------------------------------------------------------------

class TransferAuthorization final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ibc.applications.transfer.v1.TransferAuthorization) */ {
 public:
  inline TransferAuthorization() : TransferAuthorization(nullptr) {}
  ~TransferAuthorization() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR TransferAuthorization(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  TransferAuthorization(const TransferAuthorization& from);
  TransferAuthorization(TransferAuthorization&& from) noexcept
    : TransferAuthorization() {
    *this = ::std::move(from);
  }

  inline TransferAuthorization& operator=(const TransferAuthorization& from) {
    CopyFrom(from);
    return *this;
  }
  inline TransferAuthorization& operator=(TransferAuthorization&& from) noexcept {
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
  static const TransferAuthorization& default_instance() {
    return *internal_default_instance();
  }
  static inline const TransferAuthorization* internal_default_instance() {
    return reinterpret_cast<const TransferAuthorization*>(
               &_TransferAuthorization_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(TransferAuthorization& a, TransferAuthorization& b) {
    a.Swap(&b);
  }
  inline void Swap(TransferAuthorization* other) {
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
  void UnsafeArenaSwap(TransferAuthorization* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  TransferAuthorization* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<TransferAuthorization>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const TransferAuthorization& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const TransferAuthorization& from) {
    TransferAuthorization::MergeImpl(*this, from);
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
  void InternalSwap(TransferAuthorization* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "ibc.applications.transfer.v1.TransferAuthorization";
  }
  protected:
  explicit TransferAuthorization(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAllocationsFieldNumber = 1,
  };
  // repeated .ibc.applications.transfer.v1.Allocation allocations = 1 [json_name = "allocations", (.gogoproto.nullable) = false];
  int allocations_size() const;
  private:
  int _internal_allocations_size() const;

  public:
  void clear_allocations() ;
  ::ibc::applications::transfer::v1::Allocation* mutable_allocations(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ibc::applications::transfer::v1::Allocation >*
      mutable_allocations();
  private:
  const ::ibc::applications::transfer::v1::Allocation& _internal_allocations(int index) const;
  ::ibc::applications::transfer::v1::Allocation* _internal_add_allocations();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::ibc::applications::transfer::v1::Allocation>& _internal_allocations() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::ibc::applications::transfer::v1::Allocation>* _internal_mutable_allocations();
  public:
  const ::ibc::applications::transfer::v1::Allocation& allocations(int index) const;
  ::ibc::applications::transfer::v1::Allocation* add_allocations();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ibc::applications::transfer::v1::Allocation >&
      allocations() const;
  // @@protoc_insertion_point(class_scope:ibc.applications.transfer.v1.TransferAuthorization)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ibc::applications::transfer::v1::Allocation > allocations_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_ibc_2fapplications_2ftransfer_2fv1_2fauthz_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Allocation

// string source_port = 1 [json_name = "sourcePort"];
inline void Allocation::clear_source_port() {
  _impl_.source_port_.ClearToEmpty();
}
inline const std::string& Allocation::source_port() const {
  // @@protoc_insertion_point(field_get:ibc.applications.transfer.v1.Allocation.source_port)
  return _internal_source_port();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Allocation::set_source_port(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.source_port_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:ibc.applications.transfer.v1.Allocation.source_port)
}
inline std::string* Allocation::mutable_source_port() {
  std::string* _s = _internal_mutable_source_port();
  // @@protoc_insertion_point(field_mutable:ibc.applications.transfer.v1.Allocation.source_port)
  return _s;
}
inline const std::string& Allocation::_internal_source_port() const {
  return _impl_.source_port_.Get();
}
inline void Allocation::_internal_set_source_port(const std::string& value) {
  ;


  _impl_.source_port_.Set(value, GetArenaForAllocation());
}
inline std::string* Allocation::_internal_mutable_source_port() {
  ;
  return _impl_.source_port_.Mutable( GetArenaForAllocation());
}
inline std::string* Allocation::release_source_port() {
  // @@protoc_insertion_point(field_release:ibc.applications.transfer.v1.Allocation.source_port)
  return _impl_.source_port_.Release();
}
inline void Allocation::set_allocated_source_port(std::string* value) {
  _impl_.source_port_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.source_port_.IsDefault()) {
          _impl_.source_port_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:ibc.applications.transfer.v1.Allocation.source_port)
}

// string source_channel = 2 [json_name = "sourceChannel"];
inline void Allocation::clear_source_channel() {
  _impl_.source_channel_.ClearToEmpty();
}
inline const std::string& Allocation::source_channel() const {
  // @@protoc_insertion_point(field_get:ibc.applications.transfer.v1.Allocation.source_channel)
  return _internal_source_channel();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Allocation::set_source_channel(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.source_channel_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:ibc.applications.transfer.v1.Allocation.source_channel)
}
inline std::string* Allocation::mutable_source_channel() {
  std::string* _s = _internal_mutable_source_channel();
  // @@protoc_insertion_point(field_mutable:ibc.applications.transfer.v1.Allocation.source_channel)
  return _s;
}
inline const std::string& Allocation::_internal_source_channel() const {
  return _impl_.source_channel_.Get();
}
inline void Allocation::_internal_set_source_channel(const std::string& value) {
  ;


  _impl_.source_channel_.Set(value, GetArenaForAllocation());
}
inline std::string* Allocation::_internal_mutable_source_channel() {
  ;
  return _impl_.source_channel_.Mutable( GetArenaForAllocation());
}
inline std::string* Allocation::release_source_channel() {
  // @@protoc_insertion_point(field_release:ibc.applications.transfer.v1.Allocation.source_channel)
  return _impl_.source_channel_.Release();
}
inline void Allocation::set_allocated_source_channel(std::string* value) {
  _impl_.source_channel_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.source_channel_.IsDefault()) {
          _impl_.source_channel_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:ibc.applications.transfer.v1.Allocation.source_channel)
}

// repeated .cosmos.base.v1beta1.Coin spend_limit = 3 [json_name = "spendLimit", (.gogoproto.nullable) = false, (.gogoproto.castrepeated) = "github.com/cosmos/cosmos-sdk/types.Coins"];
inline int Allocation::_internal_spend_limit_size() const {
  return _impl_.spend_limit_.size();
}
inline int Allocation::spend_limit_size() const {
  return _internal_spend_limit_size();
}
inline ::cosmos::base::v1beta1::Coin* Allocation::mutable_spend_limit(int index) {
  // @@protoc_insertion_point(field_mutable:ibc.applications.transfer.v1.Allocation.spend_limit)
  return _internal_mutable_spend_limit()->Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::cosmos::base::v1beta1::Coin >*
Allocation::mutable_spend_limit() {
  // @@protoc_insertion_point(field_mutable_list:ibc.applications.transfer.v1.Allocation.spend_limit)
  return _internal_mutable_spend_limit();
}
inline const ::cosmos::base::v1beta1::Coin& Allocation::_internal_spend_limit(int index) const {
  return _internal_spend_limit().Get(index);
}
inline const ::cosmos::base::v1beta1::Coin& Allocation::spend_limit(int index) const {
  // @@protoc_insertion_point(field_get:ibc.applications.transfer.v1.Allocation.spend_limit)
  return _internal_spend_limit(index);
}
inline ::cosmos::base::v1beta1::Coin* Allocation::_internal_add_spend_limit() {
  return _internal_mutable_spend_limit()->Add();
}
inline ::cosmos::base::v1beta1::Coin* Allocation::add_spend_limit() {
  ::cosmos::base::v1beta1::Coin* _add = _internal_add_spend_limit();
  // @@protoc_insertion_point(field_add:ibc.applications.transfer.v1.Allocation.spend_limit)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::cosmos::base::v1beta1::Coin >&
Allocation::spend_limit() const {
  // @@protoc_insertion_point(field_list:ibc.applications.transfer.v1.Allocation.spend_limit)
  return _internal_spend_limit();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::cosmos::base::v1beta1::Coin>&
Allocation::_internal_spend_limit() const {
  return _impl_.spend_limit_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::cosmos::base::v1beta1::Coin>*
Allocation::_internal_mutable_spend_limit() {
  return &_impl_.spend_limit_;
}

// repeated string allow_list = 4 [json_name = "allowList"];
inline int Allocation::_internal_allow_list_size() const {
  return _impl_.allow_list_.size();
}
inline int Allocation::allow_list_size() const {
  return _internal_allow_list_size();
}
inline void Allocation::clear_allow_list() {
  _internal_mutable_allow_list()->Clear();
}
inline std::string* Allocation::add_allow_list() {
  std::string* _s = _internal_add_allow_list();
  // @@protoc_insertion_point(field_add_mutable:ibc.applications.transfer.v1.Allocation.allow_list)
  return _s;
}
inline const std::string& Allocation::allow_list(int index) const {
  // @@protoc_insertion_point(field_get:ibc.applications.transfer.v1.Allocation.allow_list)
  return _internal_allow_list(index);
}
inline std::string* Allocation::mutable_allow_list(int index) {
  // @@protoc_insertion_point(field_mutable:ibc.applications.transfer.v1.Allocation.allow_list)
  return _internal_mutable_allow_list()->Mutable(index);
}
inline void Allocation::set_allow_list(int index, const std::string& value) {
  _internal_mutable_allow_list()->Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:ibc.applications.transfer.v1.Allocation.allow_list)
}
inline void Allocation::set_allow_list(int index, std::string&& value) {
  _internal_mutable_allow_list()->Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:ibc.applications.transfer.v1.Allocation.allow_list)
}
inline void Allocation::set_allow_list(int index, const char* value) {
  ABSL_DCHECK(value != nullptr);
  _internal_mutable_allow_list()->Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:ibc.applications.transfer.v1.Allocation.allow_list)
}
inline void Allocation::set_allow_list(int index, const char* value,
                              std::size_t size) {
  _internal_mutable_allow_list()->Mutable(index)->assign(
      reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:ibc.applications.transfer.v1.Allocation.allow_list)
}
inline void Allocation::set_allow_list(int index, absl::string_view value) {
  _internal_mutable_allow_list()->Mutable(index)->assign(value.data(),
                                                     value.size());
  // @@protoc_insertion_point(field_set_string_piece:ibc.applications.transfer.v1.Allocation.allow_list)
}
inline void Allocation::add_allow_list(const std::string& value) {
  _internal_mutable_allow_list()->Add()->assign(value);
  // @@protoc_insertion_point(field_add:ibc.applications.transfer.v1.Allocation.allow_list)
}
inline void Allocation::add_allow_list(std::string&& value) {
  _internal_mutable_allow_list()->Add(std::move(value));
  // @@protoc_insertion_point(field_add:ibc.applications.transfer.v1.Allocation.allow_list)
}
inline void Allocation::add_allow_list(const char* value) {
  ABSL_DCHECK(value != nullptr);
  _internal_mutable_allow_list()->Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:ibc.applications.transfer.v1.Allocation.allow_list)
}
inline void Allocation::add_allow_list(const char* value, std::size_t size) {
  _internal_mutable_allow_list()->Add()->assign(
      reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:ibc.applications.transfer.v1.Allocation.allow_list)
}
inline void Allocation::add_allow_list(absl::string_view value) {
  _internal_mutable_allow_list()->Add()->assign(value.data(), value.size());
  // @@protoc_insertion_point(field_add_string_piece:ibc.applications.transfer.v1.Allocation.allow_list)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
Allocation::allow_list() const {
  // @@protoc_insertion_point(field_list:ibc.applications.transfer.v1.Allocation.allow_list)
  return _internal_allow_list();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* Allocation::mutable_allow_list() {
  // @@protoc_insertion_point(field_mutable_list:ibc.applications.transfer.v1.Allocation.allow_list)
  return _internal_mutable_allow_list();
}
inline const std::string& Allocation::_internal_allow_list(int index) const {
  return _internal_allow_list().Get(index);
}
inline std::string* Allocation::_internal_add_allow_list() {
  return _internal_mutable_allow_list()->Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
Allocation::_internal_allow_list() const {
  return _impl_.allow_list_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
Allocation::_internal_mutable_allow_list() {
  return &_impl_.allow_list_;
}

// -------------------------------------------------------------------

// TransferAuthorization

// repeated .ibc.applications.transfer.v1.Allocation allocations = 1 [json_name = "allocations", (.gogoproto.nullable) = false];
inline int TransferAuthorization::_internal_allocations_size() const {
  return _impl_.allocations_.size();
}
inline int TransferAuthorization::allocations_size() const {
  return _internal_allocations_size();
}
inline void TransferAuthorization::clear_allocations() {
  _internal_mutable_allocations()->Clear();
}
inline ::ibc::applications::transfer::v1::Allocation* TransferAuthorization::mutable_allocations(int index) {
  // @@protoc_insertion_point(field_mutable:ibc.applications.transfer.v1.TransferAuthorization.allocations)
  return _internal_mutable_allocations()->Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ibc::applications::transfer::v1::Allocation >*
TransferAuthorization::mutable_allocations() {
  // @@protoc_insertion_point(field_mutable_list:ibc.applications.transfer.v1.TransferAuthorization.allocations)
  return _internal_mutable_allocations();
}
inline const ::ibc::applications::transfer::v1::Allocation& TransferAuthorization::_internal_allocations(int index) const {
  return _internal_allocations().Get(index);
}
inline const ::ibc::applications::transfer::v1::Allocation& TransferAuthorization::allocations(int index) const {
  // @@protoc_insertion_point(field_get:ibc.applications.transfer.v1.TransferAuthorization.allocations)
  return _internal_allocations(index);
}
inline ::ibc::applications::transfer::v1::Allocation* TransferAuthorization::_internal_add_allocations() {
  return _internal_mutable_allocations()->Add();
}
inline ::ibc::applications::transfer::v1::Allocation* TransferAuthorization::add_allocations() {
  ::ibc::applications::transfer::v1::Allocation* _add = _internal_add_allocations();
  // @@protoc_insertion_point(field_add:ibc.applications.transfer.v1.TransferAuthorization.allocations)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ibc::applications::transfer::v1::Allocation >&
TransferAuthorization::allocations() const {
  // @@protoc_insertion_point(field_list:ibc.applications.transfer.v1.TransferAuthorization.allocations)
  return _internal_allocations();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::ibc::applications::transfer::v1::Allocation>&
TransferAuthorization::_internal_allocations() const {
  return _impl_.allocations_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::ibc::applications::transfer::v1::Allocation>*
TransferAuthorization::_internal_mutable_allocations() {
  return &_impl_.allocations_;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace transfer
}  // namespace applications
}  // namespace ibc


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_ibc_2fapplications_2ftransfer_2fv1_2fauthz_2eproto_2epb_2eh
