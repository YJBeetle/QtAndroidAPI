#pragma once

#include "../../../../JObject.hpp"

namespace android::ranging::ble::rssi
{
	class BleRssiRangingParams;
}
class JString;

namespace android::ranging::ble::rssi
{
	class BleRssiRangingParams_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BleRssiRangingParams_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BleRssiRangingParams_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		BleRssiRangingParams_Builder(JString arg0);
		
		// Methods
		android::ranging::ble::rssi::BleRssiRangingParams build() const;
		android::ranging::ble::rssi::BleRssiRangingParams_Builder setRangingUpdateRate(jint arg0) const;
	};
} // namespace android::ranging::ble::rssi

