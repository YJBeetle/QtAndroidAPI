#pragma once

#ifndef ANDROID_NET_WIFI_WIFIENTERPRISECONFIG_EAP
#define ANDROID_NET_WIFI_WIFIENTERPRISECONFIG_EAP

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::net::wifi
{
	class WifiEnterpriseConfig_Eap : public __JniBaseClass
	{
	public:
		// Fields
		static jint AKA();
		static jint AKA_PRIME();
		static jint NONE();
		static jint PEAP();
		static jint PWD();
		static jint SIM();
		static jint TLS();
		static jint TTLS();
		static jint UNAUTH_TLS();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::net::wifi


namespace __jni_impl::android::net::wifi
{
	// Fields
	jint WifiEnterpriseConfig_Eap::AKA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Eap",
			"AKA");
	}
	jint WifiEnterpriseConfig_Eap::AKA_PRIME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Eap",
			"AKA_PRIME");
	}
	jint WifiEnterpriseConfig_Eap::NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Eap",
			"NONE");
	}
	jint WifiEnterpriseConfig_Eap::PEAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Eap",
			"PEAP");
	}
	jint WifiEnterpriseConfig_Eap::PWD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Eap",
			"PWD");
	}
	jint WifiEnterpriseConfig_Eap::SIM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Eap",
			"SIM");
	}
	jint WifiEnterpriseConfig_Eap::TLS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Eap",
			"TLS");
	}
	jint WifiEnterpriseConfig_Eap::TTLS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Eap",
			"TTLS");
	}
	jint WifiEnterpriseConfig_Eap::UNAUTH_TLS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Eap",
			"UNAUTH_TLS");
	}
	
	// Constructors
	void WifiEnterpriseConfig_Eap::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.WifiEnterpriseConfig$Eap",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::net::wifi

namespace android::net::wifi
{
	class WifiEnterpriseConfig_Eap : public __jni_impl::android::net::wifi::WifiEnterpriseConfig_Eap
	{
	public:
		WifiEnterpriseConfig_Eap(QAndroidJniObject obj) { __thiz = obj; }
		WifiEnterpriseConfig_Eap()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi

#endif // ANDROID_NET_WIFI_WIFIENTERPRISECONFIG_EAP

