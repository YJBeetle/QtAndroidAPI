#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class Notification;
}

namespace android::media
{
	class MediaSession2Service_MediaNotification : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaSession2Service_MediaNotification(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaSession2Service_MediaNotification(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		MediaSession2Service_MediaNotification(jint arg0, android::app::Notification arg1);
		
		// Methods
		android::app::Notification getNotification() const;
		jint getNotificationId() const;
	};
} // namespace android::media

