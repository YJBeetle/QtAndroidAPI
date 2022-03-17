#pragma once

#include "../../../JString.hpp"
#include "./DynamicsProcessing_MbcBand.def.hpp"

namespace android::media::audiofx
{
	// Fields
	
	// Constructors
	inline DynamicsProcessing_MbcBand::DynamicsProcessing_MbcBand(android::media::audiofx::DynamicsProcessing_MbcBand &arg0)
		: android::media::audiofx::DynamicsProcessing_BandBase(
			"android.media.audiofx.DynamicsProcessing$MbcBand",
			"(Landroid/media/audiofx/DynamicsProcessing$MbcBand;)V",
			arg0.object()
		) {}
	inline DynamicsProcessing_MbcBand::DynamicsProcessing_MbcBand(jboolean arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7, jfloat arg8, jfloat arg9, jfloat arg10)
		: android::media::audiofx::DynamicsProcessing_BandBase(
			"android.media.audiofx.DynamicsProcessing$MbcBand",
			"(ZFFFFFFFFFF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9,
			arg10
		) {}
	
	// Methods
	inline jfloat DynamicsProcessing_MbcBand::getAttackTime() const
	{
		return callMethod<jfloat>(
			"getAttackTime",
			"()F"
		);
	}
	inline jfloat DynamicsProcessing_MbcBand::getExpanderRatio() const
	{
		return callMethod<jfloat>(
			"getExpanderRatio",
			"()F"
		);
	}
	inline jfloat DynamicsProcessing_MbcBand::getKneeWidth() const
	{
		return callMethod<jfloat>(
			"getKneeWidth",
			"()F"
		);
	}
	inline jfloat DynamicsProcessing_MbcBand::getNoiseGateThreshold() const
	{
		return callMethod<jfloat>(
			"getNoiseGateThreshold",
			"()F"
		);
	}
	inline jfloat DynamicsProcessing_MbcBand::getPostGain() const
	{
		return callMethod<jfloat>(
			"getPostGain",
			"()F"
		);
	}
	inline jfloat DynamicsProcessing_MbcBand::getPreGain() const
	{
		return callMethod<jfloat>(
			"getPreGain",
			"()F"
		);
	}
	inline jfloat DynamicsProcessing_MbcBand::getRatio() const
	{
		return callMethod<jfloat>(
			"getRatio",
			"()F"
		);
	}
	inline jfloat DynamicsProcessing_MbcBand::getReleaseTime() const
	{
		return callMethod<jfloat>(
			"getReleaseTime",
			"()F"
		);
	}
	inline jfloat DynamicsProcessing_MbcBand::getThreshold() const
	{
		return callMethod<jfloat>(
			"getThreshold",
			"()F"
		);
	}
	inline void DynamicsProcessing_MbcBand::setAttackTime(jfloat arg0) const
	{
		callMethod<void>(
			"setAttackTime",
			"(F)V",
			arg0
		);
	}
	inline void DynamicsProcessing_MbcBand::setExpanderRatio(jfloat arg0) const
	{
		callMethod<void>(
			"setExpanderRatio",
			"(F)V",
			arg0
		);
	}
	inline void DynamicsProcessing_MbcBand::setKneeWidth(jfloat arg0) const
	{
		callMethod<void>(
			"setKneeWidth",
			"(F)V",
			arg0
		);
	}
	inline void DynamicsProcessing_MbcBand::setNoiseGateThreshold(jfloat arg0) const
	{
		callMethod<void>(
			"setNoiseGateThreshold",
			"(F)V",
			arg0
		);
	}
	inline void DynamicsProcessing_MbcBand::setPostGain(jfloat arg0) const
	{
		callMethod<void>(
			"setPostGain",
			"(F)V",
			arg0
		);
	}
	inline void DynamicsProcessing_MbcBand::setPreGain(jfloat arg0) const
	{
		callMethod<void>(
			"setPreGain",
			"(F)V",
			arg0
		);
	}
	inline void DynamicsProcessing_MbcBand::setRatio(jfloat arg0) const
	{
		callMethod<void>(
			"setRatio",
			"(F)V",
			arg0
		);
	}
	inline void DynamicsProcessing_MbcBand::setReleaseTime(jfloat arg0) const
	{
		callMethod<void>(
			"setReleaseTime",
			"(F)V",
			arg0
		);
	}
	inline void DynamicsProcessing_MbcBand::setThreshold(jfloat arg0) const
	{
		callMethod<void>(
			"setThreshold",
			"(F)V",
			arg0
		);
	}
	inline JString DynamicsProcessing_MbcBand::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media::audiofx

// Base class headers
#include "./DynamicsProcessing_BandBase.hpp"

