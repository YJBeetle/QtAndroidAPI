#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::net
{
	class ProxyInfo;
}
namespace android::net
{
	class VpnService;
}
namespace android::os
{
	class ParcelFileDescriptor;
}
namespace java::net
{
	class InetAddress;
}

namespace android::net
{
	class VpnService_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		VpnService_Builder(QAndroidJniObject obj);
		// Constructors
		VpnService_Builder(android::net::VpnService arg0);
		VpnService_Builder() = default;
		
		// Methods
		QAndroidJniObject addAddress(jstring arg0, jint arg1);
		QAndroidJniObject addAddress(java::net::InetAddress arg0, jint arg1);
		QAndroidJniObject addAllowedApplication(jstring arg0);
		QAndroidJniObject addDisallowedApplication(jstring arg0);
		QAndroidJniObject addDnsServer(jstring arg0);
		QAndroidJniObject addDnsServer(java::net::InetAddress arg0);
		QAndroidJniObject addRoute(jstring arg0, jint arg1);
		QAndroidJniObject addRoute(java::net::InetAddress arg0, jint arg1);
		QAndroidJniObject addSearchDomain(jstring arg0);
		QAndroidJniObject allowBypass();
		QAndroidJniObject allowFamily(jint arg0);
		QAndroidJniObject establish();
		QAndroidJniObject setBlocking(jboolean arg0);
		QAndroidJniObject setConfigureIntent(android::app::PendingIntent arg0);
		QAndroidJniObject setHttpProxy(android::net::ProxyInfo arg0);
		QAndroidJniObject setMetered(jboolean arg0);
		QAndroidJniObject setMtu(jint arg0);
		QAndroidJniObject setSession(jstring arg0);
		QAndroidJniObject setUnderlyingNetworks(jarray arg0);
	};
} // namespace android::net

