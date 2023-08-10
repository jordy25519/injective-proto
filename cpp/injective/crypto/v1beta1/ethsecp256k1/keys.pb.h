// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: injective/crypto/v1beta1/ethsecp256k1/keys.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_injective_2fcrypto_2fv1beta1_2fethsecp256k1_2fkeys_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_injective_2fcrypto_2fv1beta1_2fethsecp256k1_2fkeys_2eproto_2epb_2eh

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

#define PROTOBUF_INTERNAL_EXPORT_injective_2fcrypto_2fv1beta1_2fethsecp256k1_2fkeys_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_injective_2fcrypto_2fv1beta1_2fethsecp256k1_2fkeys_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_injective_2fcrypto_2fv1beta1_2fethsecp256k1_2fkeys_2eproto;
namespace injective {
namespace crypto {
namespace v1beta1 {
namespace ethsecp256k1 {
class PrivKey;
struct PrivKeyDefaultTypeInternal;
extern PrivKeyDefaultTypeInternal _PrivKey_default_instance_;
class PubKey;
struct PubKeyDefaultTypeInternal;
extern PubKeyDefaultTypeInternal _PubKey_default_instance_;
}  // namespace ethsecp256k1
}  // namespace v1beta1
}  // namespace crypto
}  // namespace injective
PROTOBUF_NAMESPACE_OPEN
template <>
::injective::crypto::v1beta1::ethsecp256k1::PrivKey* Arena::CreateMaybeMessage<::injective::crypto::v1beta1::ethsecp256k1::PrivKey>(Arena*);
template <>
::injective::crypto::v1beta1::ethsecp256k1::PubKey* Arena::CreateMaybeMessage<::injective::crypto::v1beta1::ethsecp256k1::PubKey>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace injective {
namespace crypto {
namespace v1beta1 {
namespace ethsecp256k1 {

// ===================================================================


// -------------------------------------------------------------------

class PubKey final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:injective.crypto.v1beta1.ethsecp256k1.PubKey) */ {
 public:
  inline PubKey() : PubKey(nullptr) {}
  ~PubKey() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR PubKey(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  PubKey(const PubKey& from);
  PubKey(PubKey&& from) noexcept
    : PubKey() {
    *this = ::std::move(from);
  }

  inline PubKey& operator=(const PubKey& from) {
    CopyFrom(from);
    return *this;
  }
  inline PubKey& operator=(PubKey&& from) noexcept {
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
  static const PubKey& default_instance() {
    return *internal_default_instance();
  }
  static inline const PubKey* internal_default_instance() {
    return reinterpret_cast<const PubKey*>(
               &_PubKey_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PubKey& a, PubKey& b) {
    a.Swap(&b);
  }
  inline void Swap(PubKey* other) {
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
  void UnsafeArenaSwap(PubKey* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  PubKey* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<PubKey>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const PubKey& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const PubKey& from) {
    PubKey::MergeImpl(*this, from);
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
  void InternalSwap(PubKey* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "injective.crypto.v1beta1.ethsecp256k1.PubKey";
  }
  protected:
  explicit PubKey(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kKeyFieldNumber = 1,
  };
  // bytes key = 1 [json_name = "key"];
  void clear_key() ;
  const std::string& key() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_key(Arg_&& arg, Args_... args);
  std::string* mutable_key();
  PROTOBUF_NODISCARD std::string* release_key();
  void set_allocated_key(std::string* ptr);

  private:
  const std::string& _internal_key() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_key(
      const std::string& value);
  std::string* _internal_mutable_key();

  public:
  // @@protoc_insertion_point(class_scope:injective.crypto.v1beta1.ethsecp256k1.PubKey)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr key_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_injective_2fcrypto_2fv1beta1_2fethsecp256k1_2fkeys_2eproto;
};// -------------------------------------------------------------------

class PrivKey final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:injective.crypto.v1beta1.ethsecp256k1.PrivKey) */ {
 public:
  inline PrivKey() : PrivKey(nullptr) {}
  ~PrivKey() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR PrivKey(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  PrivKey(const PrivKey& from);
  PrivKey(PrivKey&& from) noexcept
    : PrivKey() {
    *this = ::std::move(from);
  }

  inline PrivKey& operator=(const PrivKey& from) {
    CopyFrom(from);
    return *this;
  }
  inline PrivKey& operator=(PrivKey&& from) noexcept {
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
  static const PrivKey& default_instance() {
    return *internal_default_instance();
  }
  static inline const PrivKey* internal_default_instance() {
    return reinterpret_cast<const PrivKey*>(
               &_PrivKey_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(PrivKey& a, PrivKey& b) {
    a.Swap(&b);
  }
  inline void Swap(PrivKey* other) {
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
  void UnsafeArenaSwap(PrivKey* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  PrivKey* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<PrivKey>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const PrivKey& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const PrivKey& from) {
    PrivKey::MergeImpl(*this, from);
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
  void InternalSwap(PrivKey* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "injective.crypto.v1beta1.ethsecp256k1.PrivKey";
  }
  protected:
  explicit PrivKey(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kKeyFieldNumber = 1,
  };
  // bytes key = 1 [json_name = "key"];
  void clear_key() ;
  const std::string& key() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_key(Arg_&& arg, Args_... args);
  std::string* mutable_key();
  PROTOBUF_NODISCARD std::string* release_key();
  void set_allocated_key(std::string* ptr);

  private:
  const std::string& _internal_key() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_key(
      const std::string& value);
  std::string* _internal_mutable_key();

  public:
  // @@protoc_insertion_point(class_scope:injective.crypto.v1beta1.ethsecp256k1.PrivKey)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr key_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_injective_2fcrypto_2fv1beta1_2fethsecp256k1_2fkeys_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// PubKey

// bytes key = 1 [json_name = "key"];
inline void PubKey::clear_key() {
  _impl_.key_.ClearToEmpty();
}
inline const std::string& PubKey::key() const {
  // @@protoc_insertion_point(field_get:injective.crypto.v1beta1.ethsecp256k1.PubKey.key)
  return _internal_key();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void PubKey::set_key(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.key_.SetBytes(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:injective.crypto.v1beta1.ethsecp256k1.PubKey.key)
}
inline std::string* PubKey::mutable_key() {
  std::string* _s = _internal_mutable_key();
  // @@protoc_insertion_point(field_mutable:injective.crypto.v1beta1.ethsecp256k1.PubKey.key)
  return _s;
}
inline const std::string& PubKey::_internal_key() const {
  return _impl_.key_.Get();
}
inline void PubKey::_internal_set_key(const std::string& value) {
  ;


  _impl_.key_.Set(value, GetArenaForAllocation());
}
inline std::string* PubKey::_internal_mutable_key() {
  ;
  return _impl_.key_.Mutable( GetArenaForAllocation());
}
inline std::string* PubKey::release_key() {
  // @@protoc_insertion_point(field_release:injective.crypto.v1beta1.ethsecp256k1.PubKey.key)
  return _impl_.key_.Release();
}
inline void PubKey::set_allocated_key(std::string* value) {
  _impl_.key_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.key_.IsDefault()) {
          _impl_.key_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:injective.crypto.v1beta1.ethsecp256k1.PubKey.key)
}

// -------------------------------------------------------------------

// PrivKey

// bytes key = 1 [json_name = "key"];
inline void PrivKey::clear_key() {
  _impl_.key_.ClearToEmpty();
}
inline const std::string& PrivKey::key() const {
  // @@protoc_insertion_point(field_get:injective.crypto.v1beta1.ethsecp256k1.PrivKey.key)
  return _internal_key();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void PrivKey::set_key(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.key_.SetBytes(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:injective.crypto.v1beta1.ethsecp256k1.PrivKey.key)
}
inline std::string* PrivKey::mutable_key() {
  std::string* _s = _internal_mutable_key();
  // @@protoc_insertion_point(field_mutable:injective.crypto.v1beta1.ethsecp256k1.PrivKey.key)
  return _s;
}
inline const std::string& PrivKey::_internal_key() const {
  return _impl_.key_.Get();
}
inline void PrivKey::_internal_set_key(const std::string& value) {
  ;


  _impl_.key_.Set(value, GetArenaForAllocation());
}
inline std::string* PrivKey::_internal_mutable_key() {
  ;
  return _impl_.key_.Mutable( GetArenaForAllocation());
}
inline std::string* PrivKey::release_key() {
  // @@protoc_insertion_point(field_release:injective.crypto.v1beta1.ethsecp256k1.PrivKey.key)
  return _impl_.key_.Release();
}
inline void PrivKey::set_allocated_key(std::string* value) {
  _impl_.key_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.key_.IsDefault()) {
          _impl_.key_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:injective.crypto.v1beta1.ethsecp256k1.PrivKey.key)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace ethsecp256k1
}  // namespace v1beta1
}  // namespace crypto
}  // namespace injective


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_injective_2fcrypto_2fv1beta1_2fethsecp256k1_2fkeys_2eproto_2epb_2eh
