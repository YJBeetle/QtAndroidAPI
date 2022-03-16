#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./ZenPolicy.hpp"

namespace android::service::notification
{
	// Fields
	JObject ZenPolicy::CREATOR()
	{
		return getStaticObjectField(
			"android.service.notification.ZenPolicy",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ZenPolicy::PEOPLE_TYPE_ANYONE()
	{
		return getStaticField<jint>(
			"android.service.notification.ZenPolicy",
			"PEOPLE_TYPE_ANYONE"
		);
	}
	jint ZenPolicy::PEOPLE_TYPE_CONTACTS()
	{
		return getStaticField<jint>(
			"android.service.notification.ZenPolicy",
			"PEOPLE_TYPE_CONTACTS"
		);
	}
	jint ZenPolicy::PEOPLE_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.service.notification.ZenPolicy",
			"PEOPLE_TYPE_NONE"
		);
	}
	jint ZenPolicy::PEOPLE_TYPE_STARRED()
	{
		return getStaticField<jint>(
			"android.service.notification.ZenPolicy",
			"PEOPLE_TYPE_STARRED"
		);
	}
	jint ZenPolicy::PEOPLE_TYPE_UNSET()
	{
		return getStaticField<jint>(
			"android.service.notification.ZenPolicy",
			"PEOPLE_TYPE_UNSET"
		);
	}
	jint ZenPolicy::STATE_ALLOW()
	{
		return getStaticField<jint>(
			"android.service.notification.ZenPolicy",
			"STATE_ALLOW"
		);
	}
	jint ZenPolicy::STATE_DISALLOW()
	{
		return getStaticField<jint>(
			"android.service.notification.ZenPolicy",
			"STATE_DISALLOW"
		);
	}
	jint ZenPolicy::STATE_UNSET()
	{
		return getStaticField<jint>(
			"android.service.notification.ZenPolicy",
			"STATE_UNSET"
		);
	}
	
	// Constructors
	
	// Methods
	jint ZenPolicy::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ZenPolicy::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint ZenPolicy::getPriorityCallSenders() const
	{
		return callMethod<jint>(
			"getPriorityCallSenders",
			"()I"
		);
	}
	jint ZenPolicy::getPriorityCategoryAlarms() const
	{
		return callMethod<jint>(
			"getPriorityCategoryAlarms",
			"()I"
		);
	}
	jint ZenPolicy::getPriorityCategoryCalls() const
	{
		return callMethod<jint>(
			"getPriorityCategoryCalls",
			"()I"
		);
	}
	jint ZenPolicy::getPriorityCategoryEvents() const
	{
		return callMethod<jint>(
			"getPriorityCategoryEvents",
			"()I"
		);
	}
	jint ZenPolicy::getPriorityCategoryMedia() const
	{
		return callMethod<jint>(
			"getPriorityCategoryMedia",
			"()I"
		);
	}
	jint ZenPolicy::getPriorityCategoryMessages() const
	{
		return callMethod<jint>(
			"getPriorityCategoryMessages",
			"()I"
		);
	}
	jint ZenPolicy::getPriorityCategoryReminders() const
	{
		return callMethod<jint>(
			"getPriorityCategoryReminders",
			"()I"
		);
	}
	jint ZenPolicy::getPriorityCategoryRepeatCallers() const
	{
		return callMethod<jint>(
			"getPriorityCategoryRepeatCallers",
			"()I"
		);
	}
	jint ZenPolicy::getPriorityCategorySystem() const
	{
		return callMethod<jint>(
			"getPriorityCategorySystem",
			"()I"
		);
	}
	jint ZenPolicy::getPriorityMessageSenders() const
	{
		return callMethod<jint>(
			"getPriorityMessageSenders",
			"()I"
		);
	}
	jint ZenPolicy::getVisualEffectAmbient() const
	{
		return callMethod<jint>(
			"getVisualEffectAmbient",
			"()I"
		);
	}
	jint ZenPolicy::getVisualEffectBadge() const
	{
		return callMethod<jint>(
			"getVisualEffectBadge",
			"()I"
		);
	}
	jint ZenPolicy::getVisualEffectFullScreenIntent() const
	{
		return callMethod<jint>(
			"getVisualEffectFullScreenIntent",
			"()I"
		);
	}
	jint ZenPolicy::getVisualEffectLights() const
	{
		return callMethod<jint>(
			"getVisualEffectLights",
			"()I"
		);
	}
	jint ZenPolicy::getVisualEffectNotificationList() const
	{
		return callMethod<jint>(
			"getVisualEffectNotificationList",
			"()I"
		);
	}
	jint ZenPolicy::getVisualEffectPeek() const
	{
		return callMethod<jint>(
			"getVisualEffectPeek",
			"()I"
		);
	}
	jint ZenPolicy::getVisualEffectStatusBar() const
	{
		return callMethod<jint>(
			"getVisualEffectStatusBar",
			"()I"
		);
	}
	jint ZenPolicy::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString ZenPolicy::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ZenPolicy::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::notification

