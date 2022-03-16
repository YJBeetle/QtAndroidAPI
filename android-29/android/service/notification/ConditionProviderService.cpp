#include "../../../JArray.hpp"
#include "../../content/ComponentName.hpp"
#include "../../content/Intent.hpp"
#include "../../net/Uri.hpp"
#include "./Condition.hpp"
#include "../../../JString.hpp"
#include "./ConditionProviderService.hpp"

namespace android::service::notification
{
	// Fields
	JString ConditionProviderService::EXTRA_RULE_ID()
	{
		return getStaticObjectField(
			"android.service.notification.ConditionProviderService",
			"EXTRA_RULE_ID",
			"Ljava/lang/String;"
		);
	}
	JString ConditionProviderService::META_DATA_CONFIGURATION_ACTIVITY()
	{
		return getStaticObjectField(
			"android.service.notification.ConditionProviderService",
			"META_DATA_CONFIGURATION_ACTIVITY",
			"Ljava/lang/String;"
		);
	}
	JString ConditionProviderService::META_DATA_RULE_INSTANCE_LIMIT()
	{
		return getStaticObjectField(
			"android.service.notification.ConditionProviderService",
			"META_DATA_RULE_INSTANCE_LIMIT",
			"Ljava/lang/String;"
		);
	}
	JString ConditionProviderService::META_DATA_RULE_TYPE()
	{
		return getStaticObjectField(
			"android.service.notification.ConditionProviderService",
			"META_DATA_RULE_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString ConditionProviderService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.service.notification.ConditionProviderService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	
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
	void ConditionProviderService::notifyCondition(android::service::notification::Condition arg0) const
	{
		callMethod<void>(
			"notifyCondition",
			"(Landroid/service/notification/Condition;)V",
			arg0.object()
		);
	}
	void ConditionProviderService::notifyConditions(JArray arg0) const
	{
		callMethod<void>(
			"notifyConditions",
			"([Landroid/service/notification/Condition;)V",
			arg0.object<jarray>()
		);
	}
	JObject ConditionProviderService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void ConditionProviderService::onConnected() const
	{
		callMethod<void>(
			"onConnected",
			"()V"
		);
	}
	void ConditionProviderService::onRequestConditions(jint arg0) const
	{
		callMethod<void>(
			"onRequestConditions",
			"(I)V",
			arg0
		);
	}
	void ConditionProviderService::onSubscribe(android::net::Uri arg0) const
	{
		callMethod<void>(
			"onSubscribe",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	void ConditionProviderService::onUnsubscribe(android::net::Uri arg0) const
	{
		callMethod<void>(
			"onUnsubscribe",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	void ConditionProviderService::requestUnbind() const
	{
		callMethod<void>(
			"requestUnbind",
			"()V"
		);
	}
} // namespace android::service::notification

