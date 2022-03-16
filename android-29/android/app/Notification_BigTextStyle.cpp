#include "./Notification_Builder.hpp"
#include "../../JString.hpp"
#include "./Notification_BigTextStyle.hpp"

namespace android::app
{
	// Fields
	
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
	android::app::Notification_BigTextStyle Notification_BigTextStyle::bigText(JString arg0) const
	{
		return callObjectMethod(
			"bigText",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$BigTextStyle;",
			arg0.object<jstring>()
		);
	}
	android::app::Notification_BigTextStyle Notification_BigTextStyle::setBigContentTitle(JString arg0) const
	{
		return callObjectMethod(
			"setBigContentTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$BigTextStyle;",
			arg0.object<jstring>()
		);
	}
	android::app::Notification_BigTextStyle Notification_BigTextStyle::setSummaryText(JString arg0) const
	{
		return callObjectMethod(
			"setSummaryText",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$BigTextStyle;",
			arg0.object<jstring>()
		);
	}
} // namespace android::app

