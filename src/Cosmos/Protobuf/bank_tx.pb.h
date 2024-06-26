// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: bank_tx.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_bank_5ftx_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_bank_5ftx_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019002 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "coin.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_bank_5ftx_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_bank_5ftx_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_bank_5ftx_2eproto;
namespace cosmos {
namespace bank {
namespace v1beta1 {
class MsgSend;
struct MsgSendDefaultTypeInternal;
extern MsgSendDefaultTypeInternal _MsgSend_default_instance_;
}  // namespace v1beta1
}  // namespace bank
}  // namespace cosmos
PROTOBUF_NAMESPACE_OPEN
template<> ::cosmos::bank::v1beta1::MsgSend* Arena::CreateMaybeMessage<::cosmos::bank::v1beta1::MsgSend>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace cosmos {
namespace bank {
namespace v1beta1 {

// ===================================================================

class MsgSend final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:cosmos.bank.v1beta1.MsgSend) */ {
 public:
  inline MsgSend() : MsgSend(nullptr) {}
  ~MsgSend() override;
  explicit constexpr MsgSend(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  MsgSend(const MsgSend& from);
  MsgSend(MsgSend&& from) noexcept
    : MsgSend() {
    *this = ::std::move(from);
  }

  inline MsgSend& operator=(const MsgSend& from) {
    CopyFrom(from);
    return *this;
  }
  inline MsgSend& operator=(MsgSend&& from) noexcept {
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

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const MsgSend& default_instance() {
    return *internal_default_instance();
  }
  static inline const MsgSend* internal_default_instance() {
    return reinterpret_cast<const MsgSend*>(
               &_MsgSend_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(MsgSend& a, MsgSend& b) {
    a.Swap(&b);
  }
  inline void Swap(MsgSend* other) {
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
  void UnsafeArenaSwap(MsgSend* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MsgSend* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<MsgSend>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const MsgSend& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const MsgSend& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(MsgSend* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "cosmos.bank.v1beta1.MsgSend";
  }
  protected:
  explicit MsgSend(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAmountFieldNumber = 3,
    kFromAddressFieldNumber = 1,
    kToAddressFieldNumber = 2,
  };
  // repeated .cosmos.base.v1beta1.Coin amount = 3;
  int amount_size() const;
  private:
  int _internal_amount_size() const;
  public:
  void clear_amount();
  ::cosmos::base::v1beta1::Coin* mutable_amount(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::cosmos::base::v1beta1::Coin >*
      mutable_amount();
  private:
  const ::cosmos::base::v1beta1::Coin& _internal_amount(int index) const;
  ::cosmos::base::v1beta1::Coin* _internal_add_amount();
  public:
  const ::cosmos::base::v1beta1::Coin& amount(int index) const;
  ::cosmos::base::v1beta1::Coin* add_amount();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::cosmos::base::v1beta1::Coin >&
      amount() const;

  // string from_address = 1;
  void clear_from_address();
  const std::string& from_address() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_from_address(ArgT0&& arg0, ArgT... args);
  std::string* mutable_from_address();
  PROTOBUF_NODISCARD std::string* release_from_address();
  void set_allocated_from_address(std::string* from_address);
  private:
  const std::string& _internal_from_address() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_from_address(const std::string& value);
  std::string* _internal_mutable_from_address();
  public:

  // string to_address = 2;
  void clear_to_address();
  const std::string& to_address() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_to_address(ArgT0&& arg0, ArgT... args);
  std::string* mutable_to_address();
  PROTOBUF_NODISCARD std::string* release_to_address();
  void set_allocated_to_address(std::string* to_address);
  private:
  const std::string& _internal_to_address() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_to_address(const std::string& value);
  std::string* _internal_mutable_to_address();
  public:

  // @@protoc_insertion_point(class_scope:cosmos.bank.v1beta1.MsgSend)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::cosmos::base::v1beta1::Coin > amount_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr from_address_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr to_address_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_bank_5ftx_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MsgSend

// string from_address = 1;
inline void MsgSend::clear_from_address() {
  from_address_.ClearToEmpty();
}
inline const std::string& MsgSend::from_address() const {
  // @@protoc_insertion_point(field_get:cosmos.bank.v1beta1.MsgSend.from_address)
  return _internal_from_address();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void MsgSend::set_from_address(ArgT0&& arg0, ArgT... args) {
 
 from_address_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:cosmos.bank.v1beta1.MsgSend.from_address)
}
inline std::string* MsgSend::mutable_from_address() {
  std::string* _s = _internal_mutable_from_address();
  // @@protoc_insertion_point(field_mutable:cosmos.bank.v1beta1.MsgSend.from_address)
  return _s;
}
inline const std::string& MsgSend::_internal_from_address() const {
  return from_address_.Get();
}
inline void MsgSend::_internal_set_from_address(const std::string& value) {
  
  from_address_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* MsgSend::_internal_mutable_from_address() {
  
  return from_address_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* MsgSend::release_from_address() {
  // @@protoc_insertion_point(field_release:cosmos.bank.v1beta1.MsgSend.from_address)
  return from_address_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void MsgSend::set_allocated_from_address(std::string* from_address) {
  if (from_address != nullptr) {
    
  } else {
    
  }
  from_address_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from_address,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from_address_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    from_address_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:cosmos.bank.v1beta1.MsgSend.from_address)
}

// string to_address = 2;
inline void MsgSend::clear_to_address() {
  to_address_.ClearToEmpty();
}
inline const std::string& MsgSend::to_address() const {
  // @@protoc_insertion_point(field_get:cosmos.bank.v1beta1.MsgSend.to_address)
  return _internal_to_address();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void MsgSend::set_to_address(ArgT0&& arg0, ArgT... args) {
 
 to_address_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:cosmos.bank.v1beta1.MsgSend.to_address)
}
inline std::string* MsgSend::mutable_to_address() {
  std::string* _s = _internal_mutable_to_address();
  // @@protoc_insertion_point(field_mutable:cosmos.bank.v1beta1.MsgSend.to_address)
  return _s;
}
inline const std::string& MsgSend::_internal_to_address() const {
  return to_address_.Get();
}
inline void MsgSend::_internal_set_to_address(const std::string& value) {
  
  to_address_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* MsgSend::_internal_mutable_to_address() {
  
  return to_address_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* MsgSend::release_to_address() {
  // @@protoc_insertion_point(field_release:cosmos.bank.v1beta1.MsgSend.to_address)
  return to_address_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void MsgSend::set_allocated_to_address(std::string* to_address) {
  if (to_address != nullptr) {
    
  } else {
    
  }
  to_address_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), to_address,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (to_address_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    to_address_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:cosmos.bank.v1beta1.MsgSend.to_address)
}

// repeated .cosmos.base.v1beta1.Coin amount = 3;
inline int MsgSend::_internal_amount_size() const {
  return amount_.size();
}
inline int MsgSend::amount_size() const {
  return _internal_amount_size();
}
inline ::cosmos::base::v1beta1::Coin* MsgSend::mutable_amount(int index) {
  // @@protoc_insertion_point(field_mutable:cosmos.bank.v1beta1.MsgSend.amount)
  return amount_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::cosmos::base::v1beta1::Coin >*
MsgSend::mutable_amount() {
  // @@protoc_insertion_point(field_mutable_list:cosmos.bank.v1beta1.MsgSend.amount)
  return &amount_;
}
inline const ::cosmos::base::v1beta1::Coin& MsgSend::_internal_amount(int index) const {
  return amount_.Get(index);
}
inline const ::cosmos::base::v1beta1::Coin& MsgSend::amount(int index) const {
  // @@protoc_insertion_point(field_get:cosmos.bank.v1beta1.MsgSend.amount)
  return _internal_amount(index);
}
inline ::cosmos::base::v1beta1::Coin* MsgSend::_internal_add_amount() {
  return amount_.Add();
}
inline ::cosmos::base::v1beta1::Coin* MsgSend::add_amount() {
  ::cosmos::base::v1beta1::Coin* _add = _internal_add_amount();
  // @@protoc_insertion_point(field_add:cosmos.bank.v1beta1.MsgSend.amount)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::cosmos::base::v1beta1::Coin >&
MsgSend::amount() const {
  // @@protoc_insertion_point(field_list:cosmos.bank.v1beta1.MsgSend.amount)
  return amount_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1beta1
}  // namespace bank
}  // namespace cosmos

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_bank_5ftx_2eproto
