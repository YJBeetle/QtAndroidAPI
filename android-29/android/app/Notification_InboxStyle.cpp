#include "./Notification_Builder.hpp"
#include "./Notification_InboxStyle.hpp"

namespace android::app
{
	// Fields
	
	Notification_InboxStyle::Notification_InboxStyle(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Notification_InboxStyle::Notification_InboxStyle()
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$InboxStyle",
			"()V"
		);
	}
	Notification_InboxStyle::Notification_InboxStyle(android::app::Notification_Builder arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$InboxStyle",
			"(Landroid/app/Notification$Builder;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject Notification_InboxStyle::addLine(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"addLine",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$InboxStyle;",
			arg0
		);
	}
	QAndroidJniObject Notification_InboxStyle::setBigContentTitle(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setBigContentTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$InboxStyle;",
			arg0
		);
	}
	QAndroidJniObject Notification_InboxStyle::setSummaryText(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setSummaryText",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$InboxStyle;",
			arg0
		);
	}
} // namespace android::app

