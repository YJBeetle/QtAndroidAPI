#include "./Notification.hpp"
#include "./Notification_Builder.hpp"
#include "./Notification_CarExtender_UnreadConversation.hpp"
#include "../graphics/Bitmap.hpp"
#include "./Notification_CarExtender.hpp"

namespace android::app
{
	// Fields
	
	Notification_CarExtender::Notification_CarExtender(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Notification_CarExtender::Notification_CarExtender()
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$CarExtender",
			"()V"
		);
	}
	Notification_CarExtender::Notification_CarExtender(android::app::Notification arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$CarExtender",
			"(Landroid/app/Notification;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject Notification_CarExtender::extend(android::app::Notification_Builder arg0)
	{
		return __thiz.callObjectMethod(
			"extend",
			"(Landroid/app/Notification$Builder;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
		);
	}
	jint Notification_CarExtender::getColor()
	{
		return __thiz.callMethod<jint>(
			"getColor",
			"()I"
		);
	}
	QAndroidJniObject Notification_CarExtender::getLargeIcon()
	{
		return __thiz.callObjectMethod(
			"getLargeIcon",
			"()Landroid/graphics/Bitmap;"
		);
	}
	QAndroidJniObject Notification_CarExtender::getUnreadConversation()
	{
		return __thiz.callObjectMethod(
			"getUnreadConversation",
			"()Landroid/app/Notification$CarExtender$UnreadConversation;"
		);
	}
	QAndroidJniObject Notification_CarExtender::setColor(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setColor",
			"(I)Landroid/app/Notification$CarExtender;",
			arg0
		);
	}
	QAndroidJniObject Notification_CarExtender::setLargeIcon(android::graphics::Bitmap arg0)
	{
		return __thiz.callObjectMethod(
			"setLargeIcon",
			"(Landroid/graphics/Bitmap;)Landroid/app/Notification$CarExtender;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_CarExtender::setUnreadConversation(android::app::Notification_CarExtender_UnreadConversation arg0)
	{
		return __thiz.callObjectMethod(
			"setUnreadConversation",
			"(Landroid/app/Notification$CarExtender$UnreadConversation;)Landroid/app/Notification$CarExtender;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::app

