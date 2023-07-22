#pragma once

#include "../../../JObject.hpp"

namespace android::os::health
{
	class ServiceHealthStats : public JObject
	{
	public:
		// Fields
		static jint MEASUREMENT_LAUNCH_COUNT();
		static jint MEASUREMENT_START_SERVICE_COUNT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ServiceHealthStats(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ServiceHealthStats(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::os::health

