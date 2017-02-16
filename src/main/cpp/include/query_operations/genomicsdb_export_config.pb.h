// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: genomicsdb_export_config.proto

#ifndef PROTOBUF_genomicsdb_5fexport_5fconfig_2eproto__INCLUDED
#define PROTOBUF_genomicsdb_5fexport_5fconfig_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_genomicsdb_5fexport_5fconfig_2eproto();
void protobuf_AssignDesc_genomicsdb_5fexport_5fconfig_2eproto();
void protobuf_ShutdownFile_genomicsdb_5fexport_5fconfig_2eproto();

class ColumnRange;
class ColumnRangeList;
class ExportConfiguration;

// ===================================================================

class ColumnRange : public ::google::protobuf::Message {
 public:
  ColumnRange();
  virtual ~ColumnRange();

  ColumnRange(const ColumnRange& from);

  inline ColumnRange& operator=(const ColumnRange& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ColumnRange& default_instance();

  void Swap(ColumnRange* other);

  // implements Message ----------------------------------------------

  ColumnRange* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ColumnRange& from);
  void MergeFrom(const ColumnRange& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int64 low = 1;
  inline bool has_low() const;
  inline void clear_low();
  static const int kLowFieldNumber = 1;
  inline ::google::protobuf::int64 low() const;
  inline void set_low(::google::protobuf::int64 value);

  // required int64 high = 2;
  inline bool has_high() const;
  inline void clear_high();
  static const int kHighFieldNumber = 2;
  inline ::google::protobuf::int64 high() const;
  inline void set_high(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:ColumnRange)
 private:
  inline void set_has_low();
  inline void clear_has_low();
  inline void set_has_high();
  inline void clear_has_high();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 low_;
  ::google::protobuf::int64 high_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_genomicsdb_5fexport_5fconfig_2eproto();
  friend void protobuf_AssignDesc_genomicsdb_5fexport_5fconfig_2eproto();
  friend void protobuf_ShutdownFile_genomicsdb_5fexport_5fconfig_2eproto();

  void InitAsDefaultInstance();
  static ColumnRange* default_instance_;
};
// -------------------------------------------------------------------

class ColumnRangeList : public ::google::protobuf::Message {
 public:
  ColumnRangeList();
  virtual ~ColumnRangeList();

  ColumnRangeList(const ColumnRangeList& from);

  inline ColumnRangeList& operator=(const ColumnRangeList& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ColumnRangeList& default_instance();

  void Swap(ColumnRangeList* other);

  // implements Message ----------------------------------------------

  ColumnRangeList* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ColumnRangeList& from);
  void MergeFrom(const ColumnRangeList& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .ColumnRange range_list = 1;
  inline int range_list_size() const;
  inline void clear_range_list();
  static const int kRangeListFieldNumber = 1;
  inline const ::ColumnRange& range_list(int index) const;
  inline ::ColumnRange* mutable_range_list(int index);
  inline ::ColumnRange* add_range_list();
  inline const ::google::protobuf::RepeatedPtrField< ::ColumnRange >&
      range_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::ColumnRange >*
      mutable_range_list();

  // @@protoc_insertion_point(class_scope:ColumnRangeList)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::ColumnRange > range_list_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_genomicsdb_5fexport_5fconfig_2eproto();
  friend void protobuf_AssignDesc_genomicsdb_5fexport_5fconfig_2eproto();
  friend void protobuf_ShutdownFile_genomicsdb_5fexport_5fconfig_2eproto();

  void InitAsDefaultInstance();
  static ColumnRangeList* default_instance_;
};
// -------------------------------------------------------------------

class ExportConfiguration : public ::google::protobuf::Message {
 public:
  ExportConfiguration();
  virtual ~ExportConfiguration();

  ExportConfiguration(const ExportConfiguration& from);

