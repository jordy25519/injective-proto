// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: injective/wasmx/v1/genesis.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_injective_2fwasmx_2fv1_2fgenesis_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_injective_2fwasmx_2fv1_2fgenesis_2eproto_2epb_2eh

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
#include "injective/wasmx/v1/wasmx.pb.h"
#include "gogoproto/gogo.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_injective_2fwasmx_2fv1_2fgenesis_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_injective_2fwasmx_2fv1_2fgenesis_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_injective_2fwasmx_2fv1_2fgenesis_2eproto;
namespace injective {
namespace wasmx {
namespace v1 {
class GenesisState;
struct GenesisStateDefaultTypeInternal;
extern GenesisStateDefaultTypeInternal _GenesisState_default_instance_;
class RegisteredContractWithAddress;
struct RegisteredContractWithAddressDefaultTypeInternal;
extern RegisteredContractWithAddressDefaultTypeInternal _RegisteredContractWithAddress_default_instance_;
}  // namespace v1
}  // namespace wasmx
}  // namespace injective
PROTOBUF_NAMESPACE_OPEN
template <>
::injective::wasmx::v1::GenesisState* Arena::CreateMaybeMessage<::injective::wasmx::v1::GenesisState>(Arena*);
template <>
::injective::wasmx::v1::RegisteredContractWithAddress* Arena::CreateMaybeMessage<::injective::wasmx::v1::RegisteredContractWithAddress>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace injective {
namespace wasmx {
namespace v1 {

// ===================================================================


// -------------------------------------------------------------------

class RegisteredContractWithAddress final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:injective.wasmx.v1.RegisteredContractWithAddress) */ {
 public:
  inline RegisteredContractWithAddress() : RegisteredContractWithAddress(nullptr) {}
  ~RegisteredContractWithAddress() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR RegisteredContractWithAddress(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  RegisteredContractWithAddress(const RegisteredContractWithAddress& from);
  RegisteredContractWithAddress(RegisteredContractWithAddress&& from) noexcept
    : RegisteredContractWithAddress() {
    *this = ::std::move(from);
  }

  inline RegisteredContractWithAddress& operator=(const RegisteredContractWithAddress& from) {
    CopyFrom(from);
    return *this;
  }
  inline RegisteredContractWithAddress& operator=(RegisteredContractWithAddress&& from) noexcept {
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
  static const RegisteredContractWithAddress& default_instance() {
    return *internal_default_instance();
  }
  static inline const RegisteredContractWithAddress* internal_default_instance() {
    return reinterpret_cast<const RegisteredContractWithAddress*>(
               &_RegisteredContractWithAddress_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RegisteredContractWithAddress& a, RegisteredContractWithAddress& b) {
    a.Swap(&b);
  }
  inline void Swap(RegisteredContractWithAddress* other) {
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
  void UnsafeArenaSwap(RegisteredContractWithAddress* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  RegisteredContractWithAddress* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<RegisteredContractWithAddress>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const RegisteredContractWithAddress& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const RegisteredContractWithAddress& from) {
    RegisteredContractWithAddress::MergeImpl(*this, from);
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
  void InternalSwap(RegisteredContractWithAddress* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "injective.wasmx.v1.RegisteredContractWithAddress";
  }
  protected:
  explicit RegisteredContractWithAddress(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAddressFieldNumber = 1,
    kRegisteredContractFieldNumber = 2,
  };
  // string address = 1 [json_name = "address"];
  void clear_address() ;
  const std::string& address() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_address(Arg_&& arg, Args_... args);
  std::string* mutable_address();
  PROTOBUF_NODISCARD std::string* release_address();
  void set_allocated_address(std::string* ptr);

  private:
  const std::string& _internal_address() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_address(
      const std::string& value);
  std::string* _internal_mutable_address();

  public:
  // .injective.wasmx.v1.RegisteredContract registered_contract = 2 [json_name = "registeredContract"];
  bool has_registered_contract() const;
  void clear_registered_contract() ;
  const ::injective::wasmx::v1::RegisteredContract& registered_contract() const;
  PROTOBUF_NODISCARD ::injective::wasmx::v1::RegisteredContract* release_registered_contract();
  ::injective::wasmx::v1::RegisteredContract* mutable_registered_contract();
  void set_allocated_registered_contract(::injective::wasmx::v1::RegisteredContract* registered_contract);
  private:
  const ::injective::wasmx::v1::RegisteredContract& _internal_registered_contract() const;
  ::injective::wasmx::v1::RegisteredContract* _internal_mutable_registered_contract();
  public:
  void unsafe_arena_set_allocated_registered_contract(
      ::injective::wasmx::v1::RegisteredContract* registered_contract);
  ::injective::wasmx::v1::RegisteredContract* unsafe_arena_release_registered_contract();
  // @@protoc_insertion_point(class_scope:injective.wasmx.v1.RegisteredContractWithAddress)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr address_;
    ::injective::wasmx::v1::RegisteredContract* registered_contract_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_injective_2fwasmx_2fv1_2fgenesis_2eproto;
};// -------------------------------------------------------------------

class GenesisState final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:injective.wasmx.v1.GenesisState) */ {
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
    1;

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
    return "injective.wasmx.v1.GenesisState";
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
    kRegisteredContractsFieldNumber = 2,
    kParamsFieldNumber = 1,
  };
  // repeated .injective.wasmx.v1.RegisteredContractWithAddress registered_contracts = 2 [json_name = "registeredContracts", (.gogoproto.nullable) = false];
  int registered_contracts_size() const;
  private:
  int _internal_registered_contracts_size() const;

  public:
  void clear_registered_contracts() ;
  ::injective::wasmx::v1::RegisteredContractWithAddress* mutable_registered_contracts(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::injective::wasmx::v1::RegisteredContractWithAddress >*
      mutable_registered_contracts();
  private:
  const ::injective::wasmx::v1::RegisteredContractWithAddress& _internal_registered_contracts(int index) const;
  ::injective::wasmx::v1::RegisteredContractWithAddress* _internal_add_registered_contracts();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::injective::wasmx::v1::RegisteredContractWithAddress>& _internal_registered_contracts() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::injective::wasmx::v1::RegisteredContractWithAddress>* _internal_mutable_registered_contracts();
  public:
  const ::injective::wasmx::v1::RegisteredContractWithAddress& registered_contracts(int index) const;
  ::injective::wasmx::v1::RegisteredContractWithAddress* add_registered_contracts();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::injective::wasmx::v1::RegisteredContractWithAddress >&
      registered_contracts() const;
  // .injective.wasmx.v1.Params params = 1 [json_name = "params", (.gogoproto.nullable) = false];
  bool has_params() const;
  void clear_params() ;
  const ::injective::wasmx::v1::Params& params() const;
  PROTOBUF_NODISCARD ::injective::wasmx::v1::Params* release_params();
  ::injective::wasmx::v1::Params* mutable_params();
  void set_allocated_params(::injective::wasmx::v1::Params* params);
  private:
  const ::injective::wasmx::v1::Params& _internal_params() const;
  ::injective::wasmx::v1::Params* _internal_mutable_params();
  public:
  void unsafe_arena_set_allocated_params(
      ::injective::wasmx::v1::Params* params);
  ::injective::wasmx::v1::Params* unsafe_arena_release_params();
  // @@protoc_insertion_point(class_scope:injective.wasmx.v1.GenesisState)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::injective::wasmx::v1::RegisteredContractWithAddress > registered_contracts_;
    ::injective::wasmx::v1::Params* params_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_injective_2fwasmx_2fv1_2fgenesis_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// RegisteredContractWithAddress

// string address = 1 [json_name = "address"];
inline void RegisteredContractWithAddress::clear_address() {
  _impl_.address_.ClearToEmpty();
}
inline const std::string& RegisteredContractWithAddress::address() const {
  // @@protoc_insertion_point(field_get:injective.wasmx.v1.RegisteredContractWithAddress.address)
  return _internal_address();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void RegisteredContractWithAddress::set_address(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.address_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:injective.wasmx.v1.RegisteredContractWithAddress.address)
}
inline std::string* RegisteredContractWithAddress::mutable_address() {
  std::string* _s = _internal_mutable_address();
  // @@protoc_insertion_point(field_mutable:injective.wasmx.v1.RegisteredContractWithAddress.address)
  return _s;
}
inline const std::string& RegisteredContractWithAddress::_internal_address() const {
  return _impl_.address_.Get();
}
inline void RegisteredContractWithAddress::_internal_set_address(const std::string& value) {
  ;


  _impl_.address_.Set(value, GetArenaForAllocation());
}
inline std::string* RegisteredContractWithAddress::_internal_mutable_address() {
  ;
  return _impl_.address_.Mutable( GetArenaForAllocation());
}
inline std::string* RegisteredContractWithAddress::release_address() {
  // @@protoc_insertion_point(field_release:injective.wasmx.v1.RegisteredContractWithAddress.address)
  return _impl_.address_.Release();
}
inline void RegisteredContractWithAddress::set_allocated_address(std::string* value) {
  _impl_.address_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.address_.IsDefault()) {
          _impl_.address_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:injective.wasmx.v1.RegisteredContractWithAddress.address)
}

// .injective.wasmx.v1.RegisteredContract registered_contract = 2 [json_name = "registeredContract"];
inline bool RegisteredContractWithAddress::has_registered_contract() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.registered_contract_ != nullptr);
  return value;
}
inline const ::injective::wasmx::v1::RegisteredContract& RegisteredContractWithAddress::_internal_registered_contract() const {
  const ::injective::wasmx::v1::RegisteredContract* p = _impl_.registered_contract_;
  return p != nullptr ? *p : reinterpret_cast<const ::injective::wasmx::v1::RegisteredContract&>(
      ::injective::wasmx::v1::_RegisteredContract_default_instance_);
}
inline const ::injective::wasmx::v1::RegisteredContract& RegisteredContractWithAddress::registered_contract() const {
  // @@protoc_insertion_point(field_get:injective.wasmx.v1.RegisteredContractWithAddress.registered_contract)
  return _internal_registered_contract();
}
inline void RegisteredContractWithAddress::unsafe_arena_set_allocated_registered_contract(
    ::injective::wasmx::v1::RegisteredContract* registered_contract) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.registered_contract_);
  }
  _impl_.registered_contract_ = registered_contract;
  if (registered_contract) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:injective.wasmx.v1.RegisteredContractWithAddress.registered_contract)
}
inline ::injective::wasmx::v1::RegisteredContract* RegisteredContractWithAddress::release_registered_contract() {
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::injective::wasmx::v1::RegisteredContract* temp = _impl_.registered_contract_;
  _impl_.registered_contract_ = nullptr;
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
inline ::injective::wasmx::v1::RegisteredContract* RegisteredContractWithAddress::unsafe_arena_release_registered_contract() {
  // @@protoc_insertion_point(field_release:injective.wasmx.v1.RegisteredContractWithAddress.registered_contract)
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::injective::wasmx::v1::RegisteredContract* temp = _impl_.registered_contract_;
  _impl_.registered_contract_ = nullptr;
  return temp;
}
inline ::injective::wasmx::v1::RegisteredContract* RegisteredContractWithAddress::_internal_mutable_registered_contract() {
  _impl_._has_bits_[0] |= 0x00000001u;
  if (_impl_.registered_contract_ == nullptr) {
    auto* p = CreateMaybeMessage<::injective::wasmx::v1::RegisteredContract>(GetArenaForAllocation());
    _impl_.registered_contract_ = p;
  }
  return _impl_.registered_contract_;
}
inline ::injective::wasmx::v1::RegisteredContract* RegisteredContractWithAddress::mutable_registered_contract() {
  ::injective::wasmx::v1::RegisteredContract* _msg = _internal_mutable_registered_contract();
  // @@protoc_insertion_point(field_mutable:injective.wasmx.v1.RegisteredContractWithAddress.registered_contract)
  return _msg;
}
inline void RegisteredContractWithAddress::set_allocated_registered_contract(::injective::wasmx::v1::RegisteredContract* registered_contract) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.registered_contract_);
  }
  if (registered_contract) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(registered_contract));
    if (message_arena != submessage_arena) {
      registered_contract = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, registered_contract, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.registered_contract_ = registered_contract;
  // @@protoc_insertion_point(field_set_allocated:injective.wasmx.v1.RegisteredContractWithAddress.registered_contract)
}

