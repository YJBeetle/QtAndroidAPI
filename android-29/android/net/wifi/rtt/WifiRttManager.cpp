#include "./RangingRequest.hpp"
#include "./RangingResultCallback.hpp"
#include "../../../../JString.hpp"
#include "./WifiRttManager.hpp"

namespace android::net::wifi::rtt
{
	// Fields
	JString WifiRttManager::ACTION_WIFI_RTT_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.net.wifi.rtt.WifiRttManager",
			"ACTION_WIFI_RTT_STATE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	WifiRttManager::WifiRttManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean WifiRttManager::isAvailable()
	{
		return callMethod<jboolean>(
			"isAvailable",
			"()Z"
		);
	}
	void WifiRttManager::startRanging(android::net::wifi::rtt::RangingRequest arg0, JObject arg1, android::net::wifi::rtt::RangingResultCallback arg2)
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

