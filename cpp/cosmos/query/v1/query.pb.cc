// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cosmos/query/v1/query.proto

#include "cosmos/query/v1/query.pb.h"

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
namespace query {
namespace v1 {
}  // namespace v1
}  // namespace query
}  // namespace cosmos
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_cosmos_2fquery_2fv1_2fquery_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_cosmos_2fquery_2fv1_2fquery_2eproto = nullptr;
const ::uint32_t TableStruct_cosmos_2fquery_2fv1_2fquery_2eproto::offsets[1] = {};
static constexpr ::_pbi::MigrationSchema* schemas = nullptr;
static constexpr ::_pb::Message* const* file_default_instances = nullptr;
const char descriptor_table_protodef_cosmos_2fquery_2fv1_2fquery_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\033cosmos/query/v1/query.proto\022\017cosmos.qu"
    "ery.v1\032 google/protobuf/descriptor.proto"
    ":M\n\021module_query_safe\022\036.google.protobuf."
    "MethodOptions\030\361\214\246\005 \001(\010R\017moduleQuerySafeB"
    "\251\001\n\023com.cosmos.query.v1B\nQueryProtoP\001Z(g"
    "ithub.com/cosmos/cosmos-sdk/types/query\242"
    "\002\003CQX\252\002\017Cosmos.Query.V1\312\002\017Cosmos\\Query\\V"
    "1\342\002\033Cosmos\\Query\\V1\\GPBMetadata\352\002\021Cosmos"
    "::Query::V1b\006proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_cosmos_2fquery_2fv1_2fquery_2eproto_deps[1] =
    {
        &::descriptor_table_google_2fprotobuf_2fdescriptor_2eproto,
};
static ::absl::once_flag descriptor_table_cosmos_2fquery_2fv1_2fquery_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_cosmos_2fquery_2fv1_2fquery_2eproto = {
    false,
    false,
    339,
    descriptor_table_protodef_cosmos_2fquery_2fv1_2fquery_2eproto,
    "cosmos/query/v1/query.proto",
    &descriptor_table_cosmos_2fquery_2fv1_2fquery_2eproto_once,
    descriptor_table_cosmos_2fquery_2fv1_2fquery_2eproto_deps,
    1,
    0,
    schemas,
    file_default_instances,
    TableStruct_cosmos_2fquery_2fv1_2fquery_2eproto::offsets,
    nullptr,
    file_level_enum_descriptors_cosmos_2fquery_2fv1_2fquery_2eproto,
    file_level_service_descriptors_cosmos_2fquery_2fv1_2fquery_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_cosmos_2fquery_2fv1_2fquery_2eproto_getter() {
  return &descriptor_table_cosmos_2fquery_2fv1_2fquery_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_cosmos_2fquery_2fv1_2fquery_2eproto(&descriptor_table_cosmos_2fquery_2fv1_2fquery_2eproto);
namespace cosmos {
namespace query {
namespace v1 {
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::MethodOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false>
  module_query_safe(kModuleQuerySafeFieldNumber, false, nullptr);
// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace query
}  // namespace cosmos
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
