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
	
	Notification_BubbleMetadata::Notification_BubbleMetadata(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint Notification_BubbleMetadata::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Notification_BubbleMetadata::getAutoExpandBubble()
	{
		return __thiz.callMethod<jboolean>(
			"getAutoExpandBubble",
			"()Z"
		);
	}
	QAndroidJniObject Notification_BubbleMetadata::getDeleteIntent()
	{
		return __thiz.callObjectMethod(
			"getDeleteIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
	jint Notification_BubbleMetadata::getDesiredHeight()
	{
		return __thiz.callMethod<jint>(
			"getDesiredHeight",
			"()I"
		);
	}
	jint Notification_BubbleMetadata::getDesiredHeightResId()
	{
		return __thiz.callMethod<jint>(
			"getDesiredHeightResId",
			"()I"
		);
	}
	QAndroidJniObject Notification_BubbleMetadata::getIcon()
	{
		return __thiz.callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	QAndroidJniObject Notification_BubbleMetadata::getIntent()
	{
		return __thiz.callObjectMethod(
			"getIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
	jboolean Notification_BubbleMetadata::isNotificationSuppressed()
	{
		return __thiz.callMethod<jboolean>(
			"isNotificationSuppressed",
			"()Z"
		);
	}
	void Notification_BubbleMetadata::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app

