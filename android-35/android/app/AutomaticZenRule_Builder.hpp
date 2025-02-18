#pragma once

#include "./AutomaticZenRule.def.hpp"
#include "../content/ComponentName.def.hpp"
#include "../net/Uri.def.hpp"
#include "../service/notification/ZenDeviceEffects.def.hpp"
#include "../service/notification/ZenPolicy.def.hpp"
#include "../../JString.hpp"
#include "./AutomaticZenRule_Builder.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline AutomaticZenRule_Builder::AutomaticZenRule_Builder(android::app::AutomaticZenRule arg0)
		: JObject(
			"android.app.AutomaticZenRule$Builder",
			"(Landroid/app/AutomaticZenRule;)V",
			arg0.object()
		) {}
	inline AutomaticZenRule_Builder::AutomaticZenRule_Builder(JString arg0, android::net::Uri arg1)
		: JObject(
			"android.app.AutomaticZenRule$Builder",
			"(Ljava/lang/String;Landroid/net/Uri;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	inline android::app::AutomaticZenRule AutomaticZenRule_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/AutomaticZenRule;"
		);
	}
	inline android::app::AutomaticZenRule_Builder AutomaticZenRule_Builder::setConditionId(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"setConditionId",
			"(Landroid/net/Uri;)Landroid/app/AutomaticZenRule$Builder;",
			arg0.object()
		);
	}
	inline android::app::AutomaticZenRule_Builder AutomaticZenRule_Builder::setConfigurationActivity(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"setConfigurationActivity",
			"(Landroid/content/ComponentName;)Landroid/app/AutomaticZenRule$Builder;",
			arg0.object()
		);
	}
	inline android::app::AutomaticZenRule_Builder AutomaticZenRule_Builder::setDeviceEffects(android::service::notification::ZenDeviceEffects arg0) const
	{
		return callObjectMethod(
			"setDeviceEffects",
			"(Landroid/service/notification/ZenDeviceEffects;)Landroid/app/AutomaticZenRule$Builder;",
			arg0.object()
		);
	}
	inline android::app::AutomaticZenRule_Builder AutomaticZenRule_Builder::setEnabled(jboolean arg0) const
	{
		return callObjectMethod(
			"setEnabled",
			"(Z)Landroid/app/AutomaticZenRule$Builder;",
			arg0
		);
	}
	inline android::app::AutomaticZenRule_Builder AutomaticZenRule_Builder::setIconResId(jint arg0) const
	{
		return callObjectMethod(
			"setIconResId",
			"(I)Landroid/app/AutomaticZenRule$Builder;",
			arg0
		);
	}
	inline android::app::AutomaticZenRule_Builder AutomaticZenRule_Builder::setInterruptionFilter(jint arg0) const
	{
		return callObjectMethod(
			"setInterruptionFilter",
			"(I)Landroid/app/AutomaticZenRule$Builder;",
			arg0
		);
	}
	inline android::app::AutomaticZenRule_Builder AutomaticZenRule_Builder::setManualInvocationAllowed(jboolean arg0) const
	{
		return callObjectMethod(
			"setManualInvocationAllowed",
			"(Z)Landroid/app/AutomaticZenRule$Builder;",
			arg0
		);
	}
	inline android::app::AutomaticZenRule_Builder AutomaticZenRule_Builder::setName(JString arg0) const
	{
		return callObjectMethod(
			"setName",
			"(Ljava/lang/String;)Landroid/app/AutomaticZenRule$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::app::AutomaticZenRule_Builder AutomaticZenRule_Builder::setOwner(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"setOwner",
			"(Landroid/content/ComponentName;)Landroid/app/AutomaticZenRule$Builder;",
			arg0.object()
		);
	}
	inline android::app::AutomaticZenRule_Builder AutomaticZenRule_Builder::setTriggerDescription(JString arg0) const
	{
		return callObjectMethod(
			"setTriggerDescription",
			"(Ljava/lang/String;)Landroid/app/AutomaticZenRule$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::app::AutomaticZenRule_Builder AutomaticZenRule_Builder::setType(jint arg0) const
	{
		return callObjectMethod(
			"setType",
			"(I)Landroid/app/AutomaticZenRule$Builder;",
			arg0
		);
	}
	inline android::app::AutomaticZenRule_Builder AutomaticZenRule_Builder::setZenPolicy(android::service::notification::ZenPolicy arg0) const
	{
		return callObjectMethod(
			"setZenPolicy",
			"(Landroid/service/notification/ZenPolicy;)Landroid/app/AutomaticZenRule$Builder;",
			arg0.object()
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
