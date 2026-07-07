#pragma once

#include "../content/ComponentName.def.hpp"
#include "../net/Uri.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../service/notification/ZenDeviceEffects.def.hpp"
#include "../service/notification/ZenPolicy.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AutomaticZenRule.def.hpp"

namespace android::app
{
	// Fields
	inline JObject AutomaticZenRule::CREATOR()
	{
		return getStaticObjectField(
			"android.app.AutomaticZenRule",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint AutomaticZenRule::TYPE_BEDTIME()
	{
		return getStaticField<jint>(
			"android.app.AutomaticZenRule",
			"TYPE_BEDTIME"
		);
	}
	inline jint AutomaticZenRule::TYPE_DRIVING()
	{
		return getStaticField<jint>(
			"android.app.AutomaticZenRule",
			"TYPE_DRIVING"
		);
	}
	inline jint AutomaticZenRule::TYPE_IMMERSIVE()
	{
		return getStaticField<jint>(
			"android.app.AutomaticZenRule",
			"TYPE_IMMERSIVE"
		);
	}
	inline jint AutomaticZenRule::TYPE_MANAGED()
	{
		return getStaticField<jint>(
			"android.app.AutomaticZenRule",
			"TYPE_MANAGED"
		);
	}
	inline jint AutomaticZenRule::TYPE_OTHER()
	{
		return getStaticField<jint>(
			"android.app.AutomaticZenRule",
			"TYPE_OTHER"
		);
	}
	inline jint AutomaticZenRule::TYPE_SCHEDULE_CALENDAR()
	{
		return getStaticField<jint>(
			"android.app.AutomaticZenRule",
			"TYPE_SCHEDULE_CALENDAR"
		);
	}
	inline jint AutomaticZenRule::TYPE_SCHEDULE_TIME()
	{
		return getStaticField<jint>(
			"android.app.AutomaticZenRule",
			"TYPE_SCHEDULE_TIME"
		);
	}
	inline jint AutomaticZenRule::TYPE_THEATER()
	{
		return getStaticField<jint>(
			"android.app.AutomaticZenRule",
			"TYPE_THEATER"
		);
	}
	inline jint AutomaticZenRule::TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.app.AutomaticZenRule",
			"TYPE_UNKNOWN"
		);
	}
	
	// Constructors
	inline AutomaticZenRule::AutomaticZenRule(android::os::Parcel arg0)
		: JObject(
			"android.app.AutomaticZenRule",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline AutomaticZenRule::AutomaticZenRule(JString arg0, android::content::ComponentName arg1, android::net::Uri arg2, jint arg3, jboolean arg4)
		: JObject(
			"android.app.AutomaticZenRule",
			"(Ljava/lang/String;Landroid/content/ComponentName;Landroid/net/Uri;IZ)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3,
			arg4
		) {}
	inline AutomaticZenRule::AutomaticZenRule(JString arg0, android::content::ComponentName arg1, android::content::ComponentName arg2, android::net::Uri arg3, android::service::notification::ZenPolicy arg4, jint arg5, jboolean arg6)
		: JObject(
			"android.app.AutomaticZenRule",
			"(Ljava/lang/String;Landroid/content/ComponentName;Landroid/content/ComponentName;Landroid/net/Uri;Landroid/service/notification/ZenPolicy;IZ)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object(),
			arg5,
			arg6
		) {}
	
	// Methods
	inline jint AutomaticZenRule::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean AutomaticZenRule::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::net::Uri AutomaticZenRule::getConditionId() const
	{
		return callObjectMethod(
			"getConditionId",
			"()Landroid/net/Uri;"
		);
	}
	inline android::content::ComponentName AutomaticZenRule::getConfigurationActivity() const
	{
		return callObjectMethod(
			"getConfigurationActivity",
			"()Landroid/content/ComponentName;"
		);
	}
	inline jlong AutomaticZenRule::getCreationTime() const
	{
		return callMethod<jlong>(
			"getCreationTime",
			"()J"
		);
	}
	inline android::service::notification::ZenDeviceEffects AutomaticZenRule::getDeviceEffects() const
	{
		return callObjectMethod(
			"getDeviceEffects",
			"()Landroid/service/notification/ZenDeviceEffects;"
		);
	}
	inline jint AutomaticZenRule::getIconResId() const
	{
		return callMethod<jint>(
			"getIconResId",
			"()I"
		);
	}
	inline jint AutomaticZenRule::getInterruptionFilter() const
	{
		return callMethod<jint>(
			"getInterruptionFilter",
			"()I"
		);
	}
	inline JString AutomaticZenRule::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline android::content::ComponentName AutomaticZenRule::getOwner() const
	{
		return callObjectMethod(
			"getOwner",
			"()Landroid/content/ComponentName;"
		);
	}
	inline JString AutomaticZenRule::getTriggerDescription() const
	{
		return callObjectMethod(
			"getTriggerDescription",
			"()Ljava/lang/String;"
		);
	}
	inline jint AutomaticZenRule::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline android::service::notification::ZenPolicy AutomaticZenRule::getZenPolicy() const
	{
		return callObjectMethod(
			"getZenPolicy",
			"()Landroid/service/notification/ZenPolicy;"
		);
	}
	inline jint AutomaticZenRule::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean AutomaticZenRule::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	inline jboolean AutomaticZenRule::isManualInvocationAllowed() const
	{
		return callMethod<jboolean>(
			"isManualInvocationAllowed",
			"()Z"
		);
	}
	inline void AutomaticZenRule::setConditionId(android::net::Uri arg0) const
	{
		callMethod<void>(
			"setConditionId",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	inline void AutomaticZenRule::setConfigurationActivity(android::content::ComponentName arg0) const
	{
		callMethod<void>(
			"setConfigurationActivity",
			"(Landroid/content/ComponentName;)V",
			arg0.object()
		);
	}
	inline void AutomaticZenRule::setDeviceEffects(android::service::notification::ZenDeviceEffects arg0) const
	{
		callMethod<void>(
			"setDeviceEffects",
			"(Landroid/service/notification/ZenDeviceEffects;)V",
			arg0.object()
		);
	}
	inline void AutomaticZenRule::setEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void AutomaticZenRule::setInterruptionFilter(jint arg0) const
	{
		callMethod<void>(
			"setInterruptionFilter",
			"(I)V",
			arg0
		);
	}
	inline void AutomaticZenRule::setName(JString arg0) const
	{
		callMethod<void>(
			"setName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void AutomaticZenRule::setZenPolicy(android::service::notification::ZenPolicy arg0) const
	{
		callMethod<void>(
			"setZenPolicy",
			"(Landroid/service/notification/ZenPolicy;)V",
			arg0.object()
		);
	}
	inline JString AutomaticZenRule::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AutomaticZenRule::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
