#include "../app/Notification.hpp"
#include "./MediaSession2Service_MediaNotification.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaSession2Service_MediaNotification::MediaSession2Service_MediaNotification(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaSession2Service_MediaNotification::MediaSession2Service_MediaNotification(jint arg0, android::app::Notification arg1)
		: JObject(
			"android.media.MediaSession2Service$MediaNotification",
			"(ILandroid/app/Notification;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	android::app::Notification MediaSession2Service_MediaNotification::getNotification()
	{
		return callObjectMethod(
			"getNotification",
			"()Landroid/app/Notification;"
		);
	}
	jint MediaSession2Service_MediaNotification::getNotificationId()
	{
		return callMethod<jint>(
			"getNotificationId",
			"()I"
		);
	}
} // namespace android::media

