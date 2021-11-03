#pragma once

#include "../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::net::wifi::p2p
{
	class WifiP2pDevice : public JObject
	{
	public:
		// Fields
		static jint AVAILABLE();
		static jint CONNECTED();
		static JObject CREATOR();
		static jint FAILED();
		static jint INVITED();
		static jint UNAVAILABLE();
		JString deviceAddress();
		JString deviceName();
		JString primaryDeviceType();
		JString secondaryDeviceType();
		jint status();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiP2pDevice(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiP2pDevice(QJniObject obj);
		
		// Constructors
		WifiP2pDevice();
		WifiP2pDevice(android::net::wifi::p2p::WifiP2pDevice &arg0);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
		jboolean isGroupOwner() const;
		jboolean isServiceDiscoveryCapable() const;
		JString toString() const;
		jboolean wpsDisplaySupported() const;
		jboolean wpsKeypadSupported() const;
		jboolean wpsPbcSupported() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi::p2p

