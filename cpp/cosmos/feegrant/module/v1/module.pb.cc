// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cosmos/feegrant/module/v1/module.proto

#include "cosmos/feegrant/module/v1/module.pb.h"

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
namespace feegrant {
namespace module {
namespace v1 {
template <typename>
PROTOBUF_CONSTEXPR Module::Module(
    ::_pbi::ConstantInitialized) {}
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
}  // namespace feegrant
}  // namespace cosmos
static ::_pb::Metadata file_level_metadata_cosmos_2ffeegrant_2fmodule_2fv1_2fmodule_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_cosmos_2ffeegrant_2fmodule_2fv1_2fmodule_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_cosmos_2ffeegrant_2fmodule_2fv1_2fmodule_2eproto = nullptr;
const ::uint32_t TableStruct_cosmos_2ffeegrant_2fmodule_2fv1_2fmodule_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::cosmos::feegrant::module::v1::Module, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, -1, -1, sizeof(::cosmos::feegrant::module::v1::Module)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::cosmos::feegrant::module::v1::_Module_default_instance_._instance,
};
const char descriptor_table_protodef_cosmos_2ffeegrant_2fmodule_2fv1_2fmodule_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n&cosmos/feegrant/module/v1/module.proto"
    "\022\031cosmos.feegrant.module.v1\032 cosmos/app/"
    "v1alpha1/module.proto\"9\n\006Module:/\272\300\226\332\001)\n"
    "\'github.com/cosmos/cosmos-sdk/x/feegrant"
    "B\263\001\n\035com.cosmos.feegrant.module.v1B\013Modu"
    "leProtoP\001\242\002\003CFM\252\002\031Cosmos.Feegrant.Module"
    ".V1\312\002\031Cosmos\\Feegrant\\Module\\V1\342\002%Cosmos"
    "\\Feegrant\\Module\\V1\\GPBMetadata\352\002\034Cosmos"
    "::Feegrant::Module::V1b\006proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_cosmos_2ffeegrant_2fmodule_2fv1_2fmodule_2eproto_deps[1] =
    {
        &::descriptor_table_cosmos_2fapp_2fv1alpha1_2fmodule_2eproto,
};
static ::absl::once_flag descriptor_table_cosmos_2ffeegrant_2fmodule_2fv1_2fmodule_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_cosmos_2ffeegrant_2fmodule_2fv1_2fmodule_2eproto = {
    false,
    false,
    350,
    descriptor_table_protodef_cosmos_2ffeegrant_2fmodule_2fv1_2fmodule_2eproto,
    "cosmos/feegrant/module/v1/module.proto",
    &descriptor_table_cosmos_2ffeegrant_2fmodule_2fv1_2fmodule_2eproto_once,
    descriptor_table_cosmos_2ffeegrant_2fmodule_2fv1_2fmodule_2eproto_deps,
    1,
    1,
    schemas,
    file_default_instances,
    TableStruct_cosmos_2ffeegrant_2fmodule_2fv1_2fmodule_2eproto::offsets,
    file_level_metadata_cosmos_2ffeegrant_2fmodule_2fv1_2fmodule_2eproto,
    file_level_enum_descriptors_cosmos_2ffeegrant_2fmodule_2fv1_2fmodule_2eproto,
    file_level_service_descriptors_cosmos_2ffeegrant_2fmodule_2fv1_2fmodule_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_cosmos_2ffeegrant_2fmodule_2fv1_2fmodule_2eproto_getter() {
  return &descriptor_table_cosmos_2ffeegrant_2fmodule_2fv1_2fmodule_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_cosmos_2ffeegrant_2fmodule_2fv1_2fmodule_2eproto(&descriptor_table_cosmos_2ffeegrant_2fmodule_2fv1_2fmodule_2eproto);
namespace cosmos {
namespace feegrant {
namespace module {
namespace v1 {
// ===================================================================

class Module::_Internal {
 public:
};

Module::Module(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase(arena) {
  // @@protoc_insertion_point(arena_constructor:cosmos.feegrant.module.v1.Module)
}
Module::Module(const Module& from)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase() {
  Module* const _this = this; (void)_this;
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:cosmos.feegrant.module.v1.Module)
}





const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Module::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl,
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl,
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Module::GetClassData() const { return &_class_data_; }







::PROTOBUF_NAMESPACE_ID::Metadata Module::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_cosmos_2ffeegrant_2fmodule_2fv1_2fmodule_2eproto_getter, &descriptor_table_cosmos_2ffeegrant_2fmodule_2fv1_2fmodule_2eproto_once,
      file_level_metadata_cosmos_2ffeegrant_2fmodule_2fv1_2fmodule_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace module
}  // namespace feegrant
}  // namespace cosmos
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::cosmos::feegrant::module::v1::Module*
Arena::CreateMaybeMessage< ::cosmos::feegrant::module::v1::Module >(Arena* arena) {
  return Arena::CreateMessageInternal< ::cosmos::feegrant::module::v1::Module >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
