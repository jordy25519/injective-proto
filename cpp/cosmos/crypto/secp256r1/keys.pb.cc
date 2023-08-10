// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cosmos/crypto/secp256r1/keys.proto

#include "cosmos/crypto/secp256r1/keys.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = ::PROTOBUF_NAMESPACE_ID::internal;
namespace cosmos {
namespace crypto {
namespace secp256r1 {
template <typename>
PROTOBUF_CONSTEXPR PubKey::PubKey(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.key_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_._cached_size_)*/{}} {}
struct PubKeyDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PubKeyDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~PubKeyDefaultTypeInternal() {}
  union {
    PubKey _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PubKeyDefaultTypeInternal _PubKey_default_instance_;
template <typename>
PROTOBUF_CONSTEXPR PrivKey::PrivKey(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.secret_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_._cached_size_)*/{}} {}
struct PrivKeyDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PrivKeyDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~PrivKeyDefaultTypeInternal() {}
  union {
    PrivKey _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PrivKeyDefaultTypeInternal _PrivKey_default_instance_;
}  // namespace secp256r1
}  // namespace crypto
}  // namespace cosmos
static ::_pb::Metadata file_level_metadata_cosmos_2fcrypto_2fsecp256r1_2fkeys_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_cosmos_2fcrypto_2fsecp256r1_2fkeys_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_cosmos_2fcrypto_2fsecp256r1_2fkeys_2eproto = nullptr;
const ::uint32_t TableStruct_cosmos_2fcrypto_2fsecp256r1_2fkeys_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::cosmos::crypto::secp256r1::PubKey, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::cosmos::crypto::secp256r1::PubKey, _impl_.key_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::cosmos::crypto::secp256r1::PrivKey, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::cosmos::crypto::secp256r1::PrivKey, _impl_.secret_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, -1, -1, sizeof(::cosmos::crypto::secp256r1::PubKey)},
        { 9, -1, -1, sizeof(::cosmos::crypto::secp256r1::PrivKey)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::cosmos::crypto::secp256r1::_PubKey_default_instance_._instance,
    &::cosmos::crypto::secp256r1::_PrivKey_default_instance_._instance,
};
const char descriptor_table_protodef_cosmos_2fcrypto_2fsecp256r1_2fkeys_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\"cosmos/crypto/secp256r1/keys.proto\022\027co"
    "smos.crypto.secp256r1\032\024gogoproto/gogo.pr"
    "oto\"\'\n\006PubKey\022\035\n\003key\030\001 \001(\014B\013\332\336\037\007ecdsaPKR"
    "\003key\".\n\007PrivKey\022#\n\006secret\030\001 \001(\014B\013\332\336\037\007ecd"
    "saSKR\006secretB\346\001\n\033com.cosmos.crypto.secp2"
    "56r1B\tKeysProtoP\001Z2github.com/cosmos/cos"
    "mos-sdk/crypto/keys/secp256r1\242\002\003CCS\252\002\027Co"
    "smos.Crypto.Secp256r1\312\002\027Cosmos\\Crypto\\Se"
    "cp256r1\342\002#Cosmos\\Crypto\\Secp256r1\\GPBMet"
    "adata\352\002\031Cosmos::Crypto::Secp256r1\310\341\036\000\330\341\036"
    "\000\310\343\036\001b\006proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_cosmos_2fcrypto_2fsecp256r1_2fkeys_2eproto_deps[1] =
    {
        &::descriptor_table_gogoproto_2fgogo_2eproto,
};
static ::absl::once_flag descriptor_table_cosmos_2fcrypto_2fsecp256r1_2fkeys_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_cosmos_2fcrypto_2fsecp256r1_2fkeys_2eproto = {
    false,
    false,
    413,
    descriptor_table_protodef_cosmos_2fcrypto_2fsecp256r1_2fkeys_2eproto,
    "cosmos/crypto/secp256r1/keys.proto",
    &descriptor_table_cosmos_2fcrypto_2fsecp256r1_2fkeys_2eproto_once,
    descriptor_table_cosmos_2fcrypto_2fsecp256r1_2fkeys_2eproto_deps,
    1,
    2,
    schemas,
    file_default_instances,
    TableStruct_cosmos_2fcrypto_2fsecp256r1_2fkeys_2eproto::offsets,
    file_level_metadata_cosmos_2fcrypto_2fsecp256r1_2fkeys_2eproto,
    file_level_enum_descriptors_cosmos_2fcrypto_2fsecp256r1_2fkeys_2eproto,
    file_level_service_descriptors_cosmos_2fcrypto_2fsecp256r1_2fkeys_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_cosmos_2fcrypto_2fsecp256r1_2fkeys_2eproto_getter() {
  return &descriptor_table_cosmos_2fcrypto_2fsecp256r1_2fkeys_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_cosmos_2fcrypto_2fsecp256r1_2fkeys_2eproto(&descriptor_table_cosmos_2fcrypto_2fsecp256r1_2fkeys_2eproto);
namespace cosmos {
namespace crypto {
namespace secp256r1 {
// ===================================================================

class PubKey::_Internal {
 public:
};

PubKey::PubKey(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:cosmos.crypto.secp256r1.PubKey)
}
PubKey::PubKey(const PubKey& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  PubKey* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.key_) {}

    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.key_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.key_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_key().empty()) {
    _this->_impl_.key_.Set(from._internal_key(), _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:cosmos.crypto.secp256r1.PubKey)
}

inline void PubKey::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.key_) {}

    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.key_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.key_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

PubKey::~PubKey() {
  // @@protoc_insertion_point(destructor:cosmos.crypto.secp256r1.PubKey)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void PubKey::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.key_.Destroy();
}

void PubKey::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void PubKey::Clear() {
// @@protoc_insertion_point(message_clear_start:cosmos.crypto.secp256r1.PubKey)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.key_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* PubKey::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bytes key = 1 [json_name = "key", (.gogoproto.customtype) = "ecdsaPK"];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_key();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::uint8_t* PubKey::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:cosmos.crypto.secp256r1.PubKey)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes key = 1 [json_name = "key", (.gogoproto.customtype) = "ecdsaPK"];
  if (!this->_internal_key().empty()) {
    const std::string& _s = this->_internal_key();
    target = stream->WriteBytesMaybeAliased(1, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cosmos.crypto.secp256r1.PubKey)
  return target;
}

::size_t PubKey::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cosmos.crypto.secp256r1.PubKey)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes key = 1 [json_name = "key", (.gogoproto.customtype) = "ecdsaPK"];
  if (!this->_internal_key().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
                                    this->_internal_key());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData PubKey::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    PubKey::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*PubKey::GetClassData() const { return &_class_data_; }


void PubKey::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<PubKey*>(&to_msg);
  auto& from = static_cast<const PubKey&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:cosmos.crypto.secp256r1.PubKey)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_key().empty()) {
    _this->_internal_set_key(from._internal_key());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void PubKey::CopyFrom(const PubKey& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cosmos.crypto.secp256r1.PubKey)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PubKey::IsInitialized() const {
  return true;
}

void PubKey::InternalSwap(PubKey* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.key_, lhs_arena,
                                       &other->_impl_.key_, rhs_arena);
}

