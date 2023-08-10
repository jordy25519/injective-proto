# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: injective/oracle/v1beta1/events.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
from google.protobuf.internal import builder as _builder
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from gogoproto import gogo_pb2 as gogoproto_dot_gogo__pb2
from cosmos.base.v1beta1 import coin_pb2 as cosmos_dot_base_dot_v1beta1_dot_coin__pb2
from injective.oracle.v1beta1 import oracle_pb2 as injective_dot_oracle_dot_v1beta1_dot_oracle__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n%injective/oracle/v1beta1/events.proto\x12\x18injective.oracle.v1beta1\x1a\x14gogoproto/gogo.proto\x1a\x1e\x63osmos/base/v1beta1/coin.proto\x1a%injective/oracle/v1beta1/oracle.proto\"\x97\x01\n\x16SetChainlinkPriceEvent\x12\x17\n\x07\x66\x65\x65\x64_id\x18\x01 \x01(\tR\x06\x66\x65\x65\x64Id\x12\x46\n\x06\x61nswer\x18\x02 \x01(\tB.\xc8\xde\x1f\x00\xda\xde\x1f&github.com/cosmos/cosmos-sdk/types.DecR\x06\x61nswer\x12\x1c\n\ttimestamp\x18\x03 \x01(\x04R\ttimestamp\"\xcd\x01\n\x11SetBandPriceEvent\x12\x18\n\x07relayer\x18\x01 \x01(\tR\x07relayer\x12\x16\n\x06symbol\x18\x02 \x01(\tR\x06symbol\x12\x44\n\x05price\x18\x03 \x01(\tB.\xc8\xde\x1f\x00\xda\xde\x1f&github.com/cosmos/cosmos-sdk/types.DecR\x05price\x12!\n\x0cresolve_time\x18\x04 \x01(\x04R\x0bresolveTime\x12\x1d\n\nrequest_id\x18\x05 \x01(\x04R\trequestId\"\xf1\x01\n\x14SetBandIBCPriceEvent\x12\x18\n\x07relayer\x18\x01 \x01(\tR\x07relayer\x12\x18\n\x07symbols\x18\x02 \x03(\tR\x07symbols\x12\x46\n\x06prices\x18\x03 \x03(\tB.\xc8\xde\x1f\x00\xda\xde\x1f&github.com/cosmos/cosmos-sdk/types.DecR\x06prices\x12!\n\x0cresolve_time\x18\x04 \x01(\x04R\x0bresolveTime\x12\x1d\n\nrequest_id\x18\x05 \x01(\x04R\trequestId\x12\x1b\n\tclient_id\x18\x06 \x01(\x03R\x08\x63lientId\"T\n\x16\x45ventBandIBCAckSuccess\x12\x1d\n\nack_result\x18\x01 \x01(\tR\tackResult\x12\x1b\n\tclient_id\x18\x02 \x01(\x03R\x08\x63lientId\"P\n\x14\x45ventBandIBCAckError\x12\x1b\n\tack_error\x18\x01 \x01(\tR\x08\x61\x63kError\x12\x1b\n\tclient_id\x18\x02 \x01(\x03R\x08\x63lientId\":\n\x1b\x45ventBandIBCResponseTimeout\x12\x1b\n\tclient_id\x18\x01 \x01(\x03R\x08\x63lientId\"\xa2\x01\n\x16SetPriceFeedPriceEvent\x12\x18\n\x07relayer\x18\x01 \x01(\tR\x07relayer\x12\x12\n\x04\x62\x61se\x18\x02 \x01(\tR\x04\x62\x61se\x12\x14\n\x05quote\x18\x03 \x01(\tR\x05quote\x12\x44\n\x05price\x18\x04 \x01(\tB.\xc8\xde\x1f\x00\xda\xde\x1f&github.com/cosmos/cosmos-sdk/types.DecR\x05price\"\xab\x01\n\x15SetProviderPriceEvent\x12\x1a\n\x08provider\x18\x01 \x01(\tR\x08provider\x12\x18\n\x07relayer\x18\x02 \x01(\tR\x07relayer\x12\x16\n\x06symbol\x18\x03 \x01(\tR\x06symbol\x12\x44\n\x05price\x18\x04 \x01(\tB.\xc8\xde\x1f\x00\xda\xde\x1f&github.com/cosmos/cosmos-sdk/types.DecR\x05price\"\x93\x01\n\x15SetCoinbasePriceEvent\x12\x16\n\x06symbol\x18\x01 \x01(\tR\x06symbol\x12\x44\n\x05price\x18\x02 \x01(\tB.\xc8\xde\x1f\x00\xda\xde\x1f&github.com/cosmos/cosmos-sdk/types.DecR\x05price\x12\x1c\n\ttimestamp\x18\x03 \x01(\x04R\ttimestamp\"V\n\x12\x45ventSetPythPrices\x12@\n\x06prices\x18\x01 \x03(\x0b\x32(.injective.oracle.v1beta1.PythPriceStateR\x06pricesB\xfb\x01\n\x1c\x63om.injective.oracle.v1beta1B\x0b\x45ventsProtoP\x01ZLgithub.com/InjectiveLabs/injective-core/injective-chain/modules/oracle/types\xa2\x02\x03IOX\xaa\x02\x18Injective.Oracle.V1beta1\xca\x02\x18Injective\\Oracle\\V1beta1\xe2\x02$Injective\\Oracle\\V1beta1\\GPBMetadata\xea\x02\x1aInjective::Oracle::V1beta1b\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'injective.oracle.v1beta1.events_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  DESCRIPTOR._serialized_options = b'\n\034com.injective.oracle.v1beta1B\013EventsProtoP\001ZLgithub.com/InjectiveLabs/injective-core/injective-chain/modules/oracle/types\242\002\003IOX\252\002\030Injective.Oracle.V1beta1\312\002\030Injective\\Oracle\\V1beta1\342\002$Injective\\Oracle\\V1beta1\\GPBMetadata\352\002\032Injective::Oracle::V1beta1'
  _SETCHAINLINKPRICEEVENT.fields_by_name['answer']._options = None
  _SETCHAINLINKPRICEEVENT.fields_by_name['answer']._serialized_options = b'\310\336\037\000\332\336\037&github.com/cosmos/cosmos-sdk/types.Dec'
  _SETBANDPRICEEVENT.fields_by_name['price']._options = None
  _SETBANDPRICEEVENT.fields_by_name['price']._serialized_options = b'\310\336\037\000\332\336\037&github.com/cosmos/cosmos-sdk/types.Dec'
  _SETBANDIBCPRICEEVENT.fields_by_name['prices']._options = None
  _SETBANDIBCPRICEEVENT.fields_by_name['prices']._serialized_options = b'\310\336\037\000\332\336\037&github.com/cosmos/cosmos-sdk/types.Dec'
  _SETPRICEFEEDPRICEEVENT.fields_by_name['price']._options = None
  _SETPRICEFEEDPRICEEVENT.fields_by_name['price']._serialized_options = b'\310\336\037\000\332\336\037&github.com/cosmos/cosmos-sdk/types.Dec'
  _SETPROVIDERPRICEEVENT.fields_by_name['price']._options = None
  _SETPROVIDERPRICEEVENT.fields_by_name['price']._serialized_options = b'\310\336\037\000\332\336\037&github.com/cosmos/cosmos-sdk/types.Dec'
  _SETCOINBASEPRICEEVENT.fields_by_name['price']._options = None
  _SETCOINBASEPRICEEVENT.fields_by_name['price']._serialized_options = b'\310\336\037\000\332\336\037&github.com/cosmos/cosmos-sdk/types.Dec'
  _globals['_SETCHAINLINKPRICEEVENT']._serialized_start=161
  _globals['_SETCHAINLINKPRICEEVENT']._serialized_end=312
  _globals['_SETBANDPRICEEVENT']._serialized_start=315
  _globals['_SETBANDPRICEEVENT']._serialized_end=520
  _globals['_SETBANDIBCPRICEEVENT']._serialized_start=523
  _globals['_SETBANDIBCPRICEEVENT']._serialized_end=764
  _globals['_EVENTBANDIBCACKSUCCESS']._serialized_start=766
  _globals['_EVENTBANDIBCACKSUCCESS']._serialized_end=850
  _globals['_EVENTBANDIBCACKERROR']._serialized_start=852
  _globals['_EVENTBANDIBCACKERROR']._serialized_end=932
  _globals['_EVENTBANDIBCRESPONSETIMEOUT']._serialized_start=934
  _globals['_EVENTBANDIBCRESPONSETIMEOUT']._serialized_end=992
  _globals['_SETPRICEFEEDPRICEEVENT']._serialized_start=995
  _globals['_SETPRICEFEEDPRICEEVENT']._serialized_end=1157
  _globals['_SETPROVIDERPRICEEVENT']._serialized_start=1160
  _globals['_SETPROVIDERPRICEEVENT']._serialized_end=1331
  _globals['_SETCOINBASEPRICEEVENT']._serialized_start=1334
  _globals['_SETCOINBASEPRICEEVENT']._serialized_end=1481
  _globals['_EVENTSETPYTHPRICES']._serialized_start=1483
  _globals['_EVENTSETPYTHPRICES']._serialized_end=1569
# @@protoc_insertion_point(module_scope)
