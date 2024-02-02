#pragma once

#include "../../../JString.hpp"
#include "./DynamicsProcessing_EqBand.def.hpp"

namespace android::media::audiofx
{
	// Fields
	
	// Constructors
	inline DynamicsProcessing_EqBand::DynamicsProcessing_EqBand(android::media::audiofx::DynamicsProcessing_EqBand &arg0)
		: android::media::audiofx::DynamicsProcessing_BandBase(
			"android.media.audiofx.DynamicsProcessing$EqBand",
			"(Landroid/media/audiofx/DynamicsProcessing$EqBand;)V",
			arg0.object()
		) {}
	inline DynamicsProcessing_EqBand::DynamicsProcessing_EqBand(jboolean arg0, jfloat arg1, jfloat arg2)
		: android::media::audiofx::DynamicsProcessing_BandBase(
			"android.media.audiofx.DynamicsProcessing$EqBand",
			"(ZFF)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	inline jfloat DynamicsProcessing_EqBand::getGain() const
	{
		return callMethod<jfloat>(
			"getGain",
			"()F"
		);
	}
	inline void DynamicsProcessing_EqBand::setGain(jfloat arg0) const
	{
		callMethod<void>(
			"setGain",
			"(F)V",
			arg0
		);
	}
	inline JString DynamicsProcessing_EqBand::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media::audiofx

// Base class headers
#include "./DynamicsProcessing_BandBase.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::audiofx;
#endif
