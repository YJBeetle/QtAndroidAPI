#pragma once

#include "./Notification_Builder.def.hpp"
#include "../graphics/Bitmap.def.hpp"
#include "../graphics/drawable/Icon.def.hpp"
#include "../../JString.hpp"
#include "./Notification_BigPictureStyle.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline Notification_BigPictureStyle::Notification_BigPictureStyle()
		: android::app::Notification_Style(
			"android.app.Notification$BigPictureStyle",
			"()V"
		) {}
	inline Notification_BigPictureStyle::Notification_BigPictureStyle(android::app::Notification_Builder arg0)
		: android::app::Notification_Style(
			"android.app.Notification$BigPictureStyle",
			"(Landroid/app/Notification$Builder;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::app::Notification_BigPictureStyle Notification_BigPictureStyle::bigLargeIcon(android::graphics::Bitmap arg0) const
	{
		return callObjectMethod(
			"bigLargeIcon",
			"(Landroid/graphics/Bitmap;)Landroid/app/Notification$BigPictureStyle;",
			arg0.object()
		);
	}
	inline android::app::Notification_BigPictureStyle Notification_BigPictureStyle::bigLargeIcon(android::graphics::drawable::Icon arg0) const
	{
		return callObjectMethod(
			"bigLargeIcon",
			"(Landroid/graphics/drawable/Icon;)Landroid/app/Notification$BigPictureStyle;",
			arg0.object()
		);
	}
	inline android::app::Notification_BigPictureStyle Notification_BigPictureStyle::bigPicture(android::graphics::Bitmap arg0) const
	{
		return callObjectMethod(
			"bigPicture",
			"(Landroid/graphics/Bitmap;)Landroid/app/Notification$BigPictureStyle;",
			arg0.object()
		);
	}
	inline android::app::Notification_BigPictureStyle Notification_BigPictureStyle::setBigContentTitle(JString arg0) const
	{
		return callObjectMethod(
			"setBigContentTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$BigPictureStyle;",
			arg0.object<jstring>()
		);
	}
	inline android::app::Notification_BigPictureStyle Notification_BigPictureStyle::setSummaryText(JString arg0) const
	{
		return callObjectMethod(
			"setSummaryText",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$BigPictureStyle;",
			arg0.object<jstring>()
		);
	}
} // namespace android::app

// Base class headers
#include "./Notification_Style.hpp"

