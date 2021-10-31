#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::net::wifi::aware
{
	class DiscoverySession;
}
namespace android::net::wifi::aware
{
	class PeerHandle;
}
namespace android::net::wifi::aware
{
	class WifiAwareNetworkSpecifier;
}

namespace android::net::wifi::aware
{
	class WifiAwareNetworkSpecifier_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		WifiAwareNetworkSpecifier_Builder(QAndroidJniObject obj);
		// Constructors
		WifiAwareNetworkSpecifier_Builder(android::net::wifi::aware::DiscoverySession arg0, android::net::wifi::aware::PeerHandle arg1);
		WifiAwareNetworkSpecifier_Builder() = default;
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setPort(jint arg0);
		QAndroidJniObject setPskPassphrase(jstring arg0);
		QAndroidJniObject setTransportProtocol(jint arg0);
	};
} // namespace android::net::wifi::aware

