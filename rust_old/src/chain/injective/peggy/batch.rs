// This file is generated by rust-protobuf 2.28.0. Do not edit
// @generated

// https://github.com/rust-lang/rust-clippy/issues/702
#![allow(unknown_lints)]
#![allow(clippy::all)]

#![allow(unused_attributes)]
#![cfg_attr(rustfmt, rustfmt::skip)]

#![allow(box_pointers)]
#![allow(dead_code)]
#![allow(missing_docs)]
#![allow(non_camel_case_types)]
#![allow(non_snake_case)]
#![allow(non_upper_case_globals)]
#![allow(trivial_casts)]
#![allow(unused_imports)]
#![allow(unused_results)]
//! Generated file from `injective/peggy/v1/batch.proto`

/// Generated files are compatible only with the same version
/// of protobuf runtime.
// const _PROTOBUF_VERSION_CHECK: () = ::protobuf::VERSION_2_28_0;

#[derive(PartialEq,Clone,Default,Debug)]
pub struct OutgoingTxBatch {
    // message fields
    pub batch_nonce: u64,
    pub batch_timeout: u64,
    pub transactions: ::protobuf::RepeatedField<OutgoingTransferTx>,
    pub token_contract: ::std::string::String,
    pub block: u64,
    // special fields
    pub unknown_fields: ::protobuf::UnknownFields,
    pub cached_size: ::protobuf::CachedSize,
}

impl<'a> ::std::default::Default for &'a OutgoingTxBatch {
    fn default() -> &'a OutgoingTxBatch {
        <OutgoingTxBatch as ::protobuf::Message>::default_instance()
    }
}

impl OutgoingTxBatch {
    pub fn new() -> OutgoingTxBatch {
        ::std::default::Default::default()
    }

    // uint64 batch_nonce = 1;


    pub fn get_batch_nonce(&self) -> u64 {
        self.batch_nonce
    }
    pub fn clear_batch_nonce(&mut self) {
        self.batch_nonce = 0;
    }

    // Param is passed by value, moved
    pub fn set_batch_nonce(&mut self, v: u64) {
        self.batch_nonce = v;
    }

    // uint64 batch_timeout = 2;


    pub fn get_batch_timeout(&self) -> u64 {
        self.batch_timeout
    }
    pub fn clear_batch_timeout(&mut self) {
        self.batch_timeout = 0;
    }

    // Param is passed by value, moved
    pub fn set_batch_timeout(&mut self, v: u64) {
        self.batch_timeout = v;
    }

    // repeated .injective.peggy.v1.OutgoingTransferTx transactions = 3;


    pub fn get_transactions(&self) -> &[OutgoingTransferTx] {
        &self.transactions
    }
    pub fn clear_transactions(&mut self) {
        self.transactions.clear();
    }

    // Param is passed by value, moved
    pub fn set_transactions(&mut self, v: ::protobuf::RepeatedField<OutgoingTransferTx>) {
        self.transactions = v;
    }

    // Mutable pointer to the field.
    pub fn mut_transactions(&mut self) -> &mut ::protobuf::RepeatedField<OutgoingTransferTx> {
        &mut self.transactions
    }

    // Take field
    pub fn take_transactions(&mut self) -> ::protobuf::RepeatedField<OutgoingTransferTx> {
        ::std::mem::replace(&mut self.transactions, ::protobuf::RepeatedField::new())
    }

    // string token_contract = 4;


    pub fn get_token_contract(&self) -> &str {
        &self.token_contract
    }
    pub fn clear_token_contract(&mut self) {
        self.token_contract.clear();
    }

    // Param is passed by value, moved
    pub fn set_token_contract(&mut self, v: ::std::string::String) {
        self.token_contract = v;
    }

    // Mutable pointer to the field.
    // If field is not initialized, it is initialized with default value first.
    pub fn mut_token_contract(&mut self) -> &mut ::std::string::String {
        &mut self.token_contract
    }

    // Take field
    pub fn take_token_contract(&mut self) -> ::std::string::String {
        ::std::mem::replace(&mut self.token_contract, ::std::string::String::new())
    }

    // uint64 block = 5;


