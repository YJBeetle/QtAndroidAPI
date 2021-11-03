#pragma once

#include "../../../JObject.hpp"

class JLongArray;
class JArray;
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
		JString SSID();
		java::util::BitSet allowedAuthAlgorithms();
		java::util::BitSet allowedGroupCiphers();
		java::util::BitSet allowedKeyManagement();
		java::util::BitSet allowedPairwiseCiphers();
		java::util::BitSet allowedProtocols();
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
		
		// Methods
		jint describeContents();
		android::net::ProxyInfo getHttpProxy();
		jboolean isPasspoint();
		void setHttpProxy(android::net::ProxyInfo arg0);
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi

