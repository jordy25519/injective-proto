// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: injective/auction/v1beta1/genesis.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_injective_2fauction_2fv1beta1_2fgenesis_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_injective_2fauction_2fv1beta1_2fgenesis_2eproto_2epb_2eh

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
#include "injective/auction/v1beta1/auction.pb.h"
#include "gogoproto/gogo.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_injective_2fauction_2fv1beta1_2fgenesis_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_injective_2fauction_2fv1beta1_2fgenesis_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_injective_2fauction_2fv1beta1_2fgenesis_2eproto;
namespace injective {
namespace auction {
namespace v1beta1 {
class GenesisState;
struct GenesisStateDefaultTypeInternal;
extern GenesisStateDefaultTypeInternal _GenesisState_default_instance_;
}  // namespace v1beta1
}  // namespace auction
}  // namespace injective
PROTOBUF_NAMESPACE_OPEN
template <>
::injective::auction::v1beta1::GenesisState* Arena::CreateMaybeMessage<::injective::auction::v1beta1::GenesisState>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace injective {
namespace auction {
namespace v1beta1 {

// ===================================================================


// -------------------------------------------------------------------

class GenesisState final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:injective.auction.v1beta1.GenesisState) */ {
 public:
  inline GenesisState() : GenesisState(nullptr) {}
  ~GenesisState() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR GenesisState(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GenesisState(const GenesisState& from);
  GenesisState(GenesisState&& from) noexcept
    : GenesisState() {
    *this = ::std::move(from);
  }

  inline GenesisState& operator=(const GenesisState& from) {
    CopyFrom(from);
    return *this;
  }
  inline GenesisState& operator=(GenesisState&& from) noexcept {
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
  static const GenesisState& default_instance() {
    return *internal_default_instance();
  }
  static inline const GenesisState* internal_default_instance() {
    return reinterpret_cast<const GenesisState*>(
               &_GenesisState_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GenesisState& a, GenesisState& b) {
    a.Swap(&b);
  }
  inline void Swap(GenesisState* other) {
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
  void UnsafeArenaSwap(GenesisState* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GenesisState* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GenesisState>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const GenesisState& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const GenesisState& from) {
    GenesisState::MergeImpl(*this, from);
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
  void InternalSwap(GenesisState* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "injective.auction.v1beta1.GenesisState";
  }
  protected:
  explicit GenesisState(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kParamsFieldNumber = 1,
    kHighestBidFieldNumber = 3,
    kAuctionRoundFieldNumber = 2,
    kAuctionEndingTimestampFieldNumber = 4,
  };
  // .injective.auction.v1beta1.Params params = 1 [json_name = "params", (.gogoproto.nullable) = false];
  bool has_params() const;
  void clear_params() ;
  const ::injective::auction::v1beta1::Params& params() const;
  PROTOBUF_NODISCARD ::injective::auction::v1beta1::Params* release_params();
  ::injective::auction::v1beta1::Params* mutable_params();
  void set_allocated_params(::injective::auction::v1beta1::Params* params);
  private:
  const ::injective::auction::v1beta1::Params& _internal_params() const;
  ::injective::auction::v1beta1::Params* _internal_mutable_params();
  public:
  void unsafe_arena_set_allocated_params(
      ::injective::auction::v1beta1::Params* params);
  ::injective::auction::v1beta1::Params* unsafe_arena_release_params();
  // .injective.auction.v1beta1.Bid highest_bid = 3 [json_name = "highestBid"];
  bool has_highest_bid() const;
  void clear_highest_bid() ;
  const ::injective::auction::v1beta1::Bid& highest_bid() const;
  PROTOBUF_NODISCARD ::injective::auction::v1beta1::Bid* release_highest_bid();
  ::injective::auction::v1beta1::Bid* mutable_highest_bid();
  void set_allocated_highest_bid(::injective::auction::v1beta1::Bid* highest_bid);
  private:
  const ::injective::auction::v1beta1::Bid& _internal_highest_bid() const;
  ::injective::auction::v1beta1::Bid* _internal_mutable_highest_bid();
  public:
  void unsafe_arena_set_allocated_highest_bid(
      ::injective::auction::v1beta1::Bid* highest_bid);
  ::injective::auction::v1beta1::Bid* unsafe_arena_release_highest_bid();
  // uint64 auction_round = 2 [json_name = "auctionRound"];
  void clear_auction_round() ;
  ::uint64_t auction_round() const;
  void set_auction_round(::uint64_t value);

  private:
  ::uint64_t _internal_auction_round() const;
  void _internal_set_auction_round(::uint64_t value);

  public:
  // int64 auction_ending_timestamp = 4 [json_name = "auctionEndingTimestamp"];
  void clear_auction_ending_timestamp() ;
  ::int64_t auction_ending_timestamp() const;
  void set_auction_ending_timestamp(::int64_t value);

  private:
  ::int64_t _internal_auction_ending_timestamp() const;
  void _internal_set_auction_ending_timestamp(::int64_t value);

  public:
  // @@protoc_insertion_point(class_scope:injective.auction.v1beta1.GenesisState)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::injective::auction::v1beta1::Params* params_;
    ::injective::auction::v1beta1::Bid* highest_bid_;
    ::uint64_t auction_round_;
    ::int64_t auction_ending_timestamp_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_injective_2fauction_2fv1beta1_2fgenesis_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// GenesisState

// .injective.auction.v1beta1.Params params = 1 [json_name = "params", (.gogoproto.nullable) = false];
inline bool GenesisState::has_params() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.params_ != nullptr);
  return value;
}
inline const ::injective::auction::v1beta1::Params& GenesisState::_internal_params() const {
  const ::injective::auction::v1beta1::Params* p = _impl_.params_;
  return p != nullptr ? *p : reinterpret_cast<const ::injective::auction::v1beta1::Params&>(
      ::injective::auction::v1beta1::_Params_default_instance_);
}
inline const ::injective::auction::v1beta1::Params& GenesisState::params() const {
  // @@protoc_insertion_point(field_get:injective.auction.v1beta1.GenesisState.params)
  return _internal_params();
}
inline void GenesisState::unsafe_arena_set_allocated_params(
    ::injective::auction::v1beta1::Params* params) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.params_);
  }
  _impl_.params_ = params;
  if (params) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:injective.auction.v1beta1.GenesisState.params)
}
inline ::injective::auction::v1beta1::Params* GenesisState::release_params() {
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::injective::auction::v1beta1::Params* temp = _impl_.params_;
  _impl_.params_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::injective::auction::v1beta1::Params* GenesisState::unsafe_arena_release_params() {
  // @@protoc_insertion_point(field_release:injective.auction.v1beta1.GenesisState.params)
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::injective::auction::v1beta1::Params* temp = _impl_.params_;
  _impl_.params_ = nullptr;
  return temp;
}
inline ::injective::auction::v1beta1::Params* GenesisState::_internal_mutable_params() {
  _impl_._has_bits_[0] |= 0x00000001u;
  if (_impl_.params_ == nullptr) {
    auto* p = CreateMaybeMessage<::injective::auction::v1beta1::Params>(GetArenaForAllocation());
    _impl_.params_ = p;
  }
  return _impl_.params_;
}
inline ::injective::auction::v1beta1::Params* GenesisState::mutable_params() {
  ::injective::auction::v1beta1::Params* _msg = _internal_mutable_params();
  // @@protoc_insertion_point(field_mutable:injective.auction.v1beta1.GenesisState.params)
  return _msg;
}
inline void GenesisState::set_allocated_params(::injective::auction::v1beta1::Params* params) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.params_);
  }
  if (params) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(params));
    if (message_arena != submessage_arena) {
      params = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, params, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.params_ = params;
  // @@protoc_insertion_point(field_set_allocated:injective.auction.v1beta1.GenesisState.params)
}

