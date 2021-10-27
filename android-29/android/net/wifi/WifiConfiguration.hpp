#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::net
{
	class MacAddress;
}
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
		QAndroidJniObject allowedAuthAlgorithms();
		QAndroidJniObject allowedGroupCiphers();
		QAndroidJniObject allowedGroupManagementCiphers();
		QAndroidJniObject allowedKeyManagement();
		QAndroidJniObject allowedPairwiseCiphers();
		QAndroidJniObject allowedProtocols();
		QAndroidJniObject allowedSuiteBCiphers();
		QAndroidJniObject enterpriseConfig();
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
		
		WifiConfiguration(QAndroidJniObject obj);
		// Constructors
		WifiConfiguration();
		
		// Methods
		jint describeContents();
		QAndroidJniObject getHttpProxy();
		QAndroidJniObject getRandomizedMacAddress();
		jboolean isPasspoint();
		void setHttpProxy(android::net::ProxyInfo arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi

