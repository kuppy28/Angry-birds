// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: add_audio.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "add_audio.pb.h"

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
// @@protoc_insertion_point(includes)
class AddDataDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<AddData> {
} _AddData_default_instance_;

namespace protobuf_add_5faudio_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddData, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddData, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddData, audiodata_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddData, lastchunk_),
  0,
  1,
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, 7, sizeof(AddData)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_AddData_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "add_audio.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void TableStruct::Shutdown() {
  _AddData_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _AddData_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\017add_audio.proto\"/\n\007AddData\022\021\n\taudioDat"
      "a\030\001 \001(\014\022\021\n\tlastChunk\030\002 \002(\010"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 66);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "add_audio.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_add_5faudio_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AddData::kAudioDataFieldNumber;
const int AddData::kLastChunkFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AddData::AddData()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_add_5faudio_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:AddData)
}
AddData::AddData(const AddData& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  audiodata_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_audiodata()) {
    audiodata_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.audiodata_);
  }
  lastchunk_ = from.lastchunk_;
  // @@protoc_insertion_point(copy_constructor:AddData)
}

void AddData::SharedCtor() {
  _cached_size_ = 0;
  audiodata_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  lastchunk_ = false;
}

AddData::~AddData() {
  // @@protoc_insertion_point(destructor:AddData)
  SharedDtor();
}

void AddData::SharedDtor() {
  audiodata_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void AddData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AddData::descriptor() {
  protobuf_add_5faudio_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_add_5faudio_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const AddData& AddData::default_instance() {
  protobuf_add_5faudio_2eproto::InitDefaults();
  return *internal_default_instance();
}

AddData* AddData::New(::google::protobuf::Arena* arena) const {
  AddData* n = new AddData;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void AddData::Clear() {
// @@protoc_insertion_point(message_clear_start:AddData)
  if (has_audiodata()) {
    GOOGLE_DCHECK(!audiodata_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
    (*audiodata_.UnsafeRawStringPointer())->clear();
  }
  lastchunk_ = false;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool AddData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:AddData)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bytes audioData = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_audiodata()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required bool lastChunk = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u)) {
          set_has_lastchunk();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &lastchunk_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:AddData)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:AddData)
  return false;
#undef DO_
}

void AddData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:AddData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional bytes audioData = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->audiodata(), output);
  }

  // required bool lastChunk = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->lastchunk(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:AddData)
}

::google::protobuf::uint8* AddData::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:AddData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional bytes audioData = 1;
  if (cached_has_bits & 0x00000001u) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->audiodata(), target);
  }

  // required bool lastChunk = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->lastchunk(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AddData)
  return target;
}

size_t AddData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AddData)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  // required bool lastChunk = 2;
  if (has_lastchunk()) {
    total_size += 1 + 1;
  }
  // optional bytes audioData = 1;
  if (has_audiodata()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->audiodata());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AddData::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:AddData)
  GOOGLE_DCHECK_NE(&from, this);
  const AddData* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const AddData>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:AddData)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:AddData)
    MergeFrom(*source);
  }
}

void AddData::MergeFrom(const AddData& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:AddData)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_audiodata();
      audiodata_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.audiodata_);
    }
    if (cached_has_bits & 0x00000002u) {
      lastchunk_ = from.lastchunk_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void AddData::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:AddData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AddData::CopyFrom(const AddData& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AddData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AddData::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000002) != 0x00000002) return false;
  return true;
}

void AddData::Swap(AddData* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AddData::InternalSwap(AddData* other) {
  audiodata_.Swap(&other->audiodata_);
  std::swap(lastchunk_, other->lastchunk_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata AddData::GetMetadata() const {
  protobuf_add_5faudio_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_add_5faudio_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// AddData

// optional bytes audioData = 1;
bool AddData::has_audiodata() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void AddData::set_has_audiodata() {
  _has_bits_[0] |= 0x00000001u;
}
void AddData::clear_has_audiodata() {
  _has_bits_[0] &= ~0x00000001u;
}
void AddData::clear_audiodata() {
  audiodata_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_audiodata();
}
const ::std::string& AddData::audiodata() const {
  // @@protoc_insertion_point(field_get:AddData.audioData)
  return audiodata_.GetNoArena();
}
void AddData::set_audiodata(const ::std::string& value) {
  set_has_audiodata();
  audiodata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:AddData.audioData)
}
#if LANG_CXX11
void AddData::set_audiodata(::std::string&& value) {
  set_has_audiodata();
  audiodata_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:AddData.audioData)
}
#endif
void AddData::set_audiodata(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_audiodata();
  audiodata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:AddData.audioData)
}
void AddData::set_audiodata(const void* value, size_t size) {
  set_has_audiodata();
  audiodata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:AddData.audioData)
}
::std::string* AddData::mutable_audiodata() {
  set_has_audiodata();
  // @@protoc_insertion_point(field_mutable:AddData.audioData)
  return audiodata_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* AddData::release_audiodata() {
  // @@protoc_insertion_point(field_release:AddData.audioData)
  clear_has_audiodata();
  return audiodata_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void AddData::set_allocated_audiodata(::std::string* audiodata) {
  if (audiodata != NULL) {
    set_has_audiodata();
  } else {
    clear_has_audiodata();
  }
  audiodata_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), audiodata);
  // @@protoc_insertion_point(field_set_allocated:AddData.audioData)
}

// required bool lastChunk = 2;
bool AddData::has_lastchunk() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void AddData::set_has_lastchunk() {
  _has_bits_[0] |= 0x00000002u;
}
void AddData::clear_has_lastchunk() {
  _has_bits_[0] &= ~0x00000002u;
}
void AddData::clear_lastchunk() {
  lastchunk_ = false;
  clear_has_lastchunk();
}
bool AddData::lastchunk() const {
  // @@protoc_insertion_point(field_get:AddData.lastChunk)
  return lastchunk_;
}
void AddData::set_lastchunk(bool value) {
  set_has_lastchunk();
  lastchunk_ = value;
  // @@protoc_insertion_point(field_set:AddData.lastChunk)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
