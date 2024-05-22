// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: terra_wasm_v1beta1_tx.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_terra_5fwasm_5fv1beta1_5ftx_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_terra_5fwasm_5fv1beta1_5ftx_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_terra_5fwasm_5fv1beta1_5ftx_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_terra_5fwasm_5fv1beta1_5ftx_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_terra_5fwasm_5fv1beta1_5ftx_2eproto;
namespace terra {
namespace wasm {
namespace v1beta1 {
class MsgExecuteContract;
struct MsgExecuteContractDefaultTypeInternal;
extern MsgExecuteContractDefaultTypeInternal _MsgExecuteContract_default_instance_;
}  // namespace v1beta1
}  // namespace wasm
}  // namespace terra
PROTOBUF_NAMESPACE_OPEN
template<> ::terra::wasm::v1beta1::MsgExecuteContract* Arena::CreateMaybeMessage<::terra::wasm::v1beta1::MsgExecuteContract>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace terra {
namespace wasm {
namespace v1beta1 {

// ===================================================================

class MsgExecuteContract final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:terra.wasm.v1beta1.MsgExecuteContract) */ {
 public:
  inline MsgExecuteContract() : MsgExecuteContract(nullptr) {}
  ~MsgExecuteContract() override;
  explicit constexpr MsgExecuteContract(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  MsgExecuteContract(const MsgExecuteContract& from);
  MsgExecuteContract(MsgExecuteContract&& from) noexcept
    : MsgExecuteContract() {
    *this = ::std::move(from);
  }

  inline MsgExecuteContract& operator=(const MsgExecuteContract& from) {
    CopyFrom(from);
    return *this;
  }
  inline MsgExecuteContract& operator=(MsgExecuteContract&& from) noexcept {
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
  static const MsgExecuteContract& default_instance() {
    return *internal_default_instance();
  }
  static inline const MsgExecuteContract* internal_default_instance() {
    return reinterpret_cast<const MsgExecuteContract*>(
               &_MsgExecuteContract_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(MsgExecuteContract& a, MsgExecuteContract& b) {
    a.Swap(&b);
  }
  inline void Swap(MsgExecuteContract* other) {
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
  void UnsafeArenaSwap(MsgExecuteContract* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MsgExecuteContract* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<MsgExecuteContract>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const MsgExecuteContract& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const MsgExecuteContract& from);
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
  void InternalSwap(MsgExecuteContract* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "terra.wasm.v1beta1.MsgExecuteContract";
  }
  protected:
  explicit MsgExecuteContract(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kCoinsFieldNumber = 5,
    kSenderFieldNumber = 1,
    kContractFieldNumber = 2,
    kExecuteMsgFieldNumber = 3,
  };
  // repeated .cosmos.base.v1beta1.Coin coins = 5;
  int coins_size() const;
  private:
  int _internal_coins_size() const;
  public:
  void clear_coins();
  ::cosmos::base::v1beta1::Coin* mutable_coins(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::cosmos::base::v1beta1::Coin >*
      mutable_coins();
  private:
  const ::cosmos::base::v1beta1::Coin& _internal_coins(int index) const;
  ::cosmos::base::v1beta1::Coin* _internal_add_coins();
  public:
  const ::cosmos::base::v1beta1::Coin& coins(int index) const;
  ::cosmos::base::v1beta1::Coin* add_coins();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::cosmos::base::v1beta1::Coin >&
      coins() const;

  // string sender = 1;
  void clear_sender();
  const std::string& sender() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_sender(ArgT0&& arg0, ArgT... args);
  std::string* mutable_sender();
  PROTOBUF_NODISCARD std::string* release_sender();
  void set_allocated_sender(std::string* sender);
  private:
  const std::string& _internal_sender() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_sender(const std::string& value);
  std::string* _internal_mutable_sender();
  public:

  // string contract = 2;
  void clear_contract();
  const std::string& contract() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_contract(ArgT0&& arg0, ArgT... args);
  std::string* mutable_contract();
  PROTOBUF_NODISCARD std::string* release_contract();
  void set_allocated_contract(std::string* contract);
  private:
  const std::string& _internal_contract() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_contract(const std::string& value);
  std::string* _internal_mutable_contract();
  public:

  // bytes execute_msg = 3;
  void clear_execute_msg();
  const std::string& execute_msg() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_execute_msg(ArgT0&& arg0, ArgT... args);
  std::string* mutable_execute_msg();
  PROTOBUF_NODISCARD std::string* release_execute_msg();
  void set_allocated_execute_msg(std::string* execute_msg);
  private:
  const std::string& _internal_execute_msg() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_execute_msg(const std::string& value);
  std::string* _internal_mutable_execute_msg();
  public:

  // @@protoc_insertion_point(class_scope:terra.wasm.v1beta1.MsgExecuteContract)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::cosmos::base::v1beta1::Coin > coins_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr sender_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr contract_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr execute_msg_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_terra_5fwasm_5fv1beta1_5ftx_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MsgExecuteContract

// string sender = 1;
inline void MsgExecuteContract::clear_sender() {
  sender_.ClearToEmpty();
}
inline const std::string& MsgExecuteContract::sender() const {
  // @@protoc_insertion_point(field_get:terra.wasm.v1beta1.MsgExecuteContract.sender)
  return _internal_sender();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void MsgExecuteContract::set_sender(ArgT0&& arg0, ArgT... args) {
 
 sender_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:terra.wasm.v1beta1.MsgExecuteContract.sender)
}
inline std::string* MsgExecuteContract::mutable_sender() {
  std::string* _s = _internal_mutable_sender();
  // @@protoc_insertion_point(field_mutable:terra.wasm.v1beta1.MsgExecuteContract.sender)
  return _s;
}
inline const std::string& MsgExecuteContract::_internal_sender() const {
  return sender_.Get();
}
inline void MsgExecuteContract::_internal_set_sender(const std::string& value) {
  
  sender_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* MsgExecuteContract::_internal_mutable_sender() {
  
  return sender_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* MsgExecuteContract::release_sender() {
  // @@protoc_insertion_point(field_release:terra.wasm.v1beta1.MsgExecuteContract.sender)
  return sender_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void MsgExecuteContract::set_allocated_sender(std::string* sender) {
  if (sender != nullptr) {
    
  } else {
    
  }
  sender_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), sender,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (sender_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    sender_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:terra.wasm.v1beta1.MsgExecuteContract.sender)
}

// string contract = 2;
inline void MsgExecuteContract::clear_contract() {
  contract_.ClearToEmpty();
}
inline const std::string& MsgExecuteContract::contract() const {
  // @@protoc_insertion_point(field_get:terra.wasm.v1beta1.MsgExecuteContract.contract)
  return _internal_contract();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void MsgExecuteContract::set_contract(ArgT0&& arg0, ArgT... args) {
 
 contract_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:terra.wasm.v1beta1.MsgExecuteContract.contract)
}
inline std::string* MsgExecuteContract::mutable_contract() {
  std::string* _s = _internal_mutable_contract();
  // @@protoc_insertion_point(field_mutable:terra.wasm.v1beta1.MsgExecuteContract.contract)
  return _s;
}
inline const std::string& MsgExecuteContract::_internal_contract() const {
  return contract_.Get();
}
inline void MsgExecuteContract::_internal_set_contract(const std::string& value) {
  
  contract_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* MsgExecuteContract::_internal_mutable_contract() {
  
  return contract_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* MsgExecuteContract::release_contract() {
  // @@protoc_insertion_point(field_release:terra.wasm.v1beta1.MsgExecuteContract.contract)
  return contract_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void MsgExecuteContract::set_allocated_contract(std::string* contract) {
  if (contract != nullptr) {
    
  } else {
    
  }
  contract_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), contract,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (contract_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    contract_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:terra.wasm.v1beta1.MsgExecuteContract.contract)
}

// bytes execute_msg = 3;
inline void MsgExecuteContract::clear_execute_msg() {
  execute_msg_.ClearToEmpty();
}
inline const std::string& MsgExecuteContract::execute_msg() const {
  // @@protoc_insertion_point(field_get:terra.wasm.v1beta1.MsgExecuteContract.execute_msg)
  return _internal_execute_msg();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void MsgExecuteContract::set_execute_msg(ArgT0&& arg0, ArgT... args) {
 
 execute_msg_.SetBytes(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:terra.wasm.v1beta1.MsgExecuteContract.execute_msg)
}
inline std::string* MsgExecuteContract::mutable_execute_msg() {
  std::string* _s = _internal_mutable_execute_msg();
  // @@protoc_insertion_point(field_mutable:terra.wasm.v1beta1.MsgExecuteContract.execute_msg)
  return _s;
}
inline const std::string& MsgExecuteContract::_internal_execute_msg() const {
  return execute_msg_.Get();
}
inline void MsgExecuteContract::_internal_set_execute_msg(const std::string& value) {
  
  execute_msg_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* MsgExecuteContract::_internal_mutable_execute_msg() {
  
  return execute_msg_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* MsgExecuteContract::release_execute_msg() {
  // @@protoc_insertion_point(field_release:terra.wasm.v1beta1.MsgExecuteContract.execute_msg)
  return execute_msg_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void MsgExecuteContract::set_allocated_execute_msg(std::string* execute_msg) {
  if (execute_msg != nullptr) {
    
  } else {
    
  }
  execute_msg_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), execute_msg,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (execute_msg_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    execute_msg_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:terra.wasm.v1beta1.MsgExecuteContract.execute_msg)
}

// repeated .cosmos.base.v1beta1.Coin coins = 5;
inline int MsgExecuteContract::_internal_coins_size() const {
  return coins_.size();
}
inline int MsgExecuteContract::coins_size() const {
  return _internal_coins_size();
}
inline ::cosmos::base::v1beta1::Coin* MsgExecuteContract::mutable_coins(int index) {
  // @@protoc_insertion_point(field_mutable:terra.wasm.v1beta1.MsgExecuteContract.coins)
  return coins_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::cosmos::base::v1beta1::Coin >*
MsgExecuteContract::mutable_coins() {
  // @@protoc_insertion_point(field_mutable_list:terra.wasm.v1beta1.MsgExecuteContract.coins)
  return &coins_;
}
inline const ::cosmos::base::v1beta1::Coin& MsgExecuteContract::_internal_coins(int index) const {
  return coins_.Get(index);
}
inline const ::cosmos::base::v1beta1::Coin& MsgExecuteContract::coins(int index) const {
  // @@protoc_insertion_point(field_get:terra.wasm.v1beta1.MsgExecuteContract.coins)
  return _internal_coins(index);
}
inline ::cosmos::base::v1beta1::Coin* MsgExecuteContract::_internal_add_coins() {
  return coins_.Add();
}
inline ::cosmos::base::v1beta1::Coin* MsgExecuteContract::add_coins() {
  ::cosmos::base::v1beta1::Coin* _add = _internal_add_coins();
  // @@protoc_insertion_point(field_add:terra.wasm.v1beta1.MsgExecuteContract.coins)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::cosmos::base::v1beta1::Coin >&
MsgExecuteContract::coins() const {
  // @@protoc_insertion_point(field_list:terra.wasm.v1beta1.MsgExecuteContract.coins)
  return coins_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1beta1
}  // namespace wasm
}  // namespace terra

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_terra_5fwasm_5fv1beta1_5ftx_2eproto