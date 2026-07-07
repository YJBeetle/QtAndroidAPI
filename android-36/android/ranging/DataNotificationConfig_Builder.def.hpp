#pragma once

#include "../../JObject.hpp"

namespace android::ranging
{
	class DataNotificationConfig;
}

namespace android::ranging
{
	class DataNotificationConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DataNotificationConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DataNotificationConfig_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		DataNotificationConfig_Builder();
		
		// Methods
		android::ranging::DataNotificationConfig build() const;
		android::ranging::DataNotificationConfig_Builder setNotificationConfigType(jint arg0) const;
		android::ranging::DataNotificationConfig_Builder setProximityFarCm(jint arg0) const;
		android::ranging::DataNotificationConfig_Builder setProximityNearCm(jint arg0) const;
	};
} // namespace android::ranging