::PROTOBUF_NAMESPACE_ID::Metadata PubKey::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_cosmos_2fcrypto_2fsecp256r1_2fkeys_2eproto_getter, &descriptor_table_cosmos_2fcrypto_2fsecp256r1_2fkeys_2eproto_once,
      file_level_metadata_cosmos_2fcrypto_2fsecp256r1_2fkeys_2eproto[0]);
}
// ===================================================================

class PrivKey::_Internal {
 public:
};

PrivKey::PrivKey(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:cosmos.crypto.secp256r1.PrivKey)
}
PrivKey::PrivKey(const PrivKey& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  PrivKey* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.secret_) {}

    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.secret_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.secret_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_secret().empty()) {
    _this->_impl_.secret_.Set(from._internal_secret(), _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:cosmos.crypto.secp256r1.PrivKey)
}

inline void PrivKey::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.secret_) {}

    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.secret_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.secret_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

PrivKey::~PrivKey() {
  // @@protoc_insertion_point(destructor:cosmos.crypto.secp256r1.PrivKey)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void PrivKey::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.secret_.Destroy();
}

void PrivKey::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void PrivKey::Clear() {
// @@protoc_insertion_point(message_clear_start:cosmos.crypto.secp256r1.PrivKey)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.secret_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* PrivKey::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bytes secret = 1 [json_name = "secret", (.gogoproto.customtype) = "ecdsaSK"];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_secret();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::uint8_t* PrivKey::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:cosmos.crypto.secp256r1.PrivKey)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes secret = 1 [json_name = "secret", (.gogoproto.customtype) = "ecdsaSK"];
  if (!this->_internal_secret().empty()) {
    const std::string& _s = this->_internal_secret();
    target = stream->WriteBytesMaybeAliased(1, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cosmos.crypto.secp256r1.PrivKey)
  return target;
}

::size_t PrivKey::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cosmos.crypto.secp256r1.PrivKey)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes secret = 1 [json_name = "secret", (.gogoproto.customtype) = "ecdsaSK"];
  if (!this->_internal_secret().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
                                    this->_internal_secret());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData PrivKey::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    PrivKey::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*PrivKey::GetClassData() const { return &_class_data_; }


void PrivKey::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<PrivKey*>(&to_msg);
  auto& from = static_cast<const PrivKey&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:cosmos.crypto.secp256r1.PrivKey)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_secret().empty()) {
    _this->_internal_set_secret(from._internal_secret());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void PrivKey::CopyFrom(const PrivKey& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cosmos.crypto.secp256r1.PrivKey)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PrivKey::IsInitialized() const {
  return true;
}

void PrivKey::InternalSwap(PrivKey* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.secret_, lhs_arena,
                                       &other->_impl_.secret_, rhs_arena);
}

::PROTOBUF_NAMESPACE_ID::Metadata PrivKey::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_cosmos_2fcrypto_2fsecp256r1_2fkeys_2eproto_getter, &descriptor_table_cosmos_2fcrypto_2fsecp256r1_2fkeys_2eproto_once,
      file_level_metadata_cosmos_2fcrypto_2fsecp256r1_2fkeys_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace secp256r1
}  // namespace crypto
}  // namespace cosmos
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::cosmos::crypto::secp256r1::PubKey*
Arena::CreateMaybeMessage< ::cosmos::crypto::secp256r1::PubKey >(Arena* arena) {
  return Arena::CreateMessageInternal< ::cosmos::crypto::secp256r1::PubKey >(arena);
}
template<> PROTOBUF_NOINLINE ::cosmos::crypto::secp256r1::PrivKey*
Arena::CreateMaybeMessage< ::cosmos::crypto::secp256r1::PrivKey >(Arena* arena) {
  return Arena::CreateMessageInternal< ::cosmos::crypto::secp256r1::PrivKey >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
