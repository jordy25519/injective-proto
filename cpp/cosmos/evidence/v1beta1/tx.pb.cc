// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cosmos/evidence/v1beta1/tx.proto

#include "cosmos/evidence/v1beta1/tx.pb.h"

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
PROTOBUF_CONSTEXPR MsgSubmitEvidence::MsgSubmitEvidence(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.submitter_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.evidence_)*/nullptr} {}
struct MsgSubmitEvidenceDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MsgSubmitEvidenceDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~MsgSubmitEvidenceDefaultTypeInternal() {}
  union {
    MsgSubmitEvidence _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MsgSubmitEvidenceDefaultTypeInternal _MsgSubmitEvidence_default_instance_;
template <typename>
PROTOBUF_CONSTEXPR MsgSubmitEvidenceResponse::MsgSubmitEvidenceResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.hash_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_._cached_size_)*/{}} {}
struct MsgSubmitEvidenceResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MsgSubmitEvidenceResponseDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~MsgSubmitEvidenceResponseDefaultTypeInternal() {}
  union {
    MsgSubmitEvidenceResponse _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MsgSubmitEvidenceResponseDefaultTypeInternal _MsgSubmitEvidenceResponse_default_instance_;
}  // namespace v1beta1
}  // namespace evidence
}  // namespace cosmos
static ::_pb::Metadata file_level_metadata_cosmos_2fevidence_2fv1beta1_2ftx_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_cosmos_2fevidence_2fv1beta1_2ftx_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_cosmos_2fevidence_2fv1beta1_2ftx_2eproto = nullptr;
const ::uint32_t TableStruct_cosmos_2fevidence_2fv1beta1_2ftx_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::cosmos::evidence::v1beta1::MsgSubmitEvidence, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::cosmos::evidence::v1beta1::MsgSubmitEvidence, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::cosmos::evidence::v1beta1::MsgSubmitEvidence, _impl_.submitter_),
    PROTOBUF_FIELD_OFFSET(::cosmos::evidence::v1beta1::MsgSubmitEvidence, _impl_.evidence_),
    ~0u,
    0,
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::cosmos::evidence::v1beta1::MsgSubmitEvidenceResponse, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::cosmos::evidence::v1beta1::MsgSubmitEvidenceResponse, _impl_.hash_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, 10, -1, sizeof(::cosmos::evidence::v1beta1::MsgSubmitEvidence)},
        { 12, -1, -1, sizeof(::cosmos::evidence::v1beta1::MsgSubmitEvidenceResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::cosmos::evidence::v1beta1::_MsgSubmitEvidence_default_instance_._instance,
    &::cosmos::evidence::v1beta1::_MsgSubmitEvidenceResponse_default_instance_._instance,
};
const char descriptor_table_protodef_cosmos_2fevidence_2fv1beta1_2ftx_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n cosmos/evidence/v1beta1/tx.proto\022\027cosm"
    "os.evidence.v1beta1\032\024gogoproto/gogo.prot"
    "o\032\031google/protobuf/any.proto\032\031cosmos_pro"
    "to/cosmos.proto\032\027cosmos/msg/v1/msg.proto"
    "\032\021amino/amino.proto\"\334\001\n\021MsgSubmitEvidenc"
    "e\0226\n\tsubmitter\030\001 \001(\tB\030\322\264-\024cosmos.Address"
    "StringR\tsubmitter\022V\n\010evidence\030\002 \001(\0132\024.go"
    "ogle.protobuf.AnyB$\312\264- cosmos.evidence.v"
    "1beta1.EvidenceR\010evidence:7\210\240\037\000\350\240\037\000\202\347\260*\t"
    "submitter\212\347\260*\034cosmos-sdk/MsgSubmitEviden"
    "ce\"/\n\031MsgSubmitEvidenceResponse\022\022\n\004hash\030"
    "\004 \001(\014R\004hash2~\n\003Msg\022p\n\016SubmitEvidence\022*.c"
    "osmos.evidence.v1beta1.MsgSubmitEvidence"
    "\0322.cosmos.evidence.v1beta1.MsgSubmitEvid"
    "enceResponse\032\005\200\347\260*\001B\327\001\n\033com.cosmos.evide"
    "nce.v1beta1B\007TxProtoP\001Z-github.com/cosmo"
    "s/cosmos-sdk/x/evidence/types\242\002\003CEX\252\002\027Co"
    "smos.Evidence.V1beta1\312\002\027Cosmos\\Evidence\\"
    "V1beta1\342\002#Cosmos\\Evidence\\V1beta1\\GPBMet"
    "adata\352\002\031Cosmos::Evidence::V1beta1\250\342\036\001b\006p"
    "roto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_cosmos_2fevidence_2fv1beta1_2ftx_2eproto_deps[5] =
    {
        &::descriptor_table_amino_2famino_2eproto,
        &::descriptor_table_cosmos_2fmsg_2fv1_2fmsg_2eproto,
        &::descriptor_table_cosmos_5fproto_2fcosmos_2eproto,
        &::descriptor_table_gogoproto_2fgogo_2eproto,
        &::descriptor_table_google_2fprotobuf_2fany_2eproto,
};
static ::absl::once_flag descriptor_table_cosmos_2fevidence_2fv1beta1_2ftx_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_cosmos_2fevidence_2fv1beta1_2ftx_2eproto = {
    false,
    false,
    805,
    descriptor_table_protodef_cosmos_2fevidence_2fv1beta1_2ftx_2eproto,
    "cosmos/evidence/v1beta1/tx.proto",
    &descriptor_table_cosmos_2fevidence_2fv1beta1_2ftx_2eproto_once,
    descriptor_table_cosmos_2fevidence_2fv1beta1_2ftx_2eproto_deps,
    5,
    2,
    schemas,
    file_default_instances,
    TableStruct_cosmos_2fevidence_2fv1beta1_2ftx_2eproto::offsets,
    file_level_metadata_cosmos_2fevidence_2fv1beta1_2ftx_2eproto,
    file_level_enum_descriptors_cosmos_2fevidence_2fv1beta1_2ftx_2eproto,
    file_level_service_descriptors_cosmos_2fevidence_2fv1beta1_2ftx_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_cosmos_2fevidence_2fv1beta1_2ftx_2eproto_getter() {
  return &descriptor_table_cosmos_2fevidence_2fv1beta1_2ftx_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_cosmos_2fevidence_2fv1beta1_2ftx_2eproto(&descriptor_table_cosmos_2fevidence_2fv1beta1_2ftx_2eproto);
namespace cosmos {
namespace evidence {
namespace v1beta1 {
// ===================================================================

class MsgSubmitEvidence::_Internal {
 public:
  using HasBits = decltype(std::declval<MsgSubmitEvidence>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(MsgSubmitEvidence, _impl_._has_bits_);
  static const ::PROTOBUF_NAMESPACE_ID::Any& evidence(const MsgSubmitEvidence* msg);
  static void set_has_evidence(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::PROTOBUF_NAMESPACE_ID::Any&
MsgSubmitEvidence::_Internal::evidence(const MsgSubmitEvidence* msg) {
  return *msg->_impl_.evidence_;
}
void MsgSubmitEvidence::clear_evidence() {
  if (_impl_.evidence_ != nullptr) _impl_.evidence_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
MsgSubmitEvidence::MsgSubmitEvidence(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:cosmos.evidence.v1beta1.MsgSubmitEvidence)
}
MsgSubmitEvidence::MsgSubmitEvidence(const MsgSubmitEvidence& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  MsgSubmitEvidence* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.submitter_) {}

    , decltype(_impl_.evidence_){nullptr}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.submitter_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.submitter_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_submitter().empty()) {
    _this->_impl_.submitter_.Set(from._internal_submitter(), _this->GetArenaForAllocation());
  }
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_impl_.evidence_ = new ::PROTOBUF_NAMESPACE_ID::Any(*from._impl_.evidence_);
  }
  // @@protoc_insertion_point(copy_constructor:cosmos.evidence.v1beta1.MsgSubmitEvidence)
}

inline void MsgSubmitEvidence::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.submitter_) {}

    , decltype(_impl_.evidence_){nullptr}
  };
  _impl_.submitter_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.submitter_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

MsgSubmitEvidence::~MsgSubmitEvidence() {
  // @@protoc_insertion_point(destructor:cosmos.evidence.v1beta1.MsgSubmitEvidence)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void MsgSubmitEvidence::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.submitter_.Destroy();
  if (this != internal_default_instance()) delete _impl_.evidence_;
}

void MsgSubmitEvidence::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void MsgSubmitEvidence::Clear() {
// @@protoc_insertion_point(message_clear_start:cosmos.evidence.v1beta1.MsgSubmitEvidence)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.submitter_.ClearToEmpty();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    ABSL_DCHECK(_impl_.evidence_ != nullptr);
    _impl_.evidence_->Clear();
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MsgSubmitEvidence::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string submitter = 1 [json_name = "submitter", (.cosmos_proto.scalar) = "cosmos.AddressString"];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_submitter();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "cosmos.evidence.v1beta1.MsgSubmitEvidence.submitter"));
        } else {
          goto handle_unusual;
        }
        continue;
      // .google.protobuf.Any evidence = 2 [json_name = "evidence", (.cosmos_proto.accepts_interface) = "cosmos.evidence.v1beta1.Evidence"];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_evidence(), ptr);
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

::uint8_t* MsgSubmitEvidence::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:cosmos.evidence.v1beta1.MsgSubmitEvidence)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string submitter = 1 [json_name = "submitter", (.cosmos_proto.scalar) = "cosmos.AddressString"];
  if (!this->_internal_submitter().empty()) {
    const std::string& _s = this->_internal_submitter();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "cosmos.evidence.v1beta1.MsgSubmitEvidence.submitter");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  cached_has_bits = _impl_._has_bits_[0];
  // .google.protobuf.Any evidence = 2 [json_name = "evidence", (.cosmos_proto.accepts_interface) = "cosmos.evidence.v1beta1.Evidence"];
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::evidence(this),
        _Internal::evidence(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cosmos.evidence.v1beta1.MsgSubmitEvidence)
  return target;
}