    pub fn get_block(&self) -> u64 {
        self.block
    }
    pub fn clear_block(&mut self) {
        self.block = 0;
    }

    // Param is passed by value, moved
    pub fn set_block(&mut self, v: u64) {
        self.block = v;
    }
}

impl ::protobuf::Message for OutgoingTxBatch {
    fn is_initialized(&self) -> bool {
        for v in &self.transactions {
            if !v.is_initialized() {
                return false;
            }
        };
        true
    }

    fn merge_from(&mut self, is: &mut ::protobuf::CodedInputStream<'_>) -> ::protobuf::ProtobufResult<()> {
        while !is.eof()? {
            let (field_number, wire_type) = is.read_tag_unpack()?;
            match field_number {
                1 => {
                    if wire_type != ::protobuf::wire_format::WireTypeVarint {
                        return ::std::result::Result::Err(::protobuf::rt::unexpected_wire_type(wire_type));
                    }
                    let tmp = is.read_uint64()?;
                    self.batch_nonce = tmp;
                },
                2 => {
                    if wire_type != ::protobuf::wire_format::WireTypeVarint {
                        return ::std::result::Result::Err(::protobuf::rt::unexpected_wire_type(wire_type));
                    }
                    let tmp = is.read_uint64()?;
                    self.batch_timeout = tmp;
                },
                3 => {
                    ::protobuf::rt::read_repeated_message_into(wire_type, is, &mut self.transactions)?;
                },
                4 => {
                    ::protobuf::rt::read_singular_proto3_string_into(wire_type, is, &mut self.token_contract)?;
                },
                5 => {
                    if wire_type != ::protobuf::wire_format::WireTypeVarint {
                        return ::std::result::Result::Err(::protobuf::rt::unexpected_wire_type(wire_type));
                    }
                    let tmp = is.read_uint64()?;
                    self.block = tmp;
                },
                _ => {
                    ::protobuf::rt::read_unknown_or_skip_group(field_number, wire_type, is, self.mut_unknown_fields())?;
                },
            };
        }
        ::std::result::Result::Ok(())
    }

    // Compute sizes of nested messages
    #[allow(unused_variables)]
    fn compute_size(&self) -> u32 {
        let mut my_size = 0;
        if self.batch_nonce != 0 {
            my_size += ::protobuf::rt::value_size(1, self.batch_nonce, ::protobuf::wire_format::WireTypeVarint);
        }
        if self.batch_timeout != 0 {
            my_size += ::protobuf::rt::value_size(2, self.batch_timeout, ::protobuf::wire_format::WireTypeVarint);
        }
        for value in &self.transactions {
            let len = value.compute_size();
            my_size += 1 + ::protobuf::rt::compute_raw_varint32_size(len) + len;
        };
        if !self.token_contract.is_empty() {
            my_size += ::protobuf::rt::string_size(4, &self.token_contract);
        }
        if self.block != 0 {
            my_size += ::protobuf::rt::value_size(5, self.block, ::protobuf::wire_format::WireTypeVarint);
        }
        my_size += ::protobuf::rt::unknown_fields_size(self.get_unknown_fields());
        self.cached_size.set(my_size);
        my_size
    }

    fn write_to_with_cached_sizes(&self, os: &mut ::protobuf::CodedOutputStream<'_>) -> ::protobuf::ProtobufResult<()> {
        if self.batch_nonce != 0 {
            os.write_uint64(1, self.batch_nonce)?;
        }
        if self.batch_timeout != 0 {
            os.write_uint64(2, self.batch_timeout)?;
        }
        for v in &self.transactions {
            os.write_tag(3, ::protobuf::wire_format::WireTypeLengthDelimited)?;
            os.write_raw_varint32(v.get_cached_size())?;
            v.write_to_with_cached_sizes(os)?;
        };
        if !self.token_contract.is_empty() {
            os.write_string(4, &self.token_contract)?;
        }
        if self.block != 0 {
            os.write_uint64(5, self.block)?;
        }
        os.write_unknown_fields(self.get_unknown_fields())?;
        ::std::result::Result::Ok(())
    }

