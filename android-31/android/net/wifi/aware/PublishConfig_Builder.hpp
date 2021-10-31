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
		
		// QJniObject forward
		template<typename ...Ts> explicit PublishConfig_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PublishConfig_Builder(QJniObject obj);
		
		// Constructors
		PublishConfig_Builder();
		
		// Methods
		android::net::wifi::aware::PublishConfig build();
		android::net::wifi::aware::PublishConfig_Builder setMatchFilter(__JniBaseClass arg0);
		android::net::wifi::aware::PublishConfig_Builder setPublishType(jint arg0);
		android::net::wifi::aware::PublishConfig_Builder setRangingEnabled(jboolean arg0);
		android::net::wifi::aware::PublishConfig_Builder setServiceName(jstring arg0);
		android::net::wifi::aware::PublishConfig_Builder setServiceSpecificInfo(jbyteArray arg0);
		android::net::wifi::aware::PublishConfig_Builder setTerminateNotificationEnabled(jboolean arg0);
		android::net::wifi::aware::PublishConfig_Builder setTtlSec(jint arg0);
	};
} // namespace android::net::wifi::aware

