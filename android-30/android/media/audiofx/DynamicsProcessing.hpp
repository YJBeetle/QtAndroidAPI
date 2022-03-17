#pragma once

#include "./DynamicsProcessing_Channel.def.hpp"
#include "./DynamicsProcessing_Config.def.hpp"
#include "./DynamicsProcessing_Eq.def.hpp"
#include "./DynamicsProcessing_EqBand.def.hpp"
#include "./DynamicsProcessing_Limiter.def.hpp"
#include "./DynamicsProcessing_Mbc.def.hpp"
#include "./DynamicsProcessing_MbcBand.def.hpp"
#include "./DynamicsProcessing.def.hpp"

namespace android::media::audiofx
{
	// Fields
	inline jint DynamicsProcessing::VARIANT_FAVOR_FREQUENCY_RESOLUTION()
	{
		return getStaticField<jint>(
			"android.media.audiofx.DynamicsProcessing",
			"VARIANT_FAVOR_FREQUENCY_RESOLUTION"
		);
	}
	inline jint DynamicsProcessing::VARIANT_FAVOR_TIME_RESOLUTION()
	{
		return getStaticField<jint>(
			"android.media.audiofx.DynamicsProcessing",
			"VARIANT_FAVOR_TIME_RESOLUTION"
		);
	}
	
	// Constructors
	inline DynamicsProcessing::DynamicsProcessing(jint arg0)
		: android::media::audiofx::AudioEffect(
			"android.media.audiofx.DynamicsProcessing",
			"(I)V",
			arg0
		) {}
	inline DynamicsProcessing::DynamicsProcessing(jint arg0, jint arg1, android::media::audiofx::DynamicsProcessing_Config arg2)
		: android::media::audiofx::AudioEffect(
			"android.media.audiofx.DynamicsProcessing",
			"(IILandroid/media/audiofx/DynamicsProcessing$Config;)V",
			arg0,
			arg1,
			arg2.object()
		) {}
	
