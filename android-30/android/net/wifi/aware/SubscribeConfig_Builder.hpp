#pragma once

#include "../../../../JObject.hpp"

class JByteArray;
namespace android::net::wifi::aware
{
	class SubscribeConfig;
}
class JString;

namespace android::net::wifi::aware
{
	class SubscribeConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SubscribeConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SubscribeConfig_Builder(QJniObject obj);
		
		// Constructors
		SubscribeConfig_Builder();
		
		// Methods
		android::net::wifi::aware::SubscribeConfig build();
		android::net::wifi::aware::SubscribeConfig_Builder setMatchFilter(JObject arg0);
		android::net::wifi::aware::SubscribeConfig_Builder setMaxDistanceMm(jint arg0);
		android::net::wifi::aware::SubscribeConfig_Builder setMinDistanceMm(jint arg0);
		android::net::wifi::aware::SubscribeConfig_Builder setServiceName(JString arg0);
		android::net::wifi::aware::SubscribeConfig_Builder setServiceSpecificInfo(JByteArray arg0);
		android::net::wifi::aware::SubscribeConfig_Builder setSubscribeType(jint arg0);
		android::net::wifi::aware::SubscribeConfig_Builder setTerminateNotificationEnabled(jboolean arg0);
		android::net::wifi::aware::SubscribeConfig_Builder setTtlSec(jint arg0);
	};
} // namespace android::net::wifi::aware