// uint64 auction_round = 2 [json_name = "auctionRound"];
inline void GenesisState::clear_auction_round() {
  _impl_.auction_round_ = ::uint64_t{0u};
}
inline ::uint64_t GenesisState::auction_round() const {
  // @@protoc_insertion_point(field_get:injective.auction.v1beta1.GenesisState.auction_round)
  return _internal_auction_round();
}
inline void GenesisState::set_auction_round(::uint64_t value) {
  _internal_set_auction_round(value);
  // @@protoc_insertion_point(field_set:injective.auction.v1beta1.GenesisState.auction_round)
}
inline ::uint64_t GenesisState::_internal_auction_round() const {
  return _impl_.auction_round_;
}
inline void GenesisState::_internal_set_auction_round(::uint64_t value) {
  ;
  _impl_.auction_round_ = value;
}

// .injective.auction.v1beta1.Bid highest_bid = 3 [json_name = "highestBid"];
inline bool GenesisState::has_highest_bid() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.highest_bid_ != nullptr);
  return value;
}
inline const ::injective::auction::v1beta1::Bid& GenesisState::_internal_highest_bid() const {
  const ::injective::auction::v1beta1::Bid* p = _impl_.highest_bid_;
  return p != nullptr ? *p : reinterpret_cast<const ::injective::auction::v1beta1::Bid&>(
      ::injective::auction::v1beta1::_Bid_default_instance_);
}
inline const ::injective::auction::v1beta1::Bid& GenesisState::highest_bid() const {
  // @@protoc_insertion_point(field_get:injective.auction.v1beta1.GenesisState.highest_bid)
  return _internal_highest_bid();
}
inline void GenesisState::unsafe_arena_set_allocated_highest_bid(
    ::injective::auction::v1beta1::Bid* highest_bid) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.highest_bid_);
  }
  _impl_.highest_bid_ = highest_bid;
  if (highest_bid) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:injective.auction.v1beta1.GenesisState.highest_bid)
}
inline ::injective::auction::v1beta1::Bid* GenesisState::release_highest_bid() {
  _impl_._has_bits_[0] &= ~0x00000002u;
  ::injective::auction::v1beta1::Bid* temp = _impl_.highest_bid_;
  _impl_.highest_bid_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::injective::auction::v1beta1::Bid* GenesisState::unsafe_arena_release_highest_bid() {
  // @@protoc_insertion_point(field_release:injective.auction.v1beta1.GenesisState.highest_bid)
  _impl_._has_bits_[0] &= ~0x00000002u;
  ::injective::auction::v1beta1::Bid* temp = _impl_.highest_bid_;
  _impl_.highest_bid_ = nullptr;
  return temp;
}
inline ::injective::auction::v1beta1::Bid* GenesisState::_internal_mutable_highest_bid() {
  _impl_._has_bits_[0] |= 0x00000002u;
  if (_impl_.highest_bid_ == nullptr) {
    auto* p = CreateMaybeMessage<::injective::auction::v1beta1::Bid>(GetArenaForAllocation());
    _impl_.highest_bid_ = p;
  }
  return _impl_.highest_bid_;
}
inline ::injective::auction::v1beta1::Bid* GenesisState::mutable_highest_bid() {
  ::injective::auction::v1beta1::Bid* _msg = _internal_mutable_highest_bid();
  // @@protoc_insertion_point(field_mutable:injective.auction.v1beta1.GenesisState.highest_bid)
  return _msg;
}
inline void GenesisState::set_allocated_highest_bid(::injective::auction::v1beta1::Bid* highest_bid) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.highest_bid_);
  }
  if (highest_bid) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(highest_bid));
    if (message_arena != submessage_arena) {
      highest_bid = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, highest_bid, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.highest_bid_ = highest_bid;
  // @@protoc_insertion_point(field_set_allocated:injective.auction.v1beta1.GenesisState.highest_bid)
}

// int64 auction_ending_timestamp = 4 [json_name = "auctionEndingTimestamp"];
inline void GenesisState::clear_auction_ending_timestamp() {
  _impl_.auction_ending_timestamp_ = ::int64_t{0};
}
inline ::int64_t GenesisState::auction_ending_timestamp() const {
  // @@protoc_insertion_point(field_get:injective.auction.v1beta1.GenesisState.auction_ending_timestamp)
  return _internal_auction_ending_timestamp();
}
inline void GenesisState::set_auction_ending_timestamp(::int64_t value) {
  _internal_set_auction_ending_timestamp(value);
  // @@protoc_insertion_point(field_set:injective.auction.v1beta1.GenesisState.auction_ending_timestamp)
}
inline ::int64_t GenesisState::_internal_auction_ending_timestamp() const {
  return _impl_.auction_ending_timestamp_;
}
inline void GenesisState::_internal_set_auction_ending_timestamp(::int64_t value) {
  ;
  _impl_.auction_ending_timestamp_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace v1beta1
}  // namespace auction
}  // namespace injective


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_injective_2fauction_2fv1beta1_2fgenesis_2eproto_2epb_2eh
