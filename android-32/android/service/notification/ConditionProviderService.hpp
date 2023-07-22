#pragma once

#include "../../../JArray.hpp"
#include "../../content/ComponentName.def.hpp"
#include "../../content/Intent.def.hpp"
#include "../../net/Uri.def.hpp"
#include "./Condition.def.hpp"
#include "../../../JString.hpp"
#include "./ConditionProviderService.def.hpp"

namespace android::service::notification
{
	// Fields
	inline JString ConditionProviderService::EXTRA_RULE_ID()
	{
		return getStaticObjectField(
			"android.service.notification.ConditionProviderService",
			"EXTRA_RULE_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString ConditionProviderService::META_DATA_CONFIGURATION_ACTIVITY()
	{
		return getStaticObjectField(
			"android.service.notification.ConditionProviderService",
			"META_DATA_CONFIGURATION_ACTIVITY",
			"Ljava/lang/String;"
		);
	}
	inline JString ConditionProviderService::META_DATA_RULE_INSTANCE_LIMIT()
	{
		return getStaticObjectField(
			"android.service.notification.ConditionProviderService",
			"META_DATA_RULE_INSTANCE_LIMIT",
			"Ljava/lang/String;"
		);
	}
	inline JString ConditionProviderService::META_DATA_RULE_TYPE()
	{
		return getStaticObjectField(
			"android.service.notification.ConditionProviderService",
			"META_DATA_RULE_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString ConditionProviderService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.service.notification.ConditionProviderService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline ConditionProviderService::ConditionProviderService()
		: android::app::Service(
			"android.service.notification.ConditionProviderService",
			"()V"
		) {}
	
	// Methods
	inline void ConditionProviderService::requestRebind(android::content::ComponentName arg0)
	{
		callStaticMethod<void>(
			"android.service.notification.ConditionProviderService",
			"requestRebind",
			"(Landroid/content/ComponentName;)V",
			arg0.object()
		);
	}
	inline void ConditionProviderService::notifyCondition(android::service::notification::Condition arg0) const
	{
		callMethod<void>(
			"notifyCondition",
			"(Landroid/service/notification/Condition;)V",
			arg0.object()
		);
	}
	inline void ConditionProviderService::notifyConditions(JArray arg0) const
	{
		callMethod<void>(
			"notifyConditions",
			"([Landroid/service/notification/Condition;)V",
			arg0.object<jarray>()
		);
	}
	inline JObject ConditionProviderService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline void ConditionProviderService::onConnected() const
	{
		callMethod<void>(
			"onConnected",
			"()V"
		);
	}
	inline void ConditionProviderService::onRequestConditions(jint arg0) const
	{
		callMethod<void>(
			"onRequestConditions",
			"(I)V",
			arg0
		);
	}
	inline void ConditionProviderService::onSubscribe(android::net::Uri arg0) const
	{
		callMethod<void>(
			"onSubscribe",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	inline void ConditionProviderService::onUnsubscribe(android::net::Uri arg0) const
	{
		callMethod<void>(
			"onUnsubscribe",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	inline void ConditionProviderService::requestUnbind() const
	{
		callMethod<void>(
			"requestUnbind",
			"()V"
		);
	}
} // namespace android::service::notification

// Base class headers
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::notification;
#endif
