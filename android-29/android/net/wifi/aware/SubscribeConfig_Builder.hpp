#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net::wifi::aware
{
	class SubscribeConfig;
}

namespace __jni_impl::android::net::wifi::aware
{
	class SubscribeConfig_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setMatchFilter(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject setMaxDistanceMm(jint arg0);
		QAndroidJniObject setMinDistanceMm(jint arg0);
		QAndroidJniObject setServiceName(jstring arg0);
		QAndroidJniObject setServiceName(const QString &arg0);
		QAndroidJniObject setServiceSpecificInfo(jbyteArray arg0);
		QAndroidJniObject setSubscribeType(jint arg0);
		QAndroidJniObject setTerminateNotificationEnabled(jboolean arg0);
		QAndroidJniObject setTtlSec(jint arg0);
	};
} // namespace __jni_impl::android::net::wifi::aware

#include "./SubscribeConfig.hpp"

namespace __jni_impl::android::net::wifi::aware
{
	// Fields
	
	// Constructors
	void SubscribeConfig_Builder::__constructor()
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
	QAndroidJniObject SubscribeConfig_Builder::setMatchFilter(__jni_impl::__JniBaseClass arg0)
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
} // namespace __jni_impl::android::net::wifi::aware

namespace android::net::wifi::aware
{
	class SubscribeConfig_Builder : public __jni_impl::android::net::wifi::aware::SubscribeConfig_Builder
	{
	public:
		SubscribeConfig_Builder(QAndroidJniObject obj) { __thiz = obj; }
		SubscribeConfig_Builder()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi::aware

