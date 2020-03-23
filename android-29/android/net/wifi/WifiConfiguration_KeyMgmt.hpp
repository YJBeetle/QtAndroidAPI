#pragma once

#ifndef ANDROID_NET_WIFI_WIFICONFIGURATION_KEYMGMT
#define ANDROID_NET_WIFI_WIFICONFIGURATION_KEYMGMT

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::net::wifi
{
	class WifiConfiguration_KeyMgmt : public __JniBaseClass
	{
	public:
		// Fields
		static jint IEEE8021X();
		static jint NONE();
		static jint OWE();
		static jint SAE();
		static jint SUITE_B_192();
		static jint WPA_EAP();
		static jint WPA_PSK();
		static QAndroidJniObject strings();
		static QAndroidJniObject varName();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::net::wifi


namespace __jni_impl::android::net::wifi
{
	// Fields
	jint WifiConfiguration_KeyMgmt::IEEE8021X()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$KeyMgmt",
			"IEEE8021X");
	}
	jint WifiConfiguration_KeyMgmt::NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$KeyMgmt",
			"NONE");
	}
	jint WifiConfiguration_KeyMgmt::OWE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$KeyMgmt",
			"OWE");
	}
	jint WifiConfiguration_KeyMgmt::SAE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$KeyMgmt",
			"SAE");
	}
	jint WifiConfiguration_KeyMgmt::SUITE_B_192()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$KeyMgmt",
			"SUITE_B_192");
	}
	jint WifiConfiguration_KeyMgmt::WPA_EAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$KeyMgmt",
			"WPA_EAP");
	}
	jint WifiConfiguration_KeyMgmt::WPA_PSK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$KeyMgmt",
			"WPA_PSK");
	}
	QAndroidJniObject WifiConfiguration_KeyMgmt::strings()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiConfiguration$KeyMgmt",
			"strings",
			"[Ljava/lang/String;");
	}
	QAndroidJniObject WifiConfiguration_KeyMgmt::varName()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiConfiguration$KeyMgmt",
			"varName",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void WifiConfiguration_KeyMgmt::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.WifiConfiguration$KeyMgmt",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::net::wifi

namespace android::net::wifi
{
	class WifiConfiguration_KeyMgmt : public __jni_impl::android::net::wifi::WifiConfiguration_KeyMgmt
	{
	public:
		WifiConfiguration_KeyMgmt(QAndroidJniObject obj) { __thiz = obj; }
		WifiConfiguration_KeyMgmt()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi

#endif // ANDROID_NET_WIFI_WIFICONFIGURATION_KEYMGMT

