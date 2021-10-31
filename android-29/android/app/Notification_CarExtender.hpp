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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Notification_CarExtender(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Notification_CarExtender(QAndroidJniObject obj);
		
		// Constructors
		Notification_CarExtender();
		Notification_CarExtender(android::app::Notification arg0);
		
		// Methods
		android::app::Notification_Builder extend(android::app::Notification_Builder arg0);
		jint getColor();
		android::graphics::Bitmap getLargeIcon();
		android::app::Notification_CarExtender_UnreadConversation getUnreadConversation();
		android::app::Notification_CarExtender setColor(jint arg0);
		android::app::Notification_CarExtender setLargeIcon(android::graphics::Bitmap arg0);
		android::app::Notification_CarExtender setUnreadConversation(android::app::Notification_CarExtender_UnreadConversation arg0);
	};
} // namespace android::app

