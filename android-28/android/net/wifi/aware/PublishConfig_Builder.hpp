#pragma once

#include "../../../../JObject.hpp"

class JByteArray;
namespace android::net::wifi::aware
{
	class PublishConfig;
}
class JString;

namespace android::net::wifi::aware
{
	class PublishConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PublishConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PublishConfig_Builder(QJniObject obj);
		
		// Constructors
		PublishConfig_Builder();
		
		// Methods
		android::net::wifi::aware::PublishConfig build();
		android::net::wifi::aware::PublishConfig_Builder setMatchFilter(JObject arg0);
		android::net::wifi::aware::PublishConfig_Builder setPublishType(jint arg0);
		android::net::wifi::aware::PublishConfig_Builder setRangingEnabled(jboolean arg0);
		android::net::wifi::aware::PublishConfig_Builder setServiceName(JString arg0);
		android::net::wifi::aware::PublishConfig_Builder setServiceSpecificInfo(JByteArray arg0);
		android::net::wifi::aware::PublishConfig_Builder setTerminateNotificationEnabled(jboolean arg0);
		android::net::wifi::aware::PublishConfig_Builder setTtlSec(jint arg0);
	};
} // namespace android::net::wifi::aware