  inline ExportConfiguration& operator=(const ExportConfiguration& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ExportConfiguration& default_instance();

  void Swap(ExportConfiguration* other);

  // implements Message ----------------------------------------------

  ExportConfiguration* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ExportConfiguration& from);
  void MergeFrom(const ExportConfiguration& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string tiledb_workspace = 1;
  inline bool has_tiledb_workspace() const;
  inline void clear_tiledb_workspace();
  static const int kTiledbWorkspaceFieldNumber = 1;
  inline const ::std::string& tiledb_workspace() const;
  inline void set_tiledb_workspace(const ::std::string& value);
  inline void set_tiledb_workspace(const char* value);
  inline void set_tiledb_workspace(const char* value, size_t size);
  inline ::std::string* mutable_tiledb_workspace();
  inline ::std::string* release_tiledb_workspace();
  inline void set_allocated_tiledb_workspace(::std::string* tiledb_workspace);

  // required string tiledb_array_name = 2;
  inline bool has_tiledb_array_name() const;
  inline void clear_tiledb_array_name();
  static const int kTiledbArrayNameFieldNumber = 2;
  inline const ::std::string& tiledb_array_name() const;
  inline void set_tiledb_array_name(const ::std::string& value);
  inline void set_tiledb_array_name(const char* value);
  inline void set_tiledb_array_name(const char* value, size_t size);
  inline ::std::string* mutable_tiledb_array_name();
  inline ::std::string* release_tiledb_array_name();
  inline void set_allocated_tiledb_array_name(::std::string* tiledb_array_name);

  // required string reference_genome = 3;
  inline bool has_reference_genome() const;
  inline void clear_reference_genome();
  static const int kReferenceGenomeFieldNumber = 3;
  inline const ::std::string& reference_genome() const;
  inline void set_reference_genome(const ::std::string& value);
  inline void set_reference_genome(const char* value);
  inline void set_reference_genome(const char* value, size_t size);
  inline ::std::string* mutable_reference_genome();
  inline ::std::string* release_reference_genome();
  inline void set_allocated_reference_genome(::std::string* reference_genome);

  // repeated .ColumnRangeList query_column_ranges = 4;
  inline int query_column_ranges_size() const;
  inline void clear_query_column_ranges();
  static const int kQueryColumnRangesFieldNumber = 4;
  inline const ::ColumnRangeList& query_column_ranges(int index) const;
  inline ::ColumnRangeList* mutable_query_column_ranges(int index);
  inline ::ColumnRangeList* add_query_column_ranges();
  inline const ::google::protobuf::RepeatedPtrField< ::ColumnRangeList >&
      query_column_ranges() const;
  inline ::google::protobuf::RepeatedPtrField< ::ColumnRangeList >*
      mutable_query_column_ranges();

  // repeated string attributes = 5;
  inline int attributes_size() const;
  inline void clear_attributes();
  static const int kAttributesFieldNumber = 5;
  inline const ::std::string& attributes(int index) const;
  inline ::std::string* mutable_attributes(int index);
  inline void set_attributes(int index, const ::std::string& value);
  inline void set_attributes(int index, const char* value);
  inline void set_attributes(int index, const char* value, size_t size);
  inline ::std::string* add_attributes();
  inline void add_attributes(const ::std::string& value);
  inline void add_attributes(const char* value);
  inline void add_attributes(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& attributes() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_attributes();

  // @@protoc_insertion_point(class_scope:ExportConfiguration)
 private:
  inline void set_has_tiledb_workspace();
  inline void clear_has_tiledb_workspace();
  inline void set_has_tiledb_array_name();
  inline void clear_has_tiledb_array_name();
  inline void set_has_reference_genome();
  inline void clear_has_reference_genome();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* tiledb_workspace_;
  ::std::string* tiledb_array_name_;
  ::std::string* reference_genome_;
  ::google::protobuf::RepeatedPtrField< ::ColumnRangeList > query_column_ranges_;
  ::google::protobuf::RepeatedPtrField< ::std::string> attributes_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  friend void  protobuf_AddDesc_genomicsdb_5fexport_5fconfig_2eproto();
  friend void protobuf_AssignDesc_genomicsdb_5fexport_5fconfig_2eproto();
  friend void protobuf_ShutdownFile_genomicsdb_5fexport_5fconfig_2eproto();

  void InitAsDefaultInstance();
  static ExportConfiguration* default_instance_;
};
// ===================================================================


// ===================================================================

// ColumnRange

// required int64 low = 1;
inline bool ColumnRange::has_low() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ColumnRange::set_has_low() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ColumnRange::clear_has_low() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ColumnRange::clear_low() {
  low_ = GOOGLE_LONGLONG(0);
  clear_has_low();
}
inline ::google::protobuf::int64 ColumnRange::low() const {
  return low_;
}
inline void ColumnRange::set_low(::google::protobuf::int64 value) {
  set_has_low();
  low_ = value;
}

// required int64 high = 2;
inline bool ColumnRange::has_high() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ColumnRange::set_has_high() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ColumnRange::clear_has_high() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ColumnRange::clear_high() {
  high_ = GOOGLE_LONGLONG(0);
  clear_has_high();
}
inline ::google::protobuf::int64 ColumnRange::high() const {
  return high_;
}
inline void ColumnRange::set_high(::google::protobuf::int64 value) {
  set_has_high();
  high_ = value;
}

// -------------------------------------------------------------------

// ColumnRangeList

// repeated .ColumnRange range_list = 1;
inline int ColumnRangeList::range_list_size() const {
  return range_list_.size();
}
inline void ColumnRangeList::clear_range_list() {
  range_list_.Clear();
}
inline const ::ColumnRange& ColumnRangeList::range_list(int index) const {
  return range_list_.Get(index);
}
inline ::ColumnRange* ColumnRangeList::mutable_range_list(int index) {
  return range_list_.Mutable(index);
}
inline ::ColumnRange* ColumnRangeList::add_range_list() {
  return range_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ColumnRange >&
ColumnRangeList::range_list() const {
  return range_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::ColumnRange >*
ColumnRangeList::mutable_range_list() {
  return &range_list_;
}

// -------------------------------------------------------------------

// ExportConfiguration

// required string tiledb_workspace = 1;
inline bool ExportConfiguration::has_tiledb_workspace() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ExportConfiguration::set_has_tiledb_workspace() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ExportConfiguration::clear_has_tiledb_workspace() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ExportConfiguration::clear_tiledb_workspace() {
  if (tiledb_workspace_ != &::google::protobuf::internal::kEmptyString) {
    tiledb_workspace_->clear();
  }
  clear_has_tiledb_workspace();
}
inline const ::std::string& ExportConfiguration::tiledb_workspace() const {
  return *tiledb_workspace_;
}
inline void ExportConfiguration::set_tiledb_workspace(const ::std::string& value) {
  set_has_tiledb_workspace();
  if (tiledb_workspace_ == &::google::protobuf::internal::kEmptyString) {
    tiledb_workspace_ = new ::std::string;
  }
  tiledb_workspace_->assign(value);
}
inline void ExportConfiguration::set_tiledb_workspace(const char* value) {
  set_has_tiledb_workspace();
  if (tiledb_workspace_ == &::google::protobuf::internal::kEmptyString) {
    tiledb_workspace_ = new ::std::string;
  }
  tiledb_workspace_->assign(value);
}
inline void ExportConfiguration::set_tiledb_workspace(const char* value, size_t size) {
  set_has_tiledb_workspace();
  if (tiledb_workspace_ == &::google::protobuf::internal::kEmptyString) {
    tiledb_workspace_ = new ::std::string;
  }
  tiledb_workspace_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ExportConfiguration::mutable_tiledb_workspace() {
  set_has_tiledb_workspace();
  if (tiledb_workspace_ == &::google::protobuf::internal::kEmptyString) {
    tiledb_workspace_ = new ::std::string;
  }
  return tiledb_workspace_;
}
inline ::std::string* ExportConfiguration::release_tiledb_workspace() {
  clear_has_tiledb_workspace();
  if (tiledb_workspace_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = tiledb_workspace_;
    tiledb_workspace_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ExportConfiguration::set_allocated_tiledb_workspace(::std::string* tiledb_workspace) {
  if (tiledb_workspace_ != &::google::protobuf::internal::kEmptyString) {
    delete tiledb_workspace_;
  }
  if (tiledb_workspace) {
    set_has_tiledb_workspace();
    tiledb_workspace_ = tiledb_workspace;
  } else {
    clear_has_tiledb_workspace();
    tiledb_workspace_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string tiledb_array_name = 2;
inline bool ExportConfiguration::has_tiledb_array_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ExportConfiguration::set_has_tiledb_array_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ExportConfiguration::clear_has_tiledb_array_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ExportConfiguration::clear_tiledb_array_name() {
  if (tiledb_array_name_ != &::google::protobuf::internal::kEmptyString) {
    tiledb_array_name_->clear();
  }
  clear_has_tiledb_array_name();
}
inline const ::std::string& ExportConfiguration::tiledb_array_name() const {
  return *tiledb_array_name_;
}
inline void ExportConfiguration::set_tiledb_array_name(const ::std::string& value) {
  set_has_tiledb_array_name();
  if (tiledb_array_name_ == &::google::protobuf::internal::kEmptyString) {
    tiledb_array_name_ = new ::std::string;
  }
  tiledb_array_name_->assign(value);
}
inline void ExportConfiguration::set_tiledb_array_name(const char* value) {
  set_has_tiledb_array_name();
  if (tiledb_array_name_ == &::google::protobuf::internal::kEmptyString) {
    tiledb_array_name_ = new ::std::string;
  }
  tiledb_array_name_->assign(value);
}
inline void ExportConfiguration::set_tiledb_array_name(const char* value, size_t size) {
  set_has_tiledb_array_name();
  if (tiledb_array_name_ == &::google::protobuf::internal::kEmptyString) {
    tiledb_array_name_ = new ::std::string;
  }
  tiledb_array_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ExportConfiguration::mutable_tiledb_array_name() {
  set_has_tiledb_array_name();
  if (tiledb_array_name_ == &::google::protobuf::internal::kEmptyString) {
    tiledb_array_name_ = new ::std::string;
  }
  return tiledb_array_name_;
}
inline ::std::string* ExportConfiguration::release_tiledb_array_name() {
  clear_has_tiledb_array_name();
  if (tiledb_array_name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = tiledb_array_name_;
    tiledb_array_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ExportConfiguration::set_allocated_tiledb_array_name(::std::string* tiledb_array_name) {
  if (tiledb_array_name_ != &::google::protobuf::internal::kEmptyString) {
    delete tiledb_array_name_;
  }
  if (tiledb_array_name) {
    set_has_tiledb_array_name();
    tiledb_array_name_ = tiledb_array_name;
  } else {
    clear_has_tiledb_array_name();
    tiledb_array_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string reference_genome = 3;
inline bool ExportConfiguration::has_reference_genome() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ExportConfiguration::set_has_reference_genome() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ExportConfiguration::clear_has_reference_genome() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ExportConfiguration::clear_reference_genome() {
  if (reference_genome_ != &::google::protobuf::internal::kEmptyString) {
    reference_genome_->clear();
  }
  clear_has_reference_genome();
}
inline const ::std::string& ExportConfiguration::reference_genome() const {
  return *reference_genome_;
}
inline void ExportConfiguration::set_reference_genome(const ::std::string& value) {
  set_has_reference_genome();
  if (reference_genome_ == &::google::protobuf::internal::kEmptyString) {
    reference_genome_ = new ::std::string;
  }
  reference_genome_->assign(value);
}
inline void ExportConfiguration::set_reference_genome(const char* value) {
  set_has_reference_genome();
  if (reference_genome_ == &::google::protobuf::internal::kEmptyString) {
    reference_genome_ = new ::std::string;
  }
  reference_genome_->assign(value);
}
inline void ExportConfiguration::set_reference_genome(const char* value, size_t size) {
  set_has_reference_genome();
  if (reference_genome_ == &::google::protobuf::internal::kEmptyString) {
    reference_genome_ = new ::std::string;
  }
  reference_genome_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ExportConfiguration::mutable_reference_genome() {
  set_has_reference_genome();
  if (reference_genome_ == &::google::protobuf::internal::kEmptyString) {
    reference_genome_ = new ::std::string;
  }
  return reference_genome_;
}
inline ::std::string* ExportConfiguration::release_reference_genome() {
  clear_has_reference_genome();
  if (reference_genome_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = reference_genome_;
    reference_genome_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ExportConfiguration::set_allocated_reference_genome(::std::string* reference_genome) {
  if (reference_genome_ != &::google::protobuf::internal::kEmptyString) {
    delete reference_genome_;
  }
  if (reference_genome) {
    set_has_reference_genome();
    reference_genome_ = reference_genome;
  } else {
    clear_has_reference_genome();
    reference_genome_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// repeated .ColumnRangeList query_column_ranges = 4;
inline int ExportConfiguration::query_column_ranges_size() const {
  return query_column_ranges_.size();
}
inline void ExportConfiguration::clear_query_column_ranges() {
  query_column_ranges_.Clear();
}
inline const ::ColumnRangeList& ExportConfiguration::query_column_ranges(int index) const {
  return query_column_ranges_.Get(index);
}
inline ::ColumnRangeList* ExportConfiguration::mutable_query_column_ranges(int index) {
  return query_column_ranges_.Mutable(index);
}
inline ::ColumnRangeList* ExportConfiguration::add_query_column_ranges() {
  return query_column_ranges_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ColumnRangeList >&
ExportConfiguration::query_column_ranges() const {
  return query_column_ranges_;
}
inline ::google::protobuf::RepeatedPtrField< ::ColumnRangeList >*
ExportConfiguration::mutable_query_column_ranges() {
  return &query_column_ranges_;
}

// repeated string attributes = 5;
inline int ExportConfiguration::attributes_size() const {
  return attributes_.size();
}
inline void ExportConfiguration::clear_attributes() {
  attributes_.Clear();
}
inline const ::std::string& ExportConfiguration::attributes(int index) const {
  return attributes_.Get(index);
}
inline ::std::string* ExportConfiguration::mutable_attributes(int index) {
  return attributes_.Mutable(index);
}
inline void ExportConfiguration::set_attributes(int index, const ::std::string& value) {
  attributes_.Mutable(index)->assign(value);
}
inline void ExportConfiguration::set_attributes(int index, const char* value) {
  attributes_.Mutable(index)->assign(value);
}
inline void ExportConfiguration::set_attributes(int index, const char* value, size_t size) {
  attributes_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ExportConfiguration::add_attributes() {
  return attributes_.Add();
}
inline void ExportConfiguration::add_attributes(const ::std::string& value) {
  attributes_.Add()->assign(value);
}
inline void ExportConfiguration::add_attributes(const char* value) {
  attributes_.Add()->assign(value);
}
inline void ExportConfiguration::add_attributes(const char* value, size_t size) {
  attributes_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
ExportConfiguration::attributes() const {
  return attributes_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
ExportConfiguration::mutable_attributes() {
  return &attributes_;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_genomicsdb_5fexport_5fconfig_2eproto__INCLUDED
