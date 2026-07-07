#pragma once

#include "./VibrationEffect.def.hpp"
#include "./VibrationEffect_WaveformEnvelopeBuilder.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	inline VibrationEffect_WaveformEnvelopeBuilder::VibrationEffect_WaveformEnvelopeBuilder()
		: JObject(
			"android.os.VibrationEffect$WaveformEnvelopeBuilder",
			"()V"
		) {}
	
	// Methods
	inline android::os::VibrationEffect_WaveformEnvelopeBuilder VibrationEffect_WaveformEnvelopeBuilder::addControlPoint(jfloat arg0, jfloat arg1, jlong arg2) const
	{
		return callObjectMethod(
			"addControlPoint",
			"(FFJ)Landroid/os/VibrationEffect$WaveformEnvelopeBuilder;",
			arg0,
			arg1,
			arg2
		);
	}
	inline android::os::VibrationEffect VibrationEffect_WaveformEnvelopeBuilder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/os/VibrationEffect;"
		);
	}
	inline android::os::VibrationEffect_WaveformEnvelopeBuilder VibrationEffect_WaveformEnvelopeBuilder::setInitialFrequencyHz(jfloat arg0) const
	{
		return callObjectMethod(
			"setInitialFrequencyHz",
			"(F)Landroid/os/VibrationEffect$WaveformEnvelopeBuilder;",
			arg0
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
