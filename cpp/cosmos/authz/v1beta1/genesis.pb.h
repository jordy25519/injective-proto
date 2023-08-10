// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cosmos/authz/v1beta1/genesis.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_cosmos_2fauthz_2fv1beta1_2fgenesis_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_cosmos_2fauthz_2fv1beta1_2fgenesis_2eproto_2epb_2eh

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
#include "cosmos/authz/v1beta1/authz.pb.h"
#include "amino/amino.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_cosmos_2fauthz_2fv1beta1_2fgenesis_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_cosmos_2fauthz_2fv1beta1_2fgenesis_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_cosmos_2fauthz_2fv1beta1_2fgenesis_2eproto;
namespace cosmos {
namespace authz {
namespace v1beta1 {
class GenesisState;
struct GenesisStateDefaultTypeInternal;
extern GenesisStateDefaultTypeInternal _GenesisState_default_instance_;
}  // namespace v1beta1
}  // namespace authz
}  // namespace cosmos
PROTOBUF_NAMESPACE_OPEN
template <>
::cosmos::authz::v1beta1::GenesisState* Arena::CreateMaybeMessage<::cosmos::authz::v1beta1::GenesisState>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace cosmos {
namespace authz {
namespace v1beta1 {

// ===================================================================


// -------------------------------------------------------------------

class GenesisState final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:cosmos.authz.v1beta1.GenesisState) */ {
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
    return "cosmos.authz.v1beta1.GenesisState";
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
    kAuthorizationFieldNumber = 1,
  };
  // repeated .cosmos.authz.v1beta1.GrantAuthorization authorization = 1 [json_name = "authorization", (.gogoproto.nullable) = false, (.amino.dont_omitempty) = true];
  int authorization_size() const;
  private:
  int _internal_authorization_size() const;

  public:
  void clear_authorization() ;
  ::cosmos::authz::v1beta1::GrantAuthorization* mutable_authorization(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::cosmos::authz::v1beta1::GrantAuthorization >*
      mutable_authorization();
  private:
  const ::cosmos::authz::v1beta1::GrantAuthorization& _internal_authorization(int index) const;
  ::cosmos::authz::v1beta1::GrantAuthorization* _internal_add_authorization();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::cosmos::authz::v1beta1::GrantAuthorization>& _internal_authorization() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::cosmos::authz::v1beta1::GrantAuthorization>* _internal_mutable_authorization();
  public:
  const ::cosmos::authz::v1beta1::GrantAuthorization& authorization(int index) const;
  ::cosmos::authz::v1beta1::GrantAuthorization* add_authorization();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::cosmos::authz::v1beta1::GrantAuthorization >&
      authorization() const;
  // @@protoc_insertion_point(class_scope:cosmos.authz.v1beta1.GenesisState)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::cosmos::authz::v1beta1::GrantAuthorization > authorization_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_cosmos_2fauthz_2fv1beta1_2fgenesis_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// GenesisState

// repeated .cosmos.authz.v1beta1.GrantAuthorization authorization = 1 [json_name = "authorization", (.gogoproto.nullable) = false, (.amino.dont_omitempty) = true];
inline int GenesisState::_internal_authorization_size() const {
  return _impl_.authorization_.size();
}
inline int GenesisState::authorization_size() const {
  return _internal_authorization_size();
}
inline ::cosmos::authz::v1beta1::GrantAuthorization* GenesisState::mutable_authorization(int index) {
  // @@protoc_insertion_point(field_mutable:cosmos.authz.v1beta1.GenesisState.authorization)
  return _internal_mutable_authorization()->Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::cosmos::authz::v1beta1::GrantAuthorization >*
GenesisState::mutable_authorization() {
  // @@protoc_insertion_point(field_mutable_list:cosmos.authz.v1beta1.GenesisState.authorization)
  return _internal_mutable_authorization();
}
inline const ::cosmos::authz::v1beta1::GrantAuthorization& GenesisState::_internal_authorization(int index) const {
  return _internal_authorization().Get(index);
}
inline const ::cosmos::authz::v1beta1::GrantAuthorization& GenesisState::authorization(int index) const {
  // @@protoc_insertion_point(field_get:cosmos.authz.v1beta1.GenesisState.authorization)
  return _internal_authorization(index);
}
inline ::cosmos::authz::v1beta1::GrantAuthorization* GenesisState::_internal_add_authorization() {
  return _internal_mutable_authorization()->Add();
}
inline ::cosmos::authz::v1beta1::GrantAuthorization* GenesisState::add_authorization() {
  ::cosmos::authz::v1beta1::GrantAuthorization* _add = _internal_add_authorization();
  // @@protoc_insertion_point(field_add:cosmos.authz.v1beta1.GenesisState.authorization)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::cosmos::authz::v1beta1::GrantAuthorization >&
GenesisState::authorization() const {
  // @@protoc_insertion_point(field_list:cosmos.authz.v1beta1.GenesisState.authorization)
  return _internal_authorization();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::cosmos::authz::v1beta1::GrantAuthorization>&
GenesisState::_internal_authorization() const {
  return _impl_.authorization_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::cosmos::authz::v1beta1::GrantAuthorization>*
GenesisState::_internal_mutable_authorization() {
  return &_impl_.authorization_;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace v1beta1
}  // namespace authz
}  // namespace cosmos


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_cosmos_2fauthz_2fv1beta1_2fgenesis_2eproto_2epb_2eh
