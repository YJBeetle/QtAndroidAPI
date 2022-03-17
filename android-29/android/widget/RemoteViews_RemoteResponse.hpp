#pragma once

#include "../app/PendingIntent.def.hpp"
#include "../content/Intent.def.hpp"
#include "../../JString.hpp"
#include "./RemoteViews_RemoteResponse.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline RemoteViews_RemoteResponse::RemoteViews_RemoteResponse()
		: JObject(
			"android.widget.RemoteViews$RemoteResponse",
			"()V"
		) {}
	
	// Methods
	inline android::widget::RemoteViews_RemoteResponse RemoteViews_RemoteResponse::fromFillInIntent(android::content::Intent arg0)
	{
		return callStaticObjectMethod(
			"android.widget.RemoteViews$RemoteResponse",
			"fromFillInIntent",
			"(Landroid/content/Intent;)Landroid/widget/RemoteViews$RemoteResponse;",
			arg0.object()
		);
	}
	inline android::widget::RemoteViews_RemoteResponse RemoteViews_RemoteResponse::fromPendingIntent(android::app::PendingIntent arg0)
	{
		return callStaticObjectMethod(
			"android.widget.RemoteViews$RemoteResponse",
			"fromPendingIntent",
			"(Landroid/app/PendingIntent;)Landroid/widget/RemoteViews$RemoteResponse;",
			arg0.object()
		);
	}
	inline android::widget::RemoteViews_RemoteResponse RemoteViews_RemoteResponse::addSharedElement(jint arg0, JString arg1) const
	{
		return callObjectMethod(
			"addSharedElement",
			"(ILjava/lang/String;)Landroid/widget/RemoteViews$RemoteResponse;",
			arg0,
			arg1.object<jstring>()
		);
	}
} // namespace android::widget

// Base class headers

