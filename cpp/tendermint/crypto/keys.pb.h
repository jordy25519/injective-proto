// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tendermint/crypto/keys.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_tendermint_2fcrypto_2fkeys_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_tendermint_2fcrypto_2fkeys_2eproto_2epb_2eh

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

#define PROTOBUF_INTERNAL_EXPORT_tendermint_2fcrypto_2fkeys_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_tendermint_2fcrypto_2fkeys_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_tendermint_2fcrypto_2fkeys_2eproto;
namespace tendermint {
namespace crypto {
class PublicKey;
struct PublicKeyDefaultTypeInternal;
extern PublicKeyDefaultTypeInternal _PublicKey_default_instance_;
}  // namespace crypto
}  // namespace tendermint
PROTOBUF_NAMESPACE_OPEN
template <>
::tendermint::crypto::PublicKey* Arena::CreateMaybeMessage<::tendermint::crypto::PublicKey>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace tendermint {
namespace crypto {

// ===================================================================


// -------------------------------------------------------------------

class PublicKey final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:tendermint.crypto.PublicKey) */ {
 public:
  inline PublicKey() : PublicKey(nullptr) {}
  ~PublicKey() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR PublicKey(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  PublicKey(const PublicKey& from);
  PublicKey(PublicKey&& from) noexcept
    : PublicKey() {
    *this = ::std::move(from);
  }

  inline PublicKey& operator=(const PublicKey& from) {
    CopyFrom(from);
    return *this;
  }
  inline PublicKey& operator=(PublicKey&& from) noexcept {
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
  static const PublicKey& default_instance() {
    return *internal_default_instance();
  }
  enum SumCase {
    kEd25519 = 1,
    kSecp256K1 = 2,
    SUM_NOT_SET = 0,
  };

  static inline const PublicKey* internal_default_instance() {
    return reinterpret_cast<const PublicKey*>(
               &_PublicKey_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PublicKey& a, PublicKey& b) {
    a.Swap(&b);
  }
  inline void Swap(PublicKey* other) {
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
  void UnsafeArenaSwap(PublicKey* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  PublicKey* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<PublicKey>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const PublicKey& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const PublicKey& from) {
    PublicKey::MergeImpl(*this, from);
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
  void InternalSwap(PublicKey* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "tendermint.crypto.PublicKey";
  }
  protected:
  explicit PublicKey(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kEd25519FieldNumber = 1,
    kSecp256K1FieldNumber = 2,
  };
  // bytes ed25519 = 1 [json_name = "ed25519"];
  bool has_ed25519() const;
  void clear_ed25519() ;
  const std::string& ed25519() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_ed25519(Arg_&& arg, Args_... args);
  std::string* mutable_ed25519();
  PROTOBUF_NODISCARD std::string* release_ed25519();
  void set_allocated_ed25519(std::string* ptr);

  private:
  const std::string& _internal_ed25519() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_ed25519(
      const std::string& value);
  std::string* _internal_mutable_ed25519();

  public:
  // bytes secp256k1 = 2 [json_name = "secp256k1"];
  bool has_secp256k1() const;
  void clear_secp256k1() ;
  const std::string& secp256k1() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_secp256k1(Arg_&& arg, Args_... args);
  std::string* mutable_secp256k1();
  PROTOBUF_NODISCARD std::string* release_secp256k1();
  void set_allocated_secp256k1(std::string* ptr);

  private:
  const std::string& _internal_secp256k1() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_secp256k1(
      const std::string& value);
  std::string* _internal_mutable_secp256k1();

  public:
  void clear_sum();
  SumCase sum_case() const;
  // @@protoc_insertion_point(class_scope:tendermint.crypto.PublicKey)
 private:
  class _Internal;
  void set_has_ed25519();
  void set_has_secp256k1();

  inline bool has_sum() const;
  inline void clear_has_sum();

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    union SumUnion {
      constexpr SumUnion() : _constinit_{} {}
        ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized _constinit_;
      ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr ed25519_;
      ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr secp256k1_;
    } sum_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::uint32_t _oneof_case_[1];

  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_tendermint_2fcrypto_2fkeys_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// PublicKey

// bytes ed25519 = 1 [json_name = "ed25519"];
inline bool PublicKey::has_ed25519() const {
  return sum_case() == kEd25519;
}
inline void PublicKey::set_has_ed25519() {
  _impl_._oneof_case_[0] = kEd25519;
}
inline void PublicKey::clear_ed25519() {
  if (sum_case() == kEd25519) {
    _impl_.sum_.ed25519_.Destroy();
    clear_has_sum();
  }
}
inline const std::string& PublicKey::ed25519() const {
  // @@protoc_insertion_point(field_get:tendermint.crypto.PublicKey.ed25519)
  return _internal_ed25519();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void PublicKey::set_ed25519(Arg_&& arg,
                                                     Args_... args) {
  if (sum_case() != kEd25519) {
    clear_sum();

    set_has_ed25519();
    _impl_.sum_.ed25519_.InitDefault();
  }
  _impl_.sum_.ed25519_.SetBytes(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:tendermint.crypto.PublicKey.ed25519)
}
inline std::string* PublicKey::mutable_ed25519() {
  std::string* _s = _internal_mutable_ed25519();
  // @@protoc_insertion_point(field_mutable:tendermint.crypto.PublicKey.ed25519)
  return _s;
}
inline const std::string& PublicKey::_internal_ed25519() const {
  if (sum_case() != kEd25519) {
    return ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited();
  }
  return _impl_.sum_.ed25519_.Get();
}
inline void PublicKey::_internal_set_ed25519(const std::string& value) {
  if (sum_case() != kEd25519) {
    clear_sum();

    set_has_ed25519();
    _impl_.sum_.ed25519_.InitDefault();
  }


  _impl_.sum_.ed25519_.Set(value, GetArenaForAllocation());
}
inline std::string* PublicKey::_internal_mutable_ed25519() {
  if (sum_case() != kEd25519) {
    clear_sum();

    set_has_ed25519();
    _impl_.sum_.ed25519_.InitDefault();
  }
  return _impl_.sum_.ed25519_.Mutable( GetArenaForAllocation());
}
inline std::string* PublicKey::release_ed25519() {
  // @@protoc_insertion_point(field_release:tendermint.crypto.PublicKey.ed25519)
  if (sum_case() != kEd25519) {
    return nullptr;
  }
  clear_has_sum();
  return _impl_.sum_.ed25519_.Release();
}
inline void PublicKey::set_allocated_ed25519(std::string* value) {
  if (has_sum()) {
    clear_sum();
  }
  if (value != nullptr) {
    set_has_ed25519();
    _impl_.sum_.ed25519_.InitAllocated(value, GetArenaForAllocation());
  }
  // @@protoc_insertion_point(field_set_allocated:tendermint.crypto.PublicKey.ed25519)
}

// bytes secp256k1 = 2 [json_name = "secp256k1"];
inline bool PublicKey::has_secp256k1() const {
  return sum_case() == kSecp256K1;
}
inline void PublicKey::set_has_secp256k1() {
  _impl_._oneof_case_[0] = kSecp256K1;
}
inline void PublicKey::clear_secp256k1() {
  if (sum_case() == kSecp256K1) {
    _impl_.sum_.secp256k1_.Destroy();
    clear_has_sum();
  }
}
inline const std::string& PublicKey::secp256k1() const {
  // @@protoc_insertion_point(field_get:tendermint.crypto.PublicKey.secp256k1)
  return _internal_secp256k1();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void PublicKey::set_secp256k1(Arg_&& arg,
                                                     Args_... args) {
  if (sum_case() != kSecp256K1) {
    clear_sum();

    set_has_secp256k1();
    _impl_.sum_.secp256k1_.InitDefault();
  }
  _impl_.sum_.secp256k1_.SetBytes(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:tendermint.crypto.PublicKey.secp256k1)
}
inline std::string* PublicKey::mutable_secp256k1() {
  std::string* _s = _internal_mutable_secp256k1();
  // @@protoc_insertion_point(field_mutable:tendermint.crypto.PublicKey.secp256k1)
  return _s;
}
inline const std::string& PublicKey::_internal_secp256k1() const {
  if (sum_case() != kSecp256K1) {
    return ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited();
  }
  return _impl_.sum_.secp256k1_.Get();
}
inline void PublicKey::_internal_set_secp256k1(const std::string& value) {
  if (sum_case() != kSecp256K1) {
    clear_sum();

    set_has_secp256k1();
    _impl_.sum_.secp256k1_.InitDefault();
  }


  _impl_.sum_.secp256k1_.Set(value, GetArenaForAllocation());
}
inline std::string* PublicKey::_internal_mutable_secp256k1() {
  if (sum_case() != kSecp256K1) {
    clear_sum();

    set_has_secp256k1();
    _impl_.sum_.secp256k1_.InitDefault();
  }
  return _impl_.sum_.secp256k1_.Mutable( GetArenaForAllocation());
}
inline std::string* PublicKey::release_secp256k1() {
  // @@protoc_insertion_point(field_release:tendermint.crypto.PublicKey.secp256k1)
  if (sum_case() != kSecp256K1) {
    return nullptr;
  }
  clear_has_sum();
  return _impl_.sum_.secp256k1_.Release();
}
inline void PublicKey::set_allocated_secp256k1(std::string* value) {
  if (has_sum()) {
    clear_sum();
  }
  if (value != nullptr) {
    set_has_secp256k1();
    _impl_.sum_.secp256k1_.InitAllocated(value, GetArenaForAllocation());
  }
  // @@protoc_insertion_point(field_set_allocated:tendermint.crypto.PublicKey.secp256k1)
}

inline bool PublicKey::has_sum() const {
  return sum_case() != SUM_NOT_SET;
}
inline void PublicKey::clear_has_sum() {
  _impl_._oneof_case_[0] = SUM_NOT_SET;
}
inline PublicKey::SumCase PublicKey::sum_case() const {
  return PublicKey::SumCase(_impl_._oneof_case_[0]);
}
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace crypto
}  // namespace tendermint


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_tendermint_2fcrypto_2fkeys_2eproto_2epb_2eh
