#pragma once

#include "../../../../JObject.hpp"

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
	class WifiRttManager : public JObject
	{
	public:
		// Fields
		static jstring ACTION_WIFI_RTT_STATE_CHANGED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiRttManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiRttManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean isAvailable();
		void startRanging(android::net::wifi::rtt::RangingRequest arg0, JObject arg1, android::net::wifi::rtt::RangingResultCallback arg2);
	};
} // namespace android::net::wifi::rtt

