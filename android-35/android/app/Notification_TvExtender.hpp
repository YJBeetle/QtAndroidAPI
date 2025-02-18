#pragma once

#include "./Notification.def.hpp"
#include "./Notification_Builder.def.hpp"
#include "./PendingIntent.def.hpp"
#include "../../JString.hpp"
#include "./Notification_TvExtender.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline Notification_TvExtender::Notification_TvExtender()
		: JObject(
			"android.app.Notification$TvExtender",
			"()V"
		) {}
	inline Notification_TvExtender::Notification_TvExtender(android::app::Notification arg0)
		: JObject(
			"android.app.Notification$TvExtender",
			"(Landroid/app/Notification;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::app::Notification_Builder Notification_TvExtender::extend(android::app::Notification_Builder arg0) const
	{
		return callObjectMethod(
			"extend",
			"(Landroid/app/Notification$Builder;)Landroid/app/Notification$Builder;",
			arg0.object()
		);
	}
	inline JString Notification_TvExtender::getChannelId() const
	{
		return callObjectMethod(
			"getChannelId",
			"()Ljava/lang/String;"
		);
	}
	inline android::app::PendingIntent Notification_TvExtender::getContentIntent() const
	{
		return callObjectMethod(
			"getContentIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
	inline android::app::PendingIntent Notification_TvExtender::getDeleteIntent() const
	{
		return callObjectMethod(
			"getDeleteIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
	inline jboolean Notification_TvExtender::isAvailableOnTv() const
	{
		return callMethod<jboolean>(
			"isAvailableOnTv",
			"()Z"
		);
	}
	inline jboolean Notification_TvExtender::isSuppressShowOverApps() const
	{
		return callMethod<jboolean>(
			"isSuppressShowOverApps",
			"()Z"
		);
	}
	inline android::app::Notification_TvExtender Notification_TvExtender::setChannelId(JString arg0) const
	{
		return callObjectMethod(
			"setChannelId",
			"(Ljava/lang/String;)Landroid/app/Notification$TvExtender;",
			arg0.object<jstring>()
		);
	}
	inline android::app::Notification_TvExtender Notification_TvExtender::setContentIntent(android::app::PendingIntent arg0) const
	{
		return callObjectMethod(
			"setContentIntent",
			"(Landroid/app/PendingIntent;)Landroid/app/Notification$TvExtender;",
			arg0.object()
		);
	}
	inline android::app::Notification_TvExtender Notification_TvExtender::setDeleteIntent(android::app::PendingIntent arg0) const
	{
		return callObjectMethod(
			"setDeleteIntent",
			"(Landroid/app/PendingIntent;)Landroid/app/Notification$TvExtender;",
			arg0.object()
		);
	}
	inline android::app::Notification_TvExtender Notification_TvExtender::setSuppressShowOverApps(jboolean arg0) const
	{
		return callObjectMethod(
			"setSuppressShowOverApps",
			"(Z)Landroid/app/Notification$TvExtender;",
			arg0
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
