// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: injective/insurance/v1beta1/genesis.proto

#include "injective/insurance/v1beta1/genesis.pb.h"

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
namespace injective {
namespace insurance {
namespace v1beta1 {
template <typename>
PROTOBUF_CONSTEXPR GenesisState::GenesisState(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.insurance_funds_)*/{}
  , /*decltype(_impl_.redemption_schedule_)*/{}
  , /*decltype(_impl_.params_)*/nullptr
  , /*decltype(_impl_.next_share_denom_id_)*/ ::uint64_t{0u}

  , /*decltype(_impl_.next_redemption_schedule_id_)*/ ::uint64_t{0u}
} {}
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
}  // namespace insurance
}  // namespace injective
static ::_pb::Metadata file_level_metadata_injective_2finsurance_2fv1beta1_2fgenesis_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_injective_2finsurance_2fv1beta1_2fgenesis_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_injective_2finsurance_2fv1beta1_2fgenesis_2eproto = nullptr;
const ::uint32_t TableStruct_injective_2finsurance_2fv1beta1_2fgenesis_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::injective::insurance::v1beta1::GenesisState, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::injective::insurance::v1beta1::GenesisState, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::injective::insurance::v1beta1::GenesisState, _impl_.params_),
    PROTOBUF_FIELD_OFFSET(::injective::insurance::v1beta1::GenesisState, _impl_.insurance_funds_),
    PROTOBUF_FIELD_OFFSET(::injective::insurance::v1beta1::GenesisState, _impl_.redemption_schedule_),
    PROTOBUF_FIELD_OFFSET(::injective::insurance::v1beta1::GenesisState, _impl_.next_share_denom_id_),
    PROTOBUF_FIELD_OFFSET(::injective::insurance::v1beta1::GenesisState, _impl_.next_redemption_schedule_id_),
    0,
    ~0u,
    ~0u,
    ~0u,
    ~0u,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, 13, -1, sizeof(::injective::insurance::v1beta1::GenesisState)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::injective::insurance::v1beta1::_GenesisState_default_instance_._instance,
};
const char descriptor_table_protodef_injective_2finsurance_2fv1beta1_2fgenesis_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n)injective/insurance/v1beta1/genesis.pr"
    "oto\022\033injective.insurance.v1beta1\032+inject"
    "ive/insurance/v1beta1/insurance.proto\032\024g"
    "ogoproto/gogo.proto\"\202\003\n\014GenesisState\022A\n\006"
    "params\030\001 \001(\0132#.injective.insurance.v1bet"
    "a1.ParamsB\004\310\336\037\000R\006params\022Y\n\017insurance_fun"
    "ds\030\002 \003(\0132*.injective.insurance.v1beta1.I"
    "nsuranceFundB\004\310\336\037\000R\016insuranceFunds\022f\n\023re"
    "demption_schedule\030\003 \003(\0132/.injective.insu"
    "rance.v1beta1.RedemptionScheduleB\004\310\336\037\000R\022"
    "redemptionSchedule\022-\n\023next_share_denom_i"
    "d\030\004 \001(\004R\020nextShareDenomId\022=\n\033next_redemp"
    "tion_schedule_id\030\005 \001(\004R\030nextRedemptionSc"
    "heduleIdB\216\002\n\037com.injective.insurance.v1b"
    "eta1B\014GenesisProtoP\001ZOgithub.com/Injecti"
    "veLabs/injective-core/injective-chain/mo"
    "dules/insurance/types\242\002\003IIX\252\002\033Injective."
    "Insurance.V1beta1\312\002\033Injective\\Insurance\\"
    "V1beta1\342\002\'Injective\\Insurance\\V1beta1\\GP"
    "BMetadata\352\002\035Injective::Insurance::V1beta"
    "1b\006proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_injective_2finsurance_2fv1beta1_2fgenesis_2eproto_deps[2] =
    {
        &::descriptor_table_gogoproto_2fgogo_2eproto,
        &::descriptor_table_injective_2finsurance_2fv1beta1_2finsurance_2eproto,
};
static ::absl::once_flag descriptor_table_injective_2finsurance_2fv1beta1_2fgenesis_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_injective_2finsurance_2fv1beta1_2fgenesis_2eproto = {
    false,
    false,
    809,
    descriptor_table_protodef_injective_2finsurance_2fv1beta1_2fgenesis_2eproto,
    "injective/insurance/v1beta1/genesis.proto",
    &descriptor_table_injective_2finsurance_2fv1beta1_2fgenesis_2eproto_once,
    descriptor_table_injective_2finsurance_2fv1beta1_2fgenesis_2eproto_deps,
    2,
    1,
    schemas,
    file_default_instances,
    TableStruct_injective_2finsurance_2fv1beta1_2fgenesis_2eproto::offsets,
    file_level_metadata_injective_2finsurance_2fv1beta1_2fgenesis_2eproto,
    file_level_enum_descriptors_injective_2finsurance_2fv1beta1_2fgenesis_2eproto,
    file_level_service_descriptors_injective_2finsurance_2fv1beta1_2fgenesis_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_injective_2finsurance_2fv1beta1_2fgenesis_2eproto_getter() {
  return &descriptor_table_injective_2finsurance_2fv1beta1_2fgenesis_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_injective_2finsurance_2fv1beta1_2fgenesis_2eproto(&descriptor_table_injective_2finsurance_2fv1beta1_2fgenesis_2eproto);
namespace injective {
namespace insurance {
namespace v1beta1 {
// ===================================================================

class GenesisState::_Internal {
 public:
  using HasBits = decltype(std::declval<GenesisState>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(GenesisState, _impl_._has_bits_);
  static const ::injective::insurance::v1beta1::Params& params(const GenesisState* msg);
  static void set_has_params(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::injective::insurance::v1beta1::Params&
GenesisState::_Internal::params(const GenesisState* msg) {
  return *msg->_impl_.params_;
}
void GenesisState::clear_params() {
  if (_impl_.params_ != nullptr) _impl_.params_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
void GenesisState::clear_insurance_funds() {
  _internal_mutable_insurance_funds()->Clear();
}
void GenesisState::clear_redemption_schedule() {
  _internal_mutable_redemption_schedule()->Clear();
}
GenesisState::GenesisState(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:injective.insurance.v1beta1.GenesisState)
}
GenesisState::GenesisState(const GenesisState& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  GenesisState* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.insurance_funds_){from._impl_.insurance_funds_}
    , decltype(_impl_.redemption_schedule_){from._impl_.redemption_schedule_}
    , decltype(_impl_.params_){nullptr}
    , decltype(_impl_.next_share_denom_id_) {}

    , decltype(_impl_.next_redemption_schedule_id_) {}
  };

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_impl_.params_ = new ::injective::insurance::v1beta1::Params(*from._impl_.params_);
  }
  ::memcpy(&_impl_.next_share_denom_id_, &from._impl_.next_share_denom_id_,
    static_cast<::size_t>(reinterpret_cast<char*>(&_impl_.next_redemption_schedule_id_) -
    reinterpret_cast<char*>(&_impl_.next_share_denom_id_)) + sizeof(_impl_.next_redemption_schedule_id_));
  // @@protoc_insertion_point(copy_constructor:injective.insurance.v1beta1.GenesisState)
}

inline void GenesisState::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.insurance_funds_){arena}
    , decltype(_impl_.redemption_schedule_){arena}
    , decltype(_impl_.params_){nullptr}
    , decltype(_impl_.next_share_denom_id_) { ::uint64_t{0u} }

    , decltype(_impl_.next_redemption_schedule_id_) { ::uint64_t{0u} }

  };
}

GenesisState::~GenesisState() {
  // @@protoc_insertion_point(destructor:injective.insurance.v1beta1.GenesisState)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void GenesisState::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _internal_mutable_insurance_funds()->~RepeatedPtrField();
  _internal_mutable_redemption_schedule()->~RepeatedPtrField();
  if (this != internal_default_instance()) delete _impl_.params_;
}

void GenesisState::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void GenesisState::Clear() {
// @@protoc_insertion_point(message_clear_start:injective.insurance.v1beta1.GenesisState)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_mutable_insurance_funds()->Clear();
  _internal_mutable_redemption_schedule()->Clear();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    ABSL_DCHECK(_impl_.params_ != nullptr);
    _impl_.params_->Clear();
  }
  ::memset(&_impl_.next_share_denom_id_, 0, static_cast<::size_t>(
      reinterpret_cast<char*>(&_impl_.next_redemption_schedule_id_) -
      reinterpret_cast<char*>(&_impl_.next_share_denom_id_)) + sizeof(_impl_.next_redemption_schedule_id_));
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GenesisState::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .injective.insurance.v1beta1.Params params = 1 [json_name = "params", (.gogoproto.nullable) = false];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_params(), ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // repeated .injective.insurance.v1beta1.InsuranceFund insurance_funds = 2 [json_name = "insuranceFunds", (.gogoproto.nullable) = false];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_insurance_funds(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else {
          goto handle_unusual;
        }
        continue;
      // repeated .injective.insurance.v1beta1.RedemptionSchedule redemption_schedule = 3 [json_name = "redemptionSchedule", (.gogoproto.nullable) = false];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_redemption_schedule(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else {
          goto handle_unusual;
        }
        continue;
      // uint64 next_share_denom_id = 4 [json_name = "nextShareDenomId"];
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 32)) {
          _impl_.next_share_denom_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // uint64 next_redemption_schedule_id = 5 [json_name = "nextRedemptionScheduleId"];
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 40)) {
          _impl_.next_redemption_schedule_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::uint8_t* GenesisState::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:injective.insurance.v1beta1.GenesisState)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // .injective.insurance.v1beta1.Params params = 1 [json_name = "params", (.gogoproto.nullable) = false];
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::params(this),
        _Internal::params(this).GetCachedSize(), target, stream);
  }

  // repeated .injective.insurance.v1beta1.InsuranceFund insurance_funds = 2 [json_name = "insuranceFunds", (.gogoproto.nullable) = false];
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_insurance_funds_size()); i < n; i++) {
    const auto& repfield = this->_internal_insurance_funds(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(2, repfield, repfield.GetCachedSize(), target, stream);
  }

  // repeated .injective.insurance.v1beta1.RedemptionSchedule redemption_schedule = 3 [json_name = "redemptionSchedule", (.gogoproto.nullable) = false];
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_redemption_schedule_size()); i < n; i++) {
    const auto& repfield = this->_internal_redemption_schedule(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(3, repfield, repfield.GetCachedSize(), target, stream);
  }

  // uint64 next_share_denom_id = 4 [json_name = "nextShareDenomId"];
  if (this->_internal_next_share_denom_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        4, this->_internal_next_share_denom_id(), target);
  }

  // uint64 next_redemption_schedule_id = 5 [json_name = "nextRedemptionScheduleId"];
  if (this->_internal_next_redemption_schedule_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        5, this->_internal_next_redemption_schedule_id(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:injective.insurance.v1beta1.GenesisState)
  return target;
}

