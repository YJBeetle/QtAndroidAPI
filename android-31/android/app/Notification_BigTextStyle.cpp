#include "./Notification_Builder.hpp"
#include "./Notification_BigTextStyle.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	Notification_BigTextStyle::Notification_BigTextStyle(QJniObject obj) : android::app::Notification_Style(obj) {}
	
	// Constructors
	Notification_BigTextStyle::Notification_BigTextStyle()
		: android::app::Notification_Style(
			"android.app.Notification$BigTextStyle",
			"()V"
		) {}
	Notification_BigTextStyle::Notification_BigTextStyle(android::app::Notification_Builder arg0)
		: android::app::Notification_Style(
			"android.app.Notification$BigTextStyle",
			"(Landroid/app/Notification$Builder;)V",
			arg0.object()
		) {}
	
	// Methods
	android::app::Notification_BigTextStyle Notification_BigTextStyle::bigText(jstring arg0)
	{
		return callObjectMethod(
			"bigText",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$BigTextStyle;",
			arg0
		);
	}
	android::app::Notification_BigTextStyle Notification_BigTextStyle::setBigContentTitle(jstring arg0)
	{
		return callObjectMethod(
			"setBigContentTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$BigTextStyle;",
			arg0
		);
	}
	android::app::Notification_BigTextStyle Notification_BigTextStyle::setSummaryText(jstring arg0)
	{
		return callObjectMethod(
			"setSummaryText",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$BigTextStyle;",
			arg0
		);
	}
} // namespace android::app

