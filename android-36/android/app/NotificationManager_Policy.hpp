#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./NotificationManager_Policy.def.hpp"

namespace android::app
{
	// Fields
	inline jint NotificationManager_Policy::CONVERSATION_SENDERS_ANYONE()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"CONVERSATION_SENDERS_ANYONE"
		);
	}
	inline jint NotificationManager_Policy::CONVERSATION_SENDERS_IMPORTANT()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"CONVERSATION_SENDERS_IMPORTANT"
		);
	}
	inline jint NotificationManager_Policy::CONVERSATION_SENDERS_NONE()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"CONVERSATION_SENDERS_NONE"
		);
	}
	inline JObject NotificationManager_Policy::CREATOR()
	{
		return getStaticObjectField(
			"android.app.NotificationManager$Policy",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint NotificationManager_Policy::PRIORITY_CATEGORY_ALARMS()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"PRIORITY_CATEGORY_ALARMS"
		);
	}
	inline jint NotificationManager_Policy::PRIORITY_CATEGORY_CALLS()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"PRIORITY_CATEGORY_CALLS"
		);
	}
	inline jint NotificationManager_Policy::PRIORITY_CATEGORY_CONVERSATIONS()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"PRIORITY_CATEGORY_CONVERSATIONS"
		);
	}
	inline jint NotificationManager_Policy::PRIORITY_CATEGORY_EVENTS()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"PRIORITY_CATEGORY_EVENTS"
		);
	}
	inline jint NotificationManager_Policy::PRIORITY_CATEGORY_MEDIA()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"PRIORITY_CATEGORY_MEDIA"
		);
	}
	inline jint NotificationManager_Policy::PRIORITY_CATEGORY_MESSAGES()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"PRIORITY_CATEGORY_MESSAGES"
		);
	}
	inline jint NotificationManager_Policy::PRIORITY_CATEGORY_REMINDERS()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"PRIORITY_CATEGORY_REMINDERS"
		);
	}
	inline jint NotificationManager_Policy::PRIORITY_CATEGORY_REPEAT_CALLERS()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"PRIORITY_CATEGORY_REPEAT_CALLERS"
		);
	}
	inline jint NotificationManager_Policy::PRIORITY_CATEGORY_SYSTEM()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"PRIORITY_CATEGORY_SYSTEM"
		);
	}
	inline jint NotificationManager_Policy::PRIORITY_SENDERS_ANY()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"PRIORITY_SENDERS_ANY"
		);
	}
	inline jint NotificationManager_Policy::PRIORITY_SENDERS_CONTACTS()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"PRIORITY_SENDERS_CONTACTS"
		);
	}
	inline jint NotificationManager_Policy::PRIORITY_SENDERS_STARRED()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"PRIORITY_SENDERS_STARRED"
		);
	}
	inline jint NotificationManager_Policy::SUPPRESSED_EFFECT_AMBIENT()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"SUPPRESSED_EFFECT_AMBIENT"
		);
	}
	inline jint NotificationManager_Policy::SUPPRESSED_EFFECT_BADGE()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"SUPPRESSED_EFFECT_BADGE"
		);
	}
	inline jint NotificationManager_Policy::SUPPRESSED_EFFECT_FULL_SCREEN_INTENT()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"SUPPRESSED_EFFECT_FULL_SCREEN_INTENT"
		);
	}
	inline jint NotificationManager_Policy::SUPPRESSED_EFFECT_LIGHTS()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"SUPPRESSED_EFFECT_LIGHTS"
		);
	}
	inline jint NotificationManager_Policy::SUPPRESSED_EFFECT_NOTIFICATION_LIST()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"SUPPRESSED_EFFECT_NOTIFICATION_LIST"
		);
	}
	inline jint NotificationManager_Policy::SUPPRESSED_EFFECT_PEEK()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"SUPPRESSED_EFFECT_PEEK"
		);
	}
	inline jint NotificationManager_Policy::SUPPRESSED_EFFECT_SCREEN_OFF()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"SUPPRESSED_EFFECT_SCREEN_OFF"
		);
	}
	inline jint NotificationManager_Policy::SUPPRESSED_EFFECT_SCREEN_ON()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"SUPPRESSED_EFFECT_SCREEN_ON"
		);
	}
	inline jint NotificationManager_Policy::SUPPRESSED_EFFECT_STATUS_BAR()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"SUPPRESSED_EFFECT_STATUS_BAR"
		);
	}
	inline jint NotificationManager_Policy::priorityCallSenders()
	{
		return getField<jint>(
			"priorityCallSenders"
		);
	}
	inline jint NotificationManager_Policy::priorityCategories()
	{
		return getField<jint>(
			"priorityCategories"
		);
	}
	inline jint NotificationManager_Policy::priorityConversationSenders()
	{
		return getField<jint>(
			"priorityConversationSenders"
		);
	}
	inline jint NotificationManager_Policy::priorityMessageSenders()
	{
		return getField<jint>(
			"priorityMessageSenders"
		);
	}
	inline jint NotificationManager_Policy::suppressedVisualEffects()
	{
		return getField<jint>(
			"suppressedVisualEffects"
		);
	}
	
	// Constructors
	inline NotificationManager_Policy::NotificationManager_Policy(jint arg0, jint arg1, jint arg2)
		: JObject(
			"android.app.NotificationManager$Policy",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	inline NotificationManager_Policy::NotificationManager_Policy(jint arg0, jint arg1, jint arg2, jint arg3)
		: JObject(
			"android.app.NotificationManager$Policy",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	inline NotificationManager_Policy::NotificationManager_Policy(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
		: JObject(
			"android.app.NotificationManager$Policy",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	
	// Methods
	inline JString NotificationManager_Policy::priorityCategoriesToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.app.NotificationManager$Policy",
			"priorityCategoriesToString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString NotificationManager_Policy::prioritySendersToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.app.NotificationManager$Policy",
			"prioritySendersToString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString NotificationManager_Policy::suppressedEffectsToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.app.NotificationManager$Policy",
			"suppressedEffectsToString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline jint NotificationManager_Policy::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean NotificationManager_Policy::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint NotificationManager_Policy::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString NotificationManager_Policy::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void NotificationManager_Policy::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
