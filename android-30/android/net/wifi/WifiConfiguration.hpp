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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiConfiguration(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiConfiguration(QAndroidJniObject obj);
		
		// Constructors
		WifiConfiguration();
		WifiConfiguration(android::net::wifi::WifiConfiguration &arg0);
		
		// Methods
		jint describeContents() const;
		android::net::ProxyInfo getHttpProxy() const;
		JString getKey() const;
		android::net::MacAddress getRandomizedMacAddress() const;
		jboolean isPasspoint() const;
		void setHttpProxy(android::net::ProxyInfo arg0) const;
		void setSecurityParams(jint arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi

