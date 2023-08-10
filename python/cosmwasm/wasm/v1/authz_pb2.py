# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: cosmwasm/wasm/v1/authz.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
from google.protobuf.internal import builder as _builder
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from gogoproto import gogo_pb2 as gogoproto_dot_gogo__pb2
from cosmos_proto import cosmos_pb2 as cosmos__proto_dot_cosmos__pb2
from cosmos.base.v1beta1 import coin_pb2 as cosmos_dot_base_dot_v1beta1_dot_coin__pb2
from google.protobuf import any_pb2 as google_dot_protobuf_dot_any__pb2
from amino import amino_pb2 as amino_dot_amino__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x1c\x63osmwasm/wasm/v1/authz.proto\x12\x10\x63osmwasm.wasm.v1\x1a\x14gogoproto/gogo.proto\x1a\x19\x63osmos_proto/cosmos.proto\x1a\x1e\x63osmos/base/v1beta1/coin.proto\x1a\x19google/protobuf/any.proto\x1a\x11\x61mino/amino.proto\"\xb4\x01\n\x1e\x43ontractExecutionAuthorization\x12\x42\n\x06grants\x18\x01 \x03(\x0b\x32\x1f.cosmwasm.wasm.v1.ContractGrantB\t\xc8\xde\x1f\x00\xa8\xe7\xb0*\x01R\x06grants:N\xca\xb4-\"cosmos.authz.v1beta1.Authorization\x8a\xe7\xb0*#wasm/ContractExecutionAuthorization\"\xb4\x01\n\x1e\x43ontractMigrationAuthorization\x12\x42\n\x06grants\x18\x01 \x03(\x0b\x32\x1f.cosmwasm.wasm.v1.ContractGrantB\t\xc8\xde\x1f\x00\xa8\xe7\xb0*\x01R\x06grants:N\xca\xb4-\"cosmos.authz.v1beta1.Authorization\x8a\xe7\xb0*#wasm/ContractMigrationAuthorization\"\xda\x01\n\rContractGrant\x12\x1a\n\x08\x63ontract\x18\x01 \x01(\tR\x08\x63ontract\x12T\n\x05limit\x18\x02 \x01(\x0b\x32\x14.google.protobuf.AnyB(\xca\xb4-$cosmwasm.wasm.v1.ContractAuthzLimitXR\x05limit\x12W\n\x06\x66ilter\x18\x03 \x01(\x0b\x32\x14.google.protobuf.AnyB)\xca\xb4-%cosmwasm.wasm.v1.ContractAuthzFilterXR\x06\x66ilter\"n\n\rMaxCallsLimit\x12\x1c\n\tremaining\x18\x01 \x01(\x04R\tremaining:?\xca\xb4-$cosmwasm.wasm.v1.ContractAuthzLimitX\x8a\xe7\xb0*\x12wasm/MaxCallsLimit\"\xbc\x01\n\rMaxFundsLimit\x12j\n\x07\x61mounts\x18\x01 \x03(\x0b\x32\x19.cosmos.base.v1beta1.CoinB5\xc8\xde\x1f\x00\xaa\xdf\x1f(github.com/cosmos/cosmos-sdk/types.Coins\xa8\xe7\xb0*\x01R\x07\x61mounts:?\xca\xb4-$cosmwasm.wasm.v1.ContractAuthzLimitX\x8a\xe7\xb0*\x12wasm/MaxFundsLimit\"\xe5\x01\n\rCombinedLimit\x12\'\n\x0f\x63\x61lls_remaining\x18\x01 \x01(\x04R\x0e\x63\x61llsRemaining\x12j\n\x07\x61mounts\x18\x02 \x03(\x0b\x32\x19.cosmos.base.v1beta1.CoinB5\xc8\xde\x1f\x00\xaa\xdf\x1f(github.com/cosmos/cosmos-sdk/types.Coins\xa8\xe7\xb0*\x01R\x07\x61mounts:?\xca\xb4-$cosmwasm.wasm.v1.ContractAuthzLimitX\x8a\xe7\xb0*\x12wasm/CombinedLimit\"c\n\x16\x41llowAllMessagesFilter:I\xca\xb4-%cosmwasm.wasm.v1.ContractAuthzFilterX\x8a\xe7\xb0*\x1bwasm/AllowAllMessagesFilter\"}\n\x19\x41\x63\x63\x65ptedMessageKeysFilter\x12\x12\n\x04keys\x18\x01 \x03(\tR\x04keys:L\xca\xb4-%cosmwasm.wasm.v1.ContractAuthzFilterX\x8a\xe7\xb0*\x1ewasm/AcceptedMessageKeysFilter\"\x97\x01\n\x16\x41\x63\x63\x65ptedMessagesFilter\x12\x32\n\x08messages\x18\x01 \x03(\x0c\x42\x16\xfa\xde\x1f\x12RawContractMessageR\x08messages:I\xca\xb4-%cosmwasm.wasm.v1.ContractAuthzFilterX\x8a\xe7\xb0*\x1bwasm/AcceptedMessagesFilterB\xb0\x01\n\x14\x63om.cosmwasm.wasm.v1B\nAuthzProtoP\x01Z&github.com/CosmWasm/wasmd/x/wasm/types\xa2\x02\x03\x43WX\xaa\x02\x10\x43osmwasm.Wasm.V1\xca\x02\x10\x43osmwasm\\Wasm\\V1\xe2\x02\x1c\x43osmwasm\\Wasm\\V1\\GPBMetadata\xea\x02\x12\x43osmwasm::Wasm::V1\xc8\xe1\x1e\x00\x62\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'cosmwasm.wasm.v1.authz_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  DESCRIPTOR._serialized_options = b'\n\024com.cosmwasm.wasm.v1B\nAuthzProtoP\001Z&github.com/CosmWasm/wasmd/x/wasm/types\242\002\003CWX\252\002\020Cosmwasm.Wasm.V1\312\002\020Cosmwasm\\Wasm\\V1\342\002\034Cosmwasm\\Wasm\\V1\\GPBMetadata\352\002\022Cosmwasm::Wasm::V1\310\341\036\000'
  _CONTRACTEXECUTIONAUTHORIZATION.fields_by_name['grants']._options = None
  _CONTRACTEXECUTIONAUTHORIZATION.fields_by_name['grants']._serialized_options = b'\310\336\037\000\250\347\260*\001'
  _CONTRACTEXECUTIONAUTHORIZATION._options = None
  _CONTRACTEXECUTIONAUTHORIZATION._serialized_options = b'\312\264-\"cosmos.authz.v1beta1.Authorization\212\347\260*#wasm/ContractExecutionAuthorization'
  _CONTRACTMIGRATIONAUTHORIZATION.fields_by_name['grants']._options = None
  _CONTRACTMIGRATIONAUTHORIZATION.fields_by_name['grants']._serialized_options = b'\310\336\037\000\250\347\260*\001'
  _CONTRACTMIGRATIONAUTHORIZATION._options = None
  _CONTRACTMIGRATIONAUTHORIZATION._serialized_options = b'\312\264-\"cosmos.authz.v1beta1.Authorization\212\347\260*#wasm/ContractMigrationAuthorization'
  _CONTRACTGRANT.fields_by_name['limit']._options = None
  _CONTRACTGRANT.fields_by_name['limit']._serialized_options = b'\312\264-$cosmwasm.wasm.v1.ContractAuthzLimitX'
  _CONTRACTGRANT.fields_by_name['filter']._options = None
  _CONTRACTGRANT.fields_by_name['filter']._serialized_options = b'\312\264-%cosmwasm.wasm.v1.ContractAuthzFilterX'
  _MAXCALLSLIMIT._options = None
  _MAXCALLSLIMIT._serialized_options = b'\312\264-$cosmwasm.wasm.v1.ContractAuthzLimitX\212\347\260*\022wasm/MaxCallsLimit'
  _MAXFUNDSLIMIT.fields_by_name['amounts']._options = None
  _MAXFUNDSLIMIT.fields_by_name['amounts']._serialized_options = b'\310\336\037\000\252\337\037(github.com/cosmos/cosmos-sdk/types.Coins\250\347\260*\001'
  _MAXFUNDSLIMIT._options = None
  _MAXFUNDSLIMIT._serialized_options = b'\312\264-$cosmwasm.wasm.v1.ContractAuthzLimitX\212\347\260*\022wasm/MaxFundsLimit'
  _COMBINEDLIMIT.fields_by_name['amounts']._options = None
  _COMBINEDLIMIT.fields_by_name['amounts']._serialized_options = b'\310\336\037\000\252\337\037(github.com/cosmos/cosmos-sdk/types.Coins\250\347\260*\001'
  _COMBINEDLIMIT._options = None
  _COMBINEDLIMIT._serialized_options = b'\312\264-$cosmwasm.wasm.v1.ContractAuthzLimitX\212\347\260*\022wasm/CombinedLimit'
  _ALLOWALLMESSAGESFILTER._options = None
  _ALLOWALLMESSAGESFILTER._serialized_options = b'\312\264-%cosmwasm.wasm.v1.ContractAuthzFilterX\212\347\260*\033wasm/AllowAllMessagesFilter'
  _ACCEPTEDMESSAGEKEYSFILTER._options = None
  _ACCEPTEDMESSAGEKEYSFILTER._serialized_options = b'\312\264-%cosmwasm.wasm.v1.ContractAuthzFilterX\212\347\260*\036wasm/AcceptedMessageKeysFilter'
  _ACCEPTEDMESSAGESFILTER.fields_by_name['messages']._options = None
  _ACCEPTEDMESSAGESFILTER.fields_by_name['messages']._serialized_options = b'\372\336\037\022RawContractMessage'
  _ACCEPTEDMESSAGESFILTER._options = None
  _ACCEPTEDMESSAGESFILTER._serialized_options = b'\312\264-%cosmwasm.wasm.v1.ContractAuthzFilterX\212\347\260*\033wasm/AcceptedMessagesFilter'
  _globals['_CONTRACTEXECUTIONAUTHORIZATION']._serialized_start=178
  _globals['_CONTRACTEXECUTIONAUTHORIZATION']._serialized_end=358
  _globals['_CONTRACTMIGRATIONAUTHORIZATION']._serialized_start=361
  _globals['_CONTRACTMIGRATIONAUTHORIZATION']._serialized_end=541
  _globals['_CONTRACTGRANT']._serialized_start=544
  _globals['_CONTRACTGRANT']._serialized_end=762
  _globals['_MAXCALLSLIMIT']._serialized_start=764
  _globals['_MAXCALLSLIMIT']._serialized_end=874
  _globals['_MAXFUNDSLIMIT']._serialized_start=877
  _globals['_MAXFUNDSLIMIT']._serialized_end=1065
  _globals['_COMBINEDLIMIT']._serialized_start=1068
  _globals['_COMBINEDLIMIT']._serialized_end=1297
  _globals['_ALLOWALLMESSAGESFILTER']._serialized_start=1299
  _globals['_ALLOWALLMESSAGESFILTER']._serialized_end=1398
  _globals['_ACCEPTEDMESSAGEKEYSFILTER']._serialized_start=1400
  _globals['_ACCEPTEDMESSAGEKEYSFILTER']._serialized_end=1525
  _globals['_ACCEPTEDMESSAGESFILTER']._serialized_start=1528
  _globals['_ACCEPTEDMESSAGESFILTER']._serialized_end=1679
# @@protoc_insertion_point(module_scope)
