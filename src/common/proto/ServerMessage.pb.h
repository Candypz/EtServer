// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ServerMessage.proto

#ifndef PROTOBUF_ServerMessage_2eproto__INCLUDED
#define PROTOBUF_ServerMessage_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_ServerMessage_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsSMessageImpl();
void InitDefaultsSMessage();
void InitDefaultsSRegistration_ReqImpl();
void InitDefaultsSRegistration_Req();
void InitDefaultsSRegistration_ResImpl();
void InitDefaultsSRegistration_Res();
inline void InitDefaults() {
  InitDefaultsSMessage();
  InitDefaultsSRegistration_Req();
  InitDefaultsSRegistration_Res();
}
}  // namespace protobuf_ServerMessage_2eproto
class SMessage;
class SMessageDefaultTypeInternal;
extern SMessageDefaultTypeInternal _SMessage_default_instance_;
class SRegistration_Req;
class SRegistration_ReqDefaultTypeInternal;
extern SRegistration_ReqDefaultTypeInternal _SRegistration_Req_default_instance_;
class SRegistration_Res;
class SRegistration_ResDefaultTypeInternal;
extern SRegistration_ResDefaultTypeInternal _SRegistration_Res_default_instance_;

// ===================================================================

class SMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:SMessage) */ {
 public:
  SMessage();
  virtual ~SMessage();

  SMessage(const SMessage& from);

