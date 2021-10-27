#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::os::health
{
	class ProcessHealthStats : public __JniBaseClass
	{
	public:
		// Fields
		static jint MEASUREMENT_ANR_COUNT();
		static jint MEASUREMENT_CRASHES_COUNT();
		static jint MEASUREMENT_FOREGROUND_MS();
		static jint MEASUREMENT_STARTS_COUNT();
		static jint MEASUREMENT_SYSTEM_TIME_MS();
		static jint MEASUREMENT_USER_TIME_MS();
		
		ProcessHealthStats(QAndroidJniObject obj);
		// Constructors
		ProcessHealthStats() = default;
		
		// Methods
	};
} // namespace android::os::health

