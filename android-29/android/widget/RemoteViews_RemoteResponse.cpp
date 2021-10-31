#include "../app/PendingIntent.hpp"
#include "../content/Intent.hpp"
#include "./RemoteViews_RemoteResponse.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	RemoteViews_RemoteResponse::RemoteViews_RemoteResponse(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	RemoteViews_RemoteResponse::RemoteViews_RemoteResponse()
		: __JniBaseClass(
			"android.widget.RemoteViews$RemoteResponse",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject RemoteViews_RemoteResponse::fromFillInIntent(android::content::Intent arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.widget.RemoteViews$RemoteResponse",
			"fromFillInIntent",
			"(Landroid/content/Intent;)Landroid/widget/RemoteViews$RemoteResponse;",
			arg0.object()
		);
	}
	QAndroidJniObject RemoteViews_RemoteResponse::fromPendingIntent(android::app::PendingIntent arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.widget.RemoteViews$RemoteResponse",
			"fromPendingIntent",
			"(Landroid/app/PendingIntent;)Landroid/widget/RemoteViews$RemoteResponse;",
			arg0.object()
		);
	}
	QAndroidJniObject RemoteViews_RemoteResponse::addSharedElement(jint arg0, jstring arg1)
	{
		return callObjectMethod(
			"addSharedElement",
			"(ILjava/lang/String;)Landroid/widget/RemoteViews$RemoteResponse;",
			arg0,
			arg1
		);
	}
} // namespace android::widget

