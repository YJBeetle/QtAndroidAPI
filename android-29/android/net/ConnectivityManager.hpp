#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::net
{
	class ConnectivityManager_NetworkCallback;
}
namespace android::net
{
	class IpSecManager_UdpEncapsulationSocket;
}
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
	class NetworkInfo;
}
namespace android::net
{
	class NetworkRequest;
}
namespace android::net
{
	class ProxyInfo;
}
namespace android::net
{
	class SocketKeepalive;
}
namespace android::net
{
	class SocketKeepalive_Callback;
}
namespace android::os
{
	class Handler;
}
namespace java::net
{
	class InetAddress;
}
namespace java::net
{
	class InetSocketAddress;
}

namespace android::net
{
	class ConnectivityManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_BACKGROUND_DATA_SETTING_CHANGED();
		static jstring ACTION_CAPTIVE_PORTAL_SIGN_IN();
		static jstring ACTION_RESTRICT_BACKGROUND_CHANGED();
		static jstring CONNECTIVITY_ACTION();
		static jint DEFAULT_NETWORK_PREFERENCE();
		static jstring EXTRA_CAPTIVE_PORTAL();
		static jstring EXTRA_CAPTIVE_PORTAL_URL();
		static jstring EXTRA_EXTRA_INFO();
		static jstring EXTRA_IS_FAILOVER();
		static jstring EXTRA_NETWORK();
		static jstring EXTRA_NETWORK_INFO();
		static jstring EXTRA_NETWORK_REQUEST();
		static jstring EXTRA_NETWORK_TYPE();
		static jstring EXTRA_NO_CONNECTIVITY();
		static jstring EXTRA_OTHER_NETWORK_INFO();
		static jstring EXTRA_REASON();
		static jint MULTIPATH_PREFERENCE_HANDOVER();
		static jint MULTIPATH_PREFERENCE_PERFORMANCE();
		static jint MULTIPATH_PREFERENCE_RELIABILITY();
		static jint RESTRICT_BACKGROUND_STATUS_DISABLED();
		static jint RESTRICT_BACKGROUND_STATUS_ENABLED();
		static jint RESTRICT_BACKGROUND_STATUS_WHITELISTED();
		static jint TYPE_BLUETOOTH();
		static jint TYPE_DUMMY();
		static jint TYPE_ETHERNET();
		static jint TYPE_MOBILE();
		static jint TYPE_MOBILE_DUN();
		static jint TYPE_MOBILE_HIPRI();
		static jint TYPE_MOBILE_MMS();
		static jint TYPE_MOBILE_SUPL();
		static jint TYPE_VPN();
		static jint TYPE_WIFI();
		static jint TYPE_WIMAX();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConnectivityManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ConnectivityManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject getProcessDefaultNetwork();
		static jboolean isNetworkTypeValid(jint arg0);
		static jboolean setProcessDefaultNetwork(android::net::Network arg0);
		void addDefaultNetworkActiveListener(__JniBaseClass arg0);
		jboolean bindProcessToNetwork(android::net::Network arg0);
		QAndroidJniObject createSocketKeepalive(android::net::Network arg0, android::net::IpSecManager_UdpEncapsulationSocket arg1, java::net::InetAddress arg2, java::net::InetAddress arg3, __JniBaseClass arg4, android::net::SocketKeepalive_Callback arg5);
		QAndroidJniObject getActiveNetwork();
		QAndroidJniObject getActiveNetworkInfo();
		jarray getAllNetworkInfo();
		jarray getAllNetworks();
		jboolean getBackgroundDataSetting();
		QAndroidJniObject getBoundNetworkForProcess();
		jint getConnectionOwnerUid(jint arg0, java::net::InetSocketAddress arg1, java::net::InetSocketAddress arg2);
		QAndroidJniObject getDefaultProxy();
		QAndroidJniObject getLinkProperties(android::net::Network arg0);
		jint getMultipathPreference(android::net::Network arg0);
		QAndroidJniObject getNetworkCapabilities(android::net::Network arg0);
		QAndroidJniObject getNetworkInfo(android::net::Network arg0);
		QAndroidJniObject getNetworkInfo(jint arg0);
		jint getNetworkPreference();
		jbyteArray getNetworkWatchlistConfigHash();
		jint getRestrictBackgroundStatus();
		jboolean isActiveNetworkMetered();
		jboolean isDefaultNetworkActive();
		void registerDefaultNetworkCallback(android::net::ConnectivityManager_NetworkCallback arg0);
		void registerDefaultNetworkCallback(android::net::ConnectivityManager_NetworkCallback arg0, android::os::Handler arg1);
		void registerNetworkCallback(android::net::NetworkRequest arg0, android::app::PendingIntent arg1);
		void registerNetworkCallback(android::net::NetworkRequest arg0, android::net::ConnectivityManager_NetworkCallback arg1);
		void registerNetworkCallback(android::net::NetworkRequest arg0, android::net::ConnectivityManager_NetworkCallback arg1, android::os::Handler arg2);
		void releaseNetworkRequest(android::app::PendingIntent arg0);
		void removeDefaultNetworkActiveListener(__JniBaseClass arg0);
		void reportBadNetwork(android::net::Network arg0);
		void reportNetworkConnectivity(android::net::Network arg0, jboolean arg1);
		jboolean requestBandwidthUpdate(android::net::Network arg0);
		void requestNetwork(android::net::NetworkRequest arg0, android::app::PendingIntent arg1);
		void requestNetwork(android::net::NetworkRequest arg0, android::net::ConnectivityManager_NetworkCallback arg1);
		void requestNetwork(android::net::NetworkRequest arg0, android::net::ConnectivityManager_NetworkCallback arg1, android::os::Handler arg2);
		void requestNetwork(android::net::NetworkRequest arg0, android::net::ConnectivityManager_NetworkCallback arg1, jint arg2);
		void requestNetwork(android::net::NetworkRequest arg0, android::net::ConnectivityManager_NetworkCallback arg1, android::os::Handler arg2, jint arg3);
		void setNetworkPreference(jint arg0);
		void unregisterNetworkCallback(android::app::PendingIntent arg0);
		void unregisterNetworkCallback(android::net::ConnectivityManager_NetworkCallback arg0);
	};
} // namespace android::net

