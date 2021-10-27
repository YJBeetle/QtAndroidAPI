#include "../MacAddress.hpp"
#include "../ProxyInfo.hpp"
#include "./WifiEnterpriseConfig.hpp"
#include "../../os/Parcel.hpp"
#include "../../../java/util/BitSet.hpp"
#include "./WifiConfiguration.hpp"

namespace android::net::wifi
{
	// Fields
	jstring WifiConfiguration::BSSID()
	{
		return __thiz.getObjectField(
			"BSSID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiConfiguration::FQDN()
	{
		return __thiz.getObjectField(
			"FQDN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiConfiguration::SSID()
	{
		return __thiz.getObjectField(
			"SSID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject WifiConfiguration::allowedAuthAlgorithms()
	{
		return __thiz.getObjectField(
			"allowedAuthAlgorithms",
			"Ljava/util/BitSet;"
		);
	}
	QAndroidJniObject WifiConfiguration::allowedGroupCiphers()
	{
		return __thiz.getObjectField(
			"allowedGroupCiphers",
			"Ljava/util/BitSet;"
		);
	}
	QAndroidJniObject WifiConfiguration::allowedGroupManagementCiphers()
	{
		return __thiz.getObjectField(
			"allowedGroupManagementCiphers",
			"Ljava/util/BitSet;"
		);
	}
	QAndroidJniObject WifiConfiguration::allowedKeyManagement()
	{
		return __thiz.getObjectField(
			"allowedKeyManagement",
			"Ljava/util/BitSet;"
		);
	}
	QAndroidJniObject WifiConfiguration::allowedPairwiseCiphers()
	{
		return __thiz.getObjectField(
			"allowedPairwiseCiphers",
			"Ljava/util/BitSet;"
		);
	}
	QAndroidJniObject WifiConfiguration::allowedProtocols()
	{
		return __thiz.getObjectField(
			"allowedProtocols",
			"Ljava/util/BitSet;"
		);
	}
	QAndroidJniObject WifiConfiguration::allowedSuiteBCiphers()
	{
		return __thiz.getObjectField(
			"allowedSuiteBCiphers",
			"Ljava/util/BitSet;"
		);
	}
	QAndroidJniObject WifiConfiguration::enterpriseConfig()
	{
		return __thiz.getObjectField(
			"enterpriseConfig",
			"Landroid/net/wifi/WifiEnterpriseConfig;"
		);
	}
	jboolean WifiConfiguration::hiddenSSID()
	{
		return __thiz.getField<jboolean>(
			"hiddenSSID"
		);
	}
	jboolean WifiConfiguration::isHomeProviderNetwork()
	{
		return __thiz.getField<jboolean>(
			"isHomeProviderNetwork"
		);
	}
	jint WifiConfiguration::networkId()
	{
		return __thiz.getField<jint>(
			"networkId"
		);
	}
	jstring WifiConfiguration::preSharedKey()
	{
		return __thiz.getObjectField(
			"preSharedKey",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint WifiConfiguration::priority()
	{
		return __thiz.getField<jint>(
			"priority"
		);
	}
	jstring WifiConfiguration::providerFriendlyName()
	{
		return __thiz.getObjectField(
			"providerFriendlyName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jlongArray WifiConfiguration::roamingConsortiumIds()
	{
		return __thiz.getObjectField(
			"roamingConsortiumIds",
			"[J"
		).object<jlongArray>();
	}
	jint WifiConfiguration::status()
	{
		return __thiz.getField<jint>(
			"status"
		);
	}
	jarray WifiConfiguration::wepKeys()
	{
		return __thiz.getObjectField(
			"wepKeys",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jint WifiConfiguration::wepTxKeyIndex()
	{
		return __thiz.getField<jint>(
			"wepTxKeyIndex"
		);
	}
	
	WifiConfiguration::WifiConfiguration(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WifiConfiguration::WifiConfiguration()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.WifiConfiguration",
			"()V"
		);
	}
	
	// Methods
	jint WifiConfiguration::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject WifiConfiguration::getHttpProxy()
	{
		return __thiz.callObjectMethod(
			"getHttpProxy",
			"()Landroid/net/ProxyInfo;"
		);
	}
	QAndroidJniObject WifiConfiguration::getRandomizedMacAddress()
	{
		return __thiz.callObjectMethod(
			"getRandomizedMacAddress",
			"()Landroid/net/MacAddress;"
		);
	}
	jboolean WifiConfiguration::isPasspoint()
	{
		return __thiz.callMethod<jboolean>(
			"isPasspoint",
			"()Z"
		);
	}
	void WifiConfiguration::setHttpProxy(android::net::ProxyInfo arg0)
	{
		__thiz.callMethod<void>(
			"setHttpProxy",
			"(Landroid/net/ProxyInfo;)V",
			arg0.__jniObject().object()
		);
	}
	jstring WifiConfiguration::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WifiConfiguration::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::net::wifi

