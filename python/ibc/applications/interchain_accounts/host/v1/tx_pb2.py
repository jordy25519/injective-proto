# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: ibc/applications/interchain_accounts/host/v1/tx.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
from google.protobuf.internal import builder as _builder
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from gogoproto import gogo_pb2 as gogoproto_dot_gogo__pb2
from cosmos.msg.v1 import msg_pb2 as cosmos_dot_msg_dot_v1_dot_msg__pb2
from ibc.applications.interchain_accounts.host.v1 import host_pb2 as ibc_dot_applications_dot_interchain__accounts_dot_host_dot_v1_dot_host__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n5ibc/applications/interchain_accounts/host/v1/tx.proto\x12,ibc.applications.interchain_accounts.host.v1\x1a\x14gogoproto/gogo.proto\x1a\x17\x63osmos/msg/v1/msg.proto\x1a\x37ibc/applications/interchain_accounts/host/v1/host.proto\"\x97\x01\n\x0fMsgUpdateParams\x12\x1c\n\tauthority\x18\x01 \x01(\tR\tauthority\x12R\n\x06params\x18\x02 \x01(\x0b\x32\x34.ibc.applications.interchain_accounts.host.v1.ParamsB\x04\xc8\xde\x1f\x00R\x06params:\x12\x88\xa0\x1f\x00\x82\xe7\xb0*\tauthority\"\x19\n\x17MsgUpdateParamsResponse2\xa3\x01\n\x03Msg\x12\x94\x01\n\x0cUpdateParams\x12=.ibc.applications.interchain_accounts.host.v1.MsgUpdateParams\x1a\x45.ibc.applications.interchain_accounts.host.v1.MsgUpdateParamsResponse\x1a\x05\x80\xe7\xb0*\x01\x42\xd8\x02\n0com.ibc.applications.interchain_accounts.host.v1B\x07TxProtoP\x01ZJgithub.com/cosmos/ibc-go/v7/modules/apps/27-interchain-accounts/host/types\xa2\x02\x04IAIH\xaa\x02+Ibc.Applications.InterchainAccounts.Host.V1\xca\x02+Ibc\\Applications\\InterchainAccounts\\Host\\V1\xe2\x02\x37Ibc\\Applications\\InterchainAccounts\\Host\\V1\\GPBMetadata\xea\x02/Ibc::Applications::InterchainAccounts::Host::V1b\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'ibc.applications.interchain_accounts.host.v1.tx_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  DESCRIPTOR._serialized_options = b'\n0com.ibc.applications.interchain_accounts.host.v1B\007TxProtoP\001ZJgithub.com/cosmos/ibc-go/v7/modules/apps/27-interchain-accounts/host/types\242\002\004IAIH\252\002+Ibc.Applications.InterchainAccounts.Host.V1\312\002+Ibc\\Applications\\InterchainAccounts\\Host\\V1\342\0027Ibc\\Applications\\InterchainAccounts\\Host\\V1\\GPBMetadata\352\002/Ibc::Applications::InterchainAccounts::Host::V1'
  _MSGUPDATEPARAMS.fields_by_name['params']._options = None
  _MSGUPDATEPARAMS.fields_by_name['params']._serialized_options = b'\310\336\037\000'
  _MSGUPDATEPARAMS._options = None
  _MSGUPDATEPARAMS._serialized_options = b'\210\240\037\000\202\347\260*\tauthority'
  _MSG._options = None
  _MSG._serialized_options = b'\200\347\260*\001'
  _globals['_MSGUPDATEPARAMS']._serialized_start=208
  _globals['_MSGUPDATEPARAMS']._serialized_end=359
  _globals['_MSGUPDATEPARAMSRESPONSE']._serialized_start=361
  _globals['_MSGUPDATEPARAMSRESPONSE']._serialized_end=386
  _globals['_MSG']._serialized_start=389
  _globals['_MSG']._serialized_end=552
# @@protoc_insertion_point(module_scope)
