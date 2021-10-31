#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::net::wifi::p2p
{
	class WifiP2pDevice;
}
namespace android::os
{
	class Parcel;
}

namespace android::net::wifi::p2p
{
	class WifiP2pDeviceList : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiP2pDeviceList(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WifiP2pDeviceList(QJniObject obj);
		
		// Constructors
		WifiP2pDeviceList();
		WifiP2pDeviceList(android::net::wifi::p2p::WifiP2pDeviceList &arg0);
		
		// Methods
		jint describeContents();
		android::net::wifi::p2p::WifiP2pDevice get(jstring arg0);
		__JniBaseClass getDeviceList();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::p2p

