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
		return getStaticObjectField(
			"android.service.notification.ConditionProviderService",
			"EXTRA_RULE_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConditionProviderService::META_DATA_CONFIGURATION_ACTIVITY()
	{
		return getStaticObjectField(
			"android.service.notification.ConditionProviderService",
			"META_DATA_CONFIGURATION_ACTIVITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConditionProviderService::META_DATA_RULE_INSTANCE_LIMIT()
	{
		return getStaticObjectField(
			"android.service.notification.ConditionProviderService",
			"META_DATA_RULE_INSTANCE_LIMIT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConditionProviderService::META_DATA_RULE_TYPE()
	{
		return getStaticObjectField(
			"android.service.notification.ConditionProviderService",
			"META_DATA_RULE_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConditionProviderService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.service.notification.ConditionProviderService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	ConditionProviderService::ConditionProviderService(QJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	ConditionProviderService::ConditionProviderService()
		: android::app::Service(
			"android.service.notification.ConditionProviderService",
			"()V"
		) {}
	
	// Methods
	void ConditionProviderService::requestRebind(android::content::ComponentName arg0)
	{
		callStaticMethod<void>(
			"android.service.notification.ConditionProviderService",
			"requestRebind",
			"(Landroid/content/ComponentName;)V",
			arg0.object()
		);
	}
	void ConditionProviderService::notifyCondition(android::service::notification::Condition arg0)
	{
		callMethod<void>(
			"notifyCondition",
			"(Landroid/service/notification/Condition;)V",
			arg0.object()
		);
	}
	void ConditionProviderService::notifyConditions(jarray arg0)
	{
		callMethod<void>(
			"notifyConditions",
			"([Landroid/service/notification/Condition;)V",
			arg0
		);
	}
	__JniBaseClass ConditionProviderService::onBind(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void ConditionProviderService::onConnected()
	{
		callMethod<void>(
			"onConnected",
			"()V"
		);
	}
	void ConditionProviderService::onRequestConditions(jint arg0)
	{
		callMethod<void>(
			"onRequestConditions",
			"(I)V",
			arg0
		);
	}
	void ConditionProviderService::onSubscribe(android::net::Uri arg0)
	{
		callMethod<void>(
			"onSubscribe",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	void ConditionProviderService::onUnsubscribe(android::net::Uri arg0)
	{
		callMethod<void>(
			"onUnsubscribe",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	void ConditionProviderService::requestUnbind()
	{
		callMethod<void>(
			"requestUnbind",
			"()V"
		);
	}
} // namespace android::service::notification

