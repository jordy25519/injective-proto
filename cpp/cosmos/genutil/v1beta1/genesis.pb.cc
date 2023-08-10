// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cosmos/genutil/v1beta1/genesis.proto

#include "cosmos/genutil/v1beta1/genesis.pb.h"

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
namespace genutil {
namespace v1beta1 {
template <typename>
PROTOBUF_CONSTEXPR GenesisState::GenesisState(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.gen_txs_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct GenesisStateDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GenesisStateDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~GenesisStateDefaultTypeInternal() {}
  union {
    GenesisState _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GenesisStateDefaultTypeInternal _GenesisState_default_instance_;
}  // namespace v1beta1
}  // namespace genutil
}  // namespace cosmos
static ::_pb::Metadata file_level_metadata_cosmos_2fgenutil_2fv1beta1_2fgenesis_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_cosmos_2fgenutil_2fv1beta1_2fgenesis_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_cosmos_2fgenutil_2fv1beta1_2fgenesis_2eproto = nullptr;
const ::uint32_t TableStruct_cosmos_2fgenutil_2fv1beta1_2fgenesis_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::cosmos::genutil::v1beta1::GenesisState, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::cosmos::genutil::v1beta1::GenesisState, _impl_.gen_txs_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, -1, -1, sizeof(::cosmos::genutil::v1beta1::GenesisState)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::cosmos::genutil::v1beta1::_GenesisState_default_instance_._instance,
};
const char descriptor_table_protodef_cosmos_2fgenutil_2fv1beta1_2fgenesis_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n$cosmos/genutil/v1beta1/genesis.proto\022\026"
    "cosmos.genutil.v1beta1\032\024gogoproto/gogo.p"
    "roto\032\021amino/amino.proto\"_\n\014GenesisState\022"
    "O\n\007gen_txs\030\001 \003(\014B6\352\336\037\006gentxs\372\336\037\030encoding"
    "/json.RawMessage\242\347\260*\006gentxs\250\347\260*\001R\006genTxs"
    "B\322\001\n\032com.cosmos.genutil.v1beta1B\014Genesis"
    "ProtoP\001Z,github.com/cosmos/cosmos-sdk/x/"
    "genutil/types\242\002\003CGX\252\002\026Cosmos.Genutil.V1b"
    "eta1\312\002\026Cosmos\\Genutil\\V1beta1\342\002\"Cosmos\\G"
    "enutil\\V1beta1\\GPBMetadata\352\002\030Cosmos::Gen"
    "util::V1beta1b\006proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_cosmos_2fgenutil_2fv1beta1_2fgenesis_2eproto_deps[2] =
    {
        &::descriptor_table_amino_2famino_2eproto,
        &::descriptor_table_gogoproto_2fgogo_2eproto,
};
static ::absl::once_flag descriptor_table_cosmos_2fgenutil_2fv1beta1_2fgenesis_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_cosmos_2fgenutil_2fv1beta1_2fgenesis_2eproto = {
    false,
    false,
    421,
    descriptor_table_protodef_cosmos_2fgenutil_2fv1beta1_2fgenesis_2eproto,
    "cosmos/genutil/v1beta1/genesis.proto",
    &descriptor_table_cosmos_2fgenutil_2fv1beta1_2fgenesis_2eproto_once,
    descriptor_table_cosmos_2fgenutil_2fv1beta1_2fgenesis_2eproto_deps,
    2,
    1,
    schemas,
    file_default_instances,
    TableStruct_cosmos_2fgenutil_2fv1beta1_2fgenesis_2eproto::offsets,
    file_level_metadata_cosmos_2fgenutil_2fv1beta1_2fgenesis_2eproto,
    file_level_enum_descriptors_cosmos_2fgenutil_2fv1beta1_2fgenesis_2eproto,
    file_level_service_descriptors_cosmos_2fgenutil_2fv1beta1_2fgenesis_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_cosmos_2fgenutil_2fv1beta1_2fgenesis_2eproto_getter() {
  return &descriptor_table_cosmos_2fgenutil_2fv1beta1_2fgenesis_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_cosmos_2fgenutil_2fv1beta1_2fgenesis_2eproto(&descriptor_table_cosmos_2fgenutil_2fv1beta1_2fgenesis_2eproto);
namespace cosmos {
namespace genutil {
namespace v1beta1 {
// ===================================================================

class GenesisState::_Internal {
 public:
};

GenesisState::GenesisState(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:cosmos.genutil.v1beta1.GenesisState)
}
GenesisState::GenesisState(const GenesisState& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  GenesisState* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.gen_txs_){from._impl_.gen_txs_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:cosmos.genutil.v1beta1.GenesisState)
}

inline void GenesisState::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.gen_txs_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

GenesisState::~GenesisState() {
  // @@protoc_insertion_point(destructor:cosmos.genutil.v1beta1.GenesisState)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void GenesisState::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _internal_mutable_gen_txs()->~RepeatedPtrField();
}

void GenesisState::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void GenesisState::Clear() {
// @@protoc_insertion_point(message_clear_start:cosmos.genutil.v1beta1.GenesisState)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_mutable_gen_txs()->Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GenesisState::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated bytes gen_txs = 1 [json_name = "genTxs", (.gogoproto.jsontag) = "gentxs", (.gogoproto.casttype) = "encoding/json.RawMessage", (.amino.field_name) = "gentxs", (.amino.dont_omitempty) = true];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_gen_txs();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
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

::uint8_t* GenesisState::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:cosmos.genutil.v1beta1.GenesisState)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated bytes gen_txs = 1 [json_name = "genTxs", (.gogoproto.jsontag) = "gentxs", (.gogoproto.casttype) = "encoding/json.RawMessage", (.amino.field_name) = "gentxs", (.amino.dont_omitempty) = true];
  for (int i = 0, n = this->_internal_gen_txs_size(); i < n; ++i) {
    const auto& s = this->_internal_gen_txs(i);
    target = stream->WriteBytes(1, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cosmos.genutil.v1beta1.GenesisState)
  return target;
}

::size_t GenesisState::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cosmos.genutil.v1beta1.GenesisState)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated bytes gen_txs = 1 [json_name = "genTxs", (.gogoproto.jsontag) = "gentxs", (.gogoproto.casttype) = "encoding/json.RawMessage", (.amino.field_name) = "gentxs", (.amino.dont_omitempty) = true];
  total_size += 1 * ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_internal_gen_txs().size());
  for (int i = 0, n = _internal_gen_txs().size(); i < n; ++i) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        _internal_gen_txs().Get(i));
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GenesisState::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    GenesisState::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GenesisState::GetClassData() const { return &_class_data_; }


