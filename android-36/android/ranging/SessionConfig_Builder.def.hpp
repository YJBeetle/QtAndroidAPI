#pragma once

#include "../../JObject.hpp"

namespace android::ranging
{
	class DataNotificationConfig;
}
namespace android::ranging
{
	class SensorFusionParams;
}
namespace android::ranging
{
	class SessionConfig;
}

namespace android::ranging
{
	class SessionConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SessionConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SessionConfig_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SessionConfig_Builder();
		
		// Methods
		android::ranging::SessionConfig build() const;
		android::ranging::SessionConfig_Builder setAngleOfArrivalNeeded(jboolean arg0) const;
		android::ranging::SessionConfig_Builder setDataNotificationConfig(android::ranging::DataNotificationConfig arg0) const;
		android::ranging::SessionConfig_Builder setRangingMeasurementsLimit(jint arg0) const;
		android::ranging::SessionConfig_Builder setSensorFusionParams(android::ranging::SensorFusionParams arg0) const;
	};
} // namespace android::ranging

