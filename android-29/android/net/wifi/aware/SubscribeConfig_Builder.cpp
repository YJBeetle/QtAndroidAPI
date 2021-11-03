#include "../../../../JByteArray.hpp"
#include "./SubscribeConfig.hpp"
#include "../../../../JString.hpp"
#include "./SubscribeConfig_Builder.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	// QAndroidJniObject forward
	SubscribeConfig_Builder::SubscribeConfig_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	SubscribeConfig_Builder::SubscribeConfig_Builder()
		: JObject(
			"android.net.wifi.aware.SubscribeConfig$Builder",
			"()V"
		) {}
	
	// Methods
	android::net::wifi::aware::SubscribeConfig SubscribeConfig_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/wifi/aware/SubscribeConfig;"
		);
	}
	android::net::wifi::aware::SubscribeConfig_Builder SubscribeConfig_Builder::setMatchFilter(JObject arg0)
	{
		return callObjectMethod(
			"setMatchFilter",
			"(Ljava/util/List;)Landroid/net/wifi/aware/SubscribeConfig$Builder;",
			arg0.object()
		);
	}
	android::net::wifi::aware::SubscribeConfig_Builder SubscribeConfig_Builder::setMaxDistanceMm(jint arg0)
	{
		return callObjectMethod(
			"setMaxDistanceMm",
			"(I)Landroid/net/wifi/aware/SubscribeConfig$Builder;",
			arg0
		);
	}
	android::net::wifi::aware::SubscribeConfig_Builder SubscribeConfig_Builder::setMinDistanceMm(jint arg0)
	{
		return callObjectMethod(
			"setMinDistanceMm",
			"(I)Landroid/net/wifi/aware/SubscribeConfig$Builder;",
			arg0
		);
	}
	android::net::wifi::aware::SubscribeConfig_Builder SubscribeConfig_Builder::setServiceName(JString arg0)
	{
		return callObjectMethod(
			"setServiceName",
			"(Ljava/lang/String;)Landroid/net/wifi/aware/SubscribeConfig$Builder;",
			arg0.object<jstring>()
		);
	}
	android::net::wifi::aware::SubscribeConfig_Builder SubscribeConfig_Builder::setServiceSpecificInfo(JByteArray arg0)
	{
		return callObjectMethod(
			"setServiceSpecificInfo",
			"([B)Landroid/net/wifi/aware/SubscribeConfig$Builder;",
			arg0.object<jbyteArray>()
		);
	}
	android::net::wifi::aware::SubscribeConfig_Builder SubscribeConfig_Builder::setSubscribeType(jint arg0)
	{
		return callObjectMethod(
			"setSubscribeType",
			"(I)Landroid/net/wifi/aware/SubscribeConfig$Builder;",
			arg0
		);
	}
	android::net::wifi::aware::SubscribeConfig_Builder SubscribeConfig_Builder::setTerminateNotificationEnabled(jboolean arg0)
	{
		return callObjectMethod(
			"setTerminateNotificationEnabled",
			"(Z)Landroid/net/wifi/aware/SubscribeConfig$Builder;",
			arg0
		);
	}
	android::net::wifi::aware::SubscribeConfig_Builder SubscribeConfig_Builder::setTtlSec(jint arg0)
	{
		return callObjectMethod(
			"setTtlSec",
			"(I)Landroid/net/wifi/aware/SubscribeConfig$Builder;",
			arg0
		);
	}
} // namespace android::net::wifi::aware

