// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cosmos/group/module/v1/module.proto

#include "cosmos/group/module/v1/module.pb.h"

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
namespace group {
namespace module {
namespace v1 {
template <typename>
PROTOBUF_CONSTEXPR Module::Module(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.max_execution_period_)*/nullptr
  , /*decltype(_impl_.max_metadata_len_)*/ ::uint64_t{0u}
} {}
struct ModuleDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ModuleDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~ModuleDefaultTypeInternal() {}
  union {
    Module _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ModuleDefaultTypeInternal _Module_default_instance_;
}  // namespace v1
}  // namespace module
}  // namespace group
}  // namespace cosmos
static ::_pb::Metadata file_level_metadata_cosmos_2fgroup_2fmodule_2fv1_2fmodule_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_cosmos_2fgroup_2fmodule_2fv1_2fmodule_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_cosmos_2fgroup_2fmodule_2fv1_2fmodule_2eproto = nullptr;
const ::uint32_t TableStruct_cosmos_2fgroup_2fmodule_2fv1_2fmodule_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::cosmos::group::module::v1::Module, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::cosmos::group::module::v1::Module, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::cosmos::group::module::v1::Module, _impl_.max_execution_period_),
    PROTOBUF_FIELD_OFFSET(::cosmos::group::module::v1::Module, _impl_.max_metadata_len_),
    0,
    ~0u,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, 10, -1, sizeof(::cosmos::group::module::v1::Module)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::cosmos::group::module::v1::_Module_default_instance_._instance,
};
const char descriptor_table_protodef_cosmos_2fgroup_2fmodule_2fv1_2fmodule_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n#cosmos/group/module/v1/module.proto\022\026c"
    "osmos.group.module.v1\032 cosmos/app/v1alph"
    "a1/module.proto\032\024gogoproto/gogo.proto\032\036g"
    "oogle/protobuf/duration.proto\032\021amino/ami"
    "no.proto\"\274\001\n\006Module\022Z\n\024max_execution_per"
    "iod\030\001 \001(\0132\031.google.protobuf.DurationB\r\310\336"
    "\037\000\230\337\037\001\250\347\260*\001R\022maxExecutionPeriod\022(\n\020max_m"
    "etadata_len\030\002 \001(\004R\016maxMetadataLen:,\272\300\226\332\001"
    "&\n$github.com/cosmos/cosmos-sdk/x/groupB"
    "\244\001\n\032com.cosmos.group.module.v1B\013ModulePr"
    "otoP\001\242\002\003CGM\252\002\026Cosmos.Group.Module.V1\312\002\026C"
    "osmos\\Group\\Module\\V1\342\002\"Cosmos\\Group\\Mod"
    "ule\\V1\\GPBMetadata\352\002\031Cosmos::Group::Modu"
    "le::V1b\006proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_cosmos_2fgroup_2fmodule_2fv1_2fmodule_2eproto_deps[4] =
    {
        &::descriptor_table_amino_2famino_2eproto,
        &::descriptor_table_cosmos_2fapp_2fv1alpha1_2fmodule_2eproto,
        &::descriptor_table_gogoproto_2fgogo_2eproto,
        &::descriptor_table_google_2fprotobuf_2fduration_2eproto,
};
static ::absl::once_flag descriptor_table_cosmos_2fgroup_2fmodule_2fv1_2fmodule_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_cosmos_2fgroup_2fmodule_2fv1_2fmodule_2eproto = {
    false,
    false,
    534,
    descriptor_table_protodef_cosmos_2fgroup_2fmodule_2fv1_2fmodule_2eproto,
    "cosmos/group/module/v1/module.proto",
    &descriptor_table_cosmos_2fgroup_2fmodule_2fv1_2fmodule_2eproto_once,
    descriptor_table_cosmos_2fgroup_2fmodule_2fv1_2fmodule_2eproto_deps,
    4,
    1,
    schemas,
    file_default_instances,
    TableStruct_cosmos_2fgroup_2fmodule_2fv1_2fmodule_2eproto::offsets,
    file_level_metadata_cosmos_2fgroup_2fmodule_2fv1_2fmodule_2eproto,
    file_level_enum_descriptors_cosmos_2fgroup_2fmodule_2fv1_2fmodule_2eproto,
    file_level_service_descriptors_cosmos_2fgroup_2fmodule_2fv1_2fmodule_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_cosmos_2fgroup_2fmodule_2fv1_2fmodule_2eproto_getter() {
  return &descriptor_table_cosmos_2fgroup_2fmodule_2fv1_2fmodule_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_cosmos_2fgroup_2fmodule_2fv1_2fmodule_2eproto(&descriptor_table_cosmos_2fgroup_2fmodule_2fv1_2fmodule_2eproto);
namespace cosmos {
namespace group {
namespace module {
namespace v1 {
// ===================================================================

class Module::_Internal {
 public:
  using HasBits = decltype(std::declval<Module>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(Module, _impl_._has_bits_);
  static const ::PROTOBUF_NAMESPACE_ID::Duration& max_execution_period(const Module* msg);
  static void set_has_max_execution_period(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::PROTOBUF_NAMESPACE_ID::Duration&
Module::_Internal::max_execution_period(const Module* msg) {
  return *msg->_impl_.max_execution_period_;
}
void Module::clear_max_execution_period() {
  if (_impl_.max_execution_period_ != nullptr) _impl_.max_execution_period_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
Module::Module(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:cosmos.group.module.v1.Module)
}
Module::Module(const Module& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Module* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.max_execution_period_){nullptr}
    , decltype(_impl_.max_metadata_len_) {}
  };

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_impl_.max_execution_period_ = new ::PROTOBUF_NAMESPACE_ID::Duration(*from._impl_.max_execution_period_);
  }
  _this->_impl_.max_metadata_len_ = from._impl_.max_metadata_len_;
  // @@protoc_insertion_point(copy_constructor:cosmos.group.module.v1.Module)
}

inline void Module::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.max_execution_period_){nullptr}
    , decltype(_impl_.max_metadata_len_) { ::uint64_t{0u} }

  };
}

Module::~Module() {
  // @@protoc_insertion_point(destructor:cosmos.group.module.v1.Module)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Module::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.max_execution_period_;
}

void Module::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Module::Clear() {
// @@protoc_insertion_point(message_clear_start:cosmos.group.module.v1.Module)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    ABSL_DCHECK(_impl_.max_execution_period_ != nullptr);
    _impl_.max_execution_period_->Clear();
  }
  _impl_.max_metadata_len_ = ::uint64_t{0u};
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Module::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .google.protobuf.Duration max_execution_period = 1 [json_name = "maxExecutionPeriod", (.gogoproto.nullable) = false, (.gogoproto.stdduration) = true, (.amino.dont_omitempty) = true];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_max_execution_period(), ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // uint64 max_metadata_len = 2 [json_name = "maxMetadataLen"];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 16)) {
          _impl_.max_metadata_len_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::uint8_t* Module::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:cosmos.group.module.v1.Module)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // .google.protobuf.Duration max_execution_period = 1 [json_name = "maxExecutionPeriod", (.gogoproto.nullable) = false, (.gogoproto.stdduration) = true, (.amino.dont_omitempty) = true];
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::max_execution_period(this),
        _Internal::max_execution_period(this).GetCachedSize(), target, stream);
  }

  // uint64 max_metadata_len = 2 [json_name = "maxMetadataLen"];
  if (this->_internal_max_metadata_len() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        2, this->_internal_max_metadata_len(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cosmos.group.module.v1.Module)
  return target;
}

