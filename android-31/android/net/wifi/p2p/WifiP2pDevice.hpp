#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::net::wifi::p2p
{
	class WifiP2pWfdInfo;
}
namespace android::os
{
	class Parcel;
}

namespace android::net::wifi::p2p
{
	class WifiP2pDevice : public __JniBaseClass
	{
	public:
		// Fields
		static jint AVAILABLE();
		static jint CONNECTED();
		static __JniBaseClass CREATOR();
		static jint FAILED();
		static jint INVITED();
		static jint UNAVAILABLE();
		jstring deviceAddress();
		jstring deviceName();
		jstring primaryDeviceType();
		jstring secondaryDeviceType();
		jint status();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiP2pDevice(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WifiP2pDevice(QJniObject obj);
		
		// Constructors
		WifiP2pDevice();
		WifiP2pDevice(android::net::wifi::p2p::WifiP2pDevice &arg0);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		android::net::wifi::p2p::WifiP2pWfdInfo getWfdInfo();
		jint hashCode();
		jboolean isGroupOwner();
		jboolean isServiceDiscoveryCapable();
		jstring toString();
		void update(android::net::wifi::p2p::WifiP2pDevice arg0);
		jboolean wpsDisplaySupported();
		jboolean wpsKeypadSupported();
		jboolean wpsPbcSupported();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::p2p

