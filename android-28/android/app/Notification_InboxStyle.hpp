#pragma once

#include "./Notification_Builder.def.hpp"
#include "../../JString.hpp"
#include "./Notification_InboxStyle.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline Notification_InboxStyle::Notification_InboxStyle()
		: android::app::Notification_Style(
			"android.app.Notification$InboxStyle",
			"()V"
		) {}
	inline Notification_InboxStyle::Notification_InboxStyle(android::app::Notification_Builder arg0)
		: android::app::Notification_Style(
			"android.app.Notification$InboxStyle",
			"(Landroid/app/Notification$Builder;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::app::Notification_InboxStyle Notification_InboxStyle::addLine(JString arg0) const
	{
		return callObjectMethod(
			"addLine",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$InboxStyle;",
			arg0.object<jstring>()
		);
	}
	inline android::app::Notification_InboxStyle Notification_InboxStyle::setBigContentTitle(JString arg0) const
	{
		return callObjectMethod(
			"setBigContentTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$InboxStyle;",
			arg0.object<jstring>()
		);
	}
	inline android::app::Notification_InboxStyle Notification_InboxStyle::setSummaryText(JString arg0) const
	{
		return callObjectMethod(
			"setSummaryText",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$InboxStyle;",
			arg0.object<jstring>()
		);
	}
} // namespace android::app

// Base class headers
#include "./Notification_Style.hpp"

