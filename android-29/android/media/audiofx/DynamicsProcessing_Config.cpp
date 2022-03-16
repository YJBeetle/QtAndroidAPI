#include "./DynamicsProcessing_Channel.hpp"
#include "./DynamicsProcessing_Eq.hpp"
#include "./DynamicsProcessing_EqBand.hpp"
#include "./DynamicsProcessing_Limiter.hpp"
#include "./DynamicsProcessing_Mbc.hpp"
#include "./DynamicsProcessing_MbcBand.hpp"
#include "../../../JString.hpp"
#include "./DynamicsProcessing_Config.hpp"

namespace android::media::audiofx
{
	// Fields
	
	// Constructors
	
	// Methods
	android::media::audiofx::DynamicsProcessing_Channel DynamicsProcessing_Config::getChannelByChannelIndex(jint arg0) const
	{
		return callObjectMethod(
			"getChannelByChannelIndex",
			"(I)Landroid/media/audiofx/DynamicsProcessing$Channel;",
			arg0
		);
	}
	jfloat DynamicsProcessing_Config::getInputGainByChannelIndex(jint arg0) const
	{
		return callMethod<jfloat>(
			"getInputGainByChannelIndex",
			"(I)F",
			arg0
		);
	}
	android::media::audiofx::DynamicsProcessing_Limiter DynamicsProcessing_Config::getLimiterByChannelIndex(jint arg0) const
	{
		return callObjectMethod(
			"getLimiterByChannelIndex",
			"(I)Landroid/media/audiofx/DynamicsProcessing$Limiter;",
			arg0
		);
	}
	android::media::audiofx::DynamicsProcessing_MbcBand DynamicsProcessing_Config::getMbcBandByChannelIndex(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getMbcBandByChannelIndex",
			"(II)Landroid/media/audiofx/DynamicsProcessing$MbcBand;",
			arg0,
			arg1
		);
	}
	jint DynamicsProcessing_Config::getMbcBandCount() const
	{
		return callMethod<jint>(
			"getMbcBandCount",
			"()I"
		);
	}
	android::media::audiofx::DynamicsProcessing_Mbc DynamicsProcessing_Config::getMbcByChannelIndex(jint arg0) const
	{
		return callObjectMethod(
			"getMbcByChannelIndex",
			"(I)Landroid/media/audiofx/DynamicsProcessing$Mbc;",
			arg0
		);
	}
	android::media::audiofx::DynamicsProcessing_EqBand DynamicsProcessing_Config::getPostEqBandByChannelIndex(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getPostEqBandByChannelIndex",
			"(II)Landroid/media/audiofx/DynamicsProcessing$EqBand;",
			arg0,
			arg1
		);
	}
	jint DynamicsProcessing_Config::getPostEqBandCount() const
	{
		return callMethod<jint>(
			"getPostEqBandCount",
			"()I"
		);
	}
	android::media::audiofx::DynamicsProcessing_Eq DynamicsProcessing_Config::getPostEqByChannelIndex(jint arg0) const
	{
		return callObjectMethod(
			"getPostEqByChannelIndex",
			"(I)Landroid/media/audiofx/DynamicsProcessing$Eq;",
			arg0
		);
	}
	android::media::audiofx::DynamicsProcessing_EqBand DynamicsProcessing_Config::getPreEqBandByChannelIndex(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getPreEqBandByChannelIndex",
			"(II)Landroid/media/audiofx/DynamicsProcessing$EqBand;",
			arg0,
			arg1
		);
	}
	jint DynamicsProcessing_Config::getPreEqBandCount() const
	{
		return callMethod<jint>(
			"getPreEqBandCount",
			"()I"
		);
	}
	android::media::audiofx::DynamicsProcessing_Eq DynamicsProcessing_Config::getPreEqByChannelIndex(jint arg0) const
	{
		return callObjectMethod(
			"getPreEqByChannelIndex",
			"(I)Landroid/media/audiofx/DynamicsProcessing$Eq;",
			arg0
		);
	}
	jfloat DynamicsProcessing_Config::getPreferredFrameDuration() const
	{
		return callMethod<jfloat>(
			"getPreferredFrameDuration",
			"()F"
		);
	}
	jint DynamicsProcessing_Config::getVariant() const
	{
		return callMethod<jint>(
			"getVariant",
			"()I"
		);
	}
	jboolean DynamicsProcessing_Config::isLimiterInUse() const
	{
		return callMethod<jboolean>(
			"isLimiterInUse",
			"()Z"
		);
	}
	jboolean DynamicsProcessing_Config::isMbcInUse() const
	{
		return callMethod<jboolean>(
			"isMbcInUse",
			"()Z"
		);
	}
	jboolean DynamicsProcessing_Config::isPostEqInUse() const
	{
		return callMethod<jboolean>(
			"isPostEqInUse",
			"()Z"
		);
	}
	jboolean DynamicsProcessing_Config::isPreEqInUse() const
	{
		return callMethod<jboolean>(
			"isPreEqInUse",
			"()Z"
		);
	}
	void DynamicsProcessing_Config::setAllChannelsTo(android::media::audiofx::DynamicsProcessing_Channel arg0) const
	{
		callMethod<void>(
			"setAllChannelsTo",
			"(Landroid/media/audiofx/DynamicsProcessing$Channel;)V",
			arg0.object()
		);
	}
	void DynamicsProcessing_Config::setChannelTo(jint arg0, android::media::audiofx::DynamicsProcessing_Channel arg1) const
	{
		callMethod<void>(
			"setChannelTo",
			"(ILandroid/media/audiofx/DynamicsProcessing$Channel;)V",
			arg0,
			arg1.object()
		);
	}
	void DynamicsProcessing_Config::setInputGainAllChannelsTo(jfloat arg0) const
	{
		callMethod<void>(
			"setInputGainAllChannelsTo",
			"(F)V",
			arg0
		);
	}
	void DynamicsProcessing_Config::setInputGainByChannelIndex(jint arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setInputGainByChannelIndex",
			"(IF)V",
			arg0,
			arg1
		);
	}
	void DynamicsProcessing_Config::setLimiterAllChannelsTo(android::media::audiofx::DynamicsProcessing_Limiter arg0) const
	{
		callMethod<void>(
			"setLimiterAllChannelsTo",
			"(Landroid/media/audiofx/DynamicsProcessing$Limiter;)V",
			arg0.object()
		);
	}
	void DynamicsProcessing_Config::setLimiterByChannelIndex(jint arg0, android::media::audiofx::DynamicsProcessing_Limiter arg1) const
	{
		callMethod<void>(
			"setLimiterByChannelIndex",
			"(ILandroid/media/audiofx/DynamicsProcessing$Limiter;)V",
			arg0,
			arg1.object()
		);
	}
	void DynamicsProcessing_Config::setMbcAllChannelsTo(android::media::audiofx::DynamicsProcessing_Mbc arg0) const
	{
		callMethod<void>(
			"setMbcAllChannelsTo",
			"(Landroid/media/audiofx/DynamicsProcessing$Mbc;)V",
			arg0.object()
		);
	}
	void DynamicsProcessing_Config::setMbcBandAllChannelsTo(jint arg0, android::media::audiofx::DynamicsProcessing_MbcBand arg1) const
	{
		callMethod<void>(
			"setMbcBandAllChannelsTo",
			"(ILandroid/media/audiofx/DynamicsProcessing$MbcBand;)V",
			arg0,
			arg1.object()
		);
	}
	void DynamicsProcessing_Config::setMbcBandByChannelIndex(jint arg0, jint arg1, android::media::audiofx::DynamicsProcessing_MbcBand arg2) const
	{
		callMethod<void>(
			"setMbcBandByChannelIndex",
			"(IILandroid/media/audiofx/DynamicsProcessing$MbcBand;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void DynamicsProcessing_Config::setMbcByChannelIndex(jint arg0, android::media::audiofx::DynamicsProcessing_Mbc arg1) const
	{
		callMethod<void>(
			"setMbcByChannelIndex",
			"(ILandroid/media/audiofx/DynamicsProcessing$Mbc;)V",
			arg0,
			arg1.object()
		);
	}
	void DynamicsProcessing_Config::setPostEqAllChannelsTo(android::media::audiofx::DynamicsProcessing_Eq arg0) const
	{
		callMethod<void>(
			"setPostEqAllChannelsTo",
			"(Landroid/media/audiofx/DynamicsProcessing$Eq;)V",
			arg0.object()
		);
	}
	void DynamicsProcessing_Config::setPostEqBandAllChannelsTo(jint arg0, android::media::audiofx::DynamicsProcessing_EqBand arg1) const
	{
		callMethod<void>(
			"setPostEqBandAllChannelsTo",
			"(ILandroid/media/audiofx/DynamicsProcessing$EqBand;)V",
			arg0,
			arg1.object()
		);
	}
	void DynamicsProcessing_Config::setPostEqBandByChannelIndex(jint arg0, jint arg1, android::media::audiofx::DynamicsProcessing_EqBand arg2) const
	{
		callMethod<void>(
			"setPostEqBandByChannelIndex",
			"(IILandroid/media/audiofx/DynamicsProcessing$EqBand;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void DynamicsProcessing_Config::setPostEqByChannelIndex(jint arg0, android::media::audiofx::DynamicsProcessing_Eq arg1) const
	{
		callMethod<void>(
			"setPostEqByChannelIndex",
			"(ILandroid/media/audiofx/DynamicsProcessing$Eq;)V",
			arg0,
			arg1.object()
		);
	}
	void DynamicsProcessing_Config::setPreEqAllChannelsTo(android::media::audiofx::DynamicsProcessing_Eq arg0) const
	{
		callMethod<void>(
			"setPreEqAllChannelsTo",
			"(Landroid/media/audiofx/DynamicsProcessing$Eq;)V",
			arg0.object()
		);
	}
	void DynamicsProcessing_Config::setPreEqBandAllChannelsTo(jint arg0, android::media::audiofx::DynamicsProcessing_EqBand arg1) const
	{
		callMethod<void>(
			"setPreEqBandAllChannelsTo",
			"(ILandroid/media/audiofx/DynamicsProcessing$EqBand;)V",
			arg0,
			arg1.object()
		);
	}
	void DynamicsProcessing_Config::setPreEqBandByChannelIndex(jint arg0, jint arg1, android::media::audiofx::DynamicsProcessing_EqBand arg2) const
	{
		callMethod<void>(
			"setPreEqBandByChannelIndex",
			"(IILandroid/media/audiofx/DynamicsProcessing$EqBand;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void DynamicsProcessing_Config::setPreEqByChannelIndex(jint arg0, android::media::audiofx::DynamicsProcessing_Eq arg1) const
	{
		callMethod<void>(
			"setPreEqByChannelIndex",
			"(ILandroid/media/audiofx/DynamicsProcessing$Eq;)V",
			arg0,
			arg1.object()
		);
	}
	JString DynamicsProcessing_Config::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media::audiofx

