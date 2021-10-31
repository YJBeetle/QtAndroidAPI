#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Notification_Style.hpp"

namespace android::app
{
	class Notification_Builder;
}
namespace android::media::session
{
	class MediaSession_Token;
}

namespace android::app
{
	class Notification_MediaStyle : public android::app::Notification_Style
	{
	public:
		// Fields
		
		Notification_MediaStyle(QAndroidJniObject obj);
		// Constructors
		Notification_MediaStyle();
		Notification_MediaStyle(android::app::Notification_Builder arg0);
		
		// Methods
		QAndroidJniObject setMediaSession(android::media::session::MediaSession_Token arg0);
		QAndroidJniObject setShowActionsInCompactView(jintArray arg0);
	};
} // namespace android::app

