#pragma once

#include "./DynamicsProcessing_Eq.def.hpp"
#include "./DynamicsProcessing_EqBand.def.hpp"
#include "./DynamicsProcessing_Limiter.def.hpp"
#include "./DynamicsProcessing_Mbc.def.hpp"
#include "./DynamicsProcessing_MbcBand.def.hpp"
#include "../../../JString.hpp"
#include "./DynamicsProcessing_Channel.def.hpp"

namespace android::media::audiofx
{
	// Fields
	
	// Constructors
	inline DynamicsProcessing_Channel::DynamicsProcessing_Channel(android::media::audiofx::DynamicsProcessing_Channel &arg0)
		: JObject(
			"android.media.audiofx.DynamicsProcessing$Channel",
			"(Landroid/media/audiofx/DynamicsProcessing$Channel;)V",
			arg0.object()
		) {}
	inline DynamicsProcessing_Channel::DynamicsProcessing_Channel(jfloat arg0, jboolean arg1, jint arg2, jboolean arg3, jint arg4, jboolean arg5, jint arg6, jboolean arg7)
		: JObject(
			"android.media.audiofx.DynamicsProcessing$Channel",
			"(FZIZIZIZ)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7
		) {}
	
	// Methods
	inline jfloat DynamicsProcessing_Channel::getInputGain() const
	{
		return callMethod<jfloat>(
			"getInputGain",
			"()F"
		);
	}
	inline android::media::audiofx::DynamicsProcessing_Limiter DynamicsProcessing_Channel::getLimiter() const
	{
		return callObjectMethod(
			"getLimiter",
			"()Landroid/media/audiofx/DynamicsProcessing$Limiter;"
		);
	}
	inline android::media::audiofx::DynamicsProcessing_Mbc DynamicsProcessing_Channel::getMbc() const
	{
		return callObjectMethod(
			"getMbc",
			"()Landroid/media/audiofx/DynamicsProcessing$Mbc;"
		);
	}
	inline android::media::audiofx::DynamicsProcessing_MbcBand DynamicsProcessing_Channel::getMbcBand(jint arg0) const
	{
		return callObjectMethod(
			"getMbcBand",
			"(I)Landroid/media/audiofx/DynamicsProcessing$MbcBand;",
			arg0
		);
	}
	inline android::media::audiofx::DynamicsProcessing_Eq DynamicsProcessing_Channel::getPostEq() const
	{
		return callObjectMethod(
			"getPostEq",
			"()Landroid/media/audiofx/DynamicsProcessing$Eq;"
		);
	}
	inline android::media::audiofx::DynamicsProcessing_EqBand DynamicsProcessing_Channel::getPostEqBand(jint arg0) const
	{
		return callObjectMethod(
			"getPostEqBand",
			"(I)Landroid/media/audiofx/DynamicsProcessing$EqBand;",
			arg0
		);
	}
	inline android::media::audiofx::DynamicsProcessing_Eq DynamicsProcessing_Channel::getPreEq() const
	{
		return callObjectMethod(
			"getPreEq",
			"()Landroid/media/audiofx/DynamicsProcessing$Eq;"
		);
	}
	inline android::media::audiofx::DynamicsProcessing_EqBand DynamicsProcessing_Channel::getPreEqBand(jint arg0) const
	{
		return callObjectMethod(
			"getPreEqBand",
			"(I)Landroid/media/audiofx/DynamicsProcessing$EqBand;",
			arg0
		);
	}
	inline void DynamicsProcessing_Channel::setInputGain(jfloat arg0) const
	{
		callMethod<void>(
			"setInputGain",
			"(F)V",
			arg0
		);
	}
	inline void DynamicsProcessing_Channel::setLimiter(android::media::audiofx::DynamicsProcessing_Limiter arg0) const
	{
		callMethod<void>(
			"setLimiter",
			"(Landroid/media/audiofx/DynamicsProcessing$Limiter;)V",
			arg0.object()
		);
	}
	inline void DynamicsProcessing_Channel::setMbc(android::media::audiofx::DynamicsProcessing_Mbc arg0) const
	{
		callMethod<void>(
			"setMbc",
			"(Landroid/media/audiofx/DynamicsProcessing$Mbc;)V",
			arg0.object()
		);
	}
	inline void DynamicsProcessing_Channel::setMbcBand(jint arg0, android::media::audiofx::DynamicsProcessing_MbcBand arg1) const
	{
		callMethod<void>(
			"setMbcBand",
			"(ILandroid/media/audiofx/DynamicsProcessing$MbcBand;)V",
			arg0,
			arg1.object()
		);
	}
	inline void DynamicsProcessing_Channel::setPostEq(android::media::audiofx::DynamicsProcessing_Eq arg0) const
	{
		callMethod<void>(
			"setPostEq",
			"(Landroid/media/audiofx/DynamicsProcessing$Eq;)V",
			arg0.object()
		);
	}
	inline void DynamicsProcessing_Channel::setPostEqBand(jint arg0, android::media::audiofx::DynamicsProcessing_EqBand arg1) const
	{
		callMethod<void>(
			"setPostEqBand",
			"(ILandroid/media/audiofx/DynamicsProcessing$EqBand;)V",
			arg0,
			arg1.object()
		);
	}
	inline void DynamicsProcessing_Channel::setPreEq(android::media::audiofx::DynamicsProcessing_Eq arg0) const
	{
		callMethod<void>(
			"setPreEq",
			"(Landroid/media/audiofx/DynamicsProcessing$Eq;)V",
			arg0.object()
		);
	}
	inline void DynamicsProcessing_Channel::setPreEqBand(jint arg0, android::media::audiofx::DynamicsProcessing_EqBand arg1) const
	{
		callMethod<void>(
			"setPreEqBand",
			"(ILandroid/media/audiofx/DynamicsProcessing$EqBand;)V",
			arg0,
			arg1.object()
		);
	}
	inline JString DynamicsProcessing_Channel::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media::audiofx

// Base class headers

