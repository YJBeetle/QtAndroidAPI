#pragma once

#include "./ZenPolicy.def.hpp"
#include "./ZenPolicy_Builder.def.hpp"

namespace android::service::notification
{
	// Fields
	
	// Constructors
	inline ZenPolicy_Builder::ZenPolicy_Builder()
		: JObject(
			"android.service.notification.ZenPolicy$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::service::notification::ZenPolicy_Builder ZenPolicy_Builder::allowAlarms(jboolean arg0) const
	{
		return callObjectMethod(
			"allowAlarms",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	inline android::service::notification::ZenPolicy_Builder ZenPolicy_Builder::allowAllSounds() const
	{
		return callObjectMethod(
			"allowAllSounds",
			"()Landroid/service/notification/ZenPolicy$Builder;"
		);
	}
	inline android::service::notification::ZenPolicy_Builder ZenPolicy_Builder::allowCalls(jint arg0) const
	{
		return callObjectMethod(
			"allowCalls",
			"(I)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	inline android::service::notification::ZenPolicy_Builder ZenPolicy_Builder::allowConversations(jint arg0) const
	{
		return callObjectMethod(
			"allowConversations",
			"(I)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	inline android::service::notification::ZenPolicy_Builder ZenPolicy_Builder::allowEvents(jboolean arg0) const
	{
		return callObjectMethod(
			"allowEvents",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	inline android::service::notification::ZenPolicy_Builder ZenPolicy_Builder::allowMedia(jboolean arg0) const
	{
		return callObjectMethod(
			"allowMedia",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	inline android::service::notification::ZenPolicy_Builder ZenPolicy_Builder::allowMessages(jint arg0) const
	{
		return callObjectMethod(
			"allowMessages",
			"(I)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	inline android::service::notification::ZenPolicy_Builder ZenPolicy_Builder::allowReminders(jboolean arg0) const
	{
		return callObjectMethod(
			"allowReminders",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	inline android::service::notification::ZenPolicy_Builder ZenPolicy_Builder::allowRepeatCallers(jboolean arg0) const
	{
		return callObjectMethod(
			"allowRepeatCallers",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	inline android::service::notification::ZenPolicy_Builder ZenPolicy_Builder::allowSystem(jboolean arg0) const
	{
		return callObjectMethod(
			"allowSystem",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	inline android::service::notification::ZenPolicy ZenPolicy_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/notification/ZenPolicy;"
		);
	}
	inline android::service::notification::ZenPolicy_Builder ZenPolicy_Builder::disallowAllSounds() const
	{
		return callObjectMethod(
			"disallowAllSounds",
			"()Landroid/service/notification/ZenPolicy$Builder;"
		);
	}
	inline android::service::notification::ZenPolicy_Builder ZenPolicy_Builder::hideAllVisualEffects() const
	{
		return callObjectMethod(
			"hideAllVisualEffects",
			"()Landroid/service/notification/ZenPolicy$Builder;"
		);
	}
	inline android::service::notification::ZenPolicy_Builder ZenPolicy_Builder::showAllVisualEffects() const
	{
		return callObjectMethod(
			"showAllVisualEffects",
			"()Landroid/service/notification/ZenPolicy$Builder;"
		);
	}
	inline android::service::notification::ZenPolicy_Builder ZenPolicy_Builder::showBadges(jboolean arg0) const
	{
		return callObjectMethod(
			"showBadges",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	inline android::service::notification::ZenPolicy_Builder ZenPolicy_Builder::showFullScreenIntent(jboolean arg0) const
	{
		return callObjectMethod(
			"showFullScreenIntent",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	inline android::service::notification::ZenPolicy_Builder ZenPolicy_Builder::showInAmbientDisplay(jboolean arg0) const
	{
		return callObjectMethod(
			"showInAmbientDisplay",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	inline android::service::notification::ZenPolicy_Builder ZenPolicy_Builder::showInNotificationList(jboolean arg0) const
	{
		return callObjectMethod(
			"showInNotificationList",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	inline android::service::notification::ZenPolicy_Builder ZenPolicy_Builder::showLights(jboolean arg0) const
	{
		return callObjectMethod(
			"showLights",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	inline android::service::notification::ZenPolicy_Builder ZenPolicy_Builder::showPeeking(jboolean arg0) const
	{
		return callObjectMethod(
			"showPeeking",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	inline android::service::notification::ZenPolicy_Builder ZenPolicy_Builder::showStatusBarIcons(jboolean arg0) const
	{
		return callObjectMethod(
			"showStatusBarIcons",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
} // namespace android::service::notification

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::notification;
#endif
