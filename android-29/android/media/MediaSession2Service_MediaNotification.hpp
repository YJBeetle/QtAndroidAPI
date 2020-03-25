#pragma once

#ifndef ANDROID_MEDIA_MEDIASESSION2SERVICE_MEDIANOTIFICATION
#define ANDROID_MEDIA_MEDIASESSION2SERVICE_MEDIANOTIFICATION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class Notification;
}

namespace __jni_impl::android::media
{
	class MediaSession2Service_MediaNotification : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, __jni_impl::android::app::Notification arg1);
		
		// Methods
		QAndroidJniObject getNotification();
		jint getNotificationId();
	};
} // namespace __jni_impl::android::media

#include "../app/Notification.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void MediaSession2Service_MediaNotification::__constructor(jint arg0, __jni_impl::android::app::Notification arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaSession2Service$MediaNotification",
			"(ILandroid/app/Notification;)V",
			arg0,
			arg1.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject MediaSession2Service_MediaNotification::getNotification()
	{
		return __thiz.callObjectMethod(
			"getNotification",
			"()Landroid/app/Notification;");
	}
	jint MediaSession2Service_MediaNotification::getNotificationId()
	{
		return __thiz.callMethod<jint>(
			"getNotificationId",
			"()I");
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaSession2Service_MediaNotification : public __jni_impl::android::media::MediaSession2Service_MediaNotification
	{
	public:
		MediaSession2Service_MediaNotification(QAndroidJniObject obj) { __thiz = obj; }
		MediaSession2Service_MediaNotification(jint arg0, __jni_impl::android::app::Notification arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIASESSION2SERVICE_MEDIANOTIFICATION

