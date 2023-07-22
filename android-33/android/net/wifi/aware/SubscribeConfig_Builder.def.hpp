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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SubscribeConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SubscribeConfig_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		SubscribeConfig_Builder();
		
		// Methods
		android::net::wifi::aware::SubscribeConfig build() const;
		android::net::wifi::aware::SubscribeConfig_Builder setInstantCommunicationModeEnabled(jboolean arg0, jint arg1) const;
		android::net::wifi::aware::SubscribeConfig_Builder setMatchFilter(JObject arg0) const;
		android::net::wifi::aware::SubscribeConfig_Builder setMaxDistanceMm(jint arg0) const;
		android::net::wifi::aware::SubscribeConfig_Builder setMinDistanceMm(jint arg0) const;
		android::net::wifi::aware::SubscribeConfig_Builder setServiceName(JString arg0) const;
		android::net::wifi::aware::SubscribeConfig_Builder setServiceSpecificInfo(JByteArray arg0) const;
		android::net::wifi::aware::SubscribeConfig_Builder setSubscribeType(jint arg0) const;
		android::net::wifi::aware::SubscribeConfig_Builder setTerminateNotificationEnabled(jboolean arg0) const;
		android::net::wifi::aware::SubscribeConfig_Builder setTtlSec(jint arg0) const;
	};
} // namespace android::net::wifi::aware

