#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::net::wifi::rtt
{
	class RangingRequest;
}
namespace android::net::wifi::rtt
{
	class RangingResultCallback;
}

namespace android::net::wifi::rtt
{
	class WifiRttManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_WIFI_RTT_STATE_CHANGED();
		
		WifiRttManager(QAndroidJniObject obj);
		// Constructors
		WifiRttManager() = default;
		
		// Methods
		jboolean isAvailable();
		void startRanging(android::net::wifi::rtt::RangingRequest arg0, __JniBaseClass arg1, android::net::wifi::rtt::RangingResultCallback arg2);
	};
} // namespace android::net::wifi::rtt

