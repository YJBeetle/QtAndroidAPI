#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class CombinedVibration_ParallelCombination;
}
namespace android::os
{
	class VibrationEffect;
}

namespace android::os
{
	class CombinedVibration : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CombinedVibration(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CombinedVibration(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::os::CombinedVibration createParallel(android::os::VibrationEffect arg0);
		static android::os::CombinedVibration_ParallelCombination startParallel();
		jint describeContents();
	};
} // namespace android::os

