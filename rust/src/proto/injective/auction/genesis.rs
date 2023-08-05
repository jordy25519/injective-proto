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
//! Generated file from `injective/auction/v1beta1/genesis.proto`

/// Generated files are compatible only with the same version
/// of protobuf runtime.
// const _PROTOBUF_VERSION_CHECK: () = ::protobuf::VERSION_2_28_0;

#[derive(PartialEq,Clone,Default,Debug)]
pub struct GenesisState {
    // message fields
    pub params: ::protobuf::SingularPtrField<super::auction::Params>,
    pub auction_round: u64,
    pub highest_bid: ::protobuf::SingularPtrField<super::auction::Bid>,
    pub auction_ending_timestamp: i64,
    // special fields
    pub unknown_fields: ::protobuf::UnknownFields,
    pub cached_size: ::protobuf::CachedSize,
}

impl<'a> ::std::default::Default for &'a GenesisState {
    fn default() -> &'a GenesisState {
        <GenesisState as ::protobuf::Message>::default_instance()
    }
}

impl GenesisState {
    pub fn new() -> GenesisState {
        ::std::default::Default::default()
    }

    // .injective.auction.v1beta1.Params params = 1;


    pub fn get_params(&self) -> &super::auction::Params {
        self.params.as_ref().unwrap_or_else(|| <super::auction::Params as ::protobuf::Message>::default_instance())
    }
    pub fn clear_params(&mut self) {
        self.params.clear();
    }

    pub fn has_params(&self) -> bool {
        self.params.is_some()
    }

    // Param is passed by value, moved
    pub fn set_params(&mut self, v: super::auction::Params) {
        self.params = ::protobuf::SingularPtrField::some(v);
    }

    // Mutable pointer to the field.
    // If field is not initialized, it is initialized with default value first.
    pub fn mut_params(&mut self) -> &mut super::auction::Params {
        if self.params.is_none() {
            self.params.set_default();
        }
        self.params.as_mut().unwrap()
    }

    // Take field
    pub fn take_params(&mut self) -> super::auction::Params {
        self.params.take().unwrap_or_else(|| super::auction::Params::new())
    }

    // uint64 auction_round = 2;


    pub fn get_auction_round(&self) -> u64 {
        self.auction_round
    }
    pub fn clear_auction_round(&mut self) {
        self.auction_round = 0;
    }

    // Param is passed by value, moved
    pub fn set_auction_round(&mut self, v: u64) {
        self.auction_round = v;
    }

    // .injective.auction.v1beta1.Bid highest_bid = 3;


    pub fn get_highest_bid(&self) -> &super::auction::Bid {
        self.highest_bid.as_ref().unwrap_or_else(|| <super::auction::Bid as ::protobuf::Message>::default_instance())
    }
    pub fn clear_highest_bid(&mut self) {
        self.highest_bid.clear();
    }

    pub fn has_highest_bid(&self) -> bool {
        self.highest_bid.is_some()
    }

    // Param is passed by value, moved
    pub fn set_highest_bid(&mut self, v: super::auction::Bid) {
        self.highest_bid = ::protobuf::SingularPtrField::some(v);
    }

    // Mutable pointer to the field.
    // If field is not initialized, it is initialized with default value first.
    pub fn mut_highest_bid(&mut self) -> &mut super::auction::Bid {
        if self.highest_bid.is_none() {
            self.highest_bid.set_default();
        }
        self.highest_bid.as_mut().unwrap()
    }

    // Take field
    pub fn take_highest_bid(&mut self) -> super::auction::Bid {
        self.highest_bid.take().unwrap_or_else(|| super::auction::Bid::new())
    }

    // int64 auction_ending_timestamp = 4;


    pub fn get_auction_ending_timestamp(&self) -> i64 {
        self.auction_ending_timestamp
    }
    pub fn clear_auction_ending_timestamp(&mut self) {
        self.auction_ending_timestamp = 0;
    }

    // Param is passed by value, moved
    pub fn set_auction_ending_timestamp(&mut self, v: i64) {
        self.auction_ending_timestamp = v;
    }
}

impl ::protobuf::Message for GenesisState {
    fn is_initialized(&self) -> bool {
        for v in &self.params {
            if !v.is_initialized() {
                return false;
            }
        };
        for v in &self.highest_bid {
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
                    ::protobuf::rt::read_singular_message_into(wire_type, is, &mut self.params)?;
                },
                2 => {
                    if wire_type != ::protobuf::wire_format::WireTypeVarint {
                        return ::std::result::Result::Err(::protobuf::rt::unexpected_wire_type(wire_type));
                    }
                    let tmp = is.read_uint64()?;
                    self.auction_round = tmp;
                },
                3 => {
                    ::protobuf::rt::read_singular_message_into(wire_type, is, &mut self.highest_bid)?;
                },
                4 => {
                    if wire_type != ::protobuf::wire_format::WireTypeVarint {
                        return ::std::result::Result::Err(::protobuf::rt::unexpected_wire_type(wire_type));
                    }
                    let tmp = is.read_int64()?;
                    self.auction_ending_timestamp = tmp;
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
        if let Some(ref v) = self.params.as_ref() {
            let len = v.compute_size();
            my_size += 1 + ::protobuf::rt::compute_raw_varint32_size(len) + len;
        }
        if self.auction_round != 0 {
            my_size += ::protobuf::rt::value_size(2, self.auction_round, ::protobuf::wire_format::WireTypeVarint);
        }
        if let Some(ref v) = self.highest_bid.as_ref() {
            let len = v.compute_size();
            my_size += 1 + ::protobuf::rt::compute_raw_varint32_size(len) + len;
        }
        if self.auction_ending_timestamp != 0 {
            my_size += ::protobuf::rt::value_size(4, self.auction_ending_timestamp, ::protobuf::wire_format::WireTypeVarint);
        }
        my_size += ::protobuf::rt::unknown_fields_size(self.get_unknown_fields());
        self.cached_size.set(my_size);
        my_size
    }

    fn write_to_with_cached_sizes(&self, os: &mut ::protobuf::CodedOutputStream<'_>) -> ::protobuf::ProtobufResult<()> {
        if let Some(ref v) = self.params.as_ref() {
            os.write_tag(1, ::protobuf::wire_format::WireTypeLengthDelimited)?;
            os.write_raw_varint32(v.get_cached_size())?;
            v.write_to_with_cached_sizes(os)?;
        }
        if self.auction_round != 0 {
            os.write_uint64(2, self.auction_round)?;
        }
        if let Some(ref v) = self.highest_bid.as_ref() {
            os.write_tag(3, ::protobuf::wire_format::WireTypeLengthDelimited)?;
            os.write_raw_varint32(v.get_cached_size())?;
            v.write_to_with_cached_sizes(os)?;
        }
        if self.auction_ending_timestamp != 0 {
            os.write_int64(4, self.auction_ending_timestamp)?;
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

    fn new() -> GenesisState {
        GenesisState::new()
    }

    fn default_instance() -> &'static GenesisState {
        static instance: ::protobuf::rt::LazyV2<GenesisState> = ::protobuf::rt::LazyV2::INIT;
        instance.get(GenesisState::new)
    }
}

impl ::protobuf::Clear for GenesisState {
    fn clear(&mut self) {
        self.params.clear();
        self.auction_round = 0;
        self.highest_bid.clear();
        self.auction_ending_timestamp = 0;
        self.unknown_fields.clear();
    }
}

impl ::protobuf::reflect::ProtobufValue for GenesisState {
    fn as_ref(&self) -> ::protobuf::reflect::ReflectValueRef {
        ::protobuf::reflect::ReflectValueRef::Message(self)
    }
}
