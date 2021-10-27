#pragma once

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::net::wifi
{
	class WifiConfiguration_Status : public __JniBaseClass
	{
	public:
		// Fields
		static jint CURRENT();
		static jint DISABLED();
		static jint ENABLED();
		static jarray strings();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::net::wifi


namespace __jni_impl::android::net::wifi
{
	// Fields
	jint WifiConfiguration_Status::CURRENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$Status",
			"CURRENT"
		);
	}
	jint WifiConfiguration_Status::DISABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$Status",
			"DISABLED"
		);
	}
	jint WifiConfiguration_Status::ENABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$Status",
			"ENABLED"
		);
	}
	jarray WifiConfiguration_Status::strings()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiConfiguration$Status",
			"strings",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	
	// Constructors
	void WifiConfiguration_Status::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.WifiConfiguration$Status",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::net::wifi

namespace android::net::wifi
{
	class WifiConfiguration_Status : public __jni_impl::android::net::wifi::WifiConfiguration_Status
	{
	public:
		WifiConfiguration_Status(QAndroidJniObject obj) { __thiz = obj; }
		WifiConfiguration_Status()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi

