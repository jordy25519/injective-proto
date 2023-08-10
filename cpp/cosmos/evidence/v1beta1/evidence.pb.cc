// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cosmos/evidence/v1beta1/evidence.proto

#include "cosmos/evidence/v1beta1/evidence.pb.h"

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
namespace evidence {
namespace v1beta1 {
template <typename>
PROTOBUF_CONSTEXPR Equivocation::Equivocation(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.consensus_address_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.time_)*/nullptr
  , /*decltype(_impl_.height_)*/ ::int64_t{0}

  , /*decltype(_impl_.power_)*/ ::int64_t{0}
} {}
struct EquivocationDefaultTypeInternal {
  PROTOBUF_CONSTEXPR EquivocationDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~EquivocationDefaultTypeInternal() {}
  union {
    Equivocation _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 EquivocationDefaultTypeInternal _Equivocation_default_instance_;
}  // namespace v1beta1
}  // namespace evidence
}  // namespace cosmos
static ::_pb::Metadata file_level_metadata_cosmos_2fevidence_2fv1beta1_2fevidence_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_cosmos_2fevidence_2fv1beta1_2fevidence_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_cosmos_2fevidence_2fv1beta1_2fevidence_2eproto = nullptr;
const ::uint32_t TableStruct_cosmos_2fevidence_2fv1beta1_2fevidence_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::cosmos::evidence::v1beta1::Equivocation, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::cosmos::evidence::v1beta1::Equivocation, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::cosmos::evidence::v1beta1::Equivocation, _impl_.height_),
    PROTOBUF_FIELD_OFFSET(::cosmos::evidence::v1beta1::Equivocation, _impl_.time_),
    PROTOBUF_FIELD_OFFSET(::cosmos::evidence::v1beta1::Equivocation, _impl_.power_),
    PROTOBUF_FIELD_OFFSET(::cosmos::evidence::v1beta1::Equivocation, _impl_.consensus_address_),
    ~0u,
    0,
    ~0u,
    ~0u,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, 12, -1, sizeof(::cosmos::evidence::v1beta1::Equivocation)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::cosmos::evidence::v1beta1::_Equivocation_default_instance_._instance,
};
const char descriptor_table_protodef_cosmos_2fevidence_2fv1beta1_2fevidence_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n&cosmos/evidence/v1beta1/evidence.proto"
    "\022\027cosmos.evidence.v1beta1\032\021amino/amino.p"
    "roto\032\024gogoproto/gogo.proto\032\037google/proto"
    "buf/timestamp.proto\032\031cosmos_proto/cosmos"
    ".proto\"\354\001\n\014Equivocation\022\026\n\006height\030\001 \001(\003R"
    "\006height\022=\n\004time\030\002 \001(\0132\032.google.protobuf."
    "TimestampB\r\310\336\037\000\220\337\037\001\250\347\260*\001R\004time\022\024\n\005power\030"
    "\003 \001(\003R\005power\022E\n\021consensus_address\030\004 \001(\tB"
    "\030\322\264-\024cosmos.AddressStringR\020consensusAddr"
    "ess:(\210\240\037\000\230\240\037\000\350\240\037\000\212\347\260*\027cosmos-sdk/Equivoc"
    "ationB\335\001\n\033com.cosmos.evidence.v1beta1B\rE"
    "videnceProtoP\001Z-github.com/cosmos/cosmos"
    "-sdk/x/evidence/types\242\002\003CEX\252\002\027Cosmos.Evi"
    "dence.V1beta1\312\002\027Cosmos\\Evidence\\V1beta1\342"
    "\002#Cosmos\\Evidence\\V1beta1\\GPBMetadata\352\002\031"
    "Cosmos::Evidence::V1beta1\250\342\036\001b\006proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_cosmos_2fevidence_2fv1beta1_2fevidence_2eproto_deps[4] =
    {
        &::descriptor_table_amino_2famino_2eproto,
        &::descriptor_table_cosmos_5fproto_2fcosmos_2eproto,
        &::descriptor_table_gogoproto_2fgogo_2eproto,
        &::descriptor_table_google_2fprotobuf_2ftimestamp_2eproto,
};
static ::absl::once_flag descriptor_table_cosmos_2fevidence_2fv1beta1_2fevidence_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_cosmos_2fevidence_2fv1beta1_2fevidence_2eproto = {
    false,
    false,
    637,
    descriptor_table_protodef_cosmos_2fevidence_2fv1beta1_2fevidence_2eproto,
    "cosmos/evidence/v1beta1/evidence.proto",
    &descriptor_table_cosmos_2fevidence_2fv1beta1_2fevidence_2eproto_once,
    descriptor_table_cosmos_2fevidence_2fv1beta1_2fevidence_2eproto_deps,
    4,
    1,
    schemas,
    file_default_instances,
    TableStruct_cosmos_2fevidence_2fv1beta1_2fevidence_2eproto::offsets,
    file_level_metadata_cosmos_2fevidence_2fv1beta1_2fevidence_2eproto,
    file_level_enum_descriptors_cosmos_2fevidence_2fv1beta1_2fevidence_2eproto,
    file_level_service_descriptors_cosmos_2fevidence_2fv1beta1_2fevidence_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_cosmos_2fevidence_2fv1beta1_2fevidence_2eproto_getter() {
  return &descriptor_table_cosmos_2fevidence_2fv1beta1_2fevidence_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_cosmos_2fevidence_2fv1beta1_2fevidence_2eproto(&descriptor_table_cosmos_2fevidence_2fv1beta1_2fevidence_2eproto);
namespace cosmos {
namespace evidence {
namespace v1beta1 {
// ===================================================================

class Equivocation::_Internal {
 public:
  using HasBits = decltype(std::declval<Equivocation>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(Equivocation, _impl_._has_bits_);
  static const ::PROTOBUF_NAMESPACE_ID::Timestamp& time(const Equivocation* msg);
  static void set_has_time(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::PROTOBUF_NAMESPACE_ID::Timestamp&
Equivocation::_Internal::time(const Equivocation* msg) {
  return *msg->_impl_.time_;
}
void Equivocation::clear_time() {
  if (_impl_.time_ != nullptr) _impl_.time_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
Equivocation::Equivocation(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:cosmos.evidence.v1beta1.Equivocation)
}
Equivocation::Equivocation(const Equivocation& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Equivocation* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.consensus_address_) {}

    , decltype(_impl_.time_){nullptr}
    , decltype(_impl_.height_) {}

    , decltype(_impl_.power_) {}
  };

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.consensus_address_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.consensus_address_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_consensus_address().empty()) {
    _this->_impl_.consensus_address_.Set(from._internal_consensus_address(), _this->GetArenaForAllocation());
  }
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_impl_.time_ = new ::PROTOBUF_NAMESPACE_ID::Timestamp(*from._impl_.time_);
  }
  ::memcpy(&_impl_.height_, &from._impl_.height_,
    static_cast<::size_t>(reinterpret_cast<char*>(&_impl_.power_) -
    reinterpret_cast<char*>(&_impl_.height_)) + sizeof(_impl_.power_));
  // @@protoc_insertion_point(copy_constructor:cosmos.evidence.v1beta1.Equivocation)
}

inline void Equivocation::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.consensus_address_) {}

    , decltype(_impl_.time_){nullptr}
    , decltype(_impl_.height_) { ::int64_t{0} }

    , decltype(_impl_.power_) { ::int64_t{0} }

  };
  _impl_.consensus_address_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.consensus_address_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Equivocation::~Equivocation() {
  // @@protoc_insertion_point(destructor:cosmos.evidence.v1beta1.Equivocation)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Equivocation::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.consensus_address_.Destroy();
  if (this != internal_default_instance()) delete _impl_.time_;
}

void Equivocation::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Equivocation::Clear() {
// @@protoc_insertion_point(message_clear_start:cosmos.evidence.v1beta1.Equivocation)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.consensus_address_.ClearToEmpty();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    ABSL_DCHECK(_impl_.time_ != nullptr);
    _impl_.time_->Clear();
  }
  ::memset(&_impl_.height_, 0, static_cast<::size_t>(
      reinterpret_cast<char*>(&_impl_.power_) -
      reinterpret_cast<char*>(&_impl_.height_)) + sizeof(_impl_.power_));
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Equivocation::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int64 height = 1 [json_name = "height"];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          _impl_.height_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // .google.protobuf.Timestamp time = 2 [json_name = "time", (.gogoproto.nullable) = false, (.gogoproto.stdtime) = true, (.amino.dont_omitempty) = true];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_time(), ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // int64 power = 3 [json_name = "power"];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 24)) {
          _impl_.power_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // string consensus_address = 4 [json_name = "consensusAddress", (.cosmos_proto.scalar) = "cosmos.AddressString"];
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_consensus_address();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "cosmos.evidence.v1beta1.Equivocation.consensus_address"));
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
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::uint8_t* Equivocation::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:cosmos.evidence.v1beta1.Equivocation)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 height = 1 [json_name = "height"];
  if (this->_internal_height() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(
        1, this->_internal_height(), target);
  }

  cached_has_bits = _impl_._has_bits_[0];
  // .google.protobuf.Timestamp time = 2 [json_name = "time", (.gogoproto.nullable) = false, (.gogoproto.stdtime) = true, (.amino.dont_omitempty) = true];
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::time(this),
        _Internal::time(this).GetCachedSize(), target, stream);
  }

  // int64 power = 3 [json_name = "power"];
  if (this->_internal_power() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(
        3, this->_internal_power(), target);
  }

  // string consensus_address = 4 [json_name = "consensusAddress", (.cosmos_proto.scalar) = "cosmos.AddressString"];
  if (!this->_internal_consensus_address().empty()) {
    const std::string& _s = this->_internal_consensus_address();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "cosmos.evidence.v1beta1.Equivocation.consensus_address");
    target = stream->WriteStringMaybeAliased(4, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cosmos.evidence.v1beta1.Equivocation)
  return target;
}