::size_t Module::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cosmos.group.module.v1.Module)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .google.protobuf.Duration max_execution_period = 1 [json_name = "maxExecutionPeriod", (.gogoproto.nullable) = false, (.gogoproto.stdduration) = true, (.amino.dont_omitempty) = true];
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.max_execution_period_);
  }

  // uint64 max_metadata_len = 2 [json_name = "maxMetadataLen"];
  if (this->_internal_max_metadata_len() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
        this->_internal_max_metadata_len());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Module::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Module::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Module::GetClassData() const { return &_class_data_; }


void Module::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Module*>(&to_msg);
  auto& from = static_cast<const Module&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:cosmos.group.module.v1.Module)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_internal_mutable_max_execution_period()->::PROTOBUF_NAMESPACE_ID::Duration::MergeFrom(
        from._internal_max_execution_period());
  }
  if (from._internal_max_metadata_len() != 0) {
    _this->_internal_set_max_metadata_len(from._internal_max_metadata_len());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Module::CopyFrom(const Module& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cosmos.group.module.v1.Module)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Module::IsInitialized() const {
  return true;
}

void Module::InternalSwap(Module* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Module, _impl_.max_metadata_len_)
      + sizeof(Module::_impl_.max_metadata_len_)
      - PROTOBUF_FIELD_OFFSET(Module, _impl_.max_execution_period_)>(
          reinterpret_cast<char*>(&_impl_.max_execution_period_),
          reinterpret_cast<char*>(&other->_impl_.max_execution_period_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Module::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_cosmos_2fgroup_2fmodule_2fv1_2fmodule_2eproto_getter, &descriptor_table_cosmos_2fgroup_2fmodule_2fv1_2fmodule_2eproto_once,
      file_level_metadata_cosmos_2fgroup_2fmodule_2fv1_2fmodule_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace module
}  // namespace group
}  // namespace cosmos
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::cosmos::group::module::v1::Module*
Arena::CreateMaybeMessage< ::cosmos::group::module::v1::Module >(Arena* arena) {
  return Arena::CreateMessageInternal< ::cosmos::group::module::v1::Module >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
