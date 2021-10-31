#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::net::wifi::aware
{
	class SubscribeConfig;
}

namespace android::net::wifi::aware
{
	class SubscribeConfig_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SubscribeConfig_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SubscribeConfig_Builder(QAndroidJniObject obj);
		
		// Constructors
		SubscribeConfig_Builder();
		
		// Methods
		android::net::wifi::aware::SubscribeConfig build();
		android::net::wifi::aware::SubscribeConfig_Builder setMatchFilter(__JniBaseClass arg0);
		android::net::wifi::aware::SubscribeConfig_Builder setMaxDistanceMm(jint arg0);
		android::net::wifi::aware::SubscribeConfig_Builder setMinDistanceMm(jint arg0);
		android::net::wifi::aware::SubscribeConfig_Builder setServiceName(jstring arg0);
		android::net::wifi::aware::SubscribeConfig_Builder setServiceSpecificInfo(jbyteArray arg0);
		android::net::wifi::aware::SubscribeConfig_Builder setSubscribeType(jint arg0);
		android::net::wifi::aware::SubscribeConfig_Builder setTerminateNotificationEnabled(jboolean arg0);
		android::net::wifi::aware::SubscribeConfig_Builder setTtlSec(jint arg0);
	};
} // namespace android::net::wifi::aware

