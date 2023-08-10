// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ibc/core/commitment/v1/commitment.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ibc_2fcore_2fcommitment_2fv1_2fcommitment_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_ibc_2fcore_2fcommitment_2fv1_2fcommitment_2eproto_2epb_2eh

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
#include "cosmos/ics23/v1/proofs.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_ibc_2fcore_2fcommitment_2fv1_2fcommitment_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ibc_2fcore_2fcommitment_2fv1_2fcommitment_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_ibc_2fcore_2fcommitment_2fv1_2fcommitment_2eproto;
namespace ibc {
namespace core {
namespace commitment {
namespace v1 {
class MerklePath;
struct MerklePathDefaultTypeInternal;
extern MerklePathDefaultTypeInternal _MerklePath_default_instance_;
class MerklePrefix;
struct MerklePrefixDefaultTypeInternal;
extern MerklePrefixDefaultTypeInternal _MerklePrefix_default_instance_;
class MerkleProof;
struct MerkleProofDefaultTypeInternal;
extern MerkleProofDefaultTypeInternal _MerkleProof_default_instance_;
class MerkleRoot;
struct MerkleRootDefaultTypeInternal;
extern MerkleRootDefaultTypeInternal _MerkleRoot_default_instance_;
}  // namespace v1
}  // namespace commitment
}  // namespace core
}  // namespace ibc
PROTOBUF_NAMESPACE_OPEN
template <>
::ibc::core::commitment::v1::MerklePath* Arena::CreateMaybeMessage<::ibc::core::commitment::v1::MerklePath>(Arena*);
template <>
::ibc::core::commitment::v1::MerklePrefix* Arena::CreateMaybeMessage<::ibc::core::commitment::v1::MerklePrefix>(Arena*);
template <>
::ibc::core::commitment::v1::MerkleProof* Arena::CreateMaybeMessage<::ibc::core::commitment::v1::MerkleProof>(Arena*);
template <>
::ibc::core::commitment::v1::MerkleRoot* Arena::CreateMaybeMessage<::ibc::core::commitment::v1::MerkleRoot>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace ibc {
namespace core {
namespace commitment {
namespace v1 {

// ===================================================================


// -------------------------------------------------------------------

class MerkleRoot final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ibc.core.commitment.v1.MerkleRoot) */ {
 public:
  inline MerkleRoot() : MerkleRoot(nullptr) {}
  ~MerkleRoot() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR MerkleRoot(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  MerkleRoot(const MerkleRoot& from);
  MerkleRoot(MerkleRoot&& from) noexcept
    : MerkleRoot() {
    *this = ::std::move(from);
  }

  inline MerkleRoot& operator=(const MerkleRoot& from) {
    CopyFrom(from);
    return *this;
  }
  inline MerkleRoot& operator=(MerkleRoot&& from) noexcept {
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
  static const MerkleRoot& default_instance() {
    return *internal_default_instance();
  }
  static inline const MerkleRoot* internal_default_instance() {
    return reinterpret_cast<const MerkleRoot*>(
               &_MerkleRoot_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(MerkleRoot& a, MerkleRoot& b) {
    a.Swap(&b);
  }
  inline void Swap(MerkleRoot* other) {
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
  void UnsafeArenaSwap(MerkleRoot* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MerkleRoot* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<MerkleRoot>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const MerkleRoot& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const MerkleRoot& from) {
    MerkleRoot::MergeImpl(*this, from);
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
  void InternalSwap(MerkleRoot* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "ibc.core.commitment.v1.MerkleRoot";
  }
  protected:
  explicit MerkleRoot(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHashFieldNumber = 1,
  };
  // bytes hash = 1 [json_name = "hash"];
  void clear_hash() ;
  const std::string& hash() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_hash(Arg_&& arg, Args_... args);
  std::string* mutable_hash();
  PROTOBUF_NODISCARD std::string* release_hash();
  void set_allocated_hash(std::string* ptr);

  private:
  const std::string& _internal_hash() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_hash(
      const std::string& value);
  std::string* _internal_mutable_hash();

  public:
  // @@protoc_insertion_point(class_scope:ibc.core.commitment.v1.MerkleRoot)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr hash_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_ibc_2fcore_2fcommitment_2fv1_2fcommitment_2eproto;
};// -------------------------------------------------------------------

class MerklePrefix final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ibc.core.commitment.v1.MerklePrefix) */ {
 public:
  inline MerklePrefix() : MerklePrefix(nullptr) {}
  ~MerklePrefix() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR MerklePrefix(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  MerklePrefix(const MerklePrefix& from);
  MerklePrefix(MerklePrefix&& from) noexcept
    : MerklePrefix() {
    *this = ::std::move(from);
  }

  inline MerklePrefix& operator=(const MerklePrefix& from) {
    CopyFrom(from);
    return *this;
  }
  inline MerklePrefix& operator=(MerklePrefix&& from) noexcept {
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
  static const MerklePrefix& default_instance() {
    return *internal_default_instance();
  }
  static inline const MerklePrefix* internal_default_instance() {
    return reinterpret_cast<const MerklePrefix*>(
               &_MerklePrefix_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(MerklePrefix& a, MerklePrefix& b) {
    a.Swap(&b);
  }
  inline void Swap(MerklePrefix* other) {
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
  void UnsafeArenaSwap(MerklePrefix* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MerklePrefix* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<MerklePrefix>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const MerklePrefix& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const MerklePrefix& from) {
    MerklePrefix::MergeImpl(*this, from);
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
  void InternalSwap(MerklePrefix* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "ibc.core.commitment.v1.MerklePrefix";
  }
  protected:
  explicit MerklePrefix(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kKeyPrefixFieldNumber = 1,
  };
  // bytes key_prefix = 1 [json_name = "keyPrefix"];
  void clear_key_prefix() ;
  const std::string& key_prefix() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_key_prefix(Arg_&& arg, Args_... args);
  std::string* mutable_key_prefix();
  PROTOBUF_NODISCARD std::string* release_key_prefix();
  void set_allocated_key_prefix(std::string* ptr);

  private:
  const std::string& _internal_key_prefix() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_key_prefix(
      const std::string& value);
  std::string* _internal_mutable_key_prefix();

  public:
  // @@protoc_insertion_point(class_scope:ibc.core.commitment.v1.MerklePrefix)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr key_prefix_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_ibc_2fcore_2fcommitment_2fv1_2fcommitment_2eproto;
};// -------------------------------------------------------------------

class MerklePath final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ibc.core.commitment.v1.MerklePath) */ {
 public:
  inline MerklePath() : MerklePath(nullptr) {}
  ~MerklePath() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR MerklePath(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  MerklePath(const MerklePath& from);
  MerklePath(MerklePath&& from) noexcept
    : MerklePath() {
    *this = ::std::move(from);
  }

  inline MerklePath& operator=(const MerklePath& from) {
    CopyFrom(from);
    return *this;
  }
  inline MerklePath& operator=(MerklePath&& from) noexcept {
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
  static const MerklePath& default_instance() {
    return *internal_default_instance();
  }
  static inline const MerklePath* internal_default_instance() {
    return reinterpret_cast<const MerklePath*>(
               &_MerklePath_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(MerklePath& a, MerklePath& b) {
    a.Swap(&b);
  }
  inline void Swap(MerklePath* other) {
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
  void UnsafeArenaSwap(MerklePath* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MerklePath* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<MerklePath>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const MerklePath& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const MerklePath& from) {
    MerklePath::MergeImpl(*this, from);
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
  void InternalSwap(MerklePath* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "ibc.core.commitment.v1.MerklePath";
  }
  protected:
  explicit MerklePath(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kKeyPathFieldNumber = 1,
  };
  // repeated string key_path = 1 [json_name = "keyPath"];
  int key_path_size() const;
  private:
  int _internal_key_path_size() const;

  public:
  void clear_key_path() ;
  const std::string& key_path(int index) const;
  std::string* mutable_key_path(int index);
  void set_key_path(int index, const std::string& value);
  void set_key_path(int index, std::string&& value);
  void set_key_path(int index, const char* value);
  void set_key_path(int index, const char* value, std::size_t size);
  void set_key_path(int index, absl::string_view value);
  std::string* add_key_path();
  void add_key_path(const std::string& value);
  void add_key_path(std::string&& value);
  void add_key_path(const char* value);
  void add_key_path(const char* value, std::size_t size);
  void add_key_path(absl::string_view value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& key_path() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_key_path();

  private:
  const std::string& _internal_key_path(int index) const;
  std::string* _internal_add_key_path();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& _internal_key_path() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* _internal_mutable_key_path();

  public:
  // @@protoc_insertion_point(class_scope:ibc.core.commitment.v1.MerklePath)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> key_path_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_ibc_2fcore_2fcommitment_2fv1_2fcommitment_2eproto;
};// -------------------------------------------------------------------

class MerkleProof final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ibc.core.commitment.v1.MerkleProof) */ {
 public:
  inline MerkleProof() : MerkleProof(nullptr) {}
  ~MerkleProof() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR MerkleProof(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  MerkleProof(const MerkleProof& from);
  MerkleProof(MerkleProof&& from) noexcept
    : MerkleProof() {
    *this = ::std::move(from);
  }

  inline MerkleProof& operator=(const MerkleProof& from) {
    CopyFrom(from);
    return *this;
  }
  inline MerkleProof& operator=(MerkleProof&& from) noexcept {
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
  static const MerkleProof& default_instance() {
    return *internal_default_instance();
  }
  static inline const MerkleProof* internal_default_instance() {
    return reinterpret_cast<const MerkleProof*>(
               &_MerkleProof_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(MerkleProof& a, MerkleProof& b) {
    a.Swap(&b);
  }
  inline void Swap(MerkleProof* other) {
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
  void UnsafeArenaSwap(MerkleProof* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MerkleProof* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<MerkleProof>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const MerkleProof& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const MerkleProof& from) {
    MerkleProof::MergeImpl(*this, from);
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
  void InternalSwap(MerkleProof* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "ibc.core.commitment.v1.MerkleProof";
  }
  protected:
  explicit MerkleProof(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kProofsFieldNumber = 1,
  };
  // repeated .cosmos.ics23.v1.CommitmentProof proofs = 1 [json_name = "proofs"];
  int proofs_size() const;
  private:
  int _internal_proofs_size() const;

  public:
  void clear_proofs() ;
  ::cosmos::ics23::v1::CommitmentProof* mutable_proofs(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::cosmos::ics23::v1::CommitmentProof >*
      mutable_proofs();
  private:
  const ::cosmos::ics23::v1::CommitmentProof& _internal_proofs(int index) const;
  ::cosmos::ics23::v1::CommitmentProof* _internal_add_proofs();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::cosmos::ics23::v1::CommitmentProof>& _internal_proofs() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::cosmos::ics23::v1::CommitmentProof>* _internal_mutable_proofs();
  public:
  const ::cosmos::ics23::v1::CommitmentProof& proofs(int index) const;
  ::cosmos::ics23::v1::CommitmentProof* add_proofs();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::cosmos::ics23::v1::CommitmentProof >&
      proofs() const;
  // @@protoc_insertion_point(class_scope:ibc.core.commitment.v1.MerkleProof)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::cosmos::ics23::v1::CommitmentProof > proofs_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_ibc_2fcore_2fcommitment_2fv1_2fcommitment_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// MerkleRoot

// bytes hash = 1 [json_name = "hash"];
inline void MerkleRoot::clear_hash() {
  _impl_.hash_.ClearToEmpty();
}
inline const std::string& MerkleRoot::hash() const {
  // @@protoc_insertion_point(field_get:ibc.core.commitment.v1.MerkleRoot.hash)
  return _internal_hash();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void MerkleRoot::set_hash(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.hash_.SetBytes(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:ibc.core.commitment.v1.MerkleRoot.hash)
}
inline std::string* MerkleRoot::mutable_hash() {
  std::string* _s = _internal_mutable_hash();
  // @@protoc_insertion_point(field_mutable:ibc.core.commitment.v1.MerkleRoot.hash)
  return _s;
}
inline const std::string& MerkleRoot::_internal_hash() const {
  return _impl_.hash_.Get();
}
inline void MerkleRoot::_internal_set_hash(const std::string& value) {
  ;


  _impl_.hash_.Set(value, GetArenaForAllocation());
}
inline std::string* MerkleRoot::_internal_mutable_hash() {
  ;
  return _impl_.hash_.Mutable( GetArenaForAllocation());
}
inline std::string* MerkleRoot::release_hash() {
  // @@protoc_insertion_point(field_release:ibc.core.commitment.v1.MerkleRoot.hash)
  return _impl_.hash_.Release();
}
inline void MerkleRoot::set_allocated_hash(std::string* value) {
  _impl_.hash_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.hash_.IsDefault()) {
          _impl_.hash_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:ibc.core.commitment.v1.MerkleRoot.hash)
}

// -------------------------------------------------------------------

// MerklePrefix

// bytes key_prefix = 1 [json_name = "keyPrefix"];
inline void MerklePrefix::clear_key_prefix() {
  _impl_.key_prefix_.ClearToEmpty();
}
inline const std::string& MerklePrefix::key_prefix() const {
  // @@protoc_insertion_point(field_get:ibc.core.commitment.v1.MerklePrefix.key_prefix)
  return _internal_key_prefix();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void MerklePrefix::set_key_prefix(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.key_prefix_.SetBytes(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:ibc.core.commitment.v1.MerklePrefix.key_prefix)
}
inline std::string* MerklePrefix::mutable_key_prefix() {
  std::string* _s = _internal_mutable_key_prefix();
  // @@protoc_insertion_point(field_mutable:ibc.core.commitment.v1.MerklePrefix.key_prefix)
  return _s;
}
inline const std::string& MerklePrefix::_internal_key_prefix() const {
  return _impl_.key_prefix_.Get();
}
inline void MerklePrefix::_internal_set_key_prefix(const std::string& value) {
  ;


  _impl_.key_prefix_.Set(value, GetArenaForAllocation());
}
inline std::string* MerklePrefix::_internal_mutable_key_prefix() {
  ;
  return _impl_.key_prefix_.Mutable( GetArenaForAllocation());
}
inline std::string* MerklePrefix::release_key_prefix() {
  // @@protoc_insertion_point(field_release:ibc.core.commitment.v1.MerklePrefix.key_prefix)
  return _impl_.key_prefix_.Release();
}
inline void MerklePrefix::set_allocated_key_prefix(std::string* value) {
  _impl_.key_prefix_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.key_prefix_.IsDefault()) {
          _impl_.key_prefix_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:ibc.core.commitment.v1.MerklePrefix.key_prefix)
}

// -------------------------------------------------------------------

// MerklePath

// repeated string key_path = 1 [json_name = "keyPath"];
inline int MerklePath::_internal_key_path_size() const {
  return _impl_.key_path_.size();
}
inline int MerklePath::key_path_size() const {
  return _internal_key_path_size();
}
inline void MerklePath::clear_key_path() {
  _internal_mutable_key_path()->Clear();
}
inline std::string* MerklePath::add_key_path() {
  std::string* _s = _internal_add_key_path();
  // @@protoc_insertion_point(field_add_mutable:ibc.core.commitment.v1.MerklePath.key_path)
  return _s;
}
inline const std::string& MerklePath::key_path(int index) const {
  // @@protoc_insertion_point(field_get:ibc.core.commitment.v1.MerklePath.key_path)
  return _internal_key_path(index);
}
inline std::string* MerklePath::mutable_key_path(int index) {
  // @@protoc_insertion_point(field_mutable:ibc.core.commitment.v1.MerklePath.key_path)
  return _internal_mutable_key_path()->Mutable(index);
}
inline void MerklePath::set_key_path(int index, const std::string& value) {
  _internal_mutable_key_path()->Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:ibc.core.commitment.v1.MerklePath.key_path)
}
inline void MerklePath::set_key_path(int index, std::string&& value) {
  _internal_mutable_key_path()->Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:ibc.core.commitment.v1.MerklePath.key_path)
}
inline void MerklePath::set_key_path(int index, const char* value) {
  ABSL_DCHECK(value != nullptr);
  _internal_mutable_key_path()->Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:ibc.core.commitment.v1.MerklePath.key_path)
}
inline void MerklePath::set_key_path(int index, const char* value,
                              std::size_t size) {
  _internal_mutable_key_path()->Mutable(index)->assign(
      reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:ibc.core.commitment.v1.MerklePath.key_path)
}
inline void MerklePath::set_key_path(int index, absl::string_view value) {
  _internal_mutable_key_path()->Mutable(index)->assign(value.data(),
                                                     value.size());
  // @@protoc_insertion_point(field_set_string_piece:ibc.core.commitment.v1.MerklePath.key_path)
}
inline void MerklePath::add_key_path(const std::string& value) {
  _internal_mutable_key_path()->Add()->assign(value);
  // @@protoc_insertion_point(field_add:ibc.core.commitment.v1.MerklePath.key_path)
}
inline void MerklePath::add_key_path(std::string&& value) {
  _internal_mutable_key_path()->Add(std::move(value));
  // @@protoc_insertion_point(field_add:ibc.core.commitment.v1.MerklePath.key_path)
}
inline void MerklePath::add_key_path(const char* value) {
  ABSL_DCHECK(value != nullptr);
  _internal_mutable_key_path()->Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:ibc.core.commitment.v1.MerklePath.key_path)
}
inline void MerklePath::add_key_path(const char* value, std::size_t size) {
  _internal_mutable_key_path()->Add()->assign(
      reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:ibc.core.commitment.v1.MerklePath.key_path)
}
inline void MerklePath::add_key_path(absl::string_view value) {
  _internal_mutable_key_path()->Add()->assign(value.data(), value.size());
  // @@protoc_insertion_point(field_add_string_piece:ibc.core.commitment.v1.MerklePath.key_path)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
MerklePath::key_path() const {
  // @@protoc_insertion_point(field_list:ibc.core.commitment.v1.MerklePath.key_path)
  return _internal_key_path();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* MerklePath::mutable_key_path() {
  // @@protoc_insertion_point(field_mutable_list:ibc.core.commitment.v1.MerklePath.key_path)
  return _internal_mutable_key_path();
}
inline const std::string& MerklePath::_internal_key_path(int index) const {
  return _internal_key_path().Get(index);
}
inline std::string* MerklePath::_internal_add_key_path() {
  return _internal_mutable_key_path()->Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
MerklePath::_internal_key_path() const {
  return _impl_.key_path_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
MerklePath::_internal_mutable_key_path() {
  return &_impl_.key_path_;
}

// -------------------------------------------------------------------

// MerkleProof

// repeated .cosmos.ics23.v1.CommitmentProof proofs = 1 [json_name = "proofs"];
inline int MerkleProof::_internal_proofs_size() const {
  return _impl_.proofs_.size();
}
inline int MerkleProof::proofs_size() const {
  return _internal_proofs_size();
}
inline ::cosmos::ics23::v1::CommitmentProof* MerkleProof::mutable_proofs(int index) {
  // @@protoc_insertion_point(field_mutable:ibc.core.commitment.v1.MerkleProof.proofs)
  return _internal_mutable_proofs()->Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::cosmos::ics23::v1::CommitmentProof >*
MerkleProof::mutable_proofs() {
  // @@protoc_insertion_point(field_mutable_list:ibc.core.commitment.v1.MerkleProof.proofs)
  return _internal_mutable_proofs();
}
inline const ::cosmos::ics23::v1::CommitmentProof& MerkleProof::_internal_proofs(int index) const {
  return _internal_proofs().Get(index);
}
inline const ::cosmos::ics23::v1::CommitmentProof& MerkleProof::proofs(int index) const {
  // @@protoc_insertion_point(field_get:ibc.core.commitment.v1.MerkleProof.proofs)
  return _internal_proofs(index);
}
inline ::cosmos::ics23::v1::CommitmentProof* MerkleProof::_internal_add_proofs() {
  return _internal_mutable_proofs()->Add();
}
inline ::cosmos::ics23::v1::CommitmentProof* MerkleProof::add_proofs() {
  ::cosmos::ics23::v1::CommitmentProof* _add = _internal_add_proofs();
  // @@protoc_insertion_point(field_add:ibc.core.commitment.v1.MerkleProof.proofs)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::cosmos::ics23::v1::CommitmentProof >&
MerkleProof::proofs() const {
  // @@protoc_insertion_point(field_list:ibc.core.commitment.v1.MerkleProof.proofs)
  return _internal_proofs();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::cosmos::ics23::v1::CommitmentProof>&
MerkleProof::_internal_proofs() const {
  return _impl_.proofs_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::cosmos::ics23::v1::CommitmentProof>*
MerkleProof::_internal_mutable_proofs() {
  return &_impl_.proofs_;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace commitment
}  // namespace core
}  // namespace ibc


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_ibc_2fcore_2fcommitment_2fv1_2fcommitment_2eproto_2epb_2eh
