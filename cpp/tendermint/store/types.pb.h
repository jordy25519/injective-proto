// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tendermint/store/types.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_tendermint_2fstore_2ftypes_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_tendermint_2fstore_2ftypes_2eproto_2epb_2eh

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

#define PROTOBUF_INTERNAL_EXPORT_tendermint_2fstore_2ftypes_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_tendermint_2fstore_2ftypes_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_tendermint_2fstore_2ftypes_2eproto;
namespace tendermint {
namespace store {
class BlockStoreState;
struct BlockStoreStateDefaultTypeInternal;
extern BlockStoreStateDefaultTypeInternal _BlockStoreState_default_instance_;
}  // namespace store
}  // namespace tendermint
PROTOBUF_NAMESPACE_OPEN
template <>
::tendermint::store::BlockStoreState* Arena::CreateMaybeMessage<::tendermint::store::BlockStoreState>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace tendermint {
namespace store {

// ===================================================================


// -------------------------------------------------------------------

class BlockStoreState final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:tendermint.store.BlockStoreState) */ {
 public:
  inline BlockStoreState() : BlockStoreState(nullptr) {}
  ~BlockStoreState() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR BlockStoreState(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  BlockStoreState(const BlockStoreState& from);
  BlockStoreState(BlockStoreState&& from) noexcept
    : BlockStoreState() {
    *this = ::std::move(from);
  }

  inline BlockStoreState& operator=(const BlockStoreState& from) {
    CopyFrom(from);
    return *this;
  }
  inline BlockStoreState& operator=(BlockStoreState&& from) noexcept {
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
  static const BlockStoreState& default_instance() {
    return *internal_default_instance();
  }
  static inline const BlockStoreState* internal_default_instance() {
    return reinterpret_cast<const BlockStoreState*>(
               &_BlockStoreState_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(BlockStoreState& a, BlockStoreState& b) {
    a.Swap(&b);
  }
  inline void Swap(BlockStoreState* other) {
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
  void UnsafeArenaSwap(BlockStoreState* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  BlockStoreState* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<BlockStoreState>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const BlockStoreState& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const BlockStoreState& from) {
    BlockStoreState::MergeImpl(*this, from);
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
  void InternalSwap(BlockStoreState* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "tendermint.store.BlockStoreState";
  }
  protected:
  explicit BlockStoreState(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kBaseFieldNumber = 1,
    kHeightFieldNumber = 2,
  };
  // int64 base = 1 [json_name = "base"];
  void clear_base() ;
  ::int64_t base() const;
  void set_base(::int64_t value);

  private:
  ::int64_t _internal_base() const;
  void _internal_set_base(::int64_t value);

  public:
  // int64 height = 2 [json_name = "height"];
  void clear_height() ;
  ::int64_t height() const;
  void set_height(::int64_t value);

  private:
  ::int64_t _internal_height() const;
  void _internal_set_height(::int64_t value);

  public:
  // @@protoc_insertion_point(class_scope:tendermint.store.BlockStoreState)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::int64_t base_;
    ::int64_t height_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_tendermint_2fstore_2ftypes_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// BlockStoreState

// int64 base = 1 [json_name = "base"];
inline void BlockStoreState::clear_base() {
  _impl_.base_ = ::int64_t{0};
}
inline ::int64_t BlockStoreState::base() const {
  // @@protoc_insertion_point(field_get:tendermint.store.BlockStoreState.base)
  return _internal_base();
}
inline void BlockStoreState::set_base(::int64_t value) {
  _internal_set_base(value);
  // @@protoc_insertion_point(field_set:tendermint.store.BlockStoreState.base)
}
inline ::int64_t BlockStoreState::_internal_base() const {
  return _impl_.base_;
}
inline void BlockStoreState::_internal_set_base(::int64_t value) {
  ;
  _impl_.base_ = value;
}

// int64 height = 2 [json_name = "height"];
inline void BlockStoreState::clear_height() {
  _impl_.height_ = ::int64_t{0};
}
inline ::int64_t BlockStoreState::height() const {
  // @@protoc_insertion_point(field_get:tendermint.store.BlockStoreState.height)
  return _internal_height();
}
inline void BlockStoreState::set_height(::int64_t value) {
  _internal_set_height(value);
  // @@protoc_insertion_point(field_set:tendermint.store.BlockStoreState.height)
}
inline ::int64_t BlockStoreState::_internal_height() const {
  return _impl_.height_;
}
inline void BlockStoreState::_internal_set_height(::int64_t value) {
  ;
  _impl_.height_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace store
}  // namespace tendermint


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_tendermint_2fstore_2ftypes_2eproto_2epb_2eh
