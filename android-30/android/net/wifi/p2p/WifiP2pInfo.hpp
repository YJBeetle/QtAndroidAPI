#pragma once

#include "../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;
namespace java::net
{
	class InetAddress;
}

namespace android::net::wifi::p2p
{
	class WifiP2pInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		jboolean groupFormed();
		java::net::InetAddress groupOwnerAddress();
		jboolean isGroupOwner();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiP2pInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiP2pInfo(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		WifiP2pInfo();
		WifiP2pInfo(android::net::wifi::p2p::WifiP2pInfo &arg0);
		
		// Methods
		jint describeContents() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi::p2p

