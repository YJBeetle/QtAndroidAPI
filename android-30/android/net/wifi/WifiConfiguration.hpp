#pragma once

#include "../../../JObject.hpp"

class JLongArray;
class JArray;
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
class JString;
namespace java::util
{
	class BitSet;
}

namespace android::net::wifi
{
	class WifiConfiguration : public JObject
	{
	public:
		// Fields
		JString BSSID();
		JString FQDN();
		static jint SECURITY_TYPE_EAP();
		static jint SECURITY_TYPE_EAP_SUITE_B();
		static jint SECURITY_TYPE_OPEN();
		static jint SECURITY_TYPE_OWE();
		static jint SECURITY_TYPE_PSK();
		static jint SECURITY_TYPE_SAE();
		static jint SECURITY_TYPE_WAPI_CERT();
		static jint SECURITY_TYPE_WAPI_PSK();
		static jint SECURITY_TYPE_WEP();
		JString SSID();
		java::util::BitSet allowedAuthAlgorithms();
		java::util::BitSet allowedGroupCiphers();
		java::util::BitSet allowedGroupManagementCiphers();
		java::util::BitSet allowedKeyManagement();
		java::util::BitSet allowedPairwiseCiphers();
		java::util::BitSet allowedProtocols();
		java::util::BitSet allowedSuiteBCiphers();
		android::net::wifi::WifiEnterpriseConfig enterpriseConfig();
		jboolean hiddenSSID();
		jboolean isHomeProviderNetwork();
		jint networkId();
		JString preSharedKey();
		jint priority();
		JString providerFriendlyName();
		JLongArray roamingConsortiumIds();
		jint status();
		JArray wepKeys();
		jint wepTxKeyIndex();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiConfiguration(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiConfiguration(QJniObject obj);
		
		// Constructors
		WifiConfiguration();
		WifiConfiguration(android::net::wifi::WifiConfiguration &arg0);
		
		// Methods
		jint describeContents();
		android::net::ProxyInfo getHttpProxy();
		JString getKey();
		android::net::MacAddress getRandomizedMacAddress();
		jboolean isPasspoint();
		void setHttpProxy(android::net::ProxyInfo arg0);
		void setSecurityParams(jint arg0);
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi

