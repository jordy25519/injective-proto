# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: injective/auction/v1beta1/genesis.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
from google.protobuf.internal import builder as _builder
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from injective.auction.v1beta1 import auction_pb2 as injective_dot_auction_dot_v1beta1_dot_auction__pb2
from gogoproto import gogo_pb2 as gogoproto_dot_gogo__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\'injective/auction/v1beta1/genesis.proto\x12\x19injective.auction.v1beta1\x1a\'injective/auction/v1beta1/auction.proto\x1a\x14gogoproto/gogo.proto\"\xef\x01\n\x0cGenesisState\x12?\n\x06params\x18\x01 \x01(\x0b\x32!.injective.auction.v1beta1.ParamsB\x04\xc8\xde\x1f\x00R\x06params\x12#\n\rauction_round\x18\x02 \x01(\x04R\x0c\x61uctionRound\x12?\n\x0bhighest_bid\x18\x03 \x01(\x0b\x32\x1e.injective.auction.v1beta1.BidR\nhighestBid\x12\x38\n\x18\x61uction_ending_timestamp\x18\x04 \x01(\x03R\x16\x61uctionEndingTimestampB\x82\x02\n\x1d\x63om.injective.auction.v1beta1B\x0cGenesisProtoP\x01ZMgithub.com/InjectiveLabs/injective-core/injective-chain/modules/auction/types\xa2\x02\x03IAX\xaa\x02\x19Injective.Auction.V1beta1\xca\x02\x19Injective\\Auction\\V1beta1\xe2\x02%Injective\\Auction\\V1beta1\\GPBMetadata\xea\x02\x1bInjective::Auction::V1beta1b\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'injective.auction.v1beta1.genesis_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  DESCRIPTOR._serialized_options = b'\n\035com.injective.auction.v1beta1B\014GenesisProtoP\001ZMgithub.com/InjectiveLabs/injective-core/injective-chain/modules/auction/types\242\002\003IAX\252\002\031Injective.Auction.V1beta1\312\002\031Injective\\Auction\\V1beta1\342\002%Injective\\Auction\\V1beta1\\GPBMetadata\352\002\033Injective::Auction::V1beta1'
  _GENESISSTATE.fields_by_name['params']._options = None
  _GENESISSTATE.fields_by_name['params']._serialized_options = b'\310\336\037\000'
  _globals['_GENESISSTATE']._serialized_start=134
  _globals['_GENESISSTATE']._serialized_end=373
# @@protoc_insertion_point(module_scope)
