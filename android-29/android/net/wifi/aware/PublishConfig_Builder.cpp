#include "./PublishConfig.hpp"
#include "./PublishConfig_Builder.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	PublishConfig_Builder::PublishConfig_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PublishConfig_Builder::PublishConfig_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.aware.PublishConfig$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject PublishConfig_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/net/wifi/aware/PublishConfig;"
		);
	}
	QAndroidJniObject PublishConfig_Builder::setMatchFilter(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setMatchFilter",
			"(Ljava/util/List;)Landroid/net/wifi/aware/PublishConfig$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PublishConfig_Builder::setPublishType(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setPublishType",
			"(I)Landroid/net/wifi/aware/PublishConfig$Builder;",
			arg0
		);
	}
	QAndroidJniObject PublishConfig_Builder::setRangingEnabled(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setRangingEnabled",
			"(Z)Landroid/net/wifi/aware/PublishConfig$Builder;",
			arg0
		);
	}
	QAndroidJniObject PublishConfig_Builder::setServiceName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setServiceName",
			"(Ljava/lang/String;)Landroid/net/wifi/aware/PublishConfig$Builder;",
			arg0
		);
	}
	QAndroidJniObject PublishConfig_Builder::setServiceName(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setServiceName",
			"(Ljava/lang/String;)Landroid/net/wifi/aware/PublishConfig$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject PublishConfig_Builder::setServiceSpecificInfo(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"setServiceSpecificInfo",
			"([B)Landroid/net/wifi/aware/PublishConfig$Builder;",
			arg0
		);
	}
	QAndroidJniObject PublishConfig_Builder::setTerminateNotificationEnabled(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setTerminateNotificationEnabled",
			"(Z)Landroid/net/wifi/aware/PublishConfig$Builder;",
			arg0
		);
	}
	QAndroidJniObject PublishConfig_Builder::setTtlSec(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setTtlSec",
			"(I)Landroid/net/wifi/aware/PublishConfig$Builder;",
			arg0
		);
	}
} // namespace android::net::wifi::aware

