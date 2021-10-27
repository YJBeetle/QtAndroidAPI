#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::os::health
{
	class PidHealthStats : public __JniBaseClass
	{
	public:
		// Fields
		static jint MEASUREMENT_WAKE_NESTING_COUNT();
		static jint MEASUREMENT_WAKE_START_MS();
		static jint MEASUREMENT_WAKE_SUM_MS();
		
		PidHealthStats(QAndroidJniObject obj);
		// Constructors
		PidHealthStats() = default;
		
		// Methods
	};
} // namespace android::os::health

