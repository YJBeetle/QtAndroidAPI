#include "./AttachCallback.hpp"
#include "./Characteristics.hpp"
#include "./IdentityChangedListener.hpp"
#include "../../../os/Handler.hpp"
#include "./WifiAwareManager.hpp"

namespace android::net::wifi::aware
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
	
	WifiAwareManager::WifiAwareManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void WifiAwareManager::attach(android::net::wifi::aware::AttachCallback arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"attach",
			"(Landroid/net/wifi/aware/AttachCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void WifiAwareManager::attach(android::net::wifi::aware::AttachCallback arg0, android::net::wifi::aware::IdentityChangedListener arg1, android::os::Handler arg2)
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
} // namespace android::net::wifi::aware

