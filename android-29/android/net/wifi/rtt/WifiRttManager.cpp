#include "./RangingRequest.hpp"
#include "./RangingResultCallback.hpp"
#include "./WifiRttManager.hpp"

namespace android::net::wifi::rtt
{
	// Fields
	jstring WifiRttManager::ACTION_WIFI_RTT_STATE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.rtt.WifiRttManager",
			"ACTION_WIFI_RTT_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	WifiRttManager::WifiRttManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean WifiRttManager::isAvailable()
	{
		return __thiz.callMethod<jboolean>(
			"isAvailable",
			"()Z"
		);
	}
	void WifiRttManager::startRanging(android::net::wifi::rtt::RangingRequest arg0, __JniBaseClass arg1, android::net::wifi::rtt::RangingResultCallback arg2)
	{
		__thiz.callMethod<void>(
			"startRanging",
			"(Landroid/net/wifi/rtt/RangingRequest;Ljava/util/concurrent/Executor;Landroid/net/wifi/rtt/RangingResultCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
} // namespace android::net::wifi::rtt

