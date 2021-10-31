#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class Notification;
}
namespace android::app
{
	class Notification_Builder;
}
namespace android::app
{
	class Notification_CarExtender_UnreadConversation;
}
namespace android::graphics
{
	class Bitmap;
}

namespace android::app
{
	class Notification_CarExtender : public __JniBaseClass
	{
	public:
		// Fields
		
		Notification_CarExtender(QAndroidJniObject obj);
		// Constructors
		Notification_CarExtender();
		Notification_CarExtender(android::app::Notification arg0);
		
		// Methods
		QAndroidJniObject extend(android::app::Notification_Builder arg0);
		jint getColor();
		QAndroidJniObject getLargeIcon();
		QAndroidJniObject getUnreadConversation();
		QAndroidJniObject setColor(jint arg0);
		QAndroidJniObject setLargeIcon(android::graphics::Bitmap arg0);
		QAndroidJniObject setUnreadConversation(android::app::Notification_CarExtender_UnreadConversation arg0);
	};
} // namespace android::app