::size_t MsgSubmitEvidence::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cosmos.evidence.v1beta1.MsgSubmitEvidence)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string submitter = 1 [json_name = "submitter", (.cosmos_proto.scalar) = "cosmos.AddressString"];
  if (!this->_internal_submitter().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_submitter());
  }

  // .google.protobuf.Any evidence = 2 [json_name = "evidence", (.cosmos_proto.accepts_interface) = "cosmos.evidence.v1beta1.Evidence"];
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.evidence_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData MsgSubmitEvidence::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    MsgSubmitEvidence::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*MsgSubmitEvidence::GetClassData() const { return &_class_data_; }


void MsgSubmitEvidence::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<MsgSubmitEvidence*>(&to_msg);
  auto& from = static_cast<const MsgSubmitEvidence&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:cosmos.evidence.v1beta1.MsgSubmitEvidence)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_submitter().empty()) {
    _this->_internal_set_submitter(from._internal_submitter());
  }
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_internal_mutable_evidence()->::PROTOBUF_NAMESPACE_ID::Any::MergeFrom(
        from._internal_evidence());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void MsgSubmitEvidence::CopyFrom(const MsgSubmitEvidence& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cosmos.evidence.v1beta1.MsgSubmitEvidence)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgSubmitEvidence::IsInitialized() const {
  return true;
}

