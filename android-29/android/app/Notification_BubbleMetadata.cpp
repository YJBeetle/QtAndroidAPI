#include "./PendingIntent.hpp"
#include "../graphics/drawable/Icon.hpp"
#include "../os/Parcel.hpp"
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
	
	// QJniObject forward
	Notification_BubbleMetadata::Notification_BubbleMetadata(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint Notification_BubbleMetadata::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Notification_BubbleMetadata::getAutoExpandBubble() const
	{
		return callMethod<jboolean>(
			"getAutoExpandBubble",
			"()Z"
		);
	}
	android::app::PendingIntent Notification_BubbleMetadata::getDeleteIntent() const
	{
		return callObjectMethod(
			"getDeleteIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
	jint Notification_BubbleMetadata::getDesiredHeight() const
	{
		return callMethod<jint>(
			"getDesiredHeight",
			"()I"
		);
	}
	jint Notification_BubbleMetadata::getDesiredHeightResId() const
	{
		return callMethod<jint>(
			"getDesiredHeightResId",
			"()I"
		);
	}
	android::graphics::drawable::Icon Notification_BubbleMetadata::getIcon() const
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	android::app::PendingIntent Notification_BubbleMetadata::getIntent() const
	{
		return callObjectMethod(
			"getIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
	jboolean Notification_BubbleMetadata::isNotificationSuppressed() const
	{
		return callMethod<jboolean>(
			"isNotificationSuppressed",
			"()Z"
		);
	}
	void Notification_BubbleMetadata::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

