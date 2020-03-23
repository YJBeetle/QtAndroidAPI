#pragma once

#ifndef ANDROID_NET_WIFI_WIFIENTERPRISECONFIG_PHASE2
#define ANDROID_NET_WIFI_WIFIENTERPRISECONFIG_PHASE2

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::net::wifi
{
	class WifiEnterpriseConfig_Phase2 : public __JniBaseClass
	{
	public:
		// Fields
		static jint AKA();
		static jint AKA_PRIME();
		static jint GTC();
		static jint MSCHAP();
		static jint MSCHAPV2();
		static jint NONE();
		static jint PAP();
		static jint SIM();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::net::wifi


namespace __jni_impl::android::net::wifi
{
	// Fields
	jint WifiEnterpriseConfig_Phase2::AKA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Phase2",
			"AKA");
	}
	jint WifiEnterpriseConfig_Phase2::AKA_PRIME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Phase2",
			"AKA_PRIME");
	}
	jint WifiEnterpriseConfig_Phase2::GTC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Phase2",
			"GTC");
	}
	jint WifiEnterpriseConfig_Phase2::MSCHAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Phase2",
			"MSCHAP");
	}
	jint WifiEnterpriseConfig_Phase2::MSCHAPV2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Phase2",
			"MSCHAPV2");
	}
	jint WifiEnterpriseConfig_Phase2::NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Phase2",
			"NONE");
	}
	jint WifiEnterpriseConfig_Phase2::PAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Phase2",
			"PAP");
	}
	jint WifiEnterpriseConfig_Phase2::SIM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Phase2",
			"SIM");
	}
	
	// Constructors
	void WifiEnterpriseConfig_Phase2::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.WifiEnterpriseConfig$Phase2",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::net::wifi

namespace android::net::wifi
{
	class WifiEnterpriseConfig_Phase2 : public __jni_impl::android::net::wifi::WifiEnterpriseConfig_Phase2
	{
	public:
		WifiEnterpriseConfig_Phase2(QAndroidJniObject obj) { __thiz = obj; }
		WifiEnterpriseConfig_Phase2()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi

#endif // ANDROID_NET_WIFI_WIFIENTERPRISECONFIG_PHASE2

