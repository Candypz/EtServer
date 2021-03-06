// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ServerMessage.proto

#include "ServerMessage.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
class SMessageDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SMessage>
      _instance;
} _SMessage_default_instance_;
class SRegistration_ReqDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SRegistration_Req>
      _instance;
} _SRegistration_Req_default_instance_;
class SRegistration_ResDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SRegistration_Res>
      _instance;
} _SRegistration_Res_default_instance_;
namespace protobuf_ServerMessage_2eproto {
void InitDefaultsSMessageImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::_SMessage_default_instance_;
    new (ptr) ::SMessage();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::SMessage::InitAsDefaultInstance();
}

void InitDefaultsSMessage() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsSMessageImpl);
}

void InitDefaultsSRegistration_ReqImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::_SRegistration_Req_default_instance_;
    new (ptr) ::SRegistration_Req();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::SRegistration_Req::InitAsDefaultInstance();
}

void InitDefaultsSRegistration_Req() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsSRegistration_ReqImpl);
}

void InitDefaultsSRegistration_ResImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::_SRegistration_Res_default_instance_;
    new (ptr) ::SRegistration_Res();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::SRegistration_Res::InitAsDefaultInstance();
}

void InitDefaultsSRegistration_Res() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsSRegistration_ResImpl);
}

::google::protobuf::Metadata file_level_metadata[3];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::SMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::SMessage, content_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::SMessage, cmd_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::SMessage, sn_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::SRegistration_Req, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::SRegistration_Req, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::SRegistration_Req, type_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::SRegistration_Res, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::SRegistration_Res, getway_tiem_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::SMessage)},
  { 8, -1, sizeof(::SRegistration_Req)},
  { 15, -1, sizeof(::SRegistration_Res)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::_SMessage_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::_SRegistration_Req_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::_SRegistration_Res_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "ServerMessage.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 3);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\023ServerMessage.proto\"4\n\010SMessage\022\017\n\007con"
      "tent\030\001 \001(\014\022\013\n\003cmd\030\002 \001(\005\022\n\n\002sn\030\003 \001(\005\"-\n\021S"
      "Registration_Req\022\n\n\002id\030\001 \001(\005\022\014\n\004type\030\002 \001"
      "(\005\"(\n\021SRegistration_Res\022\023\n\013getway_tiem\030\002"
      " \001(\003b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 172);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "ServerMessage.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_ServerMessage_2eproto

// ===================================================================

void SMessage::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SMessage::kContentFieldNumber;
const int SMessage::kCmdFieldNumber;
const int SMessage::kSnFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SMessage::SMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_ServerMessage_2eproto::InitDefaultsSMessage();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:SMessage)
}
SMessage::SMessage(const SMessage& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  content_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.content().size() > 0) {
    content_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.content_);
  }
  ::memcpy(&cmd_, &from.cmd_,
    static_cast<size_t>(reinterpret_cast<char*>(&sn_) -
    reinterpret_cast<char*>(&cmd_)) + sizeof(sn_));
  // @@protoc_insertion_point(copy_constructor:SMessage)
}

void SMessage::SharedCtor() {
  content_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&cmd_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&sn_) -
      reinterpret_cast<char*>(&cmd_)) + sizeof(sn_));
  _cached_size_ = 0;
}

SMessage::~SMessage() {
  // @@protoc_insertion_point(destructor:SMessage)
  SharedDtor();
}

void SMessage::SharedDtor() {
  content_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void SMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SMessage::descriptor() {
  ::protobuf_ServerMessage_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_ServerMessage_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SMessage& SMessage::default_instance() {
  ::protobuf_ServerMessage_2eproto::InitDefaultsSMessage();
  return *internal_default_instance();
}

SMessage* SMessage::New(::google::protobuf::Arena* arena) const {
  SMessage* n = new SMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:SMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  content_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&cmd_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&sn_) -
      reinterpret_cast<char*>(&cmd_)) + sizeof(sn_));
  _internal_metadata_.Clear();
}

bool SMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:SMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bytes content = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_content()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 cmd = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &cmd_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 sn = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &sn_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:SMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:SMessage)
  return false;
