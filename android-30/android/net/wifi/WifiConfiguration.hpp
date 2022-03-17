#pragma once

#include "../../../JLongArray.hpp"
#include "../../../JArray.hpp"
#include "../MacAddress.def.hpp"
#include "../ProxyInfo.def.hpp"
#include "./WifiEnterpriseConfig.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/BitSet.def.hpp"
#include "./WifiConfiguration.def.hpp"

namespace android::net::wifi
{
	// Fields
	inline JString WifiConfiguration::BSSID()
	{
		return getObjectField(
			"BSSID",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiConfiguration::FQDN()
	{
		return getObjectField(
			"FQDN",
			"Ljava/lang/String;"
		);
	}
	inline jint WifiConfiguration::SECURITY_TYPE_EAP()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration",
			"SECURITY_TYPE_EAP"
		);
	}
	inline jint WifiConfiguration::SECURITY_TYPE_EAP_SUITE_B()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration",
			"SECURITY_TYPE_EAP_SUITE_B"
		);
	}
	inline jint WifiConfiguration::SECURITY_TYPE_OPEN()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration",
			"SECURITY_TYPE_OPEN"
		);
	}
	inline jint WifiConfiguration::SECURITY_TYPE_OWE()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration",
			"SECURITY_TYPE_OWE"
		);
	}
	inline jint WifiConfiguration::SECURITY_TYPE_PSK()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration",
			"SECURITY_TYPE_PSK"
		);
	}
	inline jint WifiConfiguration::SECURITY_TYPE_SAE()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration",
			"SECURITY_TYPE_SAE"
		);
	}
	inline jint WifiConfiguration::SECURITY_TYPE_WAPI_CERT()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration",
			"SECURITY_TYPE_WAPI_CERT"
		);
	}
	inline jint WifiConfiguration::SECURITY_TYPE_WAPI_PSK()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration",
			"SECURITY_TYPE_WAPI_PSK"
		);
	}
	inline jint WifiConfiguration::SECURITY_TYPE_WEP()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration",
			"SECURITY_TYPE_WEP"
		);
	}
	inline JString WifiConfiguration::SSID()
	{
		return getObjectField(
			"SSID",
			"Ljava/lang/String;"
		);
	}
	inline java::util::BitSet WifiConfiguration::allowedAuthAlgorithms()
	{
		return getObjectField(
			"allowedAuthAlgorithms",
			"Ljava/util/BitSet;"
		);
	}
	inline java::util::BitSet WifiConfiguration::allowedGroupCiphers()
	{
		return getObjectField(
			"allowedGroupCiphers",
			"Ljava/util/BitSet;"
		);
	}
	inline java::util::BitSet WifiConfiguration::allowedGroupManagementCiphers()
	{
		return getObjectField(
			"allowedGroupManagementCiphers",
			"Ljava/util/BitSet;"
		);
	}
	inline java::util::BitSet WifiConfiguration::allowedKeyManagement()
	{
		return getObjectField(
			"allowedKeyManagement",
			"Ljava/util/BitSet;"
		);
	}
	inline java::util::BitSet WifiConfiguration::allowedPairwiseCiphers()
	{
		return getObjectField(
			"allowedPairwiseCiphers",
			"Ljava/util/BitSet;"
		);
	}
	inline java::util::BitSet WifiConfiguration::allowedProtocols()
	{
		return getObjectField(
			"allowedProtocols",
			"Ljava/util/BitSet;"
		);
	}
	inline java::util::BitSet WifiConfiguration::allowedSuiteBCiphers()
	{
		return getObjectField(
			"allowedSuiteBCiphers",
			"Ljava/util/BitSet;"
		);
	}
	inline android::net::wifi::WifiEnterpriseConfig WifiConfiguration::enterpriseConfig()
	{
		return getObjectField(
			"enterpriseConfig",
			"Landroid/net/wifi/WifiEnterpriseConfig;"
		);
	}
	inline jboolean WifiConfiguration::hiddenSSID()
	{
		return getField<jboolean>(
			"hiddenSSID"
		);
	}
	inline jboolean WifiConfiguration::isHomeProviderNetwork()
	{
		return getField<jboolean>(
			"isHomeProviderNetwork"
		);
	}
	inline jint WifiConfiguration::networkId()
	{
		return getField<jint>(
			"networkId"
		);
	}
	inline JString WifiConfiguration::preSharedKey()
	{
		return getObjectField(
			"preSharedKey",
			"Ljava/lang/String;"
		);
	}
	inline jint WifiConfiguration::priority()
	{
		return getField<jint>(
			"priority"
		);
	}
	inline JString WifiConfiguration::providerFriendlyName()
	{
		return getObjectField(
			"providerFriendlyName",
			"Ljava/lang/String;"
		);
	}
	inline JLongArray WifiConfiguration::roamingConsortiumIds()
	{
		return getObjectField(
			"roamingConsortiumIds",
			"[J"
		);
	}
	inline jint WifiConfiguration::status()
	{
		return getField<jint>(
			"status"
		);
	}
	inline JArray WifiConfiguration::wepKeys()
	{
		return getObjectField(
			"wepKeys",
			"[Ljava/lang/String;"
		);
	}
	inline jint WifiConfiguration::wepTxKeyIndex()
	{
		return getField<jint>(
			"wepTxKeyIndex"
		);
	}
	
	// Constructors
	inline WifiConfiguration::WifiConfiguration()
		: JObject(
			"android.net.wifi.WifiConfiguration",
			"()V"
		) {}
	inline WifiConfiguration::WifiConfiguration(android::net::wifi::WifiConfiguration &arg0)
		: JObject(
			"android.net.wifi.WifiConfiguration",
			"(Landroid/net/wifi/WifiConfiguration;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint WifiConfiguration::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::net::ProxyInfo WifiConfiguration::getHttpProxy() const
	{
		return callObjectMethod(
			"getHttpProxy",
			"()Landroid/net/ProxyInfo;"
		);
	}
	inline JString WifiConfiguration::getKey() const
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		);
	}
	inline android::net::MacAddress WifiConfiguration::getRandomizedMacAddress() const
	{
		return callObjectMethod(
			"getRandomizedMacAddress",
			"()Landroid/net/MacAddress;"
		);
	}
	inline jboolean WifiConfiguration::isPasspoint() const
	{
		return callMethod<jboolean>(
			"isPasspoint",
			"()Z"
		);
	}
	inline void WifiConfiguration::setHttpProxy(android::net::ProxyInfo arg0) const
	{
		callMethod<void>(
			"setHttpProxy",
			"(Landroid/net/ProxyInfo;)V",
			arg0.object()
		);
	}
	inline void WifiConfiguration::setSecurityParams(jint arg0) const
	{
		callMethod<void>(
			"setSecurityParams",
			"(I)V",
			arg0
		);
	}
	inline JString WifiConfiguration::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void WifiConfiguration::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi;
#endif
