#include "./PublishConfig.hpp"
#include "./PublishConfig_Builder.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	// QAndroidJniObject forward
	PublishConfig_Builder::PublishConfig_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	PublishConfig_Builder::PublishConfig_Builder()
		: __JniBaseClass(
			"android.net.wifi.aware.PublishConfig$Builder",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject PublishConfig_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/wifi/aware/PublishConfig;"
		);
	}
	QAndroidJniObject PublishConfig_Builder::setMatchFilter(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"setMatchFilter",
			"(Ljava/util/List;)Landroid/net/wifi/aware/PublishConfig$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject PublishConfig_Builder::setPublishType(jint arg0)
	{
		return callObjectMethod(
			"setPublishType",
			"(I)Landroid/net/wifi/aware/PublishConfig$Builder;",
			arg0
		);
	}
	QAndroidJniObject PublishConfig_Builder::setRangingEnabled(jboolean arg0)
	{
		return callObjectMethod(
			"setRangingEnabled",
			"(Z)Landroid/net/wifi/aware/PublishConfig$Builder;",
			arg0
		);
	}
	QAndroidJniObject PublishConfig_Builder::setServiceName(jstring arg0)
	{
		return callObjectMethod(
			"setServiceName",
			"(Ljava/lang/String;)Landroid/net/wifi/aware/PublishConfig$Builder;",
			arg0
		);
	}
	QAndroidJniObject PublishConfig_Builder::setServiceSpecificInfo(jbyteArray arg0)
	{
		return callObjectMethod(
			"setServiceSpecificInfo",
			"([B)Landroid/net/wifi/aware/PublishConfig$Builder;",
			arg0
		);
	}
	QAndroidJniObject PublishConfig_Builder::setTerminateNotificationEnabled(jboolean arg0)
	{
		return callObjectMethod(
			"setTerminateNotificationEnabled",
			"(Z)Landroid/net/wifi/aware/PublishConfig$Builder;",
			arg0
		);
	}
	QAndroidJniObject PublishConfig_Builder::setTtlSec(jint arg0)
	{
		return callObjectMethod(
			"setTtlSec",
			"(I)Landroid/net/wifi/aware/PublishConfig$Builder;",
			arg0
		);
	}
} // namespace android::net::wifi::aware

