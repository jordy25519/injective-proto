// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cosmos/consensus/module/v1/module.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_cosmos_2fconsensus_2fmodule_2fv1_2fmodule_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_cosmos_2fconsensus_2fmodule_2fv1_2fmodule_2eproto_2epb_2eh

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
#include "cosmos/app/v1alpha1/module.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_cosmos_2fconsensus_2fmodule_2fv1_2fmodule_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_cosmos_2fconsensus_2fmodule_2fv1_2fmodule_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_cosmos_2fconsensus_2fmodule_2fv1_2fmodule_2eproto;
namespace cosmos {
namespace consensus {
namespace module {
namespace v1 {
class Module;
struct ModuleDefaultTypeInternal;
extern ModuleDefaultTypeInternal _Module_default_instance_;
}  // namespace v1
}  // namespace module
}  // namespace consensus
}  // namespace cosmos
PROTOBUF_NAMESPACE_OPEN
template <>
::cosmos::consensus::module::v1::Module* Arena::CreateMaybeMessage<::cosmos::consensus::module::v1::Module>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace cosmos {
namespace consensus {
namespace module {
namespace v1 {

// ===================================================================


// -------------------------------------------------------------------

class Module final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:cosmos.consensus.module.v1.Module) */ {
 public:
  inline Module() : Module(nullptr) {}
  ~Module() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR Module(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Module(const Module& from);
  Module(Module&& from) noexcept
    : Module() {
    *this = ::std::move(from);
  }

  inline Module& operator=(const Module& from) {
    CopyFrom(from);
    return *this;
  }
  inline Module& operator=(Module&& from) noexcept {
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
  static const Module& default_instance() {
    return *internal_default_instance();
  }
  static inline const Module* internal_default_instance() {
    return reinterpret_cast<const Module*>(
               &_Module_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Module& a, Module& b) {
    a.Swap(&b);
  }
  inline void Swap(Module* other) {
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
  void UnsafeArenaSwap(Module* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Module* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Module>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Module& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Module& from) {
    Module::MergeImpl(*this, from);
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
  void InternalSwap(Module* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "cosmos.consensus.module.v1.Module";
  }
  protected:
  explicit Module(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAuthorityFieldNumber = 1,
  };
  // string authority = 1 [json_name = "authority"];
  void clear_authority() ;
  const std::string& authority() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_authority(Arg_&& arg, Args_... args);
  std::string* mutable_authority();
  PROTOBUF_NODISCARD std::string* release_authority();
  void set_allocated_authority(std::string* ptr);

  private:
  const std::string& _internal_authority() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_authority(
      const std::string& value);
  std::string* _internal_mutable_authority();

  public:
  // @@protoc_insertion_point(class_scope:cosmos.consensus.module.v1.Module)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr authority_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_cosmos_2fconsensus_2fmodule_2fv1_2fmodule_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Module

// string authority = 1 [json_name = "authority"];
inline void Module::clear_authority() {
  _impl_.authority_.ClearToEmpty();
}
inline const std::string& Module::authority() const {
  // @@protoc_insertion_point(field_get:cosmos.consensus.module.v1.Module.authority)
  return _internal_authority();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Module::set_authority(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.authority_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:cosmos.consensus.module.v1.Module.authority)
}
inline std::string* Module::mutable_authority() {
  std::string* _s = _internal_mutable_authority();
  // @@protoc_insertion_point(field_mutable:cosmos.consensus.module.v1.Module.authority)
  return _s;
}
inline const std::string& Module::_internal_authority() const {
  return _impl_.authority_.Get();
}
inline void Module::_internal_set_authority(const std::string& value) {
  ;


  _impl_.authority_.Set(value, GetArenaForAllocation());
}
inline std::string* Module::_internal_mutable_authority() {
  ;
  return _impl_.authority_.Mutable( GetArenaForAllocation());
}
inline std::string* Module::release_authority() {
  // @@protoc_insertion_point(field_release:cosmos.consensus.module.v1.Module.authority)
  return _impl_.authority_.Release();
}
inline void Module::set_allocated_authority(std::string* value) {
  _impl_.authority_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.authority_.IsDefault()) {
          _impl_.authority_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:cosmos.consensus.module.v1.Module.authority)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace module
}  // namespace consensus
}  // namespace cosmos


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_cosmos_2fconsensus_2fmodule_2fv1_2fmodule_2eproto_2epb_2eh
