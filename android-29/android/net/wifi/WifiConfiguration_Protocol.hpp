#pragma once

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::net::wifi
{
	class WifiConfiguration_Protocol : public __JniBaseClass
	{
	public:
		// Fields
		static jint RSN();
		static jint WPA();
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
	jint WifiConfiguration_Protocol::RSN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$Protocol",
			"RSN"
		);
	}
	jint WifiConfiguration_Protocol::WPA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$Protocol",
			"WPA"
		);
	}
	jarray WifiConfiguration_Protocol::strings()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiConfiguration$Protocol",
			"strings",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring WifiConfiguration_Protocol::varName()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiConfiguration$Protocol",
			"varName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void WifiConfiguration_Protocol::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.WifiConfiguration$Protocol",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::net::wifi

namespace android::net::wifi
{
	class WifiConfiguration_Protocol : public __jni_impl::android::net::wifi::WifiConfiguration_Protocol
	{
	public:
		WifiConfiguration_Protocol(QAndroidJniObject obj) { __thiz = obj; }
		WifiConfiguration_Protocol()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi

