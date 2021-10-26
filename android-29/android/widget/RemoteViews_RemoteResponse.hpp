#pragma once

#ifndef ANDROID_WIDGET_REMOTEVIEWS_REMOTERESPONSE
#define ANDROID_WIDGET_REMOTEVIEWS_REMOTERESPONSE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::app
{
	class PendingIntent;
}

namespace __jni_impl::android::widget
{
	class RemoteViews_RemoteResponse : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject fromFillInIntent(__jni_impl::android::content::Intent arg0);
		static QAndroidJniObject fromPendingIntent(__jni_impl::android::app::PendingIntent arg0);
		QAndroidJniObject addSharedElement(jint arg0, jstring arg1);
		QAndroidJniObject addSharedElement(jint arg0, const QString &arg1);
	};
} // namespace __jni_impl::android::widget

#include "../content/Intent.hpp"
#include "../app/PendingIntent.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void RemoteViews_RemoteResponse::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.widget.RemoteViews$RemoteResponse",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject RemoteViews_RemoteResponse::fromFillInIntent(__jni_impl::android::content::Intent arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.widget.RemoteViews$RemoteResponse",
			"fromFillInIntent",
			"(Landroid/content/Intent;)Landroid/widget/RemoteViews$RemoteResponse;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject RemoteViews_RemoteResponse::fromPendingIntent(__jni_impl::android::app::PendingIntent arg0)
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
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class RemoteViews_RemoteResponse : public __jni_impl::android::widget::RemoteViews_RemoteResponse
	{
	public:
		RemoteViews_RemoteResponse(QAndroidJniObject obj) { __thiz = obj; }
		RemoteViews_RemoteResponse()
		{
			__constructor();
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_REMOTEVIEWS_REMOTERESPONSE

