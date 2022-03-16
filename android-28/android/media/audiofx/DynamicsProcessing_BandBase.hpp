#pragma once

#include "../../../JString.hpp"
#include "./DynamicsProcessing_BandBase.def.hpp"

namespace android::media::audiofx
{
	// Fields
	
	// Constructors
	inline DynamicsProcessing_BandBase::DynamicsProcessing_BandBase(jboolean arg0, jfloat arg1)
		: JObject(
			"android.media.audiofx.DynamicsProcessing$BandBase",
			"(ZF)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline jfloat DynamicsProcessing_BandBase::getCutoffFrequency() const
	{
		return callMethod<jfloat>(
			"getCutoffFrequency",
			"()F"
		);
	}
	inline jboolean DynamicsProcessing_BandBase::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	inline void DynamicsProcessing_BandBase::setCutoffFrequency(jfloat arg0) const
	{
		callMethod<void>(
			"setCutoffFrequency",
			"(F)V",
			arg0
		);
	}
	inline void DynamicsProcessing_BandBase::setEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	inline JString DynamicsProcessing_BandBase::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media::audiofx

// Base class headers