    fn get_cached_size(&self) -> u32 {
        self.cached_size.get()
    }

    fn get_unknown_fields(&self) -> &::protobuf::UnknownFields {
        &self.unknown_fields
    }

    fn mut_unknown_fields(&mut self) -> &mut ::protobuf::UnknownFields {
        &mut self.unknown_fields
    }

    fn as_any(&self) -> &dyn (::std::any::Any) {
        self as &dyn (::std::any::Any)
    }
    fn as_any_mut(&mut self) -> &mut dyn (::std::any::Any) {
        self as &mut dyn (::std::any::Any)
    }
    fn into_any(self: ::std::boxed::Box<Self>) -> ::std::boxed::Box<dyn (::std::any::Any)> {
        self
    }

    fn descriptor(&self) -> &'static ::protobuf::reflect::MessageDescriptor {
        Self::descriptor_static()
    }

    fn new() -> OutgoingTxBatch {
        OutgoingTxBatch::new()
    }

    fn default_instance() -> &'static OutgoingTxBatch {
        static instance: ::protobuf::rt::LazyV2<OutgoingTxBatch> = ::protobuf::rt::LazyV2::INIT;
        instance.get(OutgoingTxBatch::new)
    }
}

impl ::protobuf::Clear for OutgoingTxBatch {
    fn clear(&mut self) {
        self.batch_nonce = 0;
        self.batch_timeout = 0;
        self.transactions.clear();
        self.token_contract.clear();
        self.block = 0;
        self.unknown_fields.clear();
    }
}

impl ::protobuf::reflect::ProtobufValue for OutgoingTxBatch {
    fn as_ref(&self) -> ::protobuf::reflect::ReflectValueRef {
        ::protobuf::reflect::ReflectValueRef::Message(self)
    }
}

#[derive(PartialEq,Clone,Default,Debug)]
pub struct OutgoingTransferTx {
    // message fields
    pub id: u64,
    pub sender: ::std::string::String,
    pub dest_address: ::std::string::String,
    pub erc20_token: ::protobuf::SingularPtrField<super::attestation::ERC20Token>,
    pub erc20_fee: ::protobuf::SingularPtrField<super::attestation::ERC20Token>,
    // special fields
    pub unknown_fields: ::protobuf::UnknownFields,
    pub cached_size: ::protobuf::CachedSize,
}

impl<'a> ::std::default::Default for &'a OutgoingTransferTx {
    fn default() -> &'a OutgoingTransferTx {
        <OutgoingTransferTx as ::protobuf::Message>::default_instance()
    }
}

impl OutgoingTransferTx {
    pub fn new() -> OutgoingTransferTx {
        ::std::default::Default::default()
    }

    // uint64 id = 1;


    pub fn get_id(&self) -> u64 {
        self.id
    }
    pub fn clear_id(&mut self) {
        self.id = 0;
    }

    // Param is passed by value, moved
    pub fn set_id(&mut self, v: u64) {
        self.id = v;
    }

    // string sender = 2;


    pub fn get_sender(&self) -> &str {
        &self.sender
    }
    pub fn clear_sender(&mut self) {
        self.sender.clear();
    }

    // Param is passed by value, moved
    pub fn set_sender(&mut self, v: ::std::string::String) {
        self.sender = v;
    }

    // Mutable pointer to the field.
    // If field is not initialized, it is initialized with default value first.
    pub fn mut_sender(&mut self) -> &mut ::std::string::String {
        &mut self.sender
    }

    // Take field
    pub fn take_sender(&mut self) -> ::std::string::String {
        ::std::mem::replace(&mut self.sender, ::std::string::String::new())
    }

    // string dest_address = 3;


    pub fn get_dest_address(&self) -> &str {
        &self.dest_address
    }
    pub fn clear_dest_address(&mut self) {
        self.dest_address.clear();
    }

    // Param is passed by value, moved
    pub fn set_dest_address(&mut self, v: ::std::string::String) {
        self.dest_address = v;
    }

    // Mutable pointer to the field.
    // If field is not initialized, it is initialized with default value first.
    pub fn mut_dest_address(&mut self) -> &mut ::std::string::String {
        &mut self.dest_address
    }

    // Take field
    pub fn take_dest_address(&mut self) -> ::std::string::String {
        ::std::mem::replace(&mut self.dest_address, ::std::string::String::new())
    }

    // .injective.peggy.v1.ERC20Token erc20_token = 4;


    pub fn get_erc20_token(&self) -> &super::attestation::ERC20Token {
        self.erc20_token.as_ref().unwrap_or_else(|| <super::attestation::ERC20Token as ::protobuf::Message>::default_instance())
    }
    pub fn clear_erc20_token(&mut self) {
        self.erc20_token.clear();
    }

    pub fn has_erc20_token(&self) -> bool {
        self.erc20_token.is_some()
    }

    // Param is passed by value, moved
    pub fn set_erc20_token(&mut self, v: super::attestation::ERC20Token) {
        self.erc20_token = ::protobuf::SingularPtrField::some(v);
    }

    // Mutable pointer to the field.
    // If field is not initialized, it is initialized with default value first.
    pub fn mut_erc20_token(&mut self) -> &mut super::attestation::ERC20Token {
        if self.erc20_token.is_none() {
            self.erc20_token.set_default();
        }
        self.erc20_token.as_mut().unwrap()
    }

    // Take field
    pub fn take_erc20_token(&mut self) -> super::attestation::ERC20Token {
        self.erc20_token.take().unwrap_or_else(|| super::attestation::ERC20Token::new())
    }

    // .injective.peggy.v1.ERC20Token erc20_fee = 5;


    pub fn get_erc20_fee(&self) -> &super::attestation::ERC20Token {
        self.erc20_fee.as_ref().unwrap_or_else(|| <super::attestation::ERC20Token as ::protobuf::Message>::default_instance())
    }
    pub fn clear_erc20_fee(&mut self) {
        self.erc20_fee.clear();
    }

    pub fn has_erc20_fee(&self) -> bool {
        self.erc20_fee.is_some()
    }

    // Param is passed by value, moved
    pub fn set_erc20_fee(&mut self, v: super::attestation::ERC20Token) {
        self.erc20_fee = ::protobuf::SingularPtrField::some(v);
    }

    // Mutable pointer to the field.
    // If field is not initialized, it is initialized with default value first.
    pub fn mut_erc20_fee(&mut self) -> &mut super::attestation::ERC20Token {
        if self.erc20_fee.is_none() {
            self.erc20_fee.set_default();
        }
        self.erc20_fee.as_mut().unwrap()
    }

    // Take field
    pub fn take_erc20_fee(&mut self) -> super::attestation::ERC20Token {
        self.erc20_fee.take().unwrap_or_else(|| super::attestation::ERC20Token::new())
    }
}

impl ::protobuf::Message for OutgoingTransferTx {
    fn is_initialized(&self) -> bool {
        for v in &self.erc20_token {
            if !v.is_initialized() {
                return false;
            }
        };
        for v in &self.erc20_fee {
            if !v.is_initialized() {
                return false;
            }
        };
        true
    }

    fn merge_from(&mut self, is: &mut ::protobuf::CodedInputStream<'_>) -> ::protobuf::ProtobufResult<()> {
        while !is.eof()? {
            let (field_number, wire_type) = is.read_tag_unpack()?;
            match field_number {
                1 => {
                    if wire_type != ::protobuf::wire_format::WireTypeVarint {
                        return ::std::result::Result::Err(::protobuf::rt::unexpected_wire_type(wire_type));
                    }
                    let tmp = is.read_uint64()?;
                    self.id = tmp;
                },
                2 => {
                    ::protobuf::rt::read_singular_proto3_string_into(wire_type, is, &mut self.sender)?;
                },
                3 => {
                    ::protobuf::rt::read_singular_proto3_string_into(wire_type, is, &mut self.dest_address)?;
                },
                4 => {
                    ::protobuf::rt::read_singular_message_into(wire_type, is, &mut self.erc20_token)?;
                },
                5 => {
                    ::protobuf::rt::read_singular_message_into(wire_type, is, &mut self.erc20_fee)?;
                },
                _ => {
                    ::protobuf::rt::read_unknown_or_skip_group(field_number, wire_type, is, self.mut_unknown_fields())?;
                },
            };
        }
        ::std::result::Result::Ok(())
    }

