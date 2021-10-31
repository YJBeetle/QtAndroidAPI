#include "../app/Notification.hpp"
#include "./MediaSession2Service_MediaNotification.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaSession2Service_MediaNotification::MediaSession2Service_MediaNotification(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaSession2Service_MediaNotification::MediaSession2Service_MediaNotification(jint arg0, android::app::Notification arg1)
		: __JniBaseClass(
			"android.media.MediaSession2Service$MediaNotification",
			"(ILandroid/app/Notification;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	QAndroidJniObject MediaSession2Service_MediaNotification::getNotification()
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

