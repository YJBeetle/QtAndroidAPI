#include "./RangingRequest.hpp"
#include "./RangingResultCallback.hpp"
#include "./WifiRttManager.hpp"

namespace android::net::wifi::rtt
{
	// Fields
	jstring WifiRttManager::ACTION_WIFI_RTT_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.net.wifi.rtt.WifiRttManager",
			"ACTION_WIFI_RTT_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	WifiRttManager::WifiRttManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean WifiRttManager::isAvailable()
	{
		return callMethod<jboolean>(
			"isAvailable",
			"()Z"
		);
	}
	void WifiRttManager::startRanging(android::net::wifi::rtt::RangingRequest arg0, __JniBaseClass arg1, android::net::wifi::rtt::RangingResultCallback arg2)
	{
		callMethod<void>(
			"startRanging",
			"(Landroid/net/wifi/rtt/RangingRequest;Ljava/util/concurrent/Executor;Landroid/net/wifi/rtt/RangingResultCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::net::wifi::rtt

