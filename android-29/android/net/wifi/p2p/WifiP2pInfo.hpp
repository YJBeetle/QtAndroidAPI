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
		static QAndroidJniObject CREATOR();
		jboolean groupFormed();
		QAndroidJniObject groupOwnerAddress();
		jboolean isGroupOwner();
		
		WifiP2pInfo(QAndroidJniObject obj);
		// Constructors
		WifiP2pInfo();
		WifiP2pInfo(android::net::wifi::p2p::WifiP2pInfo &arg0);
		
		// Methods
		jint describeContents();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::p2p

