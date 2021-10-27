#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net::wifi::aware
{
	class AttachCallback;
}
namespace __jni_impl::android::net::wifi::aware
{
	class Characteristics;
}
namespace __jni_impl::android::net::wifi::aware
{
	class IdentityChangedListener;
}
namespace __jni_impl::android::os
{
	class Handler;
}

namespace __jni_impl::android::net::wifi::aware
{
	class WifiAwareManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_WIFI_AWARE_STATE_CHANGED();
		static jint WIFI_AWARE_DATA_PATH_ROLE_INITIATOR();
		static jint WIFI_AWARE_DATA_PATH_ROLE_RESPONDER();
		
		// Constructors
		void __constructor();
		
		// Methods
		void attach(__jni_impl::android::net::wifi::aware::AttachCallback arg0, __jni_impl::android::os::Handler arg1);
		void attach(__jni_impl::android::net::wifi::aware::AttachCallback arg0, __jni_impl::android::net::wifi::aware::IdentityChangedListener arg1, __jni_impl::android::os::Handler arg2);
		QAndroidJniObject getCharacteristics();
		jboolean isAvailable();
	};
} // namespace __jni_impl::android::net::wifi::aware

#include "./AttachCallback.hpp"
#include "./Characteristics.hpp"
#include "./IdentityChangedListener.hpp"
#include "../../../os/Handler.hpp"

namespace __jni_impl::android::net::wifi::aware
{
	// Fields
	jstring WifiAwareManager::ACTION_WIFI_AWARE_STATE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.aware.WifiAwareManager",
			"ACTION_WIFI_AWARE_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint WifiAwareManager::WIFI_AWARE_DATA_PATH_ROLE_INITIATOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.aware.WifiAwareManager",
			"WIFI_AWARE_DATA_PATH_ROLE_INITIATOR"
		);
	}
	jint WifiAwareManager::WIFI_AWARE_DATA_PATH_ROLE_RESPONDER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.aware.WifiAwareManager",
			"WIFI_AWARE_DATA_PATH_ROLE_RESPONDER"
		);
	}
	
	// Constructors
	void WifiAwareManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.aware.WifiAwareManager",
			"(V)V");
	}
	
	// Methods
	void WifiAwareManager::attach(__jni_impl::android::net::wifi::aware::AttachCallback arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"attach",
			"(Landroid/net/wifi/aware/AttachCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void WifiAwareManager::attach(__jni_impl::android::net::wifi::aware::AttachCallback arg0, __jni_impl::android::net::wifi::aware::IdentityChangedListener arg1, __jni_impl::android::os::Handler arg2)
	{
		__thiz.callMethod<void>(
			"attach",
			"(Landroid/net/wifi/aware/AttachCallback;Landroid/net/wifi/aware/IdentityChangedListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject WifiAwareManager::getCharacteristics()
	{
		return __thiz.callObjectMethod(
			"getCharacteristics",
			"()Landroid/net/wifi/aware/Characteristics;"
		);
	}
	jboolean WifiAwareManager::isAvailable()
	{
		return __thiz.callMethod<jboolean>(
			"isAvailable",
			"()Z"
		);
	}
} // namespace __jni_impl::android::net::wifi::aware

namespace android::net::wifi::aware
{
	class WifiAwareManager : public __jni_impl::android::net::wifi::aware::WifiAwareManager
	{
	public:
		WifiAwareManager(QAndroidJniObject obj) { __thiz = obj; }
		WifiAwareManager()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi::aware