#undef DO_
}

void SMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:SMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes content = 1;
  if (this->content().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->content(), output);
  }

  // int32 cmd = 2;
  if (this->cmd() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->cmd(), output);
  }

  // int32 sn = 3;
  if (this->sn() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->sn(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:SMessage)
}

::google::protobuf::uint8* SMessage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:SMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes content = 1;
  if (this->content().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->content(), target);
  }

  // int32 cmd = 2;
  if (this->cmd() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->cmd(), target);
  }

  // int32 sn = 3;
  if (this->sn() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->sn(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:SMessage)
  return target;
}

size_t SMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:SMessage)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bytes content = 1;
  if (this->content().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->content());
  }

  // int32 cmd = 2;
  if (this->cmd() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->cmd());
  }

  // int32 sn = 3;
  if (this->sn() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->sn());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:SMessage)
  GOOGLE_DCHECK_NE(&from, this);
  const SMessage* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:SMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:SMessage)
    MergeFrom(*source);
  }
}

void SMessage::MergeFrom(const SMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:SMessage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.content().size() > 0) {

    content_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.content_);
  }
  if (from.cmd() != 0) {
    set_cmd(from.cmd());
  }
  if (from.sn() != 0) {
    set_sn(from.sn());
  }
}

void SMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:SMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SMessage::CopyFrom(const SMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:SMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SMessage::IsInitialized() const {
  return true;
}

void SMessage::Swap(SMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SMessage::InternalSwap(SMessage* other) {
  using std::swap;
  content_.Swap(&other->content_);
  swap(cmd_, other->cmd_);
  swap(sn_, other->sn_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SMessage::GetMetadata() const {
  protobuf_ServerMessage_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_ServerMessage_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void SRegistration_Req::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SRegistration_Req::kIdFieldNumber;
const int SRegistration_Req::kTypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SRegistration_Req::SRegistration_Req()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_ServerMessage_2eproto::InitDefaultsSRegistration_Req();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:SRegistration_Req)
}
SRegistration_Req::SRegistration_Req(const SRegistration_Req& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&type_) -
    reinterpret_cast<char*>(&id_)) + sizeof(type_));
  // @@protoc_insertion_point(copy_constructor:SRegistration_Req)
}

void SRegistration_Req::SharedCtor() {
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&type_) -
      reinterpret_cast<char*>(&id_)) + sizeof(type_));
  _cached_size_ = 0;
}

SRegistration_Req::~SRegistration_Req() {
  // @@protoc_insertion_point(destructor:SRegistration_Req)
  SharedDtor();
}

void SRegistration_Req::SharedDtor() {
}

void SRegistration_Req::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SRegistration_Req::descriptor() {
  ::protobuf_ServerMessage_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_ServerMessage_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SRegistration_Req& SRegistration_Req::default_instance() {
  ::protobuf_ServerMessage_2eproto::InitDefaultsSRegistration_Req();
  return *internal_default_instance();
}

SRegistration_Req* SRegistration_Req::New(::google::protobuf::Arena* arena) const {
  SRegistration_Req* n = new SRegistration_Req;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SRegistration_Req::Clear() {
// @@protoc_insertion_point(message_clear_start:SRegistration_Req)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&type_) -
      reinterpret_cast<char*>(&id_)) + sizeof(type_));
  _internal_metadata_.Clear();
}

bool SRegistration_Req::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:SRegistration_Req)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 type = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:SRegistration_Req)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:SRegistration_Req)
  return false;
#undef DO_
}

void SRegistration_Req::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:SRegistration_Req)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 id = 1;
  if (this->id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // int32 type = 2;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->type(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:SRegistration_Req)
}

::google::protobuf::uint8* SRegistration_Req::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:SRegistration_Req)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 id = 1;
  if (this->id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // int32 type = 2;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->type(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:SRegistration_Req)
  return target;
}

size_t SRegistration_Req::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:SRegistration_Req)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // int32 id = 1;
  if (this->id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->id());
  }

  // int32 type = 2;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SRegistration_Req::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:SRegistration_Req)
  GOOGLE_DCHECK_NE(&from, this);
  const SRegistration_Req* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SRegistration_Req>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:SRegistration_Req)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:SRegistration_Req)
    MergeFrom(*source);
  }
}

void SRegistration_Req::MergeFrom(const SRegistration_Req& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:SRegistration_Req)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.id() != 0) {
    set_id(from.id());
  }
  if (from.type() != 0) {
    set_type(from.type());
  }
}

void SRegistration_Req::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:SRegistration_Req)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SRegistration_Req::CopyFrom(const SRegistration_Req& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:SRegistration_Req)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SRegistration_Req::IsInitialized() const {
  return true;
}

void SRegistration_Req::Swap(SRegistration_Req* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SRegistration_Req::InternalSwap(SRegistration_Req* other) {
  using std::swap;
  swap(id_, other->id_);
  swap(type_, other->type_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SRegistration_Req::GetMetadata() const {
  protobuf_ServerMessage_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_ServerMessage_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void SRegistration_Res::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SRegistration_Res::kGetwayTiemFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SRegistration_Res::SRegistration_Res()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_ServerMessage_2eproto::InitDefaultsSRegistration_Res();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:SRegistration_Res)
}
SRegistration_Res::SRegistration_Res(const SRegistration_Res& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  getway_tiem_ = from.getway_tiem_;
  // @@protoc_insertion_point(copy_constructor:SRegistration_Res)
}

void SRegistration_Res::SharedCtor() {
  getway_tiem_ = GOOGLE_LONGLONG(0);
  _cached_size_ = 0;
}

SRegistration_Res::~SRegistration_Res() {
  // @@protoc_insertion_point(destructor:SRegistration_Res)
  SharedDtor();
}

void SRegistration_Res::SharedDtor() {
}

void SRegistration_Res::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SRegistration_Res::descriptor() {
  ::protobuf_ServerMessage_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_ServerMessage_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SRegistration_Res& SRegistration_Res::default_instance() {
  ::protobuf_ServerMessage_2eproto::InitDefaultsSRegistration_Res();
  return *internal_default_instance();
}

SRegistration_Res* SRegistration_Res::New(::google::protobuf::Arena* arena) const {
  SRegistration_Res* n = new SRegistration_Res;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SRegistration_Res::Clear() {
// @@protoc_insertion_point(message_clear_start:SRegistration_Res)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  getway_tiem_ = GOOGLE_LONGLONG(0);
  _internal_metadata_.Clear();
}

bool SRegistration_Res::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:SRegistration_Res)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int64 getway_tiem = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &getway_tiem_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:SRegistration_Res)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:SRegistration_Res)
  return false;
#undef DO_
}

void SRegistration_Res::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:SRegistration_Res)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 getway_tiem = 2;
  if (this->getway_tiem() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->getway_tiem(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:SRegistration_Res)
}

::google::protobuf::uint8* SRegistration_Res::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:SRegistration_Res)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 getway_tiem = 2;
  if (this->getway_tiem() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->getway_tiem(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:SRegistration_Res)
  return target;
}

size_t SRegistration_Res::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:SRegistration_Res)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // int64 getway_tiem = 2;
  if (this->getway_tiem() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->getway_tiem());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SRegistration_Res::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:SRegistration_Res)
  GOOGLE_DCHECK_NE(&from, this);
  const SRegistration_Res* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SRegistration_Res>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:SRegistration_Res)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:SRegistration_Res)
    MergeFrom(*source);
  }
}

void SRegistration_Res::MergeFrom(const SRegistration_Res& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:SRegistration_Res)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.getway_tiem() != 0) {
    set_getway_tiem(from.getway_tiem());
  }
}

void SRegistration_Res::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:SRegistration_Res)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SRegistration_Res::CopyFrom(const SRegistration_Res& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:SRegistration_Res)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SRegistration_Res::IsInitialized() const {
  return true;
}

void SRegistration_Res::Swap(SRegistration_Res* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SRegistration_Res::InternalSwap(SRegistration_Res* other) {
  using std::swap;
  swap(getway_tiem_, other->getway_tiem_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SRegistration_Res::GetMetadata() const {
  protobuf_ServerMessage_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_ServerMessage_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
