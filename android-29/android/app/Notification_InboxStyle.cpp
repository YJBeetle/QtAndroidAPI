#include "./Notification_Builder.hpp"
#include "./Notification_InboxStyle.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	Notification_InboxStyle::Notification_InboxStyle(QAndroidJniObject obj) : android::app::Notification_Style(obj) {}
	
	// Constructors
	Notification_InboxStyle::Notification_InboxStyle()
		: android::app::Notification_Style(
			"android.app.Notification$InboxStyle",
			"()V"
		) {}
	Notification_InboxStyle::Notification_InboxStyle(android::app::Notification_Builder arg0)
		: android::app::Notification_Style(
			"android.app.Notification$InboxStyle",
			"(Landroid/app/Notification$Builder;)V",
			arg0.object()
		) {}
	
	// Methods
	QAndroidJniObject Notification_InboxStyle::addLine(jstring arg0)
	{
		return callObjectMethod(
			"addLine",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$InboxStyle;",
			arg0
		);
	}
	QAndroidJniObject Notification_InboxStyle::setBigContentTitle(jstring arg0)
	{
		return callObjectMethod(
			"setBigContentTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$InboxStyle;",
			arg0
		);
	}
	QAndroidJniObject Notification_InboxStyle::setSummaryText(jstring arg0)
	{
		return callObjectMethod(
			"setSummaryText",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$InboxStyle;",
			arg0
		);
	}
} // namespace android::app

