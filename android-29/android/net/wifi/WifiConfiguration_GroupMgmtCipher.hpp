#pragma once

#ifndef ANDROID_NET_WIFI_WIFICONFIGURATION_GROUPMGMTCIPHER
#define ANDROID_NET_WIFI_WIFICONFIGURATION_GROUPMGMTCIPHER

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::net::wifi
{
	class WifiConfiguration_GroupMgmtCipher : public __JniBaseClass
	{
	public:
		// Fields
		static jint BIP_CMAC_256();
		static jint BIP_GMAC_128();
		static jint BIP_GMAC_256();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::net::wifi


namespace __jni_impl::android::net::wifi
{
	// Fields
	jint WifiConfiguration_GroupMgmtCipher::BIP_CMAC_256()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$GroupMgmtCipher",
			"BIP_CMAC_256"
		);
	}
	jint WifiConfiguration_GroupMgmtCipher::BIP_GMAC_128()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$GroupMgmtCipher",
			"BIP_GMAC_128"
		);
	}
	jint WifiConfiguration_GroupMgmtCipher::BIP_GMAC_256()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$GroupMgmtCipher",
			"BIP_GMAC_256"
		);
	}
	
	// Constructors
	void WifiConfiguration_GroupMgmtCipher::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.WifiConfiguration$GroupMgmtCipher",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::net::wifi

namespace android::net::wifi
{
	class WifiConfiguration_GroupMgmtCipher : public __jni_impl::android::net::wifi::WifiConfiguration_GroupMgmtCipher
	{
	public:
		WifiConfiguration_GroupMgmtCipher(QAndroidJniObject obj) { __thiz = obj; }
		WifiConfiguration_GroupMgmtCipher()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi

#endif // ANDROID_NET_WIFI_WIFICONFIGURATION_GROUPMGMTCIPHER

