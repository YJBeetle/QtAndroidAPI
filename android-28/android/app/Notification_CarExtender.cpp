#include "./Notification.hpp"
#include "./Notification_Builder.hpp"
#include "./Notification_CarExtender_UnreadConversation.hpp"
#include "../graphics/Bitmap.hpp"
#include "./Notification_CarExtender.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	Notification_CarExtender::Notification_CarExtender(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Notification_CarExtender::Notification_CarExtender()
		: JObject(
			"android.app.Notification$CarExtender",
			"()V"
		) {}
	Notification_CarExtender::Notification_CarExtender(android::app::Notification arg0)
		: JObject(
			"android.app.Notification$CarExtender",
			"(Landroid/app/Notification;)V",
			arg0.object()
		) {}
	
	// Methods
	android::app::Notification_Builder Notification_CarExtender::extend(android::app::Notification_Builder arg0)
	{
		return callObjectMethod(
			"extend",
			"(Landroid/app/Notification$Builder;)Landroid/app/Notification$Builder;",
			arg0.object()
		);
	}
	jint Notification_CarExtender::getColor()
	{
		return callMethod<jint>(
			"getColor",
			"()I"
		);
	}
	android::graphics::Bitmap Notification_CarExtender::getLargeIcon()
	{
		return callObjectMethod(
			"getLargeIcon",
			"()Landroid/graphics/Bitmap;"
		);
	}
	android::app::Notification_CarExtender_UnreadConversation Notification_CarExtender::getUnreadConversation()
	{
		return callObjectMethod(
			"getUnreadConversation",
			"()Landroid/app/Notification$CarExtender$UnreadConversation;"
		);
	}
	android::app::Notification_CarExtender Notification_CarExtender::setColor(jint arg0)
	{
		return callObjectMethod(
			"setColor",
			"(I)Landroid/app/Notification$CarExtender;",
			arg0
		);
	}
	android::app::Notification_CarExtender Notification_CarExtender::setLargeIcon(android::graphics::Bitmap arg0)
	{
		return callObjectMethod(
			"setLargeIcon",
			"(Landroid/graphics/Bitmap;)Landroid/app/Notification$CarExtender;",
			arg0.object()
		);
	}
	android::app::Notification_CarExtender Notification_CarExtender::setUnreadConversation(android::app::Notification_CarExtender_UnreadConversation arg0)
	{
		return callObjectMethod(
			"setUnreadConversation",
			"(Landroid/app/Notification$CarExtender$UnreadConversation;)Landroid/app/Notification$CarExtender;",
			arg0.object()
		);
	}
} // namespace android::app