::size_t Equivocation::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cosmos.evidence.v1beta1.Equivocation)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string consensus_address = 4 [json_name = "consensusAddress", (.cosmos_proto.scalar) = "cosmos.AddressString"];
  if (!this->_internal_consensus_address().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_consensus_address());
  }

  // .google.protobuf.Timestamp time = 2 [json_name = "time", (.gogoproto.nullable) = false, (.gogoproto.stdtime) = true, (.amino.dont_omitempty) = true];
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.time_);
  }

  // int64 height = 1 [json_name = "height"];
  if (this->_internal_height() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(
        this->_internal_height());
  }

  // int64 power = 3 [json_name = "power"];
  if (this->_internal_power() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(
        this->_internal_power());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Equivocation::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Equivocation::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Equivocation::GetClassData() const { return &_class_data_; }


void Equivocation::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Equivocation*>(&to_msg);
  auto& from = static_cast<const Equivocation&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:cosmos.evidence.v1beta1.Equivocation)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_consensus_address().empty()) {
    _this->_internal_set_consensus_address(from._internal_consensus_address());
  }
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_internal_mutable_time()->::PROTOBUF_NAMESPACE_ID::Timestamp::MergeFrom(
        from._internal_time());
  }
  if (from._internal_height() != 0) {
    _this->_internal_set_height(from._internal_height());
  }
  if (from._internal_power() != 0) {
    _this->_internal_set_power(from._internal_power());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Equivocation::CopyFrom(const Equivocation& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cosmos.evidence.v1beta1.Equivocation)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Equivocation::IsInitialized() const {
  return true;
}

void Equivocation::InternalSwap(Equivocation* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.consensus_address_, lhs_arena,
                                       &other->_impl_.consensus_address_, rhs_arena);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Equivocation, _impl_.power_)
      + sizeof(Equivocation::_impl_.power_)
      - PROTOBUF_FIELD_OFFSET(Equivocation, _impl_.time_)>(
          reinterpret_cast<char*>(&_impl_.time_),
          reinterpret_cast<char*>(&other->_impl_.time_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Equivocation::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_cosmos_2fevidence_2fv1beta1_2fevidence_2eproto_getter, &descriptor_table_cosmos_2fevidence_2fv1beta1_2fevidence_2eproto_once,
      file_level_metadata_cosmos_2fevidence_2fv1beta1_2fevidence_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace v1beta1
}  // namespace evidence
}  // namespace cosmos
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::cosmos::evidence::v1beta1::Equivocation*
Arena::CreateMaybeMessage< ::cosmos::evidence::v1beta1::Equivocation >(Arena* arena) {
  return Arena::CreateMessageInternal< ::cosmos::evidence::v1beta1::Equivocation >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