void MsgSubmitEvidence::InternalSwap(MsgSubmitEvidence* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.submitter_, lhs_arena,
                                       &other->_impl_.submitter_, rhs_arena);
  swap(_impl_.evidence_, other->_impl_.evidence_);
}

::PROTOBUF_NAMESPACE_ID::Metadata MsgSubmitEvidence::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_cosmos_2fevidence_2fv1beta1_2ftx_2eproto_getter, &descriptor_table_cosmos_2fevidence_2fv1beta1_2ftx_2eproto_once,
      file_level_metadata_cosmos_2fevidence_2fv1beta1_2ftx_2eproto[0]);
}
// ===================================================================

class MsgSubmitEvidenceResponse::_Internal {
 public:
};

MsgSubmitEvidenceResponse::MsgSubmitEvidenceResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:cosmos.evidence.v1beta1.MsgSubmitEvidenceResponse)
}
MsgSubmitEvidenceResponse::MsgSubmitEvidenceResponse(const MsgSubmitEvidenceResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  MsgSubmitEvidenceResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.hash_) {}

    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.hash_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.hash_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_hash().empty()) {
    _this->_impl_.hash_.Set(from._internal_hash(), _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:cosmos.evidence.v1beta1.MsgSubmitEvidenceResponse)
}

