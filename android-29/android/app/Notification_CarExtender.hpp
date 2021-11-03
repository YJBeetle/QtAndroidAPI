#pragma once

#include "../../JObject.hpp"

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
	class Notification_CarExtender : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Notification_CarExtender(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Notification_CarExtender(QJniObject obj);
		
		// Constructors
		Notification_CarExtender();
		Notification_CarExtender(android::app::Notification arg0);
		
		// Methods
		android::app::Notification_Builder extend(android::app::Notification_Builder arg0) const;
		jint getColor() const;
		android::graphics::Bitmap getLargeIcon() const;
		android::app::Notification_CarExtender_UnreadConversation getUnreadConversation() const;
		android::app::Notification_CarExtender setColor(jint arg0) const;
		android::app::Notification_CarExtender setLargeIcon(android::graphics::Bitmap arg0) const;
		android::app::Notification_CarExtender setUnreadConversation(android::app::Notification_CarExtender_UnreadConversation arg0) const;
	};
} // namespace android::app

