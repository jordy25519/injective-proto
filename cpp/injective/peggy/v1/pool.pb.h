// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: injective/peggy/v1/pool.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_injective_2fpeggy_2fv1_2fpool_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_injective_2fpeggy_2fv1_2fpool_2eproto_2epb_2eh

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
#include "gogoproto/gogo.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_injective_2fpeggy_2fv1_2fpool_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_injective_2fpeggy_2fv1_2fpool_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_injective_2fpeggy_2fv1_2fpool_2eproto;
namespace injective {
namespace peggy {
namespace v1 {
class BatchFees;
struct BatchFeesDefaultTypeInternal;
extern BatchFeesDefaultTypeInternal _BatchFees_default_instance_;
class IDSet;
struct IDSetDefaultTypeInternal;
extern IDSetDefaultTypeInternal _IDSet_default_instance_;
}  // namespace v1
}  // namespace peggy
}  // namespace injective
PROTOBUF_NAMESPACE_OPEN
template <>
::injective::peggy::v1::BatchFees* Arena::CreateMaybeMessage<::injective::peggy::v1::BatchFees>(Arena*);
template <>
::injective::peggy::v1::IDSet* Arena::CreateMaybeMessage<::injective::peggy::v1::IDSet>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace injective {
namespace peggy {
namespace v1 {

// ===================================================================


// -------------------------------------------------------------------

class IDSet final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:injective.peggy.v1.IDSet) */ {
 public:
  inline IDSet() : IDSet(nullptr) {}
  ~IDSet() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR IDSet(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  IDSet(const IDSet& from);
  IDSet(IDSet&& from) noexcept
    : IDSet() {
    *this = ::std::move(from);
  }

  inline IDSet& operator=(const IDSet& from) {
    CopyFrom(from);
    return *this;
  }
  inline IDSet& operator=(IDSet&& from) noexcept {
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
  static const IDSet& default_instance() {
    return *internal_default_instance();
  }
  static inline const IDSet* internal_default_instance() {
    return reinterpret_cast<const IDSet*>(
               &_IDSet_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(IDSet& a, IDSet& b) {
    a.Swap(&b);
  }
  inline void Swap(IDSet* other) {
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
  void UnsafeArenaSwap(IDSet* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  IDSet* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<IDSet>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const IDSet& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const IDSet& from) {
    IDSet::MergeImpl(*this, from);
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
  void InternalSwap(IDSet* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "injective.peggy.v1.IDSet";
  }
  protected:
  explicit IDSet(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIdsFieldNumber = 1,
  };
  // repeated uint64 ids = 1 [json_name = "ids"];
  int ids_size() const;
  private:
  int _internal_ids_size() const;

  public:
  void clear_ids() ;
  ::uint64_t ids(int index) const;
  void set_ids(int index, ::uint64_t value);
  void add_ids(::uint64_t value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField<::uint64_t>& ids() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<::uint64_t>* mutable_ids();

  private:
  ::uint64_t _internal_ids(int index) const;
  void _internal_add_ids(::uint64_t value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField<::uint64_t>& _internal_ids() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<::uint64_t>* _internal_mutable_ids();

  public:
  // @@protoc_insertion_point(class_scope:injective.peggy.v1.IDSet)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedField<::uint64_t> ids_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _ids_cached_byte_size_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_injective_2fpeggy_2fv1_2fpool_2eproto;
};// -------------------------------------------------------------------

class BatchFees final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:injective.peggy.v1.BatchFees) */ {
 public:
  inline BatchFees() : BatchFees(nullptr) {}
  ~BatchFees() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR BatchFees(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  BatchFees(const BatchFees& from);
  BatchFees(BatchFees&& from) noexcept
    : BatchFees() {
    *this = ::std::move(from);
  }

  inline BatchFees& operator=(const BatchFees& from) {
    CopyFrom(from);
    return *this;
  }
  inline BatchFees& operator=(BatchFees&& from) noexcept {
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
  static const BatchFees& default_instance() {
    return *internal_default_instance();
  }
  static inline const BatchFees* internal_default_instance() {
    return reinterpret_cast<const BatchFees*>(
               &_BatchFees_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(BatchFees& a, BatchFees& b) {
    a.Swap(&b);
  }
  inline void Swap(BatchFees* other) {
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
  void UnsafeArenaSwap(BatchFees* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  BatchFees* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<BatchFees>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const BatchFees& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const BatchFees& from) {
    BatchFees::MergeImpl(*this, from);
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
  void InternalSwap(BatchFees* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "injective.peggy.v1.BatchFees";
  }
  protected:
  explicit BatchFees(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTokenFieldNumber = 1,
    kTotalFeesFieldNumber = 2,
  };
  // string token = 1 [json_name = "token"];
  void clear_token() ;
  const std::string& token() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_token(Arg_&& arg, Args_... args);
  std::string* mutable_token();
  PROTOBUF_NODISCARD std::string* release_token();
  void set_allocated_token(std::string* ptr);

  private:
  const std::string& _internal_token() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_token(
      const std::string& value);
  std::string* _internal_mutable_token();

  public:
  // string total_fees = 2 [json_name = "totalFees", (.gogoproto.nullable) = false, (.gogoproto.customtype) = "github.com/cosmos/cosmos-sdk/types.Int"];
  void clear_total_fees() ;
  const std::string& total_fees() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_total_fees(Arg_&& arg, Args_... args);
  std::string* mutable_total_fees();
  PROTOBUF_NODISCARD std::string* release_total_fees();
  void set_allocated_total_fees(std::string* ptr);

  private:
  const std::string& _internal_total_fees() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_total_fees(
      const std::string& value);
  std::string* _internal_mutable_total_fees();

  public:
  // @@protoc_insertion_point(class_scope:injective.peggy.v1.BatchFees)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr token_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr total_fees_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_injective_2fpeggy_2fv1_2fpool_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// IDSet

// repeated uint64 ids = 1 [json_name = "ids"];
inline int IDSet::_internal_ids_size() const {
  return _impl_.ids_.size();
}
inline int IDSet::ids_size() const {
  return _internal_ids_size();
}
inline void IDSet::clear_ids() {
  _internal_mutable_ids()->Clear();
}
inline ::uint64_t IDSet::ids(int index) const {
  // @@protoc_insertion_point(field_get:injective.peggy.v1.IDSet.ids)
  return _internal_ids(index);
}
inline void IDSet::set_ids(int index, ::uint64_t value) {
  _internal_mutable_ids()->Set(index, value);
  // @@protoc_insertion_point(field_set:injective.peggy.v1.IDSet.ids)
}
inline void IDSet::add_ids(::uint64_t value) {
  _internal_add_ids(value);
  // @@protoc_insertion_point(field_add:injective.peggy.v1.IDSet.ids)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField<::uint64_t>& IDSet::ids() const {
  // @@protoc_insertion_point(field_list:injective.peggy.v1.IDSet.ids)
  return _internal_ids();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<::uint64_t>* IDSet::mutable_ids() {
  // @@protoc_insertion_point(field_mutable_list:injective.peggy.v1.IDSet.ids)
  return _internal_mutable_ids();
}

inline ::uint64_t IDSet::_internal_ids(int index) const {
  return _internal_ids().Get(index);
}
inline void IDSet::_internal_add_ids(::uint64_t value) {
  _internal_mutable_ids()->Add(value);
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField<::uint64_t>& IDSet::_internal_ids() const {
  return _impl_.ids_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<::uint64_t>* IDSet::_internal_mutable_ids() {
  return &_impl_.ids_;
}

// -------------------------------------------------------------------

// BatchFees

// string token = 1 [json_name = "token"];
inline void BatchFees::clear_token() {
  _impl_.token_.ClearToEmpty();
}
inline const std::string& BatchFees::token() const {
  // @@protoc_insertion_point(field_get:injective.peggy.v1.BatchFees.token)
  return _internal_token();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void BatchFees::set_token(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.token_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:injective.peggy.v1.BatchFees.token)
}
inline std::string* BatchFees::mutable_token() {
  std::string* _s = _internal_mutable_token();
  // @@protoc_insertion_point(field_mutable:injective.peggy.v1.BatchFees.token)
  return _s;
}
inline const std::string& BatchFees::_internal_token() const {
  return _impl_.token_.Get();
}
inline void BatchFees::_internal_set_token(const std::string& value) {
  ;


  _impl_.token_.Set(value, GetArenaForAllocation());
}
inline std::string* BatchFees::_internal_mutable_token() {
  ;
  return _impl_.token_.Mutable( GetArenaForAllocation());
}
inline std::string* BatchFees::release_token() {
  // @@protoc_insertion_point(field_release:injective.peggy.v1.BatchFees.token)
  return _impl_.token_.Release();
}
inline void BatchFees::set_allocated_token(std::string* value) {
  _impl_.token_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.token_.IsDefault()) {
          _impl_.token_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:injective.peggy.v1.BatchFees.token)
}

// string total_fees = 2 [json_name = "totalFees", (.gogoproto.nullable) = false, (.gogoproto.customtype) = "github.com/cosmos/cosmos-sdk/types.Int"];
inline void BatchFees::clear_total_fees() {
  _impl_.total_fees_.ClearToEmpty();
}
inline const std::string& BatchFees::total_fees() const {
  // @@protoc_insertion_point(field_get:injective.peggy.v1.BatchFees.total_fees)
  return _internal_total_fees();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void BatchFees::set_total_fees(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.total_fees_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:injective.peggy.v1.BatchFees.total_fees)
}
inline std::string* BatchFees::mutable_total_fees() {
  std::string* _s = _internal_mutable_total_fees();
  // @@protoc_insertion_point(field_mutable:injective.peggy.v1.BatchFees.total_fees)
  return _s;
}
inline const std::string& BatchFees::_internal_total_fees() const {
  return _impl_.total_fees_.Get();
}
inline void BatchFees::_internal_set_total_fees(const std::string& value) {
  ;


  _impl_.total_fees_.Set(value, GetArenaForAllocation());
}
inline std::string* BatchFees::_internal_mutable_total_fees() {
  ;
  return _impl_.total_fees_.Mutable( GetArenaForAllocation());
}
inline std::string* BatchFees::release_total_fees() {
  // @@protoc_insertion_point(field_release:injective.peggy.v1.BatchFees.total_fees)
  return _impl_.total_fees_.Release();
}
inline void BatchFees::set_allocated_total_fees(std::string* value) {
  _impl_.total_fees_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.total_fees_.IsDefault()) {
          _impl_.total_fees_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:injective.peggy.v1.BatchFees.total_fees)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace peggy
}  // namespace injective


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_injective_2fpeggy_2fv1_2fpool_2eproto_2epb_2eh
