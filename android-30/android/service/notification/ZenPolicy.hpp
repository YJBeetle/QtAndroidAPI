#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./ZenPolicy.def.hpp"

namespace android::service::notification
{
	// Fields
	inline jint ZenPolicy::CONVERSATION_SENDERS_ANYONE()
	{
		return getStaticField<jint>(
			"android.service.notification.ZenPolicy",
			"CONVERSATION_SENDERS_ANYONE"
		);
	}
	inline jint ZenPolicy::CONVERSATION_SENDERS_IMPORTANT()
	{
		return getStaticField<jint>(
			"android.service.notification.ZenPolicy",
			"CONVERSATION_SENDERS_IMPORTANT"
		);
	}
	inline jint ZenPolicy::CONVERSATION_SENDERS_NONE()
	{
		return getStaticField<jint>(
			"android.service.notification.ZenPolicy",
			"CONVERSATION_SENDERS_NONE"
		);
	}
	inline jint ZenPolicy::CONVERSATION_SENDERS_UNSET()
	{
		return getStaticField<jint>(
			"android.service.notification.ZenPolicy",
			"CONVERSATION_SENDERS_UNSET"
		);
	}
	inline JObject ZenPolicy::CREATOR()
	{
		return getStaticObjectField(
			"android.service.notification.ZenPolicy",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint ZenPolicy::PEOPLE_TYPE_ANYONE()
	{
		return getStaticField<jint>(
			"android.service.notification.ZenPolicy",
			"PEOPLE_TYPE_ANYONE"
		);
	}
	inline jint ZenPolicy::PEOPLE_TYPE_CONTACTS()
	{
		return getStaticField<jint>(
			"android.service.notification.ZenPolicy",
			"PEOPLE_TYPE_CONTACTS"
		);
	}
	inline jint ZenPolicy::PEOPLE_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.service.notification.ZenPolicy",
			"PEOPLE_TYPE_NONE"
		);
	}
	inline jint ZenPolicy::PEOPLE_TYPE_STARRED()
	{
		return getStaticField<jint>(
			"android.service.notification.ZenPolicy",
			"PEOPLE_TYPE_STARRED"
		);
	}
	inline jint ZenPolicy::PEOPLE_TYPE_UNSET()
	{
		return getStaticField<jint>(
			"android.service.notification.ZenPolicy",
			"PEOPLE_TYPE_UNSET"
		);
	}
	inline jint ZenPolicy::STATE_ALLOW()
	{
		return getStaticField<jint>(
			"android.service.notification.ZenPolicy",
			"STATE_ALLOW"
		);
	}
	inline jint ZenPolicy::STATE_DISALLOW()
	{
		return getStaticField<jint>(
			"android.service.notification.ZenPolicy",
			"STATE_DISALLOW"
		);
	}
	inline jint ZenPolicy::STATE_UNSET()
	{
		return getStaticField<jint>(
			"android.service.notification.ZenPolicy",
			"STATE_UNSET"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ZenPolicy::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean ZenPolicy::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint ZenPolicy::getPriorityCallSenders() const
	{
		return callMethod<jint>(
			"getPriorityCallSenders",
			"()I"
		);
	}
	inline jint ZenPolicy::getPriorityCategoryAlarms() const
	{
		return callMethod<jint>(
			"getPriorityCategoryAlarms",
			"()I"
		);
	}
	inline jint ZenPolicy::getPriorityCategoryCalls() const
	{
		return callMethod<jint>(
			"getPriorityCategoryCalls",
			"()I"
		);
	}
	inline jint ZenPolicy::getPriorityCategoryConversations() const
	{
		return callMethod<jint>(
			"getPriorityCategoryConversations",
			"()I"
		);
	}
	inline jint ZenPolicy::getPriorityCategoryEvents() const
	{
		return callMethod<jint>(
			"getPriorityCategoryEvents",
			"()I"
		);
	}
	inline jint ZenPolicy::getPriorityCategoryMedia() const
	{
		return callMethod<jint>(
			"getPriorityCategoryMedia",
			"()I"
		);
	}
	inline jint ZenPolicy::getPriorityCategoryMessages() const
	{
		return callMethod<jint>(
			"getPriorityCategoryMessages",
			"()I"
		);
	}
	inline jint ZenPolicy::getPriorityCategoryReminders() const
	{
		return callMethod<jint>(
			"getPriorityCategoryReminders",
			"()I"
		);
	}
	inline jint ZenPolicy::getPriorityCategoryRepeatCallers() const
	{
		return callMethod<jint>(
			"getPriorityCategoryRepeatCallers",
			"()I"
		);
	}
	inline jint ZenPolicy::getPriorityCategorySystem() const
	{
		return callMethod<jint>(
			"getPriorityCategorySystem",
			"()I"
		);
	}
	inline jint ZenPolicy::getPriorityConversationSenders() const
	{
		return callMethod<jint>(
			"getPriorityConversationSenders",
			"()I"
		);
	}
	inline jint ZenPolicy::getPriorityMessageSenders() const
	{
		return callMethod<jint>(
			"getPriorityMessageSenders",
			"()I"
		);
	}
	inline jint ZenPolicy::getVisualEffectAmbient() const
	{
		return callMethod<jint>(
			"getVisualEffectAmbient",
			"()I"
		);
	}
	inline jint ZenPolicy::getVisualEffectBadge() const
	{
		return callMethod<jint>(
			"getVisualEffectBadge",
			"()I"
		);
	}
	inline jint ZenPolicy::getVisualEffectFullScreenIntent() const
	{
		return callMethod<jint>(
			"getVisualEffectFullScreenIntent",
			"()I"
		);
	}
	inline jint ZenPolicy::getVisualEffectLights() const
	{
		return callMethod<jint>(
			"getVisualEffectLights",
			"()I"
		);
	}
	inline jint ZenPolicy::getVisualEffectNotificationList() const
	{
		return callMethod<jint>(
			"getVisualEffectNotificationList",
			"()I"
		);
	}
	inline jint ZenPolicy::getVisualEffectPeek() const
	{
		return callMethod<jint>(
			"getVisualEffectPeek",
			"()I"
		);
	}
	inline jint ZenPolicy::getVisualEffectStatusBar() const
	{
		return callMethod<jint>(
			"getVisualEffectStatusBar",
			"()I"
		);
	}
	inline jint ZenPolicy::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString ZenPolicy::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ZenPolicy::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::notification

// Base class headers