    // Compute sizes of nested messages
    #[allow(unused_variables)]
    fn compute_size(&self) -> u32 {
        let mut my_size = 0;
        if self.id != 0 {
            my_size += ::protobuf::rt::value_size(1, self.id, ::protobuf::wire_format::WireTypeVarint);
        }
        if !self.sender.is_empty() {
            my_size += ::protobuf::rt::string_size(2, &self.sender);
        }
        if !self.dest_address.is_empty() {
            my_size += ::protobuf::rt::string_size(3, &self.dest_address);
        }
        if let Some(ref v) = self.erc20_token.as_ref() {
            let len = v.compute_size();
            my_size += 1 + ::protobuf::rt::compute_raw_varint32_size(len) + len;
        }
        if let Some(ref v) = self.erc20_fee.as_ref() {
            let len = v.compute_size();
            my_size += 1 + ::protobuf::rt::compute_raw_varint32_size(len) + len;
        }
        my_size += ::protobuf::rt::unknown_fields_size(self.get_unknown_fields());
        self.cached_size.set(my_size);
        my_size
    }

    fn write_to_with_cached_sizes(&self, os: &mut ::protobuf::CodedOutputStream<'_>) -> ::protobuf::ProtobufResult<()> {
        if self.id != 0 {
            os.write_uint64(1, self.id)?;
        }
        if !self.sender.is_empty() {
            os.write_string(2, &self.sender)?;
        }
        if !self.dest_address.is_empty() {
            os.write_string(3, &self.dest_address)?;
        }
        if let Some(ref v) = self.erc20_token.as_ref() {
            os.write_tag(4, ::protobuf::wire_format::WireTypeLengthDelimited)?;
            os.write_raw_varint32(v.get_cached_size())?;
            v.write_to_with_cached_sizes(os)?;
        }
        if let Some(ref v) = self.erc20_fee.as_ref() {
            os.write_tag(5, ::protobuf::wire_format::WireTypeLengthDelimited)?;
            os.write_raw_varint32(v.get_cached_size())?;
            v.write_to_with_cached_sizes(os)?;
        }
        os.write_unknown_fields(self.get_unknown_fields())?;
        ::std::result::Result::Ok(())
    }

    fn get_cached_size(&self) -> u32 {
        self.cached_size.get()
    }

    fn get_unknown_fields(&self) -> &::protobuf::UnknownFields {
        &self.unknown_fields
    }

    fn mut_unknown_fields(&mut self) -> &mut ::protobuf::UnknownFields {
        &mut self.unknown_fields
    }

    fn as_any(&self) -> &dyn (::std::any::Any) {
        self as &dyn (::std::any::Any)
    }
    fn as_any_mut(&mut self) -> &mut dyn (::std::any::Any) {
        self as &mut dyn (::std::any::Any)
    }
    fn into_any(self: ::std::boxed::Box<Self>) -> ::std::boxed::Box<dyn (::std::any::Any)> {
        self
    }

    fn descriptor(&self) -> &'static ::protobuf::reflect::MessageDescriptor {
        Self::descriptor_static()
    }

    fn new() -> OutgoingTransferTx {
        OutgoingTransferTx::new()
    }

    fn default_instance() -> &'static OutgoingTransferTx {
        static instance: ::protobuf::rt::LazyV2<OutgoingTransferTx> = ::protobuf::rt::LazyV2::INIT;
        instance.get(OutgoingTransferTx::new)
    }
}

impl ::protobuf::Clear for OutgoingTransferTx {
    fn clear(&mut self) {
        self.id = 0;
        self.sender.clear();
        self.dest_address.clear();
        self.erc20_token.clear();
        self.erc20_fee.clear();
        self.unknown_fields.clear();
    }
}

impl ::protobuf::reflect::ProtobufValue for OutgoingTransferTx {
    fn as_ref(&self) -> ::protobuf::reflect::ReflectValueRef {
        ::protobuf::reflect::ReflectValueRef::Message(self)
    }
}
