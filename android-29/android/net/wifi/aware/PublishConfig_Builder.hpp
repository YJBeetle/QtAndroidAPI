#pragma once

#ifndef ANDROID_NET_WIFI_AWARE_PUBLISHCONFIG_BUILDER
#define ANDROID_NET_WIFI_AWARE_PUBLISHCONFIG_BUILDER

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net::wifi::aware
{
	class PublishConfig;
}

namespace __jni_impl::android::net::wifi::aware
{
	class PublishConfig_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setMatchFilter(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject setPublishType(jint arg0);
		QAndroidJniObject setRangingEnabled(jboolean arg0);
		QAndroidJniObject setServiceName(jstring arg0);
		QAndroidJniObject setServiceName(const QString &arg0);
		QAndroidJniObject setServiceSpecificInfo(jbyteArray arg0);
		QAndroidJniObject setTerminateNotificationEnabled(jboolean arg0);
		QAndroidJniObject setTtlSec(jint arg0);
	};
} // namespace __jni_impl::android::net::wifi::aware

#include "PublishConfig.hpp"

namespace __jni_impl::android::net::wifi::aware
{
	// Fields
	
	// Constructors
	void PublishConfig_Builder::__constructor()
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
	QAndroidJniObject PublishConfig_Builder::setMatchFilter(__jni_impl::__JniBaseClass arg0)
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
} // namespace __jni_impl::android::net::wifi::aware

namespace android::net::wifi::aware
{
	class PublishConfig_Builder : public __jni_impl::android::net::wifi::aware::PublishConfig_Builder
	{
	public:
		PublishConfig_Builder(QAndroidJniObject obj) { __thiz = obj; }
		PublishConfig_Builder()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi::aware

#endif // ANDROID_NET_WIFI_AWARE_PUBLISHCONFIG_BUILDER

