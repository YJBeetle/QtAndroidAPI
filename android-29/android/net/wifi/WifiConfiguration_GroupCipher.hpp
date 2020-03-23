#pragma once

#ifndef ANDROID_NET_WIFI_WIFICONFIGURATION_GROUPCIPHER
#define ANDROID_NET_WIFI_WIFICONFIGURATION_GROUPCIPHER

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::net::wifi
{
	class WifiConfiguration_GroupCipher : public __JniBaseClass
	{
	public:
		// Fields
		static jint CCMP();
		static jint GCMP_256();
		static jint TKIP();
		static jint WEP104();
		static jint WEP40();
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
	jint WifiConfiguration_GroupCipher::CCMP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$GroupCipher",
			"CCMP");
	}
	jint WifiConfiguration_GroupCipher::GCMP_256()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$GroupCipher",
			"GCMP_256");
	}
	jint WifiConfiguration_GroupCipher::TKIP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$GroupCipher",
			"TKIP");
	}
	jint WifiConfiguration_GroupCipher::WEP104()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$GroupCipher",
			"WEP104");
	}
	jint WifiConfiguration_GroupCipher::WEP40()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$GroupCipher",
			"WEP40");
	}
	QAndroidJniObject WifiConfiguration_GroupCipher::strings()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiConfiguration$GroupCipher",
			"strings",
			"[Ljava/lang/String;");
	}
	QAndroidJniObject WifiConfiguration_GroupCipher::varName()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiConfiguration$GroupCipher",
			"varName",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void WifiConfiguration_GroupCipher::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.WifiConfiguration$GroupCipher",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::net::wifi

namespace android::net::wifi
{
	class WifiConfiguration_GroupCipher : public __jni_impl::android::net::wifi::WifiConfiguration_GroupCipher
	{
	public:
		WifiConfiguration_GroupCipher(QAndroidJniObject obj) { __thiz = obj; }
		WifiConfiguration_GroupCipher()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi

#endif // ANDROID_NET_WIFI_WIFICONFIGURATION_GROUPCIPHER

