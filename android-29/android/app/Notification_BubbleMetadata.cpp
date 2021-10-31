#include "./PendingIntent.hpp"
#include "../graphics/drawable/Icon.hpp"
#include "../os/Parcel.hpp"
#include "./Notification_BubbleMetadata.hpp"

namespace android::app
{
	// Fields
	QAndroidJniObject Notification_BubbleMetadata::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification$BubbleMetadata",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	Notification_BubbleMetadata::Notification_BubbleMetadata(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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
	QAndroidJniObject Notification_BubbleMetadata::getDeleteIntent()
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
	QAndroidJniObject Notification_BubbleMetadata::getIcon()
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	QAndroidJniObject Notification_BubbleMetadata::getIntent()
	{
		return callObjectMethod(
			"getIntent",
			"()Landroid/app/PendingIntent;"
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
