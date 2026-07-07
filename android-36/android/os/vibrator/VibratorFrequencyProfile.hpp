#pragma once

#include "../../util/Range.def.hpp"
#include "../../util/SparseArray.def.hpp"
#include "./VibratorFrequencyProfile.def.hpp"

namespace android::os::vibrator
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::util::SparseArray VibratorFrequencyProfile::getFrequenciesOutputAcceleration() const
	{
		return callObjectMethod(
			"getFrequenciesOutputAcceleration",
			"()Landroid/util/SparseArray;"
		);
	}
	inline android::util::Range VibratorFrequencyProfile::getFrequencyRange(jfloat arg0) const
	{
		return callObjectMethod(
			"getFrequencyRange",
			"(F)Landroid/util/Range;",
			arg0
		);
	}
	inline jfloat VibratorFrequencyProfile::getMaxFrequencyHz() const
	{
		return callMethod<jfloat>(
			"getMaxFrequencyHz",
			"()F"
		);
	}
	inline jfloat VibratorFrequencyProfile::getMaxOutputAccelerationGs() const
	{
		return callMethod<jfloat>(
			"getMaxOutputAccelerationGs",
			"()F"
		);
	}
	inline jfloat VibratorFrequencyProfile::getMinFrequencyHz() const
	{
		return callMethod<jfloat>(
			"getMinFrequencyHz",
			"()F"
		);
	}
	inline jfloat VibratorFrequencyProfile::getOutputAccelerationGs(jfloat arg0) const
	{
		return callMethod<jfloat>(
			"getOutputAccelerationGs",
			"(F)F",
			arg0
		);
	}
} // namespace android::os::vibrator

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os::vibrator;
#endif
