#include "../app/PendingIntent.hpp"
#include "../content/Intent.hpp"
#include "./RemoteViews_RemoteResponse.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	RemoteViews_RemoteResponse::RemoteViews_RemoteResponse(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	RemoteViews_RemoteResponse::RemoteViews_RemoteResponse()
		: __JniBaseClass(
			"android.widget.RemoteViews$RemoteResponse",
			"()V"
		) {}
	
	// Methods
	android::widget::RemoteViews_RemoteResponse RemoteViews_RemoteResponse::fromFillInIntent(android::content::Intent arg0)
	{
		return callStaticObjectMethod(
			"android.widget.RemoteViews$RemoteResponse",
			"fromFillInIntent",
			"(Landroid/content/Intent;)Landroid/widget/RemoteViews$RemoteResponse;",
			arg0.object()
		);
	}
	android::widget::RemoteViews_RemoteResponse RemoteViews_RemoteResponse::fromPendingIntent(android::app::PendingIntent arg0)
	{
		return callStaticObjectMethod(
			"android.widget.RemoteViews$RemoteResponse",
			"fromPendingIntent",
			"(Landroid/app/PendingIntent;)Landroid/widget/RemoteViews$RemoteResponse;",
			arg0.object()
		);
	}
	android::widget::RemoteViews_RemoteResponse RemoteViews_RemoteResponse::addSharedElement(jint arg0, jstring arg1)
	{
		return callObjectMethod(
			"addSharedElement",
			"(ILjava/lang/String;)Landroid/widget/RemoteViews$RemoteResponse;",
			arg0,
			arg1
		);
	}
} // namespace android::widget

