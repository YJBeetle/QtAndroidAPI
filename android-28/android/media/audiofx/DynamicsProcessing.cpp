#include "./DynamicsProcessing_Channel.hpp"
#include "./DynamicsProcessing_Config.hpp"
#include "./DynamicsProcessing_Eq.hpp"
#include "./DynamicsProcessing_EqBand.hpp"
#include "./DynamicsProcessing_Limiter.hpp"
#include "./DynamicsProcessing_Mbc.hpp"
#include "./DynamicsProcessing_MbcBand.hpp"
#include "./DynamicsProcessing.hpp"

namespace android::media::audiofx
{
	// Fields
	jint DynamicsProcessing::VARIANT_FAVOR_FREQUENCY_RESOLUTION()
	{
		return getStaticField<jint>(
			"android.media.audiofx.DynamicsProcessing",
			"VARIANT_FAVOR_FREQUENCY_RESOLUTION"
		);
	}
	jint DynamicsProcessing::VARIANT_FAVOR_TIME_RESOLUTION()
	{
		return getStaticField<jint>(
			"android.media.audiofx.DynamicsProcessing",
			"VARIANT_FAVOR_TIME_RESOLUTION"
		);
	}
	
	// QJniObject forward
	DynamicsProcessing::DynamicsProcessing(QJniObject obj) : android::media::audiofx::AudioEffect(obj) {}
	
	// Constructors
	DynamicsProcessing::DynamicsProcessing(jint arg0)
		: android::media::audiofx::AudioEffect(
			"android.media.audiofx.DynamicsProcessing",
			"(I)V",
			arg0
		) {}
	DynamicsProcessing::DynamicsProcessing(jint arg0, jint arg1, android::media::audiofx::DynamicsProcessing_Config arg2)
		: android::media::audiofx::AudioEffect(
			"android.media.audiofx.DynamicsProcessing",
			"(IILandroid/media/audiofx/DynamicsProcessing$Config;)V",
			arg0,
			arg1,
			arg2.object()
		) {}
	
