#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::os::health
{
	class ServiceHealthStats : public __JniBaseClass
	{
	public:
		// Fields
		static jint MEASUREMENT_LAUNCH_COUNT();
		static jint MEASUREMENT_START_SERVICE_COUNT();
		
		ServiceHealthStats(QAndroidJniObject obj);
		// Constructors
		ServiceHealthStats() = default;
		
		// Methods
	};
} // namespace android::os::health

