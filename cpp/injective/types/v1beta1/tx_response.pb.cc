// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: injective/types/v1beta1/tx_response.proto

#include "injective/types/v1beta1/tx_response.pb.h"

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
namespace types {
namespace v1beta1 {
template <typename>
PROTOBUF_CONSTEXPR TxResponseGenericMessage::TxResponseGenericMessage(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.header_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.data_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_._cached_size_)*/{}} {}
struct TxResponseGenericMessageDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TxResponseGenericMessageDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~TxResponseGenericMessageDefaultTypeInternal() {}
  union {
    TxResponseGenericMessage _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TxResponseGenericMessageDefaultTypeInternal _TxResponseGenericMessage_default_instance_;
template <typename>
PROTOBUF_CONSTEXPR TxResponseData::TxResponseData(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.messages_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct TxResponseDataDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TxResponseDataDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~TxResponseDataDefaultTypeInternal() {}
  union {
    TxResponseData _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TxResponseDataDefaultTypeInternal _TxResponseData_default_instance_;
}  // namespace v1beta1
}  // namespace types
}  // namespace injective
static ::_pb::Metadata file_level_metadata_injective_2ftypes_2fv1beta1_2ftx_5fresponse_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_injective_2ftypes_2fv1beta1_2ftx_5fresponse_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_injective_2ftypes_2fv1beta1_2ftx_5fresponse_2eproto = nullptr;
const ::uint32_t TableStruct_injective_2ftypes_2fv1beta1_2ftx_5fresponse_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::injective::types::v1beta1::TxResponseGenericMessage, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::injective::types::v1beta1::TxResponseGenericMessage, _impl_.header_),
    PROTOBUF_FIELD_OFFSET(::injective::types::v1beta1::TxResponseGenericMessage, _impl_.data_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::injective::types::v1beta1::TxResponseData, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::injective::types::v1beta1::TxResponseData, _impl_.messages_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, -1, -1, sizeof(::injective::types::v1beta1::TxResponseGenericMessage)},
        { 10, -1, -1, sizeof(::injective::types::v1beta1::TxResponseData)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::injective::types::v1beta1::_TxResponseGenericMessage_default_instance_._instance,
    &::injective::types::v1beta1::_TxResponseData_default_instance_._instance,
};
const char descriptor_table_protodef_injective_2ftypes_2fv1beta1_2ftx_5fresponse_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n)injective/types/v1beta1/tx_response.pr"
    "oto\022\027injective.types.v1beta1\"F\n\030TxRespon"
    "seGenericMessage\022\026\n\006header\030\001 \001(\tR\006header"
    "\022\022\n\004data\030\002 \001(\014R\004data\"_\n\016TxResponseData\022M"
    "\n\010messages\030\001 \003(\01321.injective.types.v1bet"
    "a1.TxResponseGenericMessageR\010messagesB\353\001"
    "\n\033com.injective.types.v1beta1B\017TxRespons"
    "eProtoP\001Z=github.com/InjectiveLabs/injec"
    "tive-core/injective-chain/types\242\002\003ITX\252\002\027"
    "Injective.Types.V1beta1\312\002\027Injective\\Type"
    "s\\V1beta1\342\002#Injective\\Types\\V1beta1\\GPBM"
    "etadata\352\002\031Injective::Types::V1beta1b\006pro"
    "to3"
};
static ::absl::once_flag descriptor_table_injective_2ftypes_2fv1beta1_2ftx_5fresponse_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_injective_2ftypes_2fv1beta1_2ftx_5fresponse_2eproto = {
    false,
    false,
    483,
    descriptor_table_protodef_injective_2ftypes_2fv1beta1_2ftx_5fresponse_2eproto,
    "injective/types/v1beta1/tx_response.proto",
    &descriptor_table_injective_2ftypes_2fv1beta1_2ftx_5fresponse_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_injective_2ftypes_2fv1beta1_2ftx_5fresponse_2eproto::offsets,
    file_level_metadata_injective_2ftypes_2fv1beta1_2ftx_5fresponse_2eproto,
    file_level_enum_descriptors_injective_2ftypes_2fv1beta1_2ftx_5fresponse_2eproto,
    file_level_service_descriptors_injective_2ftypes_2fv1beta1_2ftx_5fresponse_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_injective_2ftypes_2fv1beta1_2ftx_5fresponse_2eproto_getter() {
  return &descriptor_table_injective_2ftypes_2fv1beta1_2ftx_5fresponse_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_injective_2ftypes_2fv1beta1_2ftx_5fresponse_2eproto(&descriptor_table_injective_2ftypes_2fv1beta1_2ftx_5fresponse_2eproto);
namespace injective {
namespace types {
namespace v1beta1 {
// ===================================================================

class TxResponseGenericMessage::_Internal {
 public:
};

TxResponseGenericMessage::TxResponseGenericMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:injective.types.v1beta1.TxResponseGenericMessage)
}
TxResponseGenericMessage::TxResponseGenericMessage(const TxResponseGenericMessage& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  TxResponseGenericMessage* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.header_) {}

    , decltype(_impl_.data_) {}

    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.header_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.header_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_header().empty()) {
    _this->_impl_.header_.Set(from._internal_header(), _this->GetArenaForAllocation());
  }
  _impl_.data_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.data_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_data().empty()) {
    _this->_impl_.data_.Set(from._internal_data(), _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:injective.types.v1beta1.TxResponseGenericMessage)
}

inline void TxResponseGenericMessage::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.header_) {}

    , decltype(_impl_.data_) {}

    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.header_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.header_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.data_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.data_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

