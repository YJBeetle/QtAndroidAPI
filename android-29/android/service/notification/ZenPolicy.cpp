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
	
	// QAndroidJniObject forward
	ZenPolicy::ZenPolicy(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint ZenPolicy::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ZenPolicy::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint ZenPolicy::getPriorityCallSenders()
	{
		return callMethod<jint>(
			"getPriorityCallSenders",
			"()I"
		);
	}
	jint ZenPolicy::getPriorityCategoryAlarms()
	{
		return callMethod<jint>(
			"getPriorityCategoryAlarms",
			"()I"
		);
	}
	jint ZenPolicy::getPriorityCategoryCalls()
	{
		return callMethod<jint>(
			"getPriorityCategoryCalls",
			"()I"
		);
	}
	jint ZenPolicy::getPriorityCategoryEvents()
	{
		return callMethod<jint>(
			"getPriorityCategoryEvents",
			"()I"
		);
	}
	jint ZenPolicy::getPriorityCategoryMedia()
	{
		return callMethod<jint>(
			"getPriorityCategoryMedia",
			"()I"
		);
	}
	jint ZenPolicy::getPriorityCategoryMessages()
	{
		return callMethod<jint>(
			"getPriorityCategoryMessages",
			"()I"
		);
	}
	jint ZenPolicy::getPriorityCategoryReminders()
	{
		return callMethod<jint>(
			"getPriorityCategoryReminders",
			"()I"
		);
	}
	jint ZenPolicy::getPriorityCategoryRepeatCallers()
	{
		return callMethod<jint>(
			"getPriorityCategoryRepeatCallers",
			"()I"
		);
	}
	jint ZenPolicy::getPriorityCategorySystem()
	{
		return callMethod<jint>(
			"getPriorityCategorySystem",
			"()I"
		);
	}
	jint ZenPolicy::getPriorityMessageSenders()
	{
		return callMethod<jint>(
			"getPriorityMessageSenders",
			"()I"
		);
	}
	jint ZenPolicy::getVisualEffectAmbient()
	{
		return callMethod<jint>(
			"getVisualEffectAmbient",
			"()I"
		);
	}
	jint ZenPolicy::getVisualEffectBadge()
	{
		return callMethod<jint>(
			"getVisualEffectBadge",
			"()I"
		);
	}
	jint ZenPolicy::getVisualEffectFullScreenIntent()
	{
		return callMethod<jint>(
			"getVisualEffectFullScreenIntent",
			"()I"
		);
	}
	jint ZenPolicy::getVisualEffectLights()
	{
		return callMethod<jint>(
			"getVisualEffectLights",
			"()I"
		);
	}
	jint ZenPolicy::getVisualEffectNotificationList()
	{
		return callMethod<jint>(
			"getVisualEffectNotificationList",
			"()I"
		);
	}
	jint ZenPolicy::getVisualEffectPeek()
	{
		return callMethod<jint>(
			"getVisualEffectPeek",
			"()I"
		);
	}
	jint ZenPolicy::getVisualEffectStatusBar()
	{
		return callMethod<jint>(
			"getVisualEffectStatusBar",
			"()I"
		);
	}
	jint ZenPolicy::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString ZenPolicy::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ZenPolicy::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::notification

