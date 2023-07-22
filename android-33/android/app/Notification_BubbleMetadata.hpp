#pragma once

#include "./PendingIntent.def.hpp"
#include "../graphics/drawable/Icon.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./Notification_BubbleMetadata.def.hpp"

namespace android::app
{
	// Fields
	inline JObject Notification_BubbleMetadata::CREATOR()
	{
		return getStaticObjectField(
			"android.app.Notification$BubbleMetadata",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint Notification_BubbleMetadata::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean Notification_BubbleMetadata::getAutoExpandBubble() const
	{
		return callMethod<jboolean>(
			"getAutoExpandBubble",
			"()Z"
		);
	}
	inline android::app::PendingIntent Notification_BubbleMetadata::getDeleteIntent() const
	{
		return callObjectMethod(
			"getDeleteIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
	inline jint Notification_BubbleMetadata::getDesiredHeight() const
	{
		return callMethod<jint>(
			"getDesiredHeight",
			"()I"
		);
	}
	inline jint Notification_BubbleMetadata::getDesiredHeightResId() const
	{
		return callMethod<jint>(
			"getDesiredHeightResId",
			"()I"
		);
	}
	inline android::graphics::drawable::Icon Notification_BubbleMetadata::getIcon() const
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	inline android::app::PendingIntent Notification_BubbleMetadata::getIntent() const
	{
		return callObjectMethod(
			"getIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
	inline JString Notification_BubbleMetadata::getShortcutId() const
	{
		return callObjectMethod(
			"getShortcutId",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean Notification_BubbleMetadata::isBubbleSuppressable() const
	{
		return callMethod<jboolean>(
			"isBubbleSuppressable",
			"()Z"
		);
	}
	inline jboolean Notification_BubbleMetadata::isBubbleSuppressed() const
	{
		return callMethod<jboolean>(
			"isBubbleSuppressed",
			"()Z"
		);
	}
	inline jboolean Notification_BubbleMetadata::isNotificationSuppressed() const
	{
		return callMethod<jboolean>(
			"isNotificationSuppressed",
			"()Z"
		);
	}
	inline void Notification_BubbleMetadata::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
