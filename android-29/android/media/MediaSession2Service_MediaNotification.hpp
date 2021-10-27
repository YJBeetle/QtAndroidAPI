#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class Notification;
}

namespace android::media
{
	class MediaSession2Service_MediaNotification : public __JniBaseClass
	{
	public:
		// Fields
		
		MediaSession2Service_MediaNotification(QAndroidJniObject obj);
		// Constructors
		MediaSession2Service_MediaNotification(jint &arg0, android::app::Notification &arg1);
		MediaSession2Service_MediaNotification() = default;
		
		// Methods
		QAndroidJniObject getNotification();
		jint getNotificationId();
	};
} // namespace android::media

