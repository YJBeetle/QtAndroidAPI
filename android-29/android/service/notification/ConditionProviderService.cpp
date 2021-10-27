#include "../../content/ComponentName.hpp"
#include "../../content/Intent.hpp"
#include "../../net/Uri.hpp"
#include "./Condition.hpp"
#include "./ConditionProviderService.hpp"

namespace android::service::notification
{
	// Fields
	jstring ConditionProviderService::EXTRA_RULE_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.notification.ConditionProviderService",
			"EXTRA_RULE_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConditionProviderService::META_DATA_CONFIGURATION_ACTIVITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.notification.ConditionProviderService",
			"META_DATA_CONFIGURATION_ACTIVITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConditionProviderService::META_DATA_RULE_INSTANCE_LIMIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.notification.ConditionProviderService",
			"META_DATA_RULE_INSTANCE_LIMIT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConditionProviderService::META_DATA_RULE_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.notification.ConditionProviderService",
			"META_DATA_RULE_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConditionProviderService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.notification.ConditionProviderService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	ConditionProviderService::ConditionProviderService(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ConditionProviderService::ConditionProviderService()
	{
		__thiz = QAndroidJniObject(
			"android.service.notification.ConditionProviderService",
			"()V"
		);
	}
	
	// Methods
	void ConditionProviderService::requestRebind(android::content::ComponentName arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.service.notification.ConditionProviderService",
			"requestRebind",
			"(Landroid/content/ComponentName;)V",
			arg0.__jniObject().object()
		);
	}
	void ConditionProviderService::notifyCondition(android::service::notification::Condition arg0)
	{
		__thiz.callMethod<void>(
			"notifyCondition",
			"(Landroid/service/notification/Condition;)V",
			arg0.__jniObject().object()
		);
	}
	void ConditionProviderService::notifyConditions(jarray arg0)
	{
		__thiz.callMethod<void>(
			"notifyConditions",
			"([Landroid/service/notification/Condition;)V",
			arg0
		);
	}
	QAndroidJniObject ConditionProviderService::onBind(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	void ConditionProviderService::onConnected()
	{
		__thiz.callMethod<void>(
			"onConnected",
			"()V"
		);
	}
	void ConditionProviderService::onRequestConditions(jint arg0)
	{
		__thiz.callMethod<void>(
			"onRequestConditions",
			"(I)V",
			arg0
		);
	}
	void ConditionProviderService::onSubscribe(android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"onSubscribe",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	void ConditionProviderService::onUnsubscribe(android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"onUnsubscribe",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	void ConditionProviderService::requestUnbind()
	{
		__thiz.callMethod<void>(
			"requestUnbind",
			"()V"
		);
	}
} // namespace android::service::notification

