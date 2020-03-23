#pragma once

#ifndef ANDROID_SERVICE_NOTIFICATION_CONDITIONPROVIDERSERVICE
#define ANDROID_SERVICE_NOTIFICATION_CONDITIONPROVIDERSERVICE

#include "../../app/Service.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::service::notification
{
	class Condition;
}
namespace __jni_impl::android::content
{
	class ComponentName;
}

namespace __jni_impl::android::service::notification
{
	class ConditionProviderService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		static QAndroidJniObject EXTRA_RULE_ID();
		static QAndroidJniObject META_DATA_CONFIGURATION_ACTIVITY();
		static QAndroidJniObject META_DATA_RULE_INSTANCE_LIMIT();
		static QAndroidJniObject META_DATA_RULE_TYPE();
		static QAndroidJniObject SERVICE_INTERFACE();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
		void onRequestConditions(jint arg0);
		void onSubscribe(__jni_impl::android::net::Uri arg0);
		void onUnsubscribe(__jni_impl::android::net::Uri arg0);
		void notifyCondition(__jni_impl::android::service::notification::Condition arg0);
		void notifyConditions(jarray arg0);
		void onConnected();
		static void requestRebind(__jni_impl::android::content::ComponentName arg0);
		void requestUnbind();
	};
} // namespace __jni_impl::android::service::notification

#include "../../content/Intent.hpp"
#include "../../net/Uri.hpp"
#include "Condition.hpp"
#include "../../content/ComponentName.hpp"

namespace __jni_impl::android::service::notification
{
	// Fields
	QAndroidJniObject ConditionProviderService::EXTRA_RULE_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.notification.ConditionProviderService",
			"EXTRA_RULE_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ConditionProviderService::META_DATA_CONFIGURATION_ACTIVITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.notification.ConditionProviderService",
			"META_DATA_CONFIGURATION_ACTIVITY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ConditionProviderService::META_DATA_RULE_INSTANCE_LIMIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.notification.ConditionProviderService",
			"META_DATA_RULE_INSTANCE_LIMIT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ConditionProviderService::META_DATA_RULE_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.notification.ConditionProviderService",
			"META_DATA_RULE_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ConditionProviderService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.notification.ConditionProviderService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void ConditionProviderService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.notification.ConditionProviderService",
			"()V");
	}
	
	// Methods
	QAndroidJniObject ConditionProviderService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object());
	}
	void ConditionProviderService::onRequestConditions(jint arg0)
	{
		__thiz.callMethod<void>(
			"onRequestConditions",
			"(I)V",
			arg0);
	}
	void ConditionProviderService::onSubscribe(__jni_impl::android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"onSubscribe",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object());
	}
	void ConditionProviderService::onUnsubscribe(__jni_impl::android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"onUnsubscribe",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object());
	}
	void ConditionProviderService::notifyCondition(__jni_impl::android::service::notification::Condition arg0)
	{
		__thiz.callMethod<void>(
			"notifyCondition",
			"(Landroid/service/notification/Condition;)V",
			arg0.__jniObject().object());
	}
	void ConditionProviderService::notifyConditions(jarray arg0)
	{
		__thiz.callMethod<void>(
			"notifyConditions",
			"([Landroid/service/notification/Condition;)V",
			arg0);
	}
	void ConditionProviderService::onConnected()
	{
		__thiz.callMethod<void>(
			"onConnected",
			"()V");
	}
	void ConditionProviderService::requestRebind(__jni_impl::android::content::ComponentName arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.service.notification.ConditionProviderService",
			"requestRebind",
			"(Landroid/content/ComponentName;)V",
			arg0.__jniObject().object());
	}
	void ConditionProviderService::requestUnbind()
	{
		__thiz.callMethod<void>(
			"requestUnbind",
			"()V");
	}
} // namespace __jni_impl::android::service::notification

namespace android::service::notification
{
	class ConditionProviderService : public __jni_impl::android::service::notification::ConditionProviderService
	{
	public:
		ConditionProviderService(QAndroidJniObject obj) { __thiz = obj; }
		ConditionProviderService()
		{
			__constructor();
		}
	};
} // namespace android::service::notification

#endif // ANDROID_SERVICE_NOTIFICATION_CONDITIONPROVIDERSERVICE

