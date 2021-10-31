#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::net
{
	class MacAddress;
}
namespace android::net::wifi::p2p
{
	class WifiP2pConfig;
}

namespace android::net::wifi::p2p
{
	class WifiP2pConfig_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		WifiP2pConfig_Builder(QAndroidJniObject obj);
		// Constructors
		WifiP2pConfig_Builder();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject enablePersistentMode(jboolean arg0);
		QAndroidJniObject setDeviceAddress(android::net::MacAddress arg0);
		QAndroidJniObject setGroupOperatingBand(jint arg0);
		QAndroidJniObject setGroupOperatingFrequency(jint arg0);
		QAndroidJniObject setNetworkName(jstring arg0);
		QAndroidJniObject setPassphrase(jstring arg0);
	};
} // namespace android::net::wifi::p2p

