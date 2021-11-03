#pragma once

#include "../../../../JObject.hpp"

namespace android::net::wifi::p2p
{
	class WifiP2pDevice;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::net::wifi::p2p
{
	class WifiP2pGroup : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint NETWORK_ID_PERSISTENT();
		static jint NETWORK_ID_TEMPORARY();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiP2pGroup(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiP2pGroup(QAndroidJniObject obj);
		
		// Constructors
		WifiP2pGroup();
		WifiP2pGroup(android::net::wifi::p2p::WifiP2pGroup &arg0);
		
		// Methods
		jint describeContents();
		JObject getClientList();
		jint getFrequency();
		JString getInterface();
		jint getNetworkId();
		JString getNetworkName();
		android::net::wifi::p2p::WifiP2pDevice getOwner();
		JString getPassphrase();
		jboolean isGroupOwner();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::p2p