void GenesisState::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<GenesisState*>(&to_msg);
  auto& from = static_cast<const GenesisState&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:cosmos.genutil.v1beta1.GenesisState)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_gen_txs()->MergeFrom(from._internal_gen_txs());
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void GenesisState::CopyFrom(const GenesisState& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cosmos.genutil.v1beta1.GenesisState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GenesisState::IsInitialized() const {
  return true;
}

void GenesisState::InternalSwap(GenesisState* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _internal_mutable_gen_txs()->InternalSwap(
      other->_internal_mutable_gen_txs());
}

::PROTOBUF_NAMESPACE_ID::Metadata GenesisState::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_cosmos_2fgenutil_2fv1beta1_2fgenesis_2eproto_getter, &descriptor_table_cosmos_2fgenutil_2fv1beta1_2fgenesis_2eproto_once,
      file_level_metadata_cosmos_2fgenutil_2fv1beta1_2fgenesis_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace v1beta1
}  // namespace genutil
}  // namespace cosmos
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::cosmos::genutil::v1beta1::GenesisState*
Arena::CreateMaybeMessage< ::cosmos::genutil::v1beta1::GenesisState >(Arena* arena) {
  return Arena::CreateMessageInternal< ::cosmos::genutil::v1beta1::GenesisState >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
