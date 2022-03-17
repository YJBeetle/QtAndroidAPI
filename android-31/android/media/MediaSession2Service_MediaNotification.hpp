#pragma once

#include "../app/Notification.def.hpp"
#include "./MediaSession2Service_MediaNotification.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline MediaSession2Service_MediaNotification::MediaSession2Service_MediaNotification(jint arg0, android::app::Notification arg1)
		: JObject(
			"android.media.MediaSession2Service$MediaNotification",
			"(ILandroid/app/Notification;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	inline android::app::Notification MediaSession2Service_MediaNotification::getNotification() const
	{
		return callObjectMethod(
			"getNotification",
			"()Landroid/app/Notification;"
		);
	}
	inline jint MediaSession2Service_MediaNotification::getNotificationId() const
	{
		return callMethod<jint>(
			"getNotificationId",
			"()I"
		);
	}
} // namespace android::media

// Base class headers

