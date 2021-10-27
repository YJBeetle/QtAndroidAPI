#include "../app/PendingIntent.hpp"
#include "../content/Intent.hpp"
#include "./RemoteViews_RemoteResponse.hpp"

namespace android::widget
{
	// Fields
	
	RemoteViews_RemoteResponse::RemoteViews_RemoteResponse(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RemoteViews_RemoteResponse::RemoteViews_RemoteResponse()
	{
		__thiz = QAndroidJniObject(
			"android.widget.RemoteViews$RemoteResponse",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject RemoteViews_RemoteResponse::fromFillInIntent(android::content::Intent arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.widget.RemoteViews$RemoteResponse",
			"fromFillInIntent",
			"(Landroid/content/Intent;)Landroid/widget/RemoteViews$RemoteResponse;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject RemoteViews_RemoteResponse::fromPendingIntent(android::app::PendingIntent arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.widget.RemoteViews$RemoteResponse",
			"fromPendingIntent",
			"(Landroid/app/PendingIntent;)Landroid/widget/RemoteViews$RemoteResponse;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject RemoteViews_RemoteResponse::addSharedElement(jint arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"addSharedElement",
			"(ILjava/lang/String;)Landroid/widget/RemoteViews$RemoteResponse;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject RemoteViews_RemoteResponse::addSharedElement(jint arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"addSharedElement",
			"(ILjava/lang/String;)Landroid/widget/RemoteViews$RemoteResponse;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
} // namespace android::widget

