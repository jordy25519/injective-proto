# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: cosmos/nft/v1beta1/genesis.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
from google.protobuf.internal import builder as _builder
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from cosmos.nft.v1beta1 import nft_pb2 as cosmos_dot_nft_dot_v1beta1_dot_nft__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n cosmos/nft/v1beta1/genesis.proto\x12\x12\x63osmos.nft.v1beta1\x1a\x1c\x63osmos/nft/v1beta1/nft.proto\"x\n\x0cGenesisState\x12\x33\n\x07\x63lasses\x18\x01 \x03(\x0b\x32\x19.cosmos.nft.v1beta1.ClassR\x07\x63lasses\x12\x33\n\x07\x65ntries\x18\x02 \x03(\x0b\x32\x19.cosmos.nft.v1beta1.EntryR\x07\x65ntries\"J\n\x05\x45ntry\x12\x14\n\x05owner\x18\x01 \x01(\tR\x05owner\x12+\n\x04nfts\x18\x02 \x03(\x0b\x32\x17.cosmos.nft.v1beta1.NFTR\x04nftsB\xb4\x01\n\x16\x63om.cosmos.nft.v1beta1B\x0cGenesisProtoP\x01Z\"github.com/cosmos/cosmos-sdk/x/nft\xa2\x02\x03\x43NX\xaa\x02\x12\x43osmos.Nft.V1beta1\xca\x02\x12\x43osmos\\Nft\\V1beta1\xe2\x02\x1e\x43osmos\\Nft\\V1beta1\\GPBMetadata\xea\x02\x14\x43osmos::Nft::V1beta1b\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'cosmos.nft.v1beta1.genesis_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  DESCRIPTOR._serialized_options = b'\n\026com.cosmos.nft.v1beta1B\014GenesisProtoP\001Z\"github.com/cosmos/cosmos-sdk/x/nft\242\002\003CNX\252\002\022Cosmos.Nft.V1beta1\312\002\022Cosmos\\Nft\\V1beta1\342\002\036Cosmos\\Nft\\V1beta1\\GPBMetadata\352\002\024Cosmos::Nft::V1beta1'
  _globals['_GENESISSTATE']._serialized_start=86
  _globals['_GENESISSTATE']._serialized_end=206
  _globals['_ENTRY']._serialized_start=208
  _globals['_ENTRY']._serialized_end=282
# @@protoc_insertion_point(module_scope)
