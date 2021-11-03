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
		
		// QJniObject forward
		template<typename ...Ts> explicit CombinedVibration_ParallelCombination(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CombinedVibration_ParallelCombination(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::os::CombinedVibration_ParallelCombination addVibrator(jint arg0, android::os::VibrationEffect arg1);
		android::os::CombinedVibration combine();
	};
} // namespace android::os