inline void MsgSubmitEvidenceResponse::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.hash_) {}

    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.hash_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.hash_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

MsgSubmitEvidenceResponse::~MsgSubmitEvidenceResponse() {
  // @@protoc_insertion_point(destructor:cosmos.evidence.v1beta1.MsgSubmitEvidenceResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void MsgSubmitEvidenceResponse::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.hash_.Destroy();
}

void MsgSubmitEvidenceResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void MsgSubmitEvidenceResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:cosmos.evidence.v1beta1.MsgSubmitEvidenceResponse)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.hash_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MsgSubmitEvidenceResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bytes hash = 4 [json_name = "hash"];
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_hash();
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

::uint8_t* MsgSubmitEvidenceResponse::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:cosmos.evidence.v1beta1.MsgSubmitEvidenceResponse)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes hash = 4 [json_name = "hash"];
  if (!this->_internal_hash().empty()) {
    const std::string& _s = this->_internal_hash();
    target = stream->WriteBytesMaybeAliased(4, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cosmos.evidence.v1beta1.MsgSubmitEvidenceResponse)
  return target;
}

::size_t MsgSubmitEvidenceResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cosmos.evidence.v1beta1.MsgSubmitEvidenceResponse)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes hash = 4 [json_name = "hash"];
  if (!this->_internal_hash().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
                                    this->_internal_hash());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData MsgSubmitEvidenceResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    MsgSubmitEvidenceResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*MsgSubmitEvidenceResponse::GetClassData() const { return &_class_data_; }


void MsgSubmitEvidenceResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<MsgSubmitEvidenceResponse*>(&to_msg);
  auto& from = static_cast<const MsgSubmitEvidenceResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:cosmos.evidence.v1beta1.MsgSubmitEvidenceResponse)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_hash().empty()) {
    _this->_internal_set_hash(from._internal_hash());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void MsgSubmitEvidenceResponse::CopyFrom(const MsgSubmitEvidenceResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cosmos.evidence.v1beta1.MsgSubmitEvidenceResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgSubmitEvidenceResponse::IsInitialized() const {
  return true;
}

void MsgSubmitEvidenceResponse::InternalSwap(MsgSubmitEvidenceResponse* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.hash_, lhs_arena,
                                       &other->_impl_.hash_, rhs_arena);
}

::PROTOBUF_NAMESPACE_ID::Metadata MsgSubmitEvidenceResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_cosmos_2fevidence_2fv1beta1_2ftx_2eproto_getter, &descriptor_table_cosmos_2fevidence_2fv1beta1_2ftx_2eproto_once,
      file_level_metadata_cosmos_2fevidence_2fv1beta1_2ftx_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace v1beta1
}  // namespace evidence
}  // namespace cosmos
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::cosmos::evidence::v1beta1::MsgSubmitEvidence*
Arena::CreateMaybeMessage< ::cosmos::evidence::v1beta1::MsgSubmitEvidence >(Arena* arena) {
  return Arena::CreateMessageInternal< ::cosmos::evidence::v1beta1::MsgSubmitEvidence >(arena);
}
template<> PROTOBUF_NOINLINE ::cosmos::evidence::v1beta1::MsgSubmitEvidenceResponse*
Arena::CreateMaybeMessage< ::cosmos::evidence::v1beta1::MsgSubmitEvidenceResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::cosmos::evidence::v1beta1::MsgSubmitEvidenceResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
