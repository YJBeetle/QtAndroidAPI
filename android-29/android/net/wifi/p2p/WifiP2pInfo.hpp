#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace java::net
{
	class InetAddress;
}

namespace android::net::wifi::p2p
{
	class WifiP2pInfo : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		jboolean groupFormed();
		java::net::InetAddress groupOwnerAddress();
		jboolean isGroupOwner();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiP2pInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WifiP2pInfo(QJniObject obj);
		
		// Constructors
		WifiP2pInfo();
		WifiP2pInfo(android::net::wifi::p2p::WifiP2pInfo &arg0);
		
		// Methods
		jint describeContents();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::p2p