TxResponseGenericMessage::~TxResponseGenericMessage() {
  // @@protoc_insertion_point(destructor:injective.types.v1beta1.TxResponseGenericMessage)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void TxResponseGenericMessage::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.header_.Destroy();
  _impl_.data_.Destroy();
}

void TxResponseGenericMessage::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void TxResponseGenericMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:injective.types.v1beta1.TxResponseGenericMessage)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.header_.ClearToEmpty();
  _impl_.data_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* TxResponseGenericMessage::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string header = 1 [json_name = "header"];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_header();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "injective.types.v1beta1.TxResponseGenericMessage.header"));
        } else {
          goto handle_unusual;
        }
        continue;
      // bytes data = 2 [json_name = "data"];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_data();
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

::uint8_t* TxResponseGenericMessage::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:injective.types.v1beta1.TxResponseGenericMessage)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string header = 1 [json_name = "header"];
  if (!this->_internal_header().empty()) {
    const std::string& _s = this->_internal_header();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "injective.types.v1beta1.TxResponseGenericMessage.header");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  // bytes data = 2 [json_name = "data"];
  if (!this->_internal_data().empty()) {
    const std::string& _s = this->_internal_data();
    target = stream->WriteBytesMaybeAliased(2, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:injective.types.v1beta1.TxResponseGenericMessage)
  return target;
}

::size_t TxResponseGenericMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:injective.types.v1beta1.TxResponseGenericMessage)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string header = 1 [json_name = "header"];
  if (!this->_internal_header().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_header());
  }

  // bytes data = 2 [json_name = "data"];
  if (!this->_internal_data().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
                                    this->_internal_data());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData TxResponseGenericMessage::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    TxResponseGenericMessage::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*TxResponseGenericMessage::GetClassData() const { return &_class_data_; }


