# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: injective/exchange/v1beta1/genesis.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
from google.protobuf.internal import builder as _builder
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from injective.exchange.v1beta1 import exchange_pb2 as injective_dot_exchange_dot_v1beta1_dot_exchange__pb2
from injective.exchange.v1beta1 import tx_pb2 as injective_dot_exchange_dot_v1beta1_dot_tx__pb2
from gogoproto import gogo_pb2 as gogoproto_dot_gogo__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n(injective/exchange/v1beta1/genesis.proto\x12\x1ainjective.exchange.v1beta1\x1a)injective/exchange/v1beta1/exchange.proto\x1a#injective/exchange/v1beta1/tx.proto\x1a\x14gogoproto/gogo.proto\"\xf1\x1b\n\x0cGenesisState\x12@\n\x06params\x18\x01 \x01(\x0b\x32\".injective.exchange.v1beta1.ParamsB\x04\xc8\xde\x1f\x00R\x06params\x12I\n\x0cspot_markets\x18\x02 \x03(\x0b\x32&.injective.exchange.v1beta1.SpotMarketR\x0bspotMarkets\x12[\n\x12\x64\x65rivative_markets\x18\x03 \x03(\x0b\x32,.injective.exchange.v1beta1.DerivativeMarketR\x11\x64\x65rivativeMarkets\x12V\n\x0espot_orderbook\x18\x04 \x03(\x0b\x32).injective.exchange.v1beta1.SpotOrderBookB\x04\xc8\xde\x1f\x00R\rspotOrderbook\x12h\n\x14\x64\x65rivative_orderbook\x18\x05 \x03(\x0b\x32/.injective.exchange.v1beta1.DerivativeOrderBookB\x04\xc8\xde\x1f\x00R\x13\x64\x65rivativeOrderbook\x12\x45\n\x08\x62\x61lances\x18\x06 \x03(\x0b\x32#.injective.exchange.v1beta1.BalanceB\x04\xc8\xde\x1f\x00R\x08\x62\x61lances\x12R\n\tpositions\x18\x07 \x03(\x0b\x32..injective.exchange.v1beta1.DerivativePositionB\x04\xc8\xde\x1f\x00R\tpositions\x12i\n\x17subaccount_trade_nonces\x18\x08 \x03(\x0b\x32+.injective.exchange.v1beta1.SubaccountNonceB\x04\xc8\xde\x1f\x00R\x15subaccountTradeNonces\x12\x86\x01\n expiry_futures_market_info_state\x18\t \x03(\x0b\x32\x38.injective.exchange.v1beta1.ExpiryFuturesMarketInfoStateB\x04\xc8\xde\x1f\x00R\x1c\x65xpiryFuturesMarketInfoState\x12i\n\x15perpetual_market_info\x18\n \x03(\x0b\x32/.injective.exchange.v1beta1.PerpetualMarketInfoB\x04\xc8\xde\x1f\x00R\x13perpetualMarketInfo\x12\x82\x01\n\x1eperpetual_market_funding_state\x18\x0b \x03(\x0b\x32\x37.injective.exchange.v1beta1.PerpetualMarketFundingStateB\x04\xc8\xde\x1f\x00R\x1bperpetualMarketFundingState\x12\x95\x01\n&derivative_market_settlement_scheduled\x18\x0c \x03(\x0b\x32:.injective.exchange.v1beta1.DerivativeMarketSettlementInfoB\x04\xc8\xde\x1f\x00R#derivativeMarketSettlementScheduled\x12\x37\n\x18is_spot_exchange_enabled\x18\r \x01(\x08R\x15isSpotExchangeEnabled\x12\x45\n\x1fis_derivatives_exchange_enabled\x18\x0e \x01(\x08R\x1cisDerivativesExchangeEnabled\x12v\n\x1ctrading_reward_campaign_info\x18\x0f \x01(\x0b\x32\x35.injective.exchange.v1beta1.TradingRewardCampaignInfoR\x19tradingRewardCampaignInfo\x12\x80\x01\n%trading_reward_pool_campaign_schedule\x18\x10 \x03(\x0b\x32..injective.exchange.v1beta1.CampaignRewardPoolR!tradingRewardPoolCampaignSchedule\x12\x92\x01\n&trading_reward_campaign_account_points\x18\x11 \x03(\x0b\x32>.injective.exchange.v1beta1.TradingRewardCampaignAccountPointsR\"tradingRewardCampaignAccountPoints\x12\x63\n\x15\x66\x65\x65_discount_schedule\x18\x12 \x01(\x0b\x32/.injective.exchange.v1beta1.FeeDiscountScheduleR\x13\x66\x65\x65\x44iscountSchedule\x12w\n\x1d\x66\x65\x65_discount_account_tier_ttl\x18\x13 \x03(\x0b\x32\x35.injective.exchange.v1beta1.FeeDiscountAccountTierTTLR\x19\x66\x65\x65\x44iscountAccountTierTtl\x12\x89\x01\n#fee_discount_bucket_volume_accounts\x18\x14 \x03(\x0b\x32;.injective.exchange.v1beta1.FeeDiscountBucketVolumeAccountsR\x1f\x66\x65\x65\x44iscountBucketVolumeAccounts\x12<\n\x1bis_first_fee_cycle_finished\x18\x15 \x01(\x08R\x17isFirstFeeCycleFinished\x12\x8f\x01\n-pending_trading_reward_pool_campaign_schedule\x18\x16 \x03(\x0b\x32..injective.exchange.v1beta1.CampaignRewardPoolR(pendingTradingRewardPoolCampaignSchedule\x12\xa8\x01\n.pending_trading_reward_campaign_account_points\x18\x17 \x03(\x0b\x32\x45.injective.exchange.v1beta1.TradingRewardCampaignAccountPendingPointsR)pendingTradingRewardCampaignAccountPoints\x12\x39\n\x19rewards_opt_out_addresses\x18\x18 \x03(\tR\x16rewardsOptOutAddresses\x12\x62\n\x18historical_trade_records\x18\x19 \x03(\x0b\x32(.injective.exchange.v1beta1.TradeRecordsR\x16historicalTradeRecords\x12\x65\n\x16\x62inary_options_markets\x18\x1a \x03(\x0b\x32/.injective.exchange.v1beta1.BinaryOptionsMarketR\x14\x62inaryOptionsMarkets\x12h\n2binary_options_market_ids_scheduled_for_settlement\x18\x1b \x03(\tR,binaryOptionsMarketIdsScheduledForSettlement\x12T\n(spot_market_ids_scheduled_to_force_close\x18\x1c \x03(\tR\"spotMarketIdsScheduledToForceClose\x12V\n\x0e\x64\x65nom_decimals\x18\x1d \x03(\x0b\x32).injective.exchange.v1beta1.DenomDecimalsB\x04\xc8\xde\x1f\x00R\rdenomDecimals\x12\x86\x01\n!conditional_derivative_orderbooks\x18\x1e \x03(\x0b\x32:.injective.exchange.v1beta1.ConditionalDerivativeOrderBookR\x1f\x63onditionalDerivativeOrderbooks\x12\x65\n\x16market_fee_multipliers\x18\x1f \x03(\x0b\x32/.injective.exchange.v1beta1.MarketFeeMultiplierR\x14marketFeeMultipliers\x12^\n\x13orderbook_sequences\x18  \x03(\x0b\x32-.injective.exchange.v1beta1.OrderbookSequenceR\x12orderbookSequences\x12j\n\x12subaccount_volumes\x18! \x03(\x0b\x32;.injective.exchange.v1beta1.AggregateSubaccountVolumeRecordR\x11subaccountVolumes\x12O\n\x0emarket_volumes\x18\" \x03(\x0b\x32(.injective.exchange.v1beta1.MarketVolumeR\rmarketVolumes\"L\n\x11OrderbookSequence\x12\x1a\n\x08sequence\x18\x01 \x01(\x04R\x08sequence\x12\x1b\n\tmarket_id\x18\x02 \x01(\tR\x08marketId\"\x80\x01\n\x19\x46\x65\x65\x44iscountAccountTierTTL\x12\x18\n\x07\x61\x63\x63ount\x18\x01 \x01(\tR\x07\x61\x63\x63ount\x12I\n\x08tier_ttl\x18\x02 \x01(\x0b\x32..injective.exchange.v1beta1.FeeDiscountTierTTLR\x07tierTtl\"\xa9\x01\n\x1f\x46\x65\x65\x44iscountBucketVolumeAccounts\x12\x34\n\x16\x62ucket_start_timestamp\x18\x01 \x01(\x03R\x14\x62ucketStartTimestamp\x12P\n\x0e\x61\x63\x63ount_volume\x18\x02 \x03(\x0b\x32).injective.exchange.v1beta1.AccountVolumeR\raccountVolume\"q\n\rAccountVolume\x12\x18\n\x07\x61\x63\x63ount\x18\x01 \x01(\tR\x07\x61\x63\x63ount\x12\x46\n\x06volume\x18\x02 \x01(\tB.\xc8\xde\x1f\x00\xda\xde\x1f&github.com/cosmos/cosmos-sdk/types.DecR\x06volume\"\x86\x01\n\"TradingRewardCampaignAccountPoints\x12\x18\n\x07\x61\x63\x63ount\x18\x01 \x01(\tR\x07\x61\x63\x63ount\x12\x46\n\x06points\x18\x02 \x01(\tB.\xc8\xde\x1f\x00\xda\xde\x1f&github.com/cosmos/cosmos-sdk/types.DecR\x06points\"\xd1\x01\n)TradingRewardCampaignAccountPendingPoints\x12=\n\x1breward_pool_start_timestamp\x18\x01 \x01(\x03R\x18rewardPoolStartTimestamp\x12\x65\n\x0e\x61\x63\x63ount_points\x18\x02 \x03(\x0b\x32>.injective.exchange.v1beta1.TradingRewardCampaignAccountPointsR\raccountPoints\"\x98\x01\n\rSpotOrderBook\x12\x1b\n\tmarket_id\x18\x01 \x01(\tR\x08marketId\x12\x1c\n\tisBuySide\x18\x02 \x01(\x08R\tisBuySide\x12\x42\n\x06orders\x18\x03 \x03(\x0b\x32*.injective.exchange.v1beta1.SpotLimitOrderR\x06orders:\x08\x88\xa0\x1f\x00\xe8\xa0\x1f\x00\"\xa4\x01\n\x13\x44\x65rivativeOrderBook\x12\x1b\n\tmarket_id\x18\x01 \x01(\tR\x08marketId\x12\x1c\n\tisBuySide\x18\x02 \x01(\x08R\tisBuySide\x12H\n\x06orders\x18\x03 \x03(\x0b\x32\x30.injective.exchange.v1beta1.DerivativeLimitOrderR\x06orders:\x08\x88\xa0\x1f\x00\xe8\xa0\x1f\x00\"\xc1\x03\n\x1e\x43onditionalDerivativeOrderBook\x12\x1b\n\tmarket_id\x18\x01 \x01(\tR\x08marketId\x12Z\n\x10limit_buy_orders\x18\x02 \x03(\x0b\x32\x30.injective.exchange.v1beta1.DerivativeLimitOrderR\x0elimitBuyOrders\x12]\n\x11market_buy_orders\x18\x03 \x03(\x0b\x32\x31.injective.exchange.v1beta1.DerivativeMarketOrderR\x0fmarketBuyOrders\x12\\\n\x11limit_sell_orders\x18\x04 \x03(\x0b\x32\x30.injective.exchange.v1beta1.DerivativeLimitOrderR\x0flimitSellOrders\x12_\n\x12market_sell_orders\x18\x05 \x03(\x0b\x32\x31.injective.exchange.v1beta1.DerivativeMarketOrderR\x10marketSellOrders:\x08\x88\xa0\x1f\x00\xe8\xa0\x1f\x00\"\x8f\x01\n\x07\x42\x61lance\x12#\n\rsubaccount_id\x18\x01 \x01(\tR\x0csubaccountId\x12\x14\n\x05\x64\x65nom\x18\x02 \x01(\tR\x05\x64\x65nom\x12?\n\x08\x64\x65posits\x18\x03 \x01(\x0b\x32#.injective.exchange.v1beta1.DepositR\x08\x64\x65posits:\x08\x88\xa0\x1f\x00\xe8\xa0\x1f\x00\"\xa2\x01\n\x12\x44\x65rivativePosition\x12#\n\rsubaccount_id\x18\x01 \x01(\tR\x0csubaccountId\x12\x1b\n\tmarket_id\x18\x02 \x01(\tR\x08marketId\x12@\n\x08position\x18\x03 \x01(\x0b\x32$.injective.exchange.v1beta1.PositionR\x08position:\x08\x88\xa0\x1f\x00\xe8\xa0\x1f\x00\"\xae\x01\n\x0fSubaccountNonce\x12#\n\rsubaccount_id\x18\x01 \x01(\tR\x0csubaccountId\x12l\n\x16subaccount_trade_nonce\x18\x02 \x01(\x0b\x32\x30.injective.exchange.v1beta1.SubaccountTradeNonceB\x04\xc8\xde\x1f\x00R\x14subaccountTradeNonce:\x08\x88\xa0\x1f\x00\xe8\xa0\x1f\x00\"\x91\x01\n\x1c\x45xpiryFuturesMarketInfoState\x12\x1b\n\tmarket_id\x18\x01 \x01(\tR\x08marketId\x12T\n\x0bmarket_info\x18\x02 \x01(\x0b\x32\x33.injective.exchange.v1beta1.ExpiryFuturesMarketInfoR\nmarketInfo\"\x88\x01\n\x1bPerpetualMarketFundingState\x12\x1b\n\tmarket_id\x18\x01 \x01(\tR\x08marketId\x12L\n\x07\x66unding\x18\x02 \x01(\x0b\x32\x32.injective.exchange.v1beta1.PerpetualMarketFundingR\x07\x66undingB\x88\x02\n\x1e\x63om.injective.exchange.v1beta1B\x0cGenesisProtoP\x01ZNgithub.com/InjectiveLabs/injective-core/injective-chain/modules/exchange/types\xa2\x02\x03IEX\xaa\x02\x1aInjective.Exchange.V1beta1\xca\x02\x1aInjective\\Exchange\\V1beta1\xe2\x02&Injective\\Exchange\\V1beta1\\GPBMetadata\xea\x02\x1cInjective::Exchange::V1beta1b\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'injective.exchange.v1beta1.genesis_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  DESCRIPTOR._serialized_options = b'\n\036com.injective.exchange.v1beta1B\014GenesisProtoP\001ZNgithub.com/InjectiveLabs/injective-core/injective-chain/modules/exchange/types\242\002\003IEX\252\002\032Injective.Exchange.V1beta1\312\002\032Injective\\Exchange\\V1beta1\342\002&Injective\\Exchange\\V1beta1\\GPBMetadata\352\002\034Injective::Exchange::V1beta1'
  _GENESISSTATE.fields_by_name['params']._options = None
  _GENESISSTATE.fields_by_name['params']._serialized_options = b'\310\336\037\000'
  _GENESISSTATE.fields_by_name['spot_orderbook']._options = None
  _GENESISSTATE.fields_by_name['spot_orderbook']._serialized_options = b'\310\336\037\000'
  _GENESISSTATE.fields_by_name['derivative_orderbook']._options = None
  _GENESISSTATE.fields_by_name['derivative_orderbook']._serialized_options = b'\310\336\037\000'
  _GENESISSTATE.fields_by_name['balances']._options = None
  _GENESISSTATE.fields_by_name['balances']._serialized_options = b'\310\336\037\000'
  _GENESISSTATE.fields_by_name['positions']._options = None
  _GENESISSTATE.fields_by_name['positions']._serialized_options = b'\310\336\037\000'
  _GENESISSTATE.fields_by_name['subaccount_trade_nonces']._options = None
  _GENESISSTATE.fields_by_name['subaccount_trade_nonces']._serialized_options = b'\310\336\037\000'
  _GENESISSTATE.fields_by_name['expiry_futures_market_info_state']._options = None
  _GENESISSTATE.fields_by_name['expiry_futures_market_info_state']._serialized_options = b'\310\336\037\000'
  _GENESISSTATE.fields_by_name['perpetual_market_info']._options = None
  _GENESISSTATE.fields_by_name['perpetual_market_info']._serialized_options = b'\310\336\037\000'
  _GENESISSTATE.fields_by_name['perpetual_market_funding_state']._options = None
  _GENESISSTATE.fields_by_name['perpetual_market_funding_state']._serialized_options = b'\310\336\037\000'
  _GENESISSTATE.fields_by_name['derivative_market_settlement_scheduled']._options = None
  _GENESISSTATE.fields_by_name['derivative_market_settlement_scheduled']._serialized_options = b'\310\336\037\000'
  _GENESISSTATE.fields_by_name['denom_decimals']._options = None
  _GENESISSTATE.fields_by_name['denom_decimals']._serialized_options = b'\310\336\037\000'
  _ACCOUNTVOLUME.fields_by_name['volume']._options = None
  _ACCOUNTVOLUME.fields_by_name['volume']._serialized_options = b'\310\336\037\000\332\336\037&github.com/cosmos/cosmos-sdk/types.Dec'
  _TRADINGREWARDCAMPAIGNACCOUNTPOINTS.fields_by_name['points']._options = None
  _TRADINGREWARDCAMPAIGNACCOUNTPOINTS.fields_by_name['points']._serialized_options = b'\310\336\037\000\332\336\037&github.com/cosmos/cosmos-sdk/types.Dec'
  _SPOTORDERBOOK._options = None
  _SPOTORDERBOOK._serialized_options = b'\210\240\037\000\350\240\037\000'
  _DERIVATIVEORDERBOOK._options = None
  _DERIVATIVEORDERBOOK._serialized_options = b'\210\240\037\000\350\240\037\000'
  _CONDITIONALDERIVATIVEORDERBOOK._options = None
  _CONDITIONALDERIVATIVEORDERBOOK._serialized_options = b'\210\240\037\000\350\240\037\000'
  _BALANCE._options = None
  _BALANCE._serialized_options = b'\210\240\037\000\350\240\037\000'
  _DERIVATIVEPOSITION._options = None
  _DERIVATIVEPOSITION._serialized_options = b'\210\240\037\000\350\240\037\000'
  _SUBACCOUNTNONCE.fields_by_name['subaccount_trade_nonce']._options = None
  _SUBACCOUNTNONCE.fields_by_name['subaccount_trade_nonce']._serialized_options = b'\310\336\037\000'
  _SUBACCOUNTNONCE._options = None
  _SUBACCOUNTNONCE._serialized_options = b'\210\240\037\000\350\240\037\000'
  _globals['_GENESISSTATE']._serialized_start=175
  _globals['_GENESISSTATE']._serialized_end=3744
  _globals['_ORDERBOOKSEQUENCE']._serialized_start=3746
  _globals['_ORDERBOOKSEQUENCE']._serialized_end=3822
  _globals['_FEEDISCOUNTACCOUNTTIERTTL']._serialized_start=3825
  _globals['_FEEDISCOUNTACCOUNTTIERTTL']._serialized_end=3953
  _globals['_FEEDISCOUNTBUCKETVOLUMEACCOUNTS']._serialized_start=3956
  _globals['_FEEDISCOUNTBUCKETVOLUMEACCOUNTS']._serialized_end=4125
  _globals['_ACCOUNTVOLUME']._serialized_start=4127
  _globals['_ACCOUNTVOLUME']._serialized_end=4240
  _globals['_TRADINGREWARDCAMPAIGNACCOUNTPOINTS']._serialized_start=4243
  _globals['_TRADINGREWARDCAMPAIGNACCOUNTPOINTS']._serialized_end=4377
  _globals['_TRADINGREWARDCAMPAIGNACCOUNTPENDINGPOINTS']._serialized_start=4380
  _globals['_TRADINGREWARDCAMPAIGNACCOUNTPENDINGPOINTS']._serialized_end=4589
  _globals['_SPOTORDERBOOK']._serialized_start=4592
  _globals['_SPOTORDERBOOK']._serialized_end=4744
  _globals['_DERIVATIVEORDERBOOK']._serialized_start=4747
  _globals['_DERIVATIVEORDERBOOK']._serialized_end=4911
  _globals['_CONDITIONALDERIVATIVEORDERBOOK']._serialized_start=4914
  _globals['_CONDITIONALDERIVATIVEORDERBOOK']._serialized_end=5363
  _globals['_BALANCE']._serialized_start=5366
  _globals['_BALANCE']._serialized_end=5509
  _globals['_DERIVATIVEPOSITION']._serialized_start=5512
  _globals['_DERIVATIVEPOSITION']._serialized_end=5674
  _globals['_SUBACCOUNTNONCE']._serialized_start=5677
  _globals['_SUBACCOUNTNONCE']._serialized_end=5851
  _globals['_EXPIRYFUTURESMARKETINFOSTATE']._serialized_start=5854
  _globals['_EXPIRYFUTURESMARKETINFOSTATE']._serialized_end=5999
  _globals['_PERPETUALMARKETFUNDINGSTATE']._serialized_start=6002
  _globals['_PERPETUALMARKETFUNDINGSTATE']._serialized_end=6138
# @@protoc_insertion_point(module_scope)
