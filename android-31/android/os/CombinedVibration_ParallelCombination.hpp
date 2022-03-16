#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class CombinedVibration;
}
namespace android::os
{
	class VibrationEffect;
}

namespace android::os
{
	class CombinedVibration_ParallelCombination : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CombinedVibration_ParallelCombination(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CombinedVibration_ParallelCombination(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::os::CombinedVibration_ParallelCombination addVibrator(jint arg0, android::os::VibrationEffect arg1) const;
		android::os::CombinedVibration combine() const;
	};
} // namespace android::os