void TxResponseGenericMessage::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<TxResponseGenericMessage*>(&to_msg);
  auto& from = static_cast<const TxResponseGenericMessage&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:injective.types.v1beta1.TxResponseGenericMessage)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_header().empty()) {
    _this->_internal_set_header(from._internal_header());
  }
  if (!from._internal_data().empty()) {
    _this->_internal_set_data(from._internal_data());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void TxResponseGenericMessage::CopyFrom(const TxResponseGenericMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:injective.types.v1beta1.TxResponseGenericMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TxResponseGenericMessage::IsInitialized() const {
  return true;
}

void TxResponseGenericMessage::InternalSwap(TxResponseGenericMessage* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.header_, lhs_arena,
                                       &other->_impl_.header_, rhs_arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.data_, lhs_arena,
                                       &other->_impl_.data_, rhs_arena);
}

::PROTOBUF_NAMESPACE_ID::Metadata TxResponseGenericMessage::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_injective_2ftypes_2fv1beta1_2ftx_5fresponse_2eproto_getter, &descriptor_table_injective_2ftypes_2fv1beta1_2ftx_5fresponse_2eproto_once,
      file_level_metadata_injective_2ftypes_2fv1beta1_2ftx_5fresponse_2eproto[0]);
}
// ===================================================================

class TxResponseData::_Internal {
 public:
};

TxResponseData::TxResponseData(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:injective.types.v1beta1.TxResponseData)
}
TxResponseData::TxResponseData(const TxResponseData& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  TxResponseData* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.messages_){from._impl_.messages_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:injective.types.v1beta1.TxResponseData)
}

inline void TxResponseData::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.messages_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

TxResponseData::~TxResponseData() {
  // @@protoc_insertion_point(destructor:injective.types.v1beta1.TxResponseData)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void TxResponseData::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _internal_mutable_messages()->~RepeatedPtrField();
}

void TxResponseData::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void TxResponseData::Clear() {
// @@protoc_insertion_point(message_clear_start:injective.types.v1beta1.TxResponseData)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_mutable_messages()->Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* TxResponseData::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .injective.types.v1beta1.TxResponseGenericMessage messages = 1 [json_name = "messages"];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_messages(), ptr);
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

::uint8_t* TxResponseData::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:injective.types.v1beta1.TxResponseData)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .injective.types.v1beta1.TxResponseGenericMessage messages = 1 [json_name = "messages"];
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_messages_size()); i < n; i++) {
    const auto& repfield = this->_internal_messages(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:injective.types.v1beta1.TxResponseData)
  return target;
}

::size_t TxResponseData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:injective.types.v1beta1.TxResponseData)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .injective.types.v1beta1.TxResponseGenericMessage messages = 1 [json_name = "messages"];
  total_size += 1UL * this->_internal_messages_size();
  for (const auto& msg : this->_internal_messages()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData TxResponseData::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    TxResponseData::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*TxResponseData::GetClassData() const { return &_class_data_; }


void TxResponseData::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<TxResponseData*>(&to_msg);
  auto& from = static_cast<const TxResponseData&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:injective.types.v1beta1.TxResponseData)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_messages()->MergeFrom(from._internal_messages());
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void TxResponseData::CopyFrom(const TxResponseData& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:injective.types.v1beta1.TxResponseData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TxResponseData::IsInitialized() const {
  return true;
}

void TxResponseData::InternalSwap(TxResponseData* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _internal_mutable_messages()->InternalSwap(other->_internal_mutable_messages());
}

::PROTOBUF_NAMESPACE_ID::Metadata TxResponseData::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_injective_2ftypes_2fv1beta1_2ftx_5fresponse_2eproto_getter, &descriptor_table_injective_2ftypes_2fv1beta1_2ftx_5fresponse_2eproto_once,
      file_level_metadata_injective_2ftypes_2fv1beta1_2ftx_5fresponse_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace v1beta1
}  // namespace types
}  // namespace injective
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::injective::types::v1beta1::TxResponseGenericMessage*
Arena::CreateMaybeMessage< ::injective::types::v1beta1::TxResponseGenericMessage >(Arena* arena) {
  return Arena::CreateMessageInternal< ::injective::types::v1beta1::TxResponseGenericMessage >(arena);
}
template<> PROTOBUF_NOINLINE ::injective::types::v1beta1::TxResponseData*
Arena::CreateMaybeMessage< ::injective::types::v1beta1::TxResponseData >(Arena* arena) {
  return Arena::CreateMessageInternal< ::injective::types::v1beta1::TxResponseData >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
