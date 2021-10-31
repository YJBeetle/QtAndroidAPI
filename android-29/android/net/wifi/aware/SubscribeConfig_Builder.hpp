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
		QAndroidJniObject build();
		QAndroidJniObject setMatchFilter(__JniBaseClass arg0);
		QAndroidJniObject setMaxDistanceMm(jint arg0);
		QAndroidJniObject setMinDistanceMm(jint arg0);
		QAndroidJniObject setServiceName(jstring arg0);
		QAndroidJniObject setServiceSpecificInfo(jbyteArray arg0);
		QAndroidJniObject setSubscribeType(jint arg0);
		QAndroidJniObject setTerminateNotificationEnabled(jboolean arg0);
		QAndroidJniObject setTtlSec(jint arg0);
	};
} // namespace android::net::wifi::aware

