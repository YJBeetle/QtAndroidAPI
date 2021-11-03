#include "../../../JLongArray.hpp"
#include "../../../JArray.hpp"
#include "../ProxyInfo.hpp"
#include "./WifiEnterpriseConfig.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/BitSet.hpp"
#include "./WifiConfiguration.hpp"

namespace android::net::wifi
{
	// Fields
	JString WifiConfiguration::BSSID()
	{
		return getObjectField(
			"BSSID",
			"Ljava/lang/String;"
		);
	}
	JString WifiConfiguration::FQDN()
	{
		return getObjectField(
			"FQDN",
			"Ljava/lang/String;"
		);
	}
	JString WifiConfiguration::SSID()
	{
		return getObjectField(
			"SSID",
			"Ljava/lang/String;"
		);
	}
	java::util::BitSet WifiConfiguration::allowedAuthAlgorithms()
	{
		return getObjectField(
			"allowedAuthAlgorithms",
			"Ljava/util/BitSet;"
		);
	}
	java::util::BitSet WifiConfiguration::allowedGroupCiphers()
	{
		return getObjectField(
			"allowedGroupCiphers",
			"Ljava/util/BitSet;"
		);
	}
	java::util::BitSet WifiConfiguration::allowedKeyManagement()
	{
		return getObjectField(
			"allowedKeyManagement",
			"Ljava/util/BitSet;"
		);
	}
	java::util::BitSet WifiConfiguration::allowedPairwiseCiphers()
	{
		return getObjectField(
			"allowedPairwiseCiphers",
			"Ljava/util/BitSet;"
		);
	}
	java::util::BitSet WifiConfiguration::allowedProtocols()
	{
		return getObjectField(
			"allowedProtocols",
			"Ljava/util/BitSet;"
		);
	}
	android::net::wifi::WifiEnterpriseConfig WifiConfiguration::enterpriseConfig()
	{
		return getObjectField(
			"enterpriseConfig",
			"Landroid/net/wifi/WifiEnterpriseConfig;"
		);
	}
	jboolean WifiConfiguration::hiddenSSID()
	{
		return getField<jboolean>(
			"hiddenSSID"
		);
	}
	jboolean WifiConfiguration::isHomeProviderNetwork()
	{
		return getField<jboolean>(
			"isHomeProviderNetwork"
		);
	}
	jint WifiConfiguration::networkId()
	{
		return getField<jint>(
			"networkId"
		);
	}
	JString WifiConfiguration::preSharedKey()
	{
		return getObjectField(
			"preSharedKey",
			"Ljava/lang/String;"
		);
	}
	jint WifiConfiguration::priority()
	{
		return getField<jint>(
			"priority"
		);
	}
	JString WifiConfiguration::providerFriendlyName()
	{
		return getObjectField(
			"providerFriendlyName",
			"Ljava/lang/String;"
		);
	}
	JLongArray WifiConfiguration::roamingConsortiumIds()
	{
		return getObjectField(
			"roamingConsortiumIds",
			"[J"
		);
	}
	jint WifiConfiguration::status()
	{
		return getField<jint>(
			"status"
		);
	}
	JArray WifiConfiguration::wepKeys()
	{
		return getObjectField(
			"wepKeys",
			"[Ljava/lang/String;"
		);
	}
	jint WifiConfiguration::wepTxKeyIndex()
	{
		return getField<jint>(
			"wepTxKeyIndex"
		);
	}
	
	// QAndroidJniObject forward
	WifiConfiguration::WifiConfiguration(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	WifiConfiguration::WifiConfiguration()
		: JObject(
			"android.net.wifi.WifiConfiguration",
			"()V"
		) {}
	
	// Methods
	jint WifiConfiguration::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::net::ProxyInfo WifiConfiguration::getHttpProxy()
	{
		return callObjectMethod(
			"getHttpProxy",
			"()Landroid/net/ProxyInfo;"
		);
	}
	jboolean WifiConfiguration::isPasspoint()
	{
		return callMethod<jboolean>(
			"isPasspoint",
			"()Z"
		);
	}
	void WifiConfiguration::setHttpProxy(android::net::ProxyInfo arg0)
	{
		callMethod<void>(
			"setHttpProxy",
			"(Landroid/net/ProxyInfo;)V",
			arg0.object()
		);
	}
	JString WifiConfiguration::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void WifiConfiguration::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi

