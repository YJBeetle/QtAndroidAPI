#pragma once

#include "../../../JObject.hpp"

namespace android::ranging::oob
{
	class DeviceHandle;
}
namespace android::ranging::oob
{
	class OobInitiatorRangingConfig;
}
namespace java::time
{
	class Duration;
}

namespace android::ranging::oob
{
	class OobInitiatorRangingConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit OobInitiatorRangingConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		OobInitiatorRangingConfig_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		OobInitiatorRangingConfig_Builder();
		
		// Methods
		android::ranging::oob::OobInitiatorRangingConfig_Builder addDeviceHandle(android::ranging::oob::DeviceHandle arg0) const;
		android::ranging::oob::OobInitiatorRangingConfig_Builder addDeviceHandles(JObject arg0) const;
		android::ranging::oob::OobInitiatorRangingConfig build() const;
		android::ranging::oob::OobInitiatorRangingConfig_Builder setFastestRangingInterval(java::time::Duration arg0) const;
		android::ranging::oob::OobInitiatorRangingConfig_Builder setRangingMode(jint arg0) const;
		android::ranging::oob::OobInitiatorRangingConfig_Builder setSecurityLevel(jint arg0) const;
		android::ranging::oob::OobInitiatorRangingConfig_Builder setSlowestRangingInterval(java::time::Duration arg0) const;
	};
} // namespace android::ranging::oob

