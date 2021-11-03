#pragma once

#include "../../../JObject.hpp"


namespace android::os::health
{
	class PackageHealthStats : public JObject
	{
	public:
		// Fields
		static jint MEASUREMENTS_WAKEUP_ALARMS_COUNT();
		static jint STATS_SERVICES();
		
		// QJniObject forward
		template<typename ...Ts> explicit PackageHealthStats(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PackageHealthStats(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::os::health

