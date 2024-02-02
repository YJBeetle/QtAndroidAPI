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
namespace android::os
{
	class Bundle;
}
class JString;

namespace android::net::wifi::rtt
{
	class WifiRttManager : public JObject
	{
	public:
		// Fields
		static JString ACTION_WIFI_RTT_STATE_CHANGED();
		static JString CHARACTERISTICS_KEY_BOOLEAN_LCI();
		static JString CHARACTERISTICS_KEY_BOOLEAN_LCR();
		static JString CHARACTERISTICS_KEY_BOOLEAN_ONE_SIDED_RTT();
		static JString CHARACTERISTICS_KEY_BOOLEAN_STA_RESPONDER();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiRttManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiRttManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::os::Bundle getRttCharacteristics() const;
		jboolean isAvailable() const;
		void startRanging(android::net::wifi::rtt::RangingRequest arg0, JObject arg1, android::net::wifi::rtt::RangingResultCallback arg2) const;
	};
} // namespace android::net::wifi::rtt