	// Methods
	inline android::media::audiofx::DynamicsProcessing_Channel DynamicsProcessing::getChannelByChannelIndex(jint arg0) const
	{
		return callObjectMethod(
			"getChannelByChannelIndex",
			"(I)Landroid/media/audiofx/DynamicsProcessing$Channel;",
			arg0
		);
	}
	inline jint DynamicsProcessing::getChannelCount() const
	{
		return callMethod<jint>(
			"getChannelCount",
			"()I"
		);
	}
	inline android::media::audiofx::DynamicsProcessing_Config DynamicsProcessing::getConfig() const
	{
		return callObjectMethod(
			"getConfig",
			"()Landroid/media/audiofx/DynamicsProcessing$Config;"
		);
	}
	inline jfloat DynamicsProcessing::getInputGainByChannelIndex(jint arg0) const
	{
		return callMethod<jfloat>(
			"getInputGainByChannelIndex",
			"(I)F",
			arg0
		);
	}
	inline android::media::audiofx::DynamicsProcessing_Limiter DynamicsProcessing::getLimiterByChannelIndex(jint arg0) const
	{
		return callObjectMethod(
			"getLimiterByChannelIndex",
			"(I)Landroid/media/audiofx/DynamicsProcessing$Limiter;",
			arg0
		);
	}
	inline android::media::audiofx::DynamicsProcessing_MbcBand DynamicsProcessing::getMbcBandByChannelIndex(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getMbcBandByChannelIndex",
			"(II)Landroid/media/audiofx/DynamicsProcessing$MbcBand;",
			arg0,
			arg1
		);
	}
	inline android::media::audiofx::DynamicsProcessing_Mbc DynamicsProcessing::getMbcByChannelIndex(jint arg0) const
	{
		return callObjectMethod(
			"getMbcByChannelIndex",
			"(I)Landroid/media/audiofx/DynamicsProcessing$Mbc;",
			arg0
		);
	}
	inline android::media::audiofx::DynamicsProcessing_EqBand DynamicsProcessing::getPostEqBandByChannelIndex(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getPostEqBandByChannelIndex",
			"(II)Landroid/media/audiofx/DynamicsProcessing$EqBand;",
			arg0,
			arg1
		);
	}
	inline android::media::audiofx::DynamicsProcessing_Eq DynamicsProcessing::getPostEqByChannelIndex(jint arg0) const
	{
		return callObjectMethod(
			"getPostEqByChannelIndex",
			"(I)Landroid/media/audiofx/DynamicsProcessing$Eq;",
			arg0
		);
	}
	inline android::media::audiofx::DynamicsProcessing_EqBand DynamicsProcessing::getPreEqBandByChannelIndex(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getPreEqBandByChannelIndex",
			"(II)Landroid/media/audiofx/DynamicsProcessing$EqBand;",
			arg0,
			arg1
		);
	}
	inline android::media::audiofx::DynamicsProcessing_Eq DynamicsProcessing::getPreEqByChannelIndex(jint arg0) const
	{
		return callObjectMethod(
			"getPreEqByChannelIndex",
			"(I)Landroid/media/audiofx/DynamicsProcessing$Eq;",
			arg0
		);
	}
	inline void DynamicsProcessing::setAllChannelsTo(android::media::audiofx::DynamicsProcessing_Channel arg0) const
	{
		callMethod<void>(
			"setAllChannelsTo",
			"(Landroid/media/audiofx/DynamicsProcessing$Channel;)V",
			arg0.object()
		);
	}
	inline void DynamicsProcessing::setChannelTo(jint arg0, android::media::audiofx::DynamicsProcessing_Channel arg1) const
	{
		callMethod<void>(
			"setChannelTo",
			"(ILandroid/media/audiofx/DynamicsProcessing$Channel;)V",
			arg0,
			arg1.object()
		);
	}
	inline void DynamicsProcessing::setInputGainAllChannelsTo(jfloat arg0) const
	{
		callMethod<void>(
			"setInputGainAllChannelsTo",
			"(F)V",
			arg0
		);
	}
	inline void DynamicsProcessing::setInputGainbyChannel(jint arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setInputGainbyChannel",
			"(IF)V",
			arg0,
			arg1
		);
	}
	inline void DynamicsProcessing::setLimiterAllChannelsTo(android::media::audiofx::DynamicsProcessing_Limiter arg0) const
	{
		callMethod<void>(
			"setLimiterAllChannelsTo",
			"(Landroid/media/audiofx/DynamicsProcessing$Limiter;)V",
			arg0.object()
		);
	}
	inline void DynamicsProcessing::setLimiterByChannelIndex(jint arg0, android::media::audiofx::DynamicsProcessing_Limiter arg1) const
	{
		callMethod<void>(
			"setLimiterByChannelIndex",
			"(ILandroid/media/audiofx/DynamicsProcessing$Limiter;)V",
			arg0,
			arg1.object()
		);
	}
	inline void DynamicsProcessing::setMbcAllChannelsTo(android::media::audiofx::DynamicsProcessing_Mbc arg0) const
	{
		callMethod<void>(
			"setMbcAllChannelsTo",
			"(Landroid/media/audiofx/DynamicsProcessing$Mbc;)V",
			arg0.object()
		);
	}
	inline void DynamicsProcessing::setMbcBandAllChannelsTo(jint arg0, android::media::audiofx::DynamicsProcessing_MbcBand arg1) const
	{
		callMethod<void>(
			"setMbcBandAllChannelsTo",
			"(ILandroid/media/audiofx/DynamicsProcessing$MbcBand;)V",
			arg0,
			arg1.object()
		);
	}
	inline void DynamicsProcessing::setMbcBandByChannelIndex(jint arg0, jint arg1, android::media::audiofx::DynamicsProcessing_MbcBand arg2) const
	{
		callMethod<void>(
			"setMbcBandByChannelIndex",
			"(IILandroid/media/audiofx/DynamicsProcessing$MbcBand;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void DynamicsProcessing::setMbcByChannelIndex(jint arg0, android::media::audiofx::DynamicsProcessing_Mbc arg1) const
	{
		callMethod<void>(
			"setMbcByChannelIndex",
			"(ILandroid/media/audiofx/DynamicsProcessing$Mbc;)V",
			arg0,
			arg1.object()
		);
	}
	inline void DynamicsProcessing::setPostEqAllChannelsTo(android::media::audiofx::DynamicsProcessing_Eq arg0) const
	{
		callMethod<void>(
			"setPostEqAllChannelsTo",
			"(Landroid/media/audiofx/DynamicsProcessing$Eq;)V",
			arg0.object()
		);
	}
	inline void DynamicsProcessing::setPostEqBandAllChannelsTo(jint arg0, android::media::audiofx::DynamicsProcessing_EqBand arg1) const
	{
		callMethod<void>(
			"setPostEqBandAllChannelsTo",
			"(ILandroid/media/audiofx/DynamicsProcessing$EqBand;)V",
			arg0,
			arg1.object()
		);
	}
	inline void DynamicsProcessing::setPostEqBandByChannelIndex(jint arg0, jint arg1, android::media::audiofx::DynamicsProcessing_EqBand arg2) const
	{
		callMethod<void>(
			"setPostEqBandByChannelIndex",
			"(IILandroid/media/audiofx/DynamicsProcessing$EqBand;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void DynamicsProcessing::setPostEqByChannelIndex(jint arg0, android::media::audiofx::DynamicsProcessing_Eq arg1) const
	{
		callMethod<void>(
			"setPostEqByChannelIndex",
			"(ILandroid/media/audiofx/DynamicsProcessing$Eq;)V",
			arg0,
			arg1.object()
		);
	}
	inline void DynamicsProcessing::setPreEqAllChannelsTo(android::media::audiofx::DynamicsProcessing_Eq arg0) const
	{
		callMethod<void>(
			"setPreEqAllChannelsTo",
			"(Landroid/media/audiofx/DynamicsProcessing$Eq;)V",
			arg0.object()
		);
	}
	inline void DynamicsProcessing::setPreEqBandAllChannelsTo(jint arg0, android::media::audiofx::DynamicsProcessing_EqBand arg1) const
	{
		callMethod<void>(
			"setPreEqBandAllChannelsTo",
			"(ILandroid/media/audiofx/DynamicsProcessing$EqBand;)V",
			arg0,
			arg1.object()
		);
	}
	inline void DynamicsProcessing::setPreEqBandByChannelIndex(jint arg0, jint arg1, android::media::audiofx::DynamicsProcessing_EqBand arg2) const
	{
		callMethod<void>(
			"setPreEqBandByChannelIndex",
			"(IILandroid/media/audiofx/DynamicsProcessing$EqBand;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void DynamicsProcessing::setPreEqByChannelIndex(jint arg0, android::media::audiofx::DynamicsProcessing_Eq arg1) const
	{
		callMethod<void>(
			"setPreEqByChannelIndex",
			"(ILandroid/media/audiofx/DynamicsProcessing$Eq;)V",
			arg0,
			arg1.object()
		);
	}
} // namespace android::media::audiofx

// Base class headers
#include "./AudioEffect.hpp"

