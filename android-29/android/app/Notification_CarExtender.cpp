#include "./Notification.hpp"
#include "./Notification_Builder.hpp"
#include "./Notification_CarExtender_UnreadConversation.hpp"
#include "../graphics/Bitmap.hpp"
#include "./Notification_CarExtender.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	Notification_CarExtender::Notification_CarExtender(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Notification_CarExtender::Notification_CarExtender()
		: __JniBaseClass(
			"android.app.Notification$CarExtender",
			"()V"
		) {}
	Notification_CarExtender::Notification_CarExtender(android::app::Notification arg0)
		: __JniBaseClass(
			"android.app.Notification$CarExtender",
			"(Landroid/app/Notification;)V",
			arg0.object()
		) {}
	
	// Methods
	QAndroidJniObject Notification_CarExtender::extend(android::app::Notification_Builder arg0)
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
	QAndroidJniObject Notification_CarExtender::getLargeIcon()
	{
		return callObjectMethod(
			"getLargeIcon",
			"()Landroid/graphics/Bitmap;"
		);
	}
	QAndroidJniObject Notification_CarExtender::getUnreadConversation()
	{
		return callObjectMethod(
			"getUnreadConversation",
			"()Landroid/app/Notification$CarExtender$UnreadConversation;"
		);
	}
	QAndroidJniObject Notification_CarExtender::setColor(jint arg0)
	{
		return callObjectMethod(
			"setColor",
			"(I)Landroid/app/Notification$CarExtender;",
			arg0
		);
	}
	QAndroidJniObject Notification_CarExtender::setLargeIcon(android::graphics::Bitmap arg0)
	{
		return callObjectMethod(
			"setLargeIcon",
			"(Landroid/graphics/Bitmap;)Landroid/app/Notification$CarExtender;",
			arg0.object()
		);
	}
	QAndroidJniObject Notification_CarExtender::setUnreadConversation(android::app::Notification_CarExtender_UnreadConversation arg0)
	{
		return callObjectMethod(
			"setUnreadConversation",
			"(Landroid/app/Notification$CarExtender$UnreadConversation;)Landroid/app/Notification$CarExtender;",
			arg0.object()
		);
	}
} // namespace android::app