::size_t GenesisState::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:injective.insurance.v1beta1.GenesisState)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .injective.insurance.v1beta1.InsuranceFund insurance_funds = 2 [json_name = "insuranceFunds", (.gogoproto.nullable) = false];
  total_size += 1UL * this->_internal_insurance_funds_size();
  for (const auto& msg : this->_internal_insurance_funds()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .injective.insurance.v1beta1.RedemptionSchedule redemption_schedule = 3 [json_name = "redemptionSchedule", (.gogoproto.nullable) = false];
  total_size += 1UL * this->_internal_redemption_schedule_size();
  for (const auto& msg : this->_internal_redemption_schedule()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // .injective.insurance.v1beta1.Params params = 1 [json_name = "params", (.gogoproto.nullable) = false];
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.params_);
  }

  // uint64 next_share_denom_id = 4 [json_name = "nextShareDenomId"];
  if (this->_internal_next_share_denom_id() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
        this->_internal_next_share_denom_id());
  }

  // uint64 next_redemption_schedule_id = 5 [json_name = "nextRedemptionScheduleId"];
  if (this->_internal_next_redemption_schedule_id() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
        this->_internal_next_redemption_schedule_id());
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
  // @@protoc_insertion_point(class_specific_merge_from_start:injective.insurance.v1beta1.GenesisState)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_insurance_funds()->MergeFrom(from._internal_insurance_funds());
  _this->_internal_mutable_redemption_schedule()->MergeFrom(from._internal_redemption_schedule());
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_internal_mutable_params()->::injective::insurance::v1beta1::Params::MergeFrom(
        from._internal_params());
  }
  if (from._internal_next_share_denom_id() != 0) {
    _this->_internal_set_next_share_denom_id(from._internal_next_share_denom_id());
  }
  if (from._internal_next_redemption_schedule_id() != 0) {
    _this->_internal_set_next_redemption_schedule_id(from._internal_next_redemption_schedule_id());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void GenesisState::CopyFrom(const GenesisState& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:injective.insurance.v1beta1.GenesisState)
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
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _internal_mutable_insurance_funds()->InternalSwap(other->_internal_mutable_insurance_funds());
  _internal_mutable_redemption_schedule()->InternalSwap(other->_internal_mutable_redemption_schedule());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(GenesisState, _impl_.next_redemption_schedule_id_)
      + sizeof(GenesisState::_impl_.next_redemption_schedule_id_)
      - PROTOBUF_FIELD_OFFSET(GenesisState, _impl_.params_)>(
          reinterpret_cast<char*>(&_impl_.params_),
          reinterpret_cast<char*>(&other->_impl_.params_));
}

::PROTOBUF_NAMESPACE_ID::Metadata GenesisState::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_injective_2finsurance_2fv1beta1_2fgenesis_2eproto_getter, &descriptor_table_injective_2finsurance_2fv1beta1_2fgenesis_2eproto_once,
      file_level_metadata_injective_2finsurance_2fv1beta1_2fgenesis_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace v1beta1
}  // namespace insurance
}  // namespace injective
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::injective::insurance::v1beta1::GenesisState*
Arena::CreateMaybeMessage< ::injective::insurance::v1beta1::GenesisState >(Arena* arena) {
  return Arena::CreateMessageInternal< ::injective::insurance::v1beta1::GenesisState >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
