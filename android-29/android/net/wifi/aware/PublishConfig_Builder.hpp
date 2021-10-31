#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::net::wifi::aware
{
	class PublishConfig;
}

namespace android::net::wifi::aware
{
	class PublishConfig_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		PublishConfig_Builder(QAndroidJniObject obj);
		// Constructors
		PublishConfig_Builder();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setMatchFilter(__JniBaseClass arg0);
		QAndroidJniObject setPublishType(jint arg0);
		QAndroidJniObject setRangingEnabled(jboolean arg0);
		QAndroidJniObject setServiceName(jstring arg0);
		QAndroidJniObject setServiceSpecificInfo(jbyteArray arg0);
		QAndroidJniObject setTerminateNotificationEnabled(jboolean arg0);
		QAndroidJniObject setTtlSec(jint arg0);
	};
} // namespace android::net::wifi::aware

