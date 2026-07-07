#pragma once

#include "../../../JObject.hpp"

namespace android::ranging
{
	class RangingDevice;
}
namespace android::ranging::ble::cs
{
	class BleCsRangingParams;
}
namespace android::ranging::ble::rssi
{
	class BleRssiRangingParams;
}
namespace android::ranging::raw
{
	class RawRangingDevice;
}
namespace android::ranging::uwb
{
	class UwbRangingParams;
}
namespace android::ranging::wifi::rtt
{
	class RttRangingParams;
}

namespace android::ranging::raw
{
	class RawRangingDevice_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RawRangingDevice_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RawRangingDevice_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		RawRangingDevice_Builder();
		
		// Methods
		android::ranging::raw::RawRangingDevice build() const;
		android::ranging::raw::RawRangingDevice_Builder setBleRssiRangingParams(android::ranging::ble::rssi::BleRssiRangingParams arg0) const;
		android::ranging::raw::RawRangingDevice_Builder setCsRangingParams(android::ranging::ble::cs::BleCsRangingParams arg0) const;
		android::ranging::raw::RawRangingDevice_Builder setRangingDevice(android::ranging::RangingDevice arg0) const;
		android::ranging::raw::RawRangingDevice_Builder setRttRangingParams(android::ranging::wifi::rtt::RttRangingParams arg0) const;
		android::ranging::raw::RawRangingDevice_Builder setUwbRangingParams(android::ranging::uwb::UwbRangingParams arg0) const;
	};
} // namespace android::ranging::raw

