#pragma once

#include "./VibrationEffect.def.hpp"
#include "./VibrationEffect_BasicEnvelopeBuilder.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	inline VibrationEffect_BasicEnvelopeBuilder::VibrationEffect_BasicEnvelopeBuilder()
		: JObject(
			"android.os.VibrationEffect$BasicEnvelopeBuilder",
			"()V"
		) {}
	
	// Methods
	inline android::os::VibrationEffect_BasicEnvelopeBuilder VibrationEffect_BasicEnvelopeBuilder::addControlPoint(jfloat arg0, jfloat arg1, jlong arg2) const
	{
		return callObjectMethod(
			"addControlPoint",
			"(FFJ)Landroid/os/VibrationEffect$BasicEnvelopeBuilder;",
			arg0,
			arg1,
			arg2
		);
	}
	inline android::os::VibrationEffect VibrationEffect_BasicEnvelopeBuilder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/os/VibrationEffect;"
		);
	}
	inline android::os::VibrationEffect_BasicEnvelopeBuilder VibrationEffect_BasicEnvelopeBuilder::setInitialSharpness(jfloat arg0) const
	{
		return callObjectMethod(
			"setInitialSharpness",
			"(F)Landroid/os/VibrationEffect$BasicEnvelopeBuilder;",
			arg0
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
