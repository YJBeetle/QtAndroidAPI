#pragma once

#ifndef ANDROID_NET_WIFI_WIFICONFIGURATION_AUTHALGORITHM
#define ANDROID_NET_WIFI_WIFICONFIGURATION_AUTHALGORITHM

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::net::wifi
{
	class WifiConfiguration_AuthAlgorithm : public __JniBaseClass
	{
	public:
		// Fields
		static jint LEAP();
		static jint OPEN();
		static jint SHARED();
		static jarray strings();
		static jstring varName();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::net::wifi


namespace __jni_impl::android::net::wifi
{
	// Fields
	jint WifiConfiguration_AuthAlgorithm::LEAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$AuthAlgorithm",
			"LEAP"
		);
	}
	jint WifiConfiguration_AuthAlgorithm::OPEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$AuthAlgorithm",
			"OPEN"
		);
	}
	jint WifiConfiguration_AuthAlgorithm::SHARED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$AuthAlgorithm",
			"SHARED"
		);
	}
	jarray WifiConfiguration_AuthAlgorithm::strings()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiConfiguration$AuthAlgorithm",
			"strings",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring WifiConfiguration_AuthAlgorithm::varName()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiConfiguration$AuthAlgorithm",
			"varName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void WifiConfiguration_AuthAlgorithm::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.WifiConfiguration$AuthAlgorithm",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::net::wifi

namespace android::net::wifi
{
	class WifiConfiguration_AuthAlgorithm : public __jni_impl::android::net::wifi::WifiConfiguration_AuthAlgorithm
	{
	public:
		WifiConfiguration_AuthAlgorithm(QAndroidJniObject obj) { __thiz = obj; }
		WifiConfiguration_AuthAlgorithm()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi

#endif // ANDROID_NET_WIFI_WIFICONFIGURATION_AUTHALGORITHM

