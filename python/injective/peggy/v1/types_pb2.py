# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: injective/peggy/v1/types.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
from google.protobuf.internal import builder as _builder
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from gogoproto import gogo_pb2 as gogoproto_dot_gogo__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x1einjective/peggy/v1/types.proto\x12\x12injective.peggy.v1\x1a\x14gogoproto/gogo.proto\"R\n\x0f\x42ridgeValidator\x12\x14\n\x05power\x18\x01 \x01(\x04R\x05power\x12)\n\x10\x65thereum_address\x18\x02 \x01(\tR\x0f\x65thereumAddress\"\xed\x01\n\x06Valset\x12\x14\n\x05nonce\x18\x01 \x01(\x04R\x05nonce\x12=\n\x07members\x18\x02 \x03(\x0b\x32#.injective.peggy.v1.BridgeValidatorR\x07members\x12\x16\n\x06height\x18\x03 \x01(\x04R\x06height\x12S\n\rreward_amount\x18\x04 \x01(\tB.\xc8\xde\x1f\x00\xda\xde\x1f&github.com/cosmos/cosmos-sdk/types.IntR\x0crewardAmount\x12!\n\x0creward_token\x18\x05 \x01(\tR\x0brewardToken\"\x85\x01\n\x1fLastObservedEthereumBlockHeight\x12.\n\x13\x63osmos_block_height\x18\x01 \x01(\x04R\x11\x63osmosBlockHeight\x12\x32\n\x15\x65thereum_block_height\x18\x02 \x01(\x04R\x13\x65thereumBlockHeight\"v\n\x0eLastClaimEvent\x12\x30\n\x14\x65thereum_event_nonce\x18\x01 \x01(\x04R\x12\x65thereumEventNonce\x12\x32\n\x15\x65thereum_event_height\x18\x02 \x01(\x04R\x13\x65thereumEventHeight\":\n\x0c\x45RC20ToDenom\x12\x14\n\x05\x65rc20\x18\x01 \x01(\tR\x05\x65rc20\x12\x14\n\x05\x64\x65nom\x18\x02 \x01(\tR\x05\x64\x65nomB\xdb\x01\n\x16\x63om.injective.peggy.v1B\nTypesProtoP\x01ZKgithub.com/InjectiveLabs/injective-core/injective-chain/modules/peggy/types\xa2\x02\x03IPX\xaa\x02\x12Injective.Peggy.V1\xca\x02\x12Injective\\Peggy\\V1\xe2\x02\x1eInjective\\Peggy\\V1\\GPBMetadata\xea\x02\x14Injective::Peggy::V1b\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'injective.peggy.v1.types_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  DESCRIPTOR._serialized_options = b'\n\026com.injective.peggy.v1B\nTypesProtoP\001ZKgithub.com/InjectiveLabs/injective-core/injective-chain/modules/peggy/types\242\002\003IPX\252\002\022Injective.Peggy.V1\312\002\022Injective\\Peggy\\V1\342\002\036Injective\\Peggy\\V1\\GPBMetadata\352\002\024Injective::Peggy::V1'
  _VALSET.fields_by_name['reward_amount']._options = None
  _VALSET.fields_by_name['reward_amount']._serialized_options = b'\310\336\037\000\332\336\037&github.com/cosmos/cosmos-sdk/types.Int'
  _globals['_BRIDGEVALIDATOR']._serialized_start=76
  _globals['_BRIDGEVALIDATOR']._serialized_end=158
  _globals['_VALSET']._serialized_start=161
  _globals['_VALSET']._serialized_end=398
  _globals['_LASTOBSERVEDETHEREUMBLOCKHEIGHT']._serialized_start=401
  _globals['_LASTOBSERVEDETHEREUMBLOCKHEIGHT']._serialized_end=534
  _globals['_LASTCLAIMEVENT']._serialized_start=536
  _globals['_LASTCLAIMEVENT']._serialized_end=654
  _globals['_ERC20TODENOM']._serialized_start=656
  _globals['_ERC20TODENOM']._serialized_end=714
# @@protoc_insertion_point(module_scope)
