#include "./SubscribeConfig.hpp"
#include "./SubscribeConfig_Builder.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	SubscribeConfig_Builder::SubscribeConfig_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SubscribeConfig_Builder::SubscribeConfig_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.aware.SubscribeConfig$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject SubscribeConfig_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/net/wifi/aware/SubscribeConfig;"
		);
	}
	QAndroidJniObject SubscribeConfig_Builder::setMatchFilter(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setMatchFilter",
			"(Ljava/util/List;)Landroid/net/wifi/aware/SubscribeConfig$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SubscribeConfig_Builder::setMaxDistanceMm(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setMaxDistanceMm",
			"(I)Landroid/net/wifi/aware/SubscribeConfig$Builder;",
			arg0
		);
	}
	QAndroidJniObject SubscribeConfig_Builder::setMinDistanceMm(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setMinDistanceMm",
			"(I)Landroid/net/wifi/aware/SubscribeConfig$Builder;",
			arg0
		);
	}
	QAndroidJniObject SubscribeConfig_Builder::setServiceName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setServiceName",
			"(Ljava/lang/String;)Landroid/net/wifi/aware/SubscribeConfig$Builder;",
			arg0
		);
	}
	QAndroidJniObject SubscribeConfig_Builder::setServiceName(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setServiceName",
			"(Ljava/lang/String;)Landroid/net/wifi/aware/SubscribeConfig$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject SubscribeConfig_Builder::setServiceSpecificInfo(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"setServiceSpecificInfo",
			"([B)Landroid/net/wifi/aware/SubscribeConfig$Builder;",
			arg0
		);
	}
	QAndroidJniObject SubscribeConfig_Builder::setSubscribeType(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setSubscribeType",
			"(I)Landroid/net/wifi/aware/SubscribeConfig$Builder;",
			arg0
		);
	}
	QAndroidJniObject SubscribeConfig_Builder::setTerminateNotificationEnabled(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setTerminateNotificationEnabled",
			"(Z)Landroid/net/wifi/aware/SubscribeConfig$Builder;",
			arg0
		);
	}
	QAndroidJniObject SubscribeConfig_Builder::setTtlSec(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setTtlSec",
			"(I)Landroid/net/wifi/aware/SubscribeConfig$Builder;",
			arg0
		);
	}
} // namespace android::net::wifi::aware

