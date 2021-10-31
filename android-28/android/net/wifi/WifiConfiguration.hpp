#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::net
{
	class ProxyInfo;
}
namespace android::net::wifi
{
	class WifiEnterpriseConfig;
}
namespace android::os
{
	class Parcel;
}
namespace java::util
{
	class BitSet;
}

namespace android::net::wifi
{
	class WifiConfiguration : public __JniBaseClass
	{
	public:
		// Fields
		jstring BSSID();
		jstring FQDN();
		jstring SSID();
		java::util::BitSet allowedAuthAlgorithms();
		java::util::BitSet allowedGroupCiphers();
		java::util::BitSet allowedKeyManagement();
		java::util::BitSet allowedPairwiseCiphers();
		java::util::BitSet allowedProtocols();
		android::net::wifi::WifiEnterpriseConfig enterpriseConfig();
		jboolean hiddenSSID();
		jboolean isHomeProviderNetwork();
		jint networkId();
		jstring preSharedKey();
		jint priority();
		jstring providerFriendlyName();
		jlongArray roamingConsortiumIds();
		jint status();
		jarray wepKeys();
		jint wepTxKeyIndex();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiConfiguration(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WifiConfiguration(QJniObject obj);
		
		// Constructors
		WifiConfiguration();
		
		// Methods
		jint describeContents();
		android::net::ProxyInfo getHttpProxy();
		jboolean isPasspoint();
		void setHttpProxy(android::net::ProxyInfo arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi

