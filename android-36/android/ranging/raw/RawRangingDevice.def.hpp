#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
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
namespace android::ranging::uwb
{
	class UwbRangingParams;
}
namespace android::ranging::wifi::rtt
{
	class RttRangingParams;
}
class JString;

namespace android::ranging::raw
{
	class RawRangingDevice : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint UPDATE_RATE_FREQUENT();
		static jint UPDATE_RATE_INFREQUENT();
		static jint UPDATE_RATE_NORMAL();
		
		// QJniObject forward
		template<typename ...Ts> explicit RawRangingDevice(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RawRangingDevice(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		android::ranging::ble::rssi::BleRssiRangingParams getBleRssiRangingParams() const;
		android::ranging::ble::cs::BleCsRangingParams getCsRangingParams() const;
		android::ranging::RangingDevice getRangingDevice() const;
		android::ranging::wifi::rtt::RttRangingParams getRttRangingParams() const;
		android::ranging::uwb::UwbRangingParams getUwbRangingParams() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::ranging::raw

