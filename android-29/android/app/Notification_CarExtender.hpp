#pragma once

#include "./Notification.def.hpp"
#include "./Notification_Builder.def.hpp"
#include "./Notification_CarExtender_UnreadConversation.def.hpp"
#include "../graphics/Bitmap.def.hpp"
#include "./Notification_CarExtender.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline Notification_CarExtender::Notification_CarExtender()
		: JObject(
			"android.app.Notification$CarExtender",
			"()V"
		) {}
	inline Notification_CarExtender::Notification_CarExtender(android::app::Notification arg0)
		: JObject(
			"android.app.Notification$CarExtender",
			"(Landroid/app/Notification;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::app::Notification_Builder Notification_CarExtender::extend(android::app::Notification_Builder arg0) const
	{
		return callObjectMethod(
			"extend",
			"(Landroid/app/Notification$Builder;)Landroid/app/Notification$Builder;",
			arg0.object()
		);
	}
	inline jint Notification_CarExtender::getColor() const
	{
		return callMethod<jint>(
			"getColor",
			"()I"
		);
	}
	inline android::graphics::Bitmap Notification_CarExtender::getLargeIcon() const
	{
		return callObjectMethod(
			"getLargeIcon",
			"()Landroid/graphics/Bitmap;"
		);
	}
	inline android::app::Notification_CarExtender_UnreadConversation Notification_CarExtender::getUnreadConversation() const
	{
		return callObjectMethod(
			"getUnreadConversation",
			"()Landroid/app/Notification$CarExtender$UnreadConversation;"
		);
	}
	inline android::app::Notification_CarExtender Notification_CarExtender::setColor(jint arg0) const
	{
		return callObjectMethod(
			"setColor",
			"(I)Landroid/app/Notification$CarExtender;",
			arg0
		);
	}
	inline android::app::Notification_CarExtender Notification_CarExtender::setLargeIcon(android::graphics::Bitmap arg0) const
	{
		return callObjectMethod(
			"setLargeIcon",
			"(Landroid/graphics/Bitmap;)Landroid/app/Notification$CarExtender;",
			arg0.object()
		);
	}
	inline android::app::Notification_CarExtender Notification_CarExtender::setUnreadConversation(android::app::Notification_CarExtender_UnreadConversation arg0) const
	{
		return callObjectMethod(
			"setUnreadConversation",
			"(Landroid/app/Notification$CarExtender$UnreadConversation;)Landroid/app/Notification$CarExtender;",
			arg0.object()
		);
	}
} // namespace android::app

// Base class headers

