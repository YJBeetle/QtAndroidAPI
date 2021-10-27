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
		static QAndroidJniObject CREATOR();
		
		WifiP2pDeviceList(QAndroidJniObject obj);
		// Constructors
		WifiP2pDeviceList();
		WifiP2pDeviceList(android::net::wifi::p2p::WifiP2pDeviceList &arg0);
		
		// Methods
		jint describeContents();
		QAndroidJniObject get(jstring arg0);
		QAndroidJniObject get(const QString &arg0);
		QAndroidJniObject getDeviceList();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::p2p