// -------------------------------------------------------------------

// GenesisState

// .injective.wasmx.v1.Params params = 1 [json_name = "params", (.gogoproto.nullable) = false];
inline bool GenesisState::has_params() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.params_ != nullptr);
  return value;
}
inline const ::injective::wasmx::v1::Params& GenesisState::_internal_params() const {
  const ::injective::wasmx::v1::Params* p = _impl_.params_;
  return p != nullptr ? *p : reinterpret_cast<const ::injective::wasmx::v1::Params&>(
      ::injective::wasmx::v1::_Params_default_instance_);
}
inline const ::injective::wasmx::v1::Params& GenesisState::params() const {
  // @@protoc_insertion_point(field_get:injective.wasmx.v1.GenesisState.params)
  return _internal_params();
}
inline void GenesisState::unsafe_arena_set_allocated_params(
    ::injective::wasmx::v1::Params* params) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.params_);
  }
  _impl_.params_ = params;
  if (params) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:injective.wasmx.v1.GenesisState.params)
}
inline ::injective::wasmx::v1::Params* GenesisState::release_params() {
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::injective::wasmx::v1::Params* temp = _impl_.params_;
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
inline ::injective::wasmx::v1::Params* GenesisState::unsafe_arena_release_params() {
  // @@protoc_insertion_point(field_release:injective.wasmx.v1.GenesisState.params)
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::injective::wasmx::v1::Params* temp = _impl_.params_;
  _impl_.params_ = nullptr;
  return temp;
}
inline ::injective::wasmx::v1::Params* GenesisState::_internal_mutable_params() {
  _impl_._has_bits_[0] |= 0x00000001u;
  if (_impl_.params_ == nullptr) {
    auto* p = CreateMaybeMessage<::injective::wasmx::v1::Params>(GetArenaForAllocation());
    _impl_.params_ = p;
  }
  return _impl_.params_;
}
inline ::injective::wasmx::v1::Params* GenesisState::mutable_params() {
  ::injective::wasmx::v1::Params* _msg = _internal_mutable_params();
  // @@protoc_insertion_point(field_mutable:injective.wasmx.v1.GenesisState.params)
  return _msg;
}
inline void GenesisState::set_allocated_params(::injective::wasmx::v1::Params* params) {
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
  // @@protoc_insertion_point(field_set_allocated:injective.wasmx.v1.GenesisState.params)
}

// repeated .injective.wasmx.v1.RegisteredContractWithAddress registered_contracts = 2 [json_name = "registeredContracts", (.gogoproto.nullable) = false];
inline int GenesisState::_internal_registered_contracts_size() const {
  return _impl_.registered_contracts_.size();
}
inline int GenesisState::registered_contracts_size() const {
  return _internal_registered_contracts_size();
}
inline void GenesisState::clear_registered_contracts() {
  _internal_mutable_registered_contracts()->Clear();
}
inline ::injective::wasmx::v1::RegisteredContractWithAddress* GenesisState::mutable_registered_contracts(int index) {
  // @@protoc_insertion_point(field_mutable:injective.wasmx.v1.GenesisState.registered_contracts)
  return _internal_mutable_registered_contracts()->Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::injective::wasmx::v1::RegisteredContractWithAddress >*
GenesisState::mutable_registered_contracts() {
  // @@protoc_insertion_point(field_mutable_list:injective.wasmx.v1.GenesisState.registered_contracts)
  return _internal_mutable_registered_contracts();
}
inline const ::injective::wasmx::v1::RegisteredContractWithAddress& GenesisState::_internal_registered_contracts(int index) const {
  return _internal_registered_contracts().Get(index);
}
inline const ::injective::wasmx::v1::RegisteredContractWithAddress& GenesisState::registered_contracts(int index) const {
  // @@protoc_insertion_point(field_get:injective.wasmx.v1.GenesisState.registered_contracts)
  return _internal_registered_contracts(index);
}
inline ::injective::wasmx::v1::RegisteredContractWithAddress* GenesisState::_internal_add_registered_contracts() {
  return _internal_mutable_registered_contracts()->Add();
}
inline ::injective::wasmx::v1::RegisteredContractWithAddress* GenesisState::add_registered_contracts() {
  ::injective::wasmx::v1::RegisteredContractWithAddress* _add = _internal_add_registered_contracts();
  // @@protoc_insertion_point(field_add:injective.wasmx.v1.GenesisState.registered_contracts)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::injective::wasmx::v1::RegisteredContractWithAddress >&
GenesisState::registered_contracts() const {
  // @@protoc_insertion_point(field_list:injective.wasmx.v1.GenesisState.registered_contracts)
  return _internal_registered_contracts();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::injective::wasmx::v1::RegisteredContractWithAddress>&
GenesisState::_internal_registered_contracts() const {
  return _impl_.registered_contracts_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::injective::wasmx::v1::RegisteredContractWithAddress>*
GenesisState::_internal_mutable_registered_contracts() {
  return &_impl_.registered_contracts_;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace wasmx
}  // namespace injective


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_injective_2fwasmx_2fv1_2fgenesis_2eproto_2epb_2eh
