#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class PowerMonitor;
}
class JString;

namespace android::os
{
	class PowerMonitorReadings : public JObject
	{
	public:
		// Fields
		static jint ENERGY_UNAVAILABLE();
		
		// QJniObject forward
		template<typename ...Ts> explicit PowerMonitorReadings(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PowerMonitorReadings(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jlong getConsumedEnergy(android::os::PowerMonitor arg0) const;
		jlong getTimestampMillis(android::os::PowerMonitor arg0) const;
		JString toString() const;
	};
} // namespace android::os

