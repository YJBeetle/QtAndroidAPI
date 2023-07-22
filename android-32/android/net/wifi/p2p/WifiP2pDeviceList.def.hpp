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
	class WifiP2pDeviceList : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiP2pDeviceList(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiP2pDeviceList(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		WifiP2pDeviceList();
		WifiP2pDeviceList(android::net::wifi::p2p::WifiP2pDeviceList &arg0);
		
		// Methods
		jint describeContents() const;
		android::net::wifi::p2p::WifiP2pDevice get(JString arg0) const;
		JObject getDeviceList() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi::p2p