  inline SMessage& operator=(const SMessage& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SMessage(SMessage&& from) noexcept
    : SMessage() {
    *this = ::std::move(from);
  }

  inline SMessage& operator=(SMessage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SMessage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SMessage* internal_default_instance() {
    return reinterpret_cast<const SMessage*>(
               &_SMessage_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(SMessage* other);
  friend void swap(SMessage& a, SMessage& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SMessage* New() const PROTOBUF_FINAL { return New(NULL); }

  SMessage* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SMessage& from);
  void MergeFrom(const SMessage& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(SMessage* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // bytes content = 1;
  void clear_content();
  static const int kContentFieldNumber = 1;
  const ::std::string& content() const;
  void set_content(const ::std::string& value);
  #if LANG_CXX11
  void set_content(::std::string&& value);
  #endif
  void set_content(const char* value);
  void set_content(const void* value, size_t size);
  ::std::string* mutable_content();
  ::std::string* release_content();
  void set_allocated_content(::std::string* content);

  // int32 cmd = 2;
  void clear_cmd();
  static const int kCmdFieldNumber = 2;
  ::google::protobuf::int32 cmd() const;
  void set_cmd(::google::protobuf::int32 value);

  // int32 sn = 3;
  void clear_sn();
  static const int kSnFieldNumber = 3;
  ::google::protobuf::int32 sn() const;
  void set_sn(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:SMessage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr content_;
  ::google::protobuf::int32 cmd_;
  ::google::protobuf::int32 sn_;
  mutable int _cached_size_;
  friend struct ::protobuf_ServerMessage_2eproto::TableStruct;
  friend void ::protobuf_ServerMessage_2eproto::InitDefaultsSMessageImpl();
};
// -------------------------------------------------------------------

class SRegistration_Req : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:SRegistration_Req) */ {
 public:
  SRegistration_Req();
  virtual ~SRegistration_Req();

  SRegistration_Req(const SRegistration_Req& from);

  inline SRegistration_Req& operator=(const SRegistration_Req& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SRegistration_Req(SRegistration_Req&& from) noexcept
    : SRegistration_Req() {
    *this = ::std::move(from);
  }

  inline SRegistration_Req& operator=(SRegistration_Req&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SRegistration_Req& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SRegistration_Req* internal_default_instance() {
    return reinterpret_cast<const SRegistration_Req*>(
               &_SRegistration_Req_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(SRegistration_Req* other);
  friend void swap(SRegistration_Req& a, SRegistration_Req& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SRegistration_Req* New() const PROTOBUF_FINAL { return New(NULL); }

  SRegistration_Req* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SRegistration_Req& from);
  void MergeFrom(const SRegistration_Req& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(SRegistration_Req* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int32 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // int32 type = 2;
  void clear_type();
  static const int kTypeFieldNumber = 2;
  ::google::protobuf::int32 type() const;
  void set_type(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:SRegistration_Req)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 type_;
  mutable int _cached_size_;
  friend struct ::protobuf_ServerMessage_2eproto::TableStruct;
  friend void ::protobuf_ServerMessage_2eproto::InitDefaultsSRegistration_ReqImpl();
};
// -------------------------------------------------------------------

class SRegistration_Res : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:SRegistration_Res) */ {
 public:
  SRegistration_Res();
  virtual ~SRegistration_Res();

  SRegistration_Res(const SRegistration_Res& from);

  inline SRegistration_Res& operator=(const SRegistration_Res& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SRegistration_Res(SRegistration_Res&& from) noexcept
    : SRegistration_Res() {
    *this = ::std::move(from);
  }

  inline SRegistration_Res& operator=(SRegistration_Res&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SRegistration_Res& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SRegistration_Res* internal_default_instance() {
    return reinterpret_cast<const SRegistration_Res*>(
               &_SRegistration_Res_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(SRegistration_Res* other);
  friend void swap(SRegistration_Res& a, SRegistration_Res& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SRegistration_Res* New() const PROTOBUF_FINAL { return New(NULL); }

  SRegistration_Res* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SRegistration_Res& from);
  void MergeFrom(const SRegistration_Res& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(SRegistration_Res* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int64 getway_tiem = 2;
  void clear_getway_tiem();
  static const int kGetwayTiemFieldNumber = 2;
  ::google::protobuf::int64 getway_tiem() const;
  void set_getway_tiem(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:SRegistration_Res)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int64 getway_tiem_;
  mutable int _cached_size_;
  friend struct ::protobuf_ServerMessage_2eproto::TableStruct;
  friend void ::protobuf_ServerMessage_2eproto::InitDefaultsSRegistration_ResImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SMessage

// bytes content = 1;
inline void SMessage::clear_content() {
  content_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SMessage::content() const {
  // @@protoc_insertion_point(field_get:SMessage.content)
  return content_.GetNoArena();
}
inline void SMessage::set_content(const ::std::string& value) {
  
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:SMessage.content)
}
#if LANG_CXX11
inline void SMessage::set_content(::std::string&& value) {
  
  content_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:SMessage.content)
}
#endif
inline void SMessage::set_content(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:SMessage.content)
}
inline void SMessage::set_content(const void* value, size_t size) {
  
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:SMessage.content)
}
inline ::std::string* SMessage::mutable_content() {
  
  // @@protoc_insertion_point(field_mutable:SMessage.content)
  return content_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SMessage::release_content() {
  // @@protoc_insertion_point(field_release:SMessage.content)
  
  return content_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SMessage::set_allocated_content(::std::string* content) {
  if (content != NULL) {
    
  } else {
    
  }
  content_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), content);
  // @@protoc_insertion_point(field_set_allocated:SMessage.content)
}

// int32 cmd = 2;
inline void SMessage::clear_cmd() {
  cmd_ = 0;
}
inline ::google::protobuf::int32 SMessage::cmd() const {
  // @@protoc_insertion_point(field_get:SMessage.cmd)
  return cmd_;
}
inline void SMessage::set_cmd(::google::protobuf::int32 value) {
  
  cmd_ = value;
  // @@protoc_insertion_point(field_set:SMessage.cmd)
}

// int32 sn = 3;
inline void SMessage::clear_sn() {
  sn_ = 0;
}
inline ::google::protobuf::int32 SMessage::sn() const {
  // @@protoc_insertion_point(field_get:SMessage.sn)
  return sn_;
}
inline void SMessage::set_sn(::google::protobuf::int32 value) {
  
  sn_ = value;
  // @@protoc_insertion_point(field_set:SMessage.sn)
}

// -------------------------------------------------------------------

// SRegistration_Req

// int32 id = 1;
inline void SRegistration_Req::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 SRegistration_Req::id() const {
  // @@protoc_insertion_point(field_get:SRegistration_Req.id)
  return id_;
}
inline void SRegistration_Req::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:SRegistration_Req.id)
}

// int32 type = 2;
inline void SRegistration_Req::clear_type() {
  type_ = 0;
}
inline ::google::protobuf::int32 SRegistration_Req::type() const {
  // @@protoc_insertion_point(field_get:SRegistration_Req.type)
  return type_;
}
inline void SRegistration_Req::set_type(::google::protobuf::int32 value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:SRegistration_Req.type)
}

// -------------------------------------------------------------------

// SRegistration_Res

// int64 getway_tiem = 2;
inline void SRegistration_Res::clear_getway_tiem() {
  getway_tiem_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 SRegistration_Res::getway_tiem() const {
  // @@protoc_insertion_point(field_get:SRegistration_Res.getway_tiem)
  return getway_tiem_;
}
inline void SRegistration_Res::set_getway_tiem(::google::protobuf::int64 value) {
  
  getway_tiem_ = value;
  // @@protoc_insertion_point(field_set:SRegistration_Res.getway_tiem)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ServerMessage_2eproto__INCLUDED