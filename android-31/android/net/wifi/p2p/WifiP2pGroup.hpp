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
	class WifiP2pGroup : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint NETWORK_ID_PERSISTENT();
		static jint NETWORK_ID_TEMPORARY();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiP2pGroup(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WifiP2pGroup(QAndroidJniObject obj);
		
		// Constructors
		WifiP2pGroup();
		WifiP2pGroup(android::net::wifi::p2p::WifiP2pGroup &arg0);
		
		// Methods
		jint describeContents();
		__JniBaseClass getClientList();
		jint getFrequency();
		jstring getInterface();
		jint getNetworkId();
		jstring getNetworkName();
		android::net::wifi::p2p::WifiP2pDevice getOwner();
		jstring getPassphrase();
		jboolean isGroupOwner();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::p2p

