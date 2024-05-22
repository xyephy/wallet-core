// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: greenfield_tx.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_greenfield_5ftx_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_greenfield_5ftx_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_greenfield_5ftx_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_greenfield_5ftx_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_greenfield_5ftx_2eproto;
namespace greenfield {
namespace bridge {
class MsgTransferOut;
struct MsgTransferOutDefaultTypeInternal;
extern MsgTransferOutDefaultTypeInternal _MsgTransferOut_default_instance_;
}  // namespace bridge
}  // namespace greenfield
PROTOBUF_NAMESPACE_OPEN
template<> ::greenfield::bridge::MsgTransferOut* Arena::CreateMaybeMessage<::greenfield::bridge::MsgTransferOut>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace greenfield {
namespace bridge {

// ===================================================================

class MsgTransferOut final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:greenfield.bridge.MsgTransferOut) */ {
 public:
  inline MsgTransferOut() : MsgTransferOut(nullptr) {}
  ~MsgTransferOut() override;
  explicit constexpr MsgTransferOut(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  MsgTransferOut(const MsgTransferOut& from);
  MsgTransferOut(MsgTransferOut&& from) noexcept
    : MsgTransferOut() {
    *this = ::std::move(from);
  }

  inline MsgTransferOut& operator=(const MsgTransferOut& from) {
    CopyFrom(from);
    return *this;
  }
  inline MsgTransferOut& operator=(MsgTransferOut&& from) noexcept {
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
  static const MsgTransferOut& default_instance() {
    return *internal_default_instance();
  }
  static inline const MsgTransferOut* internal_default_instance() {
    return reinterpret_cast<const MsgTransferOut*>(
               &_MsgTransferOut_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(MsgTransferOut& a, MsgTransferOut& b) {
    a.Swap(&b);
  }
  inline void Swap(MsgTransferOut* other) {
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
  void UnsafeArenaSwap(MsgTransferOut* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MsgTransferOut* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<MsgTransferOut>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const MsgTransferOut& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const MsgTransferOut& from);
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
  void InternalSwap(MsgTransferOut* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "greenfield.bridge.MsgTransferOut";
  }
  protected:
  explicit MsgTransferOut(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kFromFieldNumber = 1,
    kToFieldNumber = 2,
    kAmountFieldNumber = 3,
  };
  // string from = 1;
  void clear_from();
  const std::string& from() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_from(ArgT0&& arg0, ArgT... args);
  std::string* mutable_from();
  PROTOBUF_NODISCARD std::string* release_from();
  void set_allocated_from(std::string* from);
  private:
  const std::string& _internal_from() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_from(const std::string& value);
  std::string* _internal_mutable_from();
  public:

  // string to = 2;
  void clear_to();
  const std::string& to() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_to(ArgT0&& arg0, ArgT... args);
  std::string* mutable_to();
  PROTOBUF_NODISCARD std::string* release_to();
  void set_allocated_to(std::string* to);
  private:
  const std::string& _internal_to() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_to(const std::string& value);
  std::string* _internal_mutable_to();
  public:

  // .cosmos.base.v1beta1.Coin amount = 3;
  bool has_amount() const;
  private:
  bool _internal_has_amount() const;
  public:
  void clear_amount();
  const ::cosmos::base::v1beta1::Coin& amount() const;
  PROTOBUF_NODISCARD ::cosmos::base::v1beta1::Coin* release_amount();
  ::cosmos::base::v1beta1::Coin* mutable_amount();
  void set_allocated_amount(::cosmos::base::v1beta1::Coin* amount);
  private:
  const ::cosmos::base::v1beta1::Coin& _internal_amount() const;
  ::cosmos::base::v1beta1::Coin* _internal_mutable_amount();
  public:
  void unsafe_arena_set_allocated_amount(
      ::cosmos::base::v1beta1::Coin* amount);
  ::cosmos::base::v1beta1::Coin* unsafe_arena_release_amount();

  // @@protoc_insertion_point(class_scope:greenfield.bridge.MsgTransferOut)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr from_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr to_;
  ::cosmos::base::v1beta1::Coin* amount_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_greenfield_5ftx_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MsgTransferOut

// string from = 1;
inline void MsgTransferOut::clear_from() {
  from_.ClearToEmpty();
}
inline const std::string& MsgTransferOut::from() const {
  // @@protoc_insertion_point(field_get:greenfield.bridge.MsgTransferOut.from)
  return _internal_from();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void MsgTransferOut::set_from(ArgT0&& arg0, ArgT... args) {
 
 from_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:greenfield.bridge.MsgTransferOut.from)
}
inline std::string* MsgTransferOut::mutable_from() {
  std::string* _s = _internal_mutable_from();
  // @@protoc_insertion_point(field_mutable:greenfield.bridge.MsgTransferOut.from)
  return _s;
}
inline const std::string& MsgTransferOut::_internal_from() const {
  return from_.Get();
}
inline void MsgTransferOut::_internal_set_from(const std::string& value) {
  
  from_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* MsgTransferOut::_internal_mutable_from() {
  
  return from_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* MsgTransferOut::release_from() {
  // @@protoc_insertion_point(field_release:greenfield.bridge.MsgTransferOut.from)
  return from_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void MsgTransferOut::set_allocated_from(std::string* from) {
  if (from != nullptr) {
    
  } else {
    
  }
  from_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    from_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:greenfield.bridge.MsgTransferOut.from)
}

// string to = 2;
inline void MsgTransferOut::clear_to() {
  to_.ClearToEmpty();
}
inline const std::string& MsgTransferOut::to() const {
  // @@protoc_insertion_point(field_get:greenfield.bridge.MsgTransferOut.to)
  return _internal_to();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void MsgTransferOut::set_to(ArgT0&& arg0, ArgT... args) {
 
 to_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:greenfield.bridge.MsgTransferOut.to)
}
inline std::string* MsgTransferOut::mutable_to() {
  std::string* _s = _internal_mutable_to();
  // @@protoc_insertion_point(field_mutable:greenfield.bridge.MsgTransferOut.to)
  return _s;
}
inline const std::string& MsgTransferOut::_internal_to() const {
  return to_.Get();
}
inline void MsgTransferOut::_internal_set_to(const std::string& value) {
  
  to_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* MsgTransferOut::_internal_mutable_to() {
  
  return to_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* MsgTransferOut::release_to() {
  // @@protoc_insertion_point(field_release:greenfield.bridge.MsgTransferOut.to)
  return to_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void MsgTransferOut::set_allocated_to(std::string* to) {
  if (to != nullptr) {
    
  } else {
    
  }
  to_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), to,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (to_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    to_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:greenfield.bridge.MsgTransferOut.to)
}

// .cosmos.base.v1beta1.Coin amount = 3;
inline bool MsgTransferOut::_internal_has_amount() const {
  return this != internal_default_instance() && amount_ != nullptr;
}
inline bool MsgTransferOut::has_amount() const {
  return _internal_has_amount();
}
inline const ::cosmos::base::v1beta1::Coin& MsgTransferOut::_internal_amount() const {
  const ::cosmos::base::v1beta1::Coin* p = amount_;
  return p != nullptr ? *p : reinterpret_cast<const ::cosmos::base::v1beta1::Coin&>(
      ::cosmos::base::v1beta1::_Coin_default_instance_);
}
inline const ::cosmos::base::v1beta1::Coin& MsgTransferOut::amount() const {
  // @@protoc_insertion_point(field_get:greenfield.bridge.MsgTransferOut.amount)
  return _internal_amount();
}
inline void MsgTransferOut::unsafe_arena_set_allocated_amount(
    ::cosmos::base::v1beta1::Coin* amount) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(amount_);
  }
  amount_ = amount;
  if (amount) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:greenfield.bridge.MsgTransferOut.amount)
}
inline ::cosmos::base::v1beta1::Coin* MsgTransferOut::release_amount() {
  
  ::cosmos::base::v1beta1::Coin* temp = amount_;
  amount_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::cosmos::base::v1beta1::Coin* MsgTransferOut::unsafe_arena_release_amount() {
  // @@protoc_insertion_point(field_release:greenfield.bridge.MsgTransferOut.amount)
  
  ::cosmos::base::v1beta1::Coin* temp = amount_;
  amount_ = nullptr;
  return temp;
}
inline ::cosmos::base::v1beta1::Coin* MsgTransferOut::_internal_mutable_amount() {
  
  if (amount_ == nullptr) {
    auto* p = CreateMaybeMessage<::cosmos::base::v1beta1::Coin>(GetArenaForAllocation());
    amount_ = p;
  }
  return amount_;
}
inline ::cosmos::base::v1beta1::Coin* MsgTransferOut::mutable_amount() {
  ::cosmos::base::v1beta1::Coin* _msg = _internal_mutable_amount();
  // @@protoc_insertion_point(field_mutable:greenfield.bridge.MsgTransferOut.amount)
  return _msg;
}
inline void MsgTransferOut::set_allocated_amount(::cosmos::base::v1beta1::Coin* amount) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(amount_);
  }
  if (amount) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<
            ::PROTOBUF_NAMESPACE_ID::MessageLite>::GetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(amount));
    if (message_arena != submessage_arena) {
      amount = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, amount, submessage_arena);
    }
    
  } else {
    
  }
  amount_ = amount;
  // @@protoc_insertion_point(field_set_allocated:greenfield.bridge.MsgTransferOut.amount)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace bridge
}  // namespace greenfield

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_greenfield_5ftx_2eproto