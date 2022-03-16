#include "./Notification_Builder.hpp"
#include "../../JString.hpp"
#include "./Notification_InboxStyle.hpp"

namespace android::app
{
	// Fields
	
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
	android::app::Notification_InboxStyle Notification_InboxStyle::addLine(JString arg0) const
	{
		return callObjectMethod(
			"addLine",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$InboxStyle;",
			arg0.object<jstring>()
		);
	}
	android::app::Notification_InboxStyle Notification_InboxStyle::setBigContentTitle(JString arg0) const
	{
		return callObjectMethod(
			"setBigContentTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$InboxStyle;",
			arg0.object<jstring>()
		);
	}
	android::app::Notification_InboxStyle Notification_InboxStyle::setSummaryText(JString arg0) const
	{
		return callObjectMethod(
			"setSummaryText",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$InboxStyle;",
			arg0.object<jstring>()
		);
	}
} // namespace android::app

