#include "../os/Parcel.hpp"
#include "./NotificationManager_Policy.hpp"

namespace android::app
{
	// Fields
	jint NotificationManager_Policy::CONVERSATION_SENDERS_ANYONE()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"CONVERSATION_SENDERS_ANYONE"
		);
	}
	jint NotificationManager_Policy::CONVERSATION_SENDERS_IMPORTANT()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"CONVERSATION_SENDERS_IMPORTANT"
		);
	}
	jint NotificationManager_Policy::CONVERSATION_SENDERS_NONE()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"CONVERSATION_SENDERS_NONE"
		);
	}
	__JniBaseClass NotificationManager_Policy::CREATOR()
	{
		return getStaticObjectField(
			"android.app.NotificationManager$Policy",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint NotificationManager_Policy::PRIORITY_CATEGORY_ALARMS()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"PRIORITY_CATEGORY_ALARMS"
		);
	}
	jint NotificationManager_Policy::PRIORITY_CATEGORY_CALLS()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"PRIORITY_CATEGORY_CALLS"
		);
	}
	jint NotificationManager_Policy::PRIORITY_CATEGORY_CONVERSATIONS()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"PRIORITY_CATEGORY_CONVERSATIONS"
		);
	}
	jint NotificationManager_Policy::PRIORITY_CATEGORY_EVENTS()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"PRIORITY_CATEGORY_EVENTS"
		);
	}
	jint NotificationManager_Policy::PRIORITY_CATEGORY_MEDIA()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"PRIORITY_CATEGORY_MEDIA"
		);
	}
	jint NotificationManager_Policy::PRIORITY_CATEGORY_MESSAGES()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"PRIORITY_CATEGORY_MESSAGES"
		);
	}
	jint NotificationManager_Policy::PRIORITY_CATEGORY_REMINDERS()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"PRIORITY_CATEGORY_REMINDERS"
		);
	}
	jint NotificationManager_Policy::PRIORITY_CATEGORY_REPEAT_CALLERS()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"PRIORITY_CATEGORY_REPEAT_CALLERS"
		);
	}
	jint NotificationManager_Policy::PRIORITY_CATEGORY_SYSTEM()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"PRIORITY_CATEGORY_SYSTEM"
		);
	}
	jint NotificationManager_Policy::PRIORITY_SENDERS_ANY()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"PRIORITY_SENDERS_ANY"
		);
	}
	jint NotificationManager_Policy::PRIORITY_SENDERS_CONTACTS()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"PRIORITY_SENDERS_CONTACTS"
		);
	}
	jint NotificationManager_Policy::PRIORITY_SENDERS_STARRED()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"PRIORITY_SENDERS_STARRED"
		);
	}
	jint NotificationManager_Policy::SUPPRESSED_EFFECT_AMBIENT()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"SUPPRESSED_EFFECT_AMBIENT"
		);
	}
	jint NotificationManager_Policy::SUPPRESSED_EFFECT_BADGE()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"SUPPRESSED_EFFECT_BADGE"
		);
	}
	jint NotificationManager_Policy::SUPPRESSED_EFFECT_FULL_SCREEN_INTENT()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"SUPPRESSED_EFFECT_FULL_SCREEN_INTENT"
		);
	}
	jint NotificationManager_Policy::SUPPRESSED_EFFECT_LIGHTS()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"SUPPRESSED_EFFECT_LIGHTS"
		);
	}
	jint NotificationManager_Policy::SUPPRESSED_EFFECT_NOTIFICATION_LIST()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"SUPPRESSED_EFFECT_NOTIFICATION_LIST"
		);
	}
	jint NotificationManager_Policy::SUPPRESSED_EFFECT_PEEK()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"SUPPRESSED_EFFECT_PEEK"
		);
	}
	jint NotificationManager_Policy::SUPPRESSED_EFFECT_SCREEN_OFF()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"SUPPRESSED_EFFECT_SCREEN_OFF"
		);
	}
	jint NotificationManager_Policy::SUPPRESSED_EFFECT_SCREEN_ON()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"SUPPRESSED_EFFECT_SCREEN_ON"
		);
	}
	jint NotificationManager_Policy::SUPPRESSED_EFFECT_STATUS_BAR()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"SUPPRESSED_EFFECT_STATUS_BAR"
		);
	}
	jint NotificationManager_Policy::priorityCallSenders()
	{
		return getField<jint>(
			"priorityCallSenders"
		);
	}
	jint NotificationManager_Policy::priorityCategories()
	{
		return getField<jint>(
			"priorityCategories"
		);
	}
	jint NotificationManager_Policy::priorityConversationSenders()
	{
		return getField<jint>(
			"priorityConversationSenders"
		);
	}
	jint NotificationManager_Policy::priorityMessageSenders()
	{
		return getField<jint>(
			"priorityMessageSenders"
		);
	}
	jint NotificationManager_Policy::suppressedVisualEffects()
	{
		return getField<jint>(
			"suppressedVisualEffects"
		);
	}
	
	// QJniObject forward
	NotificationManager_Policy::NotificationManager_Policy(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	NotificationManager_Policy::NotificationManager_Policy(jint arg0, jint arg1, jint arg2)
		: __JniBaseClass(
			"android.app.NotificationManager$Policy",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	NotificationManager_Policy::NotificationManager_Policy(jint arg0, jint arg1, jint arg2, jint arg3)
		: __JniBaseClass(
			"android.app.NotificationManager$Policy",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	NotificationManager_Policy::NotificationManager_Policy(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
		: __JniBaseClass(
			"android.app.NotificationManager$Policy",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	
	// Methods
	jstring NotificationManager_Policy::priorityCategoriesToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.app.NotificationManager$Policy",
			"priorityCategoriesToString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring NotificationManager_Policy::prioritySendersToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.app.NotificationManager$Policy",
			"prioritySendersToString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring NotificationManager_Policy::suppressedEffectsToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.app.NotificationManager$Policy",
			"suppressedEffectsToString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint NotificationManager_Policy::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean NotificationManager_Policy::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint NotificationManager_Policy::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring NotificationManager_Policy::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void NotificationManager_Policy::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

