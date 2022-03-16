#pragma once

#include "./CombinedVibration.def.hpp"
#include "./VibrationEffect.def.hpp"
#include "./CombinedVibration_ParallelCombination.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::os::CombinedVibration_ParallelCombination CombinedVibration_ParallelCombination::addVibrator(jint arg0, android::os::VibrationEffect arg1) const
	{
		return callObjectMethod(
			"addVibrator",
			"(ILandroid/os/VibrationEffect;)Landroid/os/CombinedVibration$ParallelCombination;",
			arg0,
			arg1.object()
		);
	}
	inline android::os::CombinedVibration CombinedVibration_ParallelCombination::combine() const
	{
		return callObjectMethod(
			"combine",
			"()Landroid/os/CombinedVibration;"
		);
	}
} // namespace android::os

// Base class headers

