// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cosmos/base/v1beta1/coin.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_cosmos_2fbase_2fv1beta1_2fcoin_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_cosmos_2fbase_2fv1beta1_2fcoin_2eproto_2epb_2eh

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
#include "cosmos_proto/cosmos.pb.h"
#include "amino/amino.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_cosmos_2fbase_2fv1beta1_2fcoin_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_cosmos_2fbase_2fv1beta1_2fcoin_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_cosmos_2fbase_2fv1beta1_2fcoin_2eproto;
namespace cosmos {
namespace base {
namespace v1beta1 {
class Coin;
struct CoinDefaultTypeInternal;
extern CoinDefaultTypeInternal _Coin_default_instance_;
class DecCoin;
struct DecCoinDefaultTypeInternal;
extern DecCoinDefaultTypeInternal _DecCoin_default_instance_;
class DecProto;
struct DecProtoDefaultTypeInternal;
extern DecProtoDefaultTypeInternal _DecProto_default_instance_;
class IntProto;
struct IntProtoDefaultTypeInternal;
extern IntProtoDefaultTypeInternal _IntProto_default_instance_;
}  // namespace v1beta1
}  // namespace base
}  // namespace cosmos
PROTOBUF_NAMESPACE_OPEN
template <>
::cosmos::base::v1beta1::Coin* Arena::CreateMaybeMessage<::cosmos::base::v1beta1::Coin>(Arena*);
template <>
::cosmos::base::v1beta1::DecCoin* Arena::CreateMaybeMessage<::cosmos::base::v1beta1::DecCoin>(Arena*);
template <>
::cosmos::base::v1beta1::DecProto* Arena::CreateMaybeMessage<::cosmos::base::v1beta1::DecProto>(Arena*);
template <>
::cosmos::base::v1beta1::IntProto* Arena::CreateMaybeMessage<::cosmos::base::v1beta1::IntProto>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace cosmos {
namespace base {
namespace v1beta1 {

// ===================================================================


// -------------------------------------------------------------------

class Coin final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:cosmos.base.v1beta1.Coin) */ {
 public:
  inline Coin() : Coin(nullptr) {}
  ~Coin() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR Coin(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Coin(const Coin& from);
  Coin(Coin&& from) noexcept
    : Coin() {
    *this = ::std::move(from);
  }

  inline Coin& operator=(const Coin& from) {
    CopyFrom(from);
    return *this;
  }
  inline Coin& operator=(Coin&& from) noexcept {
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
  static const Coin& default_instance() {
    return *internal_default_instance();
  }
  static inline const Coin* internal_default_instance() {
    return reinterpret_cast<const Coin*>(
               &_Coin_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Coin& a, Coin& b) {
    a.Swap(&b);
  }
  inline void Swap(Coin* other) {
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
  void UnsafeArenaSwap(Coin* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Coin* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Coin>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Coin& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Coin& from) {
    Coin::MergeImpl(*this, from);
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
  void InternalSwap(Coin* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "cosmos.base.v1beta1.Coin";
  }
  protected:
  explicit Coin(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDenomFieldNumber = 1,
    kAmountFieldNumber = 2,
  };
  // string denom = 1 [json_name = "denom"];
  void clear_denom() ;
  const std::string& denom() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_denom(Arg_&& arg, Args_... args);
  std::string* mutable_denom();
  PROTOBUF_NODISCARD std::string* release_denom();
  void set_allocated_denom(std::string* ptr);

  private:
  const std::string& _internal_denom() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_denom(
      const std::string& value);
  std::string* _internal_mutable_denom();

  public:
  // string amount = 2 [json_name = "amount", (.gogoproto.nullable) = false, (.gogoproto.customtype) = "Int", (.cosmos_proto.scalar) = "cosmos.Int", (.amino.dont_omitempty) = true];
  void clear_amount() ;
  const std::string& amount() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_amount(Arg_&& arg, Args_... args);
  std::string* mutable_amount();
  PROTOBUF_NODISCARD std::string* release_amount();
  void set_allocated_amount(std::string* ptr);

  private:
  const std::string& _internal_amount() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_amount(
      const std::string& value);
  std::string* _internal_mutable_amount();

  public:
  // @@protoc_insertion_point(class_scope:cosmos.base.v1beta1.Coin)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr denom_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr amount_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_cosmos_2fbase_2fv1beta1_2fcoin_2eproto;
};// -------------------------------------------------------------------

class DecCoin final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:cosmos.base.v1beta1.DecCoin) */ {
 public:
  inline DecCoin() : DecCoin(nullptr) {}
  ~DecCoin() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR DecCoin(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  DecCoin(const DecCoin& from);
  DecCoin(DecCoin&& from) noexcept
    : DecCoin() {
    *this = ::std::move(from);
  }

  inline DecCoin& operator=(const DecCoin& from) {
    CopyFrom(from);
    return *this;
  }
  inline DecCoin& operator=(DecCoin&& from) noexcept {
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
  static const DecCoin& default_instance() {
    return *internal_default_instance();
  }
  static inline const DecCoin* internal_default_instance() {
    return reinterpret_cast<const DecCoin*>(
               &_DecCoin_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(DecCoin& a, DecCoin& b) {
    a.Swap(&b);
  }
  inline void Swap(DecCoin* other) {
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
  void UnsafeArenaSwap(DecCoin* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  DecCoin* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<DecCoin>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const DecCoin& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const DecCoin& from) {
    DecCoin::MergeImpl(*this, from);
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
  void InternalSwap(DecCoin* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "cosmos.base.v1beta1.DecCoin";
  }
  protected:
  explicit DecCoin(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDenomFieldNumber = 1,
    kAmountFieldNumber = 2,
  };
  // string denom = 1 [json_name = "denom"];
  void clear_denom() ;
  const std::string& denom() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_denom(Arg_&& arg, Args_... args);
  std::string* mutable_denom();
  PROTOBUF_NODISCARD std::string* release_denom();
  void set_allocated_denom(std::string* ptr);

  private:
  const std::string& _internal_denom() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_denom(
      const std::string& value);
  std::string* _internal_mutable_denom();

  public:
  // string amount = 2 [json_name = "amount", (.gogoproto.nullable) = false, (.gogoproto.customtype) = "Dec", (.cosmos_proto.scalar) = "cosmos.Dec"];
  void clear_amount() ;
  const std::string& amount() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_amount(Arg_&& arg, Args_... args);
  std::string* mutable_amount();
  PROTOBUF_NODISCARD std::string* release_amount();
  void set_allocated_amount(std::string* ptr);

  private:
  const std::string& _internal_amount() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_amount(
      const std::string& value);
  std::string* _internal_mutable_amount();

  public:
  // @@protoc_insertion_point(class_scope:cosmos.base.v1beta1.DecCoin)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr denom_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr amount_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_cosmos_2fbase_2fv1beta1_2fcoin_2eproto;
};// -------------------------------------------------------------------

class IntProto final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:cosmos.base.v1beta1.IntProto) */ {
 public:
  inline IntProto() : IntProto(nullptr) {}
  ~IntProto() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR IntProto(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  IntProto(const IntProto& from);
  IntProto(IntProto&& from) noexcept
    : IntProto() {
    *this = ::std::move(from);
  }

  inline IntProto& operator=(const IntProto& from) {
    CopyFrom(from);
    return *this;
  }
  inline IntProto& operator=(IntProto&& from) noexcept {
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
  static const IntProto& default_instance() {
    return *internal_default_instance();
  }
  static inline const IntProto* internal_default_instance() {
    return reinterpret_cast<const IntProto*>(
               &_IntProto_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(IntProto& a, IntProto& b) {
    a.Swap(&b);
  }
  inline void Swap(IntProto* other) {
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
  void UnsafeArenaSwap(IntProto* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  IntProto* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<IntProto>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const IntProto& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const IntProto& from) {
    IntProto::MergeImpl(*this, from);
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
  void InternalSwap(IntProto* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "cosmos.base.v1beta1.IntProto";
  }
  protected:
  explicit IntProto(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIntFieldNumber = 1,
  };
  // string int = 1 [json_name = "int", (.gogoproto.nullable) = false, (.gogoproto.customtype) = "Int", (.cosmos_proto.scalar) = "cosmos.Int"];
  void clear_int_() ;
  const std::string& int_() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_int_(Arg_&& arg, Args_... args);
  std::string* mutable_int_();
  PROTOBUF_NODISCARD std::string* release_int_();
  void set_allocated_int_(std::string* ptr);

  private:
  const std::string& _internal_int_() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_int_(
      const std::string& value);
  std::string* _internal_mutable_int_();

  public:
  // @@protoc_insertion_point(class_scope:cosmos.base.v1beta1.IntProto)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr int__;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_cosmos_2fbase_2fv1beta1_2fcoin_2eproto;
};// -------------------------------------------------------------------

class DecProto final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:cosmos.base.v1beta1.DecProto) */ {
 public:
  inline DecProto() : DecProto(nullptr) {}
  ~DecProto() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR DecProto(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  DecProto(const DecProto& from);
  DecProto(DecProto&& from) noexcept
    : DecProto() {
    *this = ::std::move(from);
  }

  inline DecProto& operator=(const DecProto& from) {
    CopyFrom(from);
    return *this;
  }
  inline DecProto& operator=(DecProto&& from) noexcept {
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
  static const DecProto& default_instance() {
    return *internal_default_instance();
  }
  static inline const DecProto* internal_default_instance() {
    return reinterpret_cast<const DecProto*>(
               &_DecProto_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(DecProto& a, DecProto& b) {
    a.Swap(&b);
  }
  inline void Swap(DecProto* other) {
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
  void UnsafeArenaSwap(DecProto* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  DecProto* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<DecProto>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const DecProto& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const DecProto& from) {
    DecProto::MergeImpl(*this, from);
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
  void InternalSwap(DecProto* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "cosmos.base.v1beta1.DecProto";
  }
  protected:
  explicit DecProto(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDecFieldNumber = 1,
  };
  // string dec = 1 [json_name = "dec", (.gogoproto.nullable) = false, (.gogoproto.customtype) = "Dec", (.cosmos_proto.scalar) = "cosmos.Dec"];
  void clear_dec() ;
  const std::string& dec() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_dec(Arg_&& arg, Args_... args);
  std::string* mutable_dec();
  PROTOBUF_NODISCARD std::string* release_dec();
  void set_allocated_dec(std::string* ptr);

  private:
  const std::string& _internal_dec() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_dec(
      const std::string& value);
  std::string* _internal_mutable_dec();

  public:
  // @@protoc_insertion_point(class_scope:cosmos.base.v1beta1.DecProto)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr dec_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_cosmos_2fbase_2fv1beta1_2fcoin_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Coin

// string denom = 1 [json_name = "denom"];
inline void Coin::clear_denom() {
  _impl_.denom_.ClearToEmpty();
}
inline const std::string& Coin::denom() const {
  // @@protoc_insertion_point(field_get:cosmos.base.v1beta1.Coin.denom)
  return _internal_denom();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Coin::set_denom(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.denom_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:cosmos.base.v1beta1.Coin.denom)
}
inline std::string* Coin::mutable_denom() {
  std::string* _s = _internal_mutable_denom();
  // @@protoc_insertion_point(field_mutable:cosmos.base.v1beta1.Coin.denom)
  return _s;
}
inline const std::string& Coin::_internal_denom() const {
  return _impl_.denom_.Get();
}
inline void Coin::_internal_set_denom(const std::string& value) {
  ;


  _impl_.denom_.Set(value, GetArenaForAllocation());
}
inline std::string* Coin::_internal_mutable_denom() {
  ;
  return _impl_.denom_.Mutable( GetArenaForAllocation());
}
inline std::string* Coin::release_denom() {
  // @@protoc_insertion_point(field_release:cosmos.base.v1beta1.Coin.denom)
  return _impl_.denom_.Release();
}
inline void Coin::set_allocated_denom(std::string* value) {
  _impl_.denom_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.denom_.IsDefault()) {
          _impl_.denom_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:cosmos.base.v1beta1.Coin.denom)
}

// string amount = 2 [json_name = "amount", (.gogoproto.nullable) = false, (.gogoproto.customtype) = "Int", (.cosmos_proto.scalar) = "cosmos.Int", (.amino.dont_omitempty) = true];
inline void Coin::clear_amount() {
  _impl_.amount_.ClearToEmpty();
}
inline const std::string& Coin::amount() const {
  // @@protoc_insertion_point(field_get:cosmos.base.v1beta1.Coin.amount)
  return _internal_amount();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Coin::set_amount(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.amount_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:cosmos.base.v1beta1.Coin.amount)
}
inline std::string* Coin::mutable_amount() {
  std::string* _s = _internal_mutable_amount();
  // @@protoc_insertion_point(field_mutable:cosmos.base.v1beta1.Coin.amount)
  return _s;
}
inline const std::string& Coin::_internal_amount() const {
  return _impl_.amount_.Get();
}
inline void Coin::_internal_set_amount(const std::string& value) {
  ;


  _impl_.amount_.Set(value, GetArenaForAllocation());
}
inline std::string* Coin::_internal_mutable_amount() {
  ;
  return _impl_.amount_.Mutable( GetArenaForAllocation());
}
inline std::string* Coin::release_amount() {
  // @@protoc_insertion_point(field_release:cosmos.base.v1beta1.Coin.amount)
  return _impl_.amount_.Release();
}
inline void Coin::set_allocated_amount(std::string* value) {
  _impl_.amount_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.amount_.IsDefault()) {
          _impl_.amount_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:cosmos.base.v1beta1.Coin.amount)
}

// -------------------------------------------------------------------

// DecCoin

// string denom = 1 [json_name = "denom"];
inline void DecCoin::clear_denom() {
  _impl_.denom_.ClearToEmpty();
}
inline const std::string& DecCoin::denom() const {
  // @@protoc_insertion_point(field_get:cosmos.base.v1beta1.DecCoin.denom)
  return _internal_denom();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void DecCoin::set_denom(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.denom_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:cosmos.base.v1beta1.DecCoin.denom)
}
inline std::string* DecCoin::mutable_denom() {
  std::string* _s = _internal_mutable_denom();
  // @@protoc_insertion_point(field_mutable:cosmos.base.v1beta1.DecCoin.denom)
  return _s;
}
inline const std::string& DecCoin::_internal_denom() const {
  return _impl_.denom_.Get();
}
inline void DecCoin::_internal_set_denom(const std::string& value) {
  ;


  _impl_.denom_.Set(value, GetArenaForAllocation());
}
inline std::string* DecCoin::_internal_mutable_denom() {
  ;
  return _impl_.denom_.Mutable( GetArenaForAllocation());
}
inline std::string* DecCoin::release_denom() {
  // @@protoc_insertion_point(field_release:cosmos.base.v1beta1.DecCoin.denom)
  return _impl_.denom_.Release();
}
inline void DecCoin::set_allocated_denom(std::string* value) {
  _impl_.denom_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.denom_.IsDefault()) {
          _impl_.denom_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:cosmos.base.v1beta1.DecCoin.denom)
}

// string amount = 2 [json_name = "amount", (.gogoproto.nullable) = false, (.gogoproto.customtype) = "Dec", (.cosmos_proto.scalar) = "cosmos.Dec"];
inline void DecCoin::clear_amount() {
  _impl_.amount_.ClearToEmpty();
}
inline const std::string& DecCoin::amount() const {
  // @@protoc_insertion_point(field_get:cosmos.base.v1beta1.DecCoin.amount)
  return _internal_amount();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void DecCoin::set_amount(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.amount_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:cosmos.base.v1beta1.DecCoin.amount)
}
inline std::string* DecCoin::mutable_amount() {
  std::string* _s = _internal_mutable_amount();
  // @@protoc_insertion_point(field_mutable:cosmos.base.v1beta1.DecCoin.amount)
  return _s;
}
inline const std::string& DecCoin::_internal_amount() const {
  return _impl_.amount_.Get();
}
inline void DecCoin::_internal_set_amount(const std::string& value) {
  ;


  _impl_.amount_.Set(value, GetArenaForAllocation());
}
inline std::string* DecCoin::_internal_mutable_amount() {
  ;
  return _impl_.amount_.Mutable( GetArenaForAllocation());
}
inline std::string* DecCoin::release_amount() {
  // @@protoc_insertion_point(field_release:cosmos.base.v1beta1.DecCoin.amount)
  return _impl_.amount_.Release();
}
inline void DecCoin::set_allocated_amount(std::string* value) {
  _impl_.amount_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.amount_.IsDefault()) {
          _impl_.amount_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:cosmos.base.v1beta1.DecCoin.amount)
}

// -------------------------------------------------------------------

// IntProto

// string int = 1 [json_name = "int", (.gogoproto.nullable) = false, (.gogoproto.customtype) = "Int", (.cosmos_proto.scalar) = "cosmos.Int"];
inline void IntProto::clear_int_() {
  _impl_.int__.ClearToEmpty();
}
inline const std::string& IntProto::int_() const {
  // @@protoc_insertion_point(field_get:cosmos.base.v1beta1.IntProto.int)
  return _internal_int_();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void IntProto::set_int_(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.int__.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:cosmos.base.v1beta1.IntProto.int)
}
inline std::string* IntProto::mutable_int_() {
  std::string* _s = _internal_mutable_int_();
  // @@protoc_insertion_point(field_mutable:cosmos.base.v1beta1.IntProto.int)
  return _s;
}
inline const std::string& IntProto::_internal_int_() const {
  return _impl_.int__.Get();
}
inline void IntProto::_internal_set_int_(const std::string& value) {
  ;


  _impl_.int__.Set(value, GetArenaForAllocation());
}
inline std::string* IntProto::_internal_mutable_int_() {
  ;
  return _impl_.int__.Mutable( GetArenaForAllocation());
}
inline std::string* IntProto::release_int_() {
  // @@protoc_insertion_point(field_release:cosmos.base.v1beta1.IntProto.int)
  return _impl_.int__.Release();
}
inline void IntProto::set_allocated_int_(std::string* value) {
  _impl_.int__.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.int__.IsDefault()) {
          _impl_.int__.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:cosmos.base.v1beta1.IntProto.int)
}

// -------------------------------------------------------------------

// DecProto

// string dec = 1 [json_name = "dec", (.gogoproto.nullable) = false, (.gogoproto.customtype) = "Dec", (.cosmos_proto.scalar) = "cosmos.Dec"];
inline void DecProto::clear_dec() {
  _impl_.dec_.ClearToEmpty();
}
inline const std::string& DecProto::dec() const {
  // @@protoc_insertion_point(field_get:cosmos.base.v1beta1.DecProto.dec)
  return _internal_dec();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void DecProto::set_dec(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.dec_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:cosmos.base.v1beta1.DecProto.dec)
}
inline std::string* DecProto::mutable_dec() {
  std::string* _s = _internal_mutable_dec();
  // @@protoc_insertion_point(field_mutable:cosmos.base.v1beta1.DecProto.dec)
  return _s;
}
inline const std::string& DecProto::_internal_dec() const {
  return _impl_.dec_.Get();
}
inline void DecProto::_internal_set_dec(const std::string& value) {
  ;


  _impl_.dec_.Set(value, GetArenaForAllocation());
}
inline std::string* DecProto::_internal_mutable_dec() {
  ;
  return _impl_.dec_.Mutable( GetArenaForAllocation());
}
inline std::string* DecProto::release_dec() {
  // @@protoc_insertion_point(field_release:cosmos.base.v1beta1.DecProto.dec)
  return _impl_.dec_.Release();
}
inline void DecProto::set_allocated_dec(std::string* value) {
  _impl_.dec_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.dec_.IsDefault()) {
          _impl_.dec_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:cosmos.base.v1beta1.DecProto.dec)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace v1beta1
}  // namespace base
}  // namespace cosmos


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_cosmos_2fbase_2fv1beta1_2fcoin_2eproto_2epb_2eh
