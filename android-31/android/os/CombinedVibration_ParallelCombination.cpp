#include "./CombinedVibration.hpp"
#include "./VibrationEffect.hpp"
#include "./CombinedVibration_ParallelCombination.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	CombinedVibration_ParallelCombination::CombinedVibration_ParallelCombination(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::os::CombinedVibration_ParallelCombination CombinedVibration_ParallelCombination::addVibrator(jint arg0, android::os::VibrationEffect arg1) const
	{
		return callObjectMethod(
			"addVibrator",
			"(ILandroid/os/VibrationEffect;)Landroid/os/CombinedVibration$ParallelCombination;",
			arg0,
			arg1.object()
		);
	}
	android::os::CombinedVibration CombinedVibration_ParallelCombination::combine() const
	{
		return callObjectMethod(
			"combine",
			"()Landroid/os/CombinedVibration;"
		);
	}
} // namespace android::os

