# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: injective/wasmx/v1/query.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
from google.protobuf.internal import builder as _builder
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from google.api import annotations_pb2 as google_dot_api_dot_annotations__pb2
from injective.wasmx.v1 import wasmx_pb2 as injective_dot_wasmx_dot_v1_dot_wasmx__pb2
from injective.wasmx.v1 import genesis_pb2 as injective_dot_wasmx_dot_v1_dot_genesis__pb2
from gogoproto import gogo_pb2 as gogoproto_dot_gogo__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x1einjective/wasmx/v1/query.proto\x12\x12injective.wasmx.v1\x1a\x1cgoogle/api/annotations.proto\x1a\x1einjective/wasmx/v1/wasmx.proto\x1a injective/wasmx/v1/genesis.proto\x1a\x14gogoproto/gogo.proto\"\x19\n\x17QueryWasmxParamsRequest\"T\n\x18QueryWasmxParamsResponse\x12\x38\n\x06params\x18\x01 \x01(\x0b\x32\x1a.injective.wasmx.v1.ParamsB\x04\xc8\xde\x1f\x00R\x06params\"\x19\n\x17QueryModuleStateRequest\"R\n\x18QueryModuleStateResponse\x12\x36\n\x05state\x18\x01 \x01(\x0b\x32 .injective.wasmx.v1.GenesisStateR\x05state\"Q\n$QueryContractRegistrationInfoRequest\x12)\n\x10\x63ontract_address\x18\x01 \x01(\tR\x0f\x63ontractAddress\"k\n%QueryContractRegistrationInfoResponse\x12\x42\n\x08\x63ontract\x18\x01 \x01(\x0b\x32&.injective.wasmx.v1.RegisteredContractR\x08\x63ontract2\x84\x04\n\x05Query\x12\x8c\x01\n\x0bWasmxParams\x12+.injective.wasmx.v1.QueryWasmxParamsRequest\x1a,.injective.wasmx.v1.QueryWasmxParamsResponse\"\"\x82\xd3\xe4\x93\x02\x1c\x12\x1a/injective/wasmx/v1/params\x12\xd1\x01\n\x18\x43ontractRegistrationInfo\x12\x38.injective.wasmx.v1.QueryContractRegistrationInfoRequest\x1a\x39.injective.wasmx.v1.QueryContractRegistrationInfoResponse\"@\x82\xd3\xe4\x93\x02:\x12\x38/injective/wasmx/v1/registration_info/{contract_address}\x12\x97\x01\n\x10WasmxModuleState\x12+.injective.wasmx.v1.QueryModuleStateRequest\x1a,.injective.wasmx.v1.QueryModuleStateResponse\"(\x82\xd3\xe4\x93\x02\"\x12 /injective/wasmx/v1/module_stateB\xdb\x01\n\x16\x63om.injective.wasmx.v1B\nQueryProtoP\x01ZKgithub.com/InjectiveLabs/injective-core/injective-chain/modules/wasmx/types\xa2\x02\x03IWX\xaa\x02\x12Injective.Wasmx.V1\xca\x02\x12Injective\\Wasmx\\V1\xe2\x02\x1eInjective\\Wasmx\\V1\\GPBMetadata\xea\x02\x14Injective::Wasmx::V1b\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'injective.wasmx.v1.query_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  DESCRIPTOR._serialized_options = b'\n\026com.injective.wasmx.v1B\nQueryProtoP\001ZKgithub.com/InjectiveLabs/injective-core/injective-chain/modules/wasmx/types\242\002\003IWX\252\002\022Injective.Wasmx.V1\312\002\022Injective\\Wasmx\\V1\342\002\036Injective\\Wasmx\\V1\\GPBMetadata\352\002\024Injective::Wasmx::V1'
  _QUERYWASMXPARAMSRESPONSE.fields_by_name['params']._options = None
  _QUERYWASMXPARAMSRESPONSE.fields_by_name['params']._serialized_options = b'\310\336\037\000'
  _QUERY.methods_by_name['WasmxParams']._options = None
  _QUERY.methods_by_name['WasmxParams']._serialized_options = b'\202\323\344\223\002\034\022\032/injective/wasmx/v1/params'
  _QUERY.methods_by_name['ContractRegistrationInfo']._options = None
  _QUERY.methods_by_name['ContractRegistrationInfo']._serialized_options = b'\202\323\344\223\002:\0228/injective/wasmx/v1/registration_info/{contract_address}'
  _QUERY.methods_by_name['WasmxModuleState']._options = None
  _QUERY.methods_by_name['WasmxModuleState']._serialized_options = b'\202\323\344\223\002\"\022 /injective/wasmx/v1/module_state'
  _globals['_QUERYWASMXPARAMSREQUEST']._serialized_start=172
  _globals['_QUERYWASMXPARAMSREQUEST']._serialized_end=197
  _globals['_QUERYWASMXPARAMSRESPONSE']._serialized_start=199
  _globals['_QUERYWASMXPARAMSRESPONSE']._serialized_end=283
  _globals['_QUERYMODULESTATEREQUEST']._serialized_start=285
  _globals['_QUERYMODULESTATEREQUEST']._serialized_end=310
  _globals['_QUERYMODULESTATERESPONSE']._serialized_start=312
  _globals['_QUERYMODULESTATERESPONSE']._serialized_end=394
  _globals['_QUERYCONTRACTREGISTRATIONINFOREQUEST']._serialized_start=396
  _globals['_QUERYCONTRACTREGISTRATIONINFOREQUEST']._serialized_end=477
  _globals['_QUERYCONTRACTREGISTRATIONINFORESPONSE']._serialized_start=479
  _globals['_QUERYCONTRACTREGISTRATIONINFORESPONSE']._serialized_end=586
  _globals['_QUERY']._serialized_start=589
  _globals['_QUERY']._serialized_end=1105
# @@protoc_insertion_point(module_scope)
