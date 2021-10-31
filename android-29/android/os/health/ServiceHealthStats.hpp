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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ServiceHealthStats(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ServiceHealthStats(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::os::health

