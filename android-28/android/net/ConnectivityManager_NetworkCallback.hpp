#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class LinkProperties;
}
namespace android::net
{
	class Network;
}
namespace android::net
{
	class NetworkCapabilities;
}

namespace android::net
{
	class ConnectivityManager_NetworkCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConnectivityManager_NetworkCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ConnectivityManager_NetworkCallback(QAndroidJniObject obj);
		
		// Constructors
		ConnectivityManager_NetworkCallback();
		
		// Methods
		void onAvailable(android::net::Network arg0);
		void onCapabilitiesChanged(android::net::Network arg0, android::net::NetworkCapabilities arg1);
		void onLinkPropertiesChanged(android::net::Network arg0, android::net::LinkProperties arg1);
		void onLosing(android::net::Network arg0, jint arg1);
		void onLost(android::net::Network arg0);
		void onUnavailable();
	};
} // namespace android::net

