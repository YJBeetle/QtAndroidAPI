#pragma once

#include "../../__JniBaseClass.hpp"

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
	class CombinedVibration : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit CombinedVibration(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CombinedVibration(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::os::CombinedVibration createParallel(android::os::VibrationEffect arg0);
		static android::os::CombinedVibration_ParallelCombination startParallel();
		jint describeContents();
	};
} // namespace android::os

