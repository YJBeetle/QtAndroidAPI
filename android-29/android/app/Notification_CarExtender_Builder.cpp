#include "./Notification_CarExtender_UnreadConversation.hpp"
#include "./PendingIntent.hpp"
#include "./RemoteInput.hpp"
#include "./Notification_CarExtender_Builder.hpp"

namespace android::app
{
	// Fields
	
	Notification_CarExtender_Builder::Notification_CarExtender_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Notification_CarExtender_Builder::Notification_CarExtender_Builder(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$CarExtender$Builder",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
	QAndroidJniObject Notification_CarExtender_Builder::addMessage(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"addMessage",
			"(Ljava/lang/String;)Landroid/app/Notification$CarExtender$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_CarExtender_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/app/Notification$CarExtender$UnreadConversation;"
		);
	}
	QAndroidJniObject Notification_CarExtender_Builder::setLatestTimestamp(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setLatestTimestamp",
			"(J)Landroid/app/Notification$CarExtender$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_CarExtender_Builder::setReadPendingIntent(android::app::PendingIntent arg0)
	{
		return __thiz.callObjectMethod(
			"setReadPendingIntent",
			"(Landroid/app/PendingIntent;)Landroid/app/Notification$CarExtender$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_CarExtender_Builder::setReplyAction(android::app::PendingIntent arg0, android::app::RemoteInput arg1)
	{
		return __thiz.callObjectMethod(
			"setReplyAction",
			"(Landroid/app/PendingIntent;Landroid/app/RemoteInput;)Landroid/app/Notification$CarExtender$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::app