	// Methods
	android::media::audiofx::DynamicsProcessing_Channel DynamicsProcessing::getChannelByChannelIndex(jint arg0)
	{
		return callObjectMethod(
			"getChannelByChannelIndex",
			"(I)Landroid/media/audiofx/DynamicsProcessing$Channel;",
			arg0
		);
	}
	jint DynamicsProcessing::getChannelCount()
	{
		return callMethod<jint>(
			"getChannelCount",
			"()I"
		);
	}
	android::media::audiofx::DynamicsProcessing_Config DynamicsProcessing::getConfig()
	{
		return callObjectMethod(
			"getConfig",
			"()Landroid/media/audiofx/DynamicsProcessing$Config;"
		);
	}
	jfloat DynamicsProcessing::getInputGainByChannelIndex(jint arg0)
	{
		return callMethod<jfloat>(
			"getInputGainByChannelIndex",
			"(I)F",
			arg0
		);
	}
	android::media::audiofx::DynamicsProcessing_Limiter DynamicsProcessing::getLimiterByChannelIndex(jint arg0)
	{
		return callObjectMethod(
			"getLimiterByChannelIndex",
			"(I)Landroid/media/audiofx/DynamicsProcessing$Limiter;",
			arg0
		);
	}
	android::media::audiofx::DynamicsProcessing_MbcBand DynamicsProcessing::getMbcBandByChannelIndex(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"getMbcBandByChannelIndex",
			"(II)Landroid/media/audiofx/DynamicsProcessing$MbcBand;",
			arg0,
			arg1
		);
	}
	android::media::audiofx::DynamicsProcessing_Mbc DynamicsProcessing::getMbcByChannelIndex(jint arg0)
	{
		return callObjectMethod(
			"getMbcByChannelIndex",
			"(I)Landroid/media/audiofx/DynamicsProcessing$Mbc;",
			arg0
		);
	}
	android::media::audiofx::DynamicsProcessing_EqBand DynamicsProcessing::getPostEqBandByChannelIndex(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"getPostEqBandByChannelIndex",
			"(II)Landroid/media/audiofx/DynamicsProcessing$EqBand;",
			arg0,
			arg1
		);
	}
	android::media::audiofx::DynamicsProcessing_Eq DynamicsProcessing::getPostEqByChannelIndex(jint arg0)
	{
		return callObjectMethod(
			"getPostEqByChannelIndex",
			"(I)Landroid/media/audiofx/DynamicsProcessing$Eq;",
			arg0
		);
	}
	android::media::audiofx::DynamicsProcessing_EqBand DynamicsProcessing::getPreEqBandByChannelIndex(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"getPreEqBandByChannelIndex",
			"(II)Landroid/media/audiofx/DynamicsProcessing$EqBand;",
			arg0,
			arg1
		);
	}
	android::media::audiofx::DynamicsProcessing_Eq DynamicsProcessing::getPreEqByChannelIndex(jint arg0)
	{
		return callObjectMethod(
			"getPreEqByChannelIndex",
			"(I)Landroid/media/audiofx/DynamicsProcessing$Eq;",
			arg0
		);
	}
	void DynamicsProcessing::setAllChannelsTo(android::media::audiofx::DynamicsProcessing_Channel arg0)
	{
		callMethod<void>(
			"setAllChannelsTo",
			"(Landroid/media/audiofx/DynamicsProcessing$Channel;)V",
			arg0.object()
		);
	}
	void DynamicsProcessing::setChannelTo(jint arg0, android::media::audiofx::DynamicsProcessing_Channel arg1)
	{
		callMethod<void>(
			"setChannelTo",
			"(ILandroid/media/audiofx/DynamicsProcessing$Channel;)V",
			arg0,
			arg1.object()
		);
	}
	void DynamicsProcessing::setInputGainAllChannelsTo(jfloat arg0)
	{
		callMethod<void>(
			"setInputGainAllChannelsTo",
			"(F)V",
			arg0
		);
	}
	void DynamicsProcessing::setInputGainbyChannel(jint arg0, jfloat arg1)
	{
		callMethod<void>(
			"setInputGainbyChannel",
			"(IF)V",
			arg0,
			arg1
		);
	}
	void DynamicsProcessing::setLimiterAllChannelsTo(android::media::audiofx::DynamicsProcessing_Limiter arg0)
	{
		callMethod<void>(
			"setLimiterAllChannelsTo",
			"(Landroid/media/audiofx/DynamicsProcessing$Limiter;)V",
			arg0.object()
		);
	}
	void DynamicsProcessing::setLimiterByChannelIndex(jint arg0, android::media::audiofx::DynamicsProcessing_Limiter arg1)
	{
		callMethod<void>(
			"setLimiterByChannelIndex",
			"(ILandroid/media/audiofx/DynamicsProcessing$Limiter;)V",
			arg0,
			arg1.object()
		);
	}
	void DynamicsProcessing::setMbcAllChannelsTo(android::media::audiofx::DynamicsProcessing_Mbc arg0)
	{
		callMethod<void>(
			"setMbcAllChannelsTo",
			"(Landroid/media/audiofx/DynamicsProcessing$Mbc;)V",
			arg0.object()
		);
	}
	void DynamicsProcessing::setMbcBandAllChannelsTo(jint arg0, android::media::audiofx::DynamicsProcessing_MbcBand arg1)
	{
		callMethod<void>(
			"setMbcBandAllChannelsTo",
			"(ILandroid/media/audiofx/DynamicsProcessing$MbcBand;)V",
			arg0,
			arg1.object()
		);
	}
	void DynamicsProcessing::setMbcBandByChannelIndex(jint arg0, jint arg1, android::media::audiofx::DynamicsProcessing_MbcBand arg2)
	{
		callMethod<void>(
			"setMbcBandByChannelIndex",
			"(IILandroid/media/audiofx/DynamicsProcessing$MbcBand;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void DynamicsProcessing::setMbcByChannelIndex(jint arg0, android::media::audiofx::DynamicsProcessing_Mbc arg1)
	{
		callMethod<void>(
			"setMbcByChannelIndex",
			"(ILandroid/media/audiofx/DynamicsProcessing$Mbc;)V",
			arg0,
			arg1.object()
		);
	}
	void DynamicsProcessing::setPostEqAllChannelsTo(android::media::audiofx::DynamicsProcessing_Eq arg0)
	{
		callMethod<void>(
			"setPostEqAllChannelsTo",
			"(Landroid/media/audiofx/DynamicsProcessing$Eq;)V",
			arg0.object()
		);
	}
	void DynamicsProcessing::setPostEqBandAllChannelsTo(jint arg0, android::media::audiofx::DynamicsProcessing_EqBand arg1)
	{
		callMethod<void>(
			"setPostEqBandAllChannelsTo",
			"(ILandroid/media/audiofx/DynamicsProcessing$EqBand;)V",
			arg0,
			arg1.object()
		);
	}
	void DynamicsProcessing::setPostEqBandByChannelIndex(jint arg0, jint arg1, android::media::audiofx::DynamicsProcessing_EqBand arg2)
	{
		callMethod<void>(
			"setPostEqBandByChannelIndex",
			"(IILandroid/media/audiofx/DynamicsProcessing$EqBand;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void DynamicsProcessing::setPostEqByChannelIndex(jint arg0, android::media::audiofx::DynamicsProcessing_Eq arg1)
	{
		callMethod<void>(
			"setPostEqByChannelIndex",
			"(ILandroid/media/audiofx/DynamicsProcessing$Eq;)V",
			arg0,
			arg1.object()
		);
	}
	void DynamicsProcessing::setPreEqAllChannelsTo(android::media::audiofx::DynamicsProcessing_Eq arg0)
	{
		callMethod<void>(
			"setPreEqAllChannelsTo",
			"(Landroid/media/audiofx/DynamicsProcessing$Eq;)V",
			arg0.object()
		);
	}
	void DynamicsProcessing::setPreEqBandAllChannelsTo(jint arg0, android::media::audiofx::DynamicsProcessing_EqBand arg1)
	{
		callMethod<void>(
			"setPreEqBandAllChannelsTo",
			"(ILandroid/media/audiofx/DynamicsProcessing$EqBand;)V",
			arg0,
			arg1.object()
		);
	}
	void DynamicsProcessing::setPreEqBandByChannelIndex(jint arg0, jint arg1, android::media::audiofx::DynamicsProcessing_EqBand arg2)
	{
		callMethod<void>(
			"setPreEqBandByChannelIndex",
			"(IILandroid/media/audiofx/DynamicsProcessing$EqBand;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void DynamicsProcessing::setPreEqByChannelIndex(jint arg0, android::media::audiofx::DynamicsProcessing_Eq arg1)
	{
		callMethod<void>(
			"setPreEqByChannelIndex",
			"(ILandroid/media/audiofx/DynamicsProcessing$Eq;)V",
			arg0,
			arg1.object()
		);
	}
} // namespace android::media::audiofx

