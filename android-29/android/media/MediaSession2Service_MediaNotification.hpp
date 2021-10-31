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
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaSession2Service_MediaNotification(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaSession2Service_MediaNotification(QJniObject obj);
		
		// Constructors
		MediaSession2Service_MediaNotification(jint arg0, android::app::Notification arg1);
		
		// Methods
		android::app::Notification getNotification();
		jint getNotificationId();
	};
} // namespace android::media

