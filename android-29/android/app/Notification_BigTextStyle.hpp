#pragma once

#include "./Notification_Builder.def.hpp"
#include "../../JString.hpp"
#include "./Notification_BigTextStyle.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline Notification_BigTextStyle::Notification_BigTextStyle()
		: android::app::Notification_Style(
			"android.app.Notification$BigTextStyle",
			"()V"
		) {}
	inline Notification_BigTextStyle::Notification_BigTextStyle(android::app::Notification_Builder arg0)
		: android::app::Notification_Style(
			"android.app.Notification$BigTextStyle",
			"(Landroid/app/Notification$Builder;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::app::Notification_BigTextStyle Notification_BigTextStyle::bigText(JString arg0) const
	{
		return callObjectMethod(
			"bigText",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$BigTextStyle;",
			arg0.object<jstring>()
		);
	}
	inline android::app::Notification_BigTextStyle Notification_BigTextStyle::setBigContentTitle(JString arg0) const
	{
		return callObjectMethod(
			"setBigContentTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$BigTextStyle;",
			arg0.object<jstring>()
		);
	}
	inline android::app::Notification_BigTextStyle Notification_BigTextStyle::setSummaryText(JString arg0) const
	{
		return callObjectMethod(
			"setSummaryText",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$BigTextStyle;",
			arg0.object<jstring>()
		);
	}
} // namespace android::app

// Base class headers
#include "./Notification_Style.hpp"

