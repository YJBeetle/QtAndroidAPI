#pragma once

#include "../../JObject.hpp"

namespace android::bluetooth
{
	class BluetoothDevice;
}
namespace android::bluetooth::le
{
	class ScanResult;
}
namespace android::net::wifi
{
	class ScanResult;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::companion
{
	class AssociatedDevice : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit AssociatedDevice(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AssociatedDevice(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::bluetooth::le::ScanResult getBleDevice() const;
		android::bluetooth::BluetoothDevice getBluetoothDevice() const;
		android::net::wifi::ScanResult getWifiDevice() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::companion

