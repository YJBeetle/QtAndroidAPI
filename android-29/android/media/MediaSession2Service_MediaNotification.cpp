#include "../app/Notification.hpp"
#include "./MediaSession2Service_MediaNotification.hpp"

namespace android::media
{
	// Fields
	
	MediaSession2Service_MediaNotification::MediaSession2Service_MediaNotification(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaSession2Service_MediaNotification::MediaSession2Service_MediaNotification(jint &arg0, android::app::Notification &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaSession2Service$MediaNotification",
			"(ILandroid/app/Notification;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject MediaSession2Service_MediaNotification::getNotification()
	{
		return __thiz.callObjectMethod(
			"getNotification",
			"()Landroid/app/Notification;"
		);
	}
	jint MediaSession2Service_MediaNotification::getNotificationId()
	{
		return __thiz.callMethod<jint>(
			"getNotificationId",
			"()I"
		);
	}
} // namespace android::media

