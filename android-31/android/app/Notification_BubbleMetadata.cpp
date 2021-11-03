#include "./PendingIntent.hpp"
#include "../graphics/drawable/Icon.hpp"
#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./Notification_BubbleMetadata.hpp"

namespace android::app
{
	// Fields
	JObject Notification_BubbleMetadata::CREATOR()
	{
		return getStaticObjectField(
			"android.app.Notification$BubbleMetadata",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	Notification_BubbleMetadata::Notification_BubbleMetadata(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint Notification_BubbleMetadata::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Notification_BubbleMetadata::getAutoExpandBubble()
	{
		return callMethod<jboolean>(
			"getAutoExpandBubble",
			"()Z"
		);
	}
	android::app::PendingIntent Notification_BubbleMetadata::getDeleteIntent()
	{
		return callObjectMethod(
			"getDeleteIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
	jint Notification_BubbleMetadata::getDesiredHeight()
	{
		return callMethod<jint>(
			"getDesiredHeight",
			"()I"
		);
	}
	jint Notification_BubbleMetadata::getDesiredHeightResId()
	{
		return callMethod<jint>(
			"getDesiredHeightResId",
			"()I"
		);
	}
	android::graphics::drawable::Icon Notification_BubbleMetadata::getIcon()
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	android::app::PendingIntent Notification_BubbleMetadata::getIntent()
	{
		return callObjectMethod(
			"getIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
	JString Notification_BubbleMetadata::getShortcutId()
	{
		return callObjectMethod(
			"getShortcutId",
			"()Ljava/lang/String;"
		);
	}
	jboolean Notification_BubbleMetadata::isBubbleSuppressable()
	{
		return callMethod<jboolean>(
			"isBubbleSuppressable",
			"()Z"
		);
	}
	jboolean Notification_BubbleMetadata::isBubbleSuppressed()
	{
		return callMethod<jboolean>(
			"isBubbleSuppressed",
			"()Z"
		);
	}
	jboolean Notification_BubbleMetadata::isNotificationSuppressed()
	{
		return callMethod<jboolean>(
			"isNotificationSuppressed",
			"()Z"
		);
	}
	void Notification_BubbleMetadata::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

