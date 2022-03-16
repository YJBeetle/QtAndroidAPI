#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JArray;
class JArray;
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
namespace android::os
{
	class Handler;
}
class JString;

namespace android::net
{
	class ConnectivityManager : public JObject
	{
	public:
		// Fields
		static JString ACTION_BACKGROUND_DATA_SETTING_CHANGED();
		static JString ACTION_CAPTIVE_PORTAL_SIGN_IN();
		static JString ACTION_RESTRICT_BACKGROUND_CHANGED();
		static JString CONNECTIVITY_ACTION();
		static jint DEFAULT_NETWORK_PREFERENCE();
		static JString EXTRA_CAPTIVE_PORTAL();
		static JString EXTRA_CAPTIVE_PORTAL_URL();
		static JString EXTRA_EXTRA_INFO();
		static JString EXTRA_IS_FAILOVER();
		static JString EXTRA_NETWORK();
		static JString EXTRA_NETWORK_INFO();
		static JString EXTRA_NETWORK_REQUEST();
		static JString EXTRA_NETWORK_TYPE();
		static JString EXTRA_NO_CONNECTIVITY();
		static JString EXTRA_OTHER_NETWORK_INFO();
		static JString EXTRA_REASON();
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
		
		// QJniObject forward
		template<typename ...Ts> explicit ConnectivityManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ConnectivityManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::net::Network getProcessDefaultNetwork();
		static jboolean isNetworkTypeValid(jint arg0);
		static jboolean setProcessDefaultNetwork(android::net::Network arg0);
		void addDefaultNetworkActiveListener(JObject arg0) const;
		jboolean bindProcessToNetwork(android::net::Network arg0) const;
		android::net::Network getActiveNetwork() const;
		android::net::NetworkInfo getActiveNetworkInfo() const;
		JArray getAllNetworkInfo() const;
		JArray getAllNetworks() const;
		jboolean getBackgroundDataSetting() const;
		android::net::Network getBoundNetworkForProcess() const;
		android::net::ProxyInfo getDefaultProxy() const;
		android::net::LinkProperties getLinkProperties(android::net::Network arg0) const;
		jint getMultipathPreference(android::net::Network arg0) const;
		android::net::NetworkCapabilities getNetworkCapabilities(android::net::Network arg0) const;
		android::net::NetworkInfo getNetworkInfo(android::net::Network arg0) const;
		android::net::NetworkInfo getNetworkInfo(jint arg0) const;
		jint getNetworkPreference() const;
		JByteArray getNetworkWatchlistConfigHash() const;
		jint getRestrictBackgroundStatus() const;
		jboolean isActiveNetworkMetered() const;
		jboolean isDefaultNetworkActive() const;
		void registerDefaultNetworkCallback(android::net::ConnectivityManager_NetworkCallback arg0) const;
		void registerDefaultNetworkCallback(android::net::ConnectivityManager_NetworkCallback arg0, android::os::Handler arg1) const;
		void registerNetworkCallback(android::net::NetworkRequest arg0, android::app::PendingIntent arg1) const;
		void registerNetworkCallback(android::net::NetworkRequest arg0, android::net::ConnectivityManager_NetworkCallback arg1) const;
		void registerNetworkCallback(android::net::NetworkRequest arg0, android::net::ConnectivityManager_NetworkCallback arg1, android::os::Handler arg2) const;
		void releaseNetworkRequest(android::app::PendingIntent arg0) const;
		void removeDefaultNetworkActiveListener(JObject arg0) const;
		void reportBadNetwork(android::net::Network arg0) const;
		void reportNetworkConnectivity(android::net::Network arg0, jboolean arg1) const;
		jboolean requestBandwidthUpdate(android::net::Network arg0) const;
		void requestNetwork(android::net::NetworkRequest arg0, android::app::PendingIntent arg1) const;
		void requestNetwork(android::net::NetworkRequest arg0, android::net::ConnectivityManager_NetworkCallback arg1) const;
		void requestNetwork(android::net::NetworkRequest arg0, android::net::ConnectivityManager_NetworkCallback arg1, android::os::Handler arg2) const;
		void requestNetwork(android::net::NetworkRequest arg0, android::net::ConnectivityManager_NetworkCallback arg1, jint arg2) const;
		void requestNetwork(android::net::NetworkRequest arg0, android::net::ConnectivityManager_NetworkCallback arg1, android::os::Handler arg2, jint arg3) const;
		void setNetworkPreference(jint arg0) const;
		void unregisterNetworkCallback(android::app::PendingIntent arg0) const;
		void unregisterNetworkCallback(android::net::ConnectivityManager_NetworkCallback arg0) const;
	};
} // namespace android::net

