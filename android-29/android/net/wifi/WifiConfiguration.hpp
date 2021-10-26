#pragma once

#ifndef ANDROID_NET_WIFI_WIFICONFIGURATION
#define ANDROID_NET_WIFI_WIFICONFIGURATION

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class BitSet;
}
namespace __jni_impl::android::net::wifi
{
	class WifiEnterpriseConfig;
}
namespace __jni_impl::android::net
{
	class ProxyInfo;
}
namespace __jni_impl::android::net
{
	class MacAddress;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::net::wifi
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
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		void setHttpProxy(__jni_impl::android::net::ProxyInfo arg0);
		QAndroidJniObject getHttpProxy();
		QAndroidJniObject getRandomizedMacAddress();
		jboolean isPasspoint();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::net::wifi

#include "../../../java/util/BitSet.hpp"
#include "WifiEnterpriseConfig.hpp"
#include "../ProxyInfo.hpp"
#include "../MacAddress.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::net::wifi
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
	
	// Constructors
	void WifiConfiguration::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.WifiConfiguration",
			"()V"
		);
	}
	
	// Methods
	jstring WifiConfiguration::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WifiConfiguration::setHttpProxy(__jni_impl::android::net::ProxyInfo arg0)
	{
		__thiz.callMethod<void>(
			"setHttpProxy",
			"(Landroid/net/ProxyInfo;)V",
			arg0.__jniObject().object()
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
	jint WifiConfiguration::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void WifiConfiguration::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::net::wifi

namespace android::net::wifi
{
	class WifiConfiguration : public __jni_impl::android::net::wifi::WifiConfiguration
	{
	public:
		WifiConfiguration(QAndroidJniObject obj) { __thiz = obj; }
		WifiConfiguration()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi

#endif // ANDROID_NET_WIFI_WIFICONFIGURATION

