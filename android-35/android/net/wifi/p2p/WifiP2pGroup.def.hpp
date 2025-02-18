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
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiP2pGroup(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiP2pGroup(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		WifiP2pGroup();
		WifiP2pGroup(android::net::wifi::p2p::WifiP2pGroup &arg0);
		
		// Methods
		jint describeContents() const;
		JObject getClientList() const;
		jint getFrequency() const;
		JString getInterface() const;
		jint getNetworkId() const;
		JString getNetworkName() const;
		android::net::wifi::p2p::WifiP2pDevice getOwner() const;
		JString getPassphrase() const;
		jboolean isGroupOwner() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi::p2p

