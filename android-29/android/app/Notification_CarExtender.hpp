#pragma once

#ifndef ANDROID_APP_NOTIFICATION_CAREXTENDER
#define ANDROID_APP_NOTIFICATION_CAREXTENDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class Notification;
}
namespace __jni_impl::android::app
{
	class Notification_Builder;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::app
{
	class Notification_CarExtender_UnreadConversation;
}

namespace __jni_impl::android::app
{
	class Notification_CarExtender : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::app::Notification arg0);
		
		// Methods
		QAndroidJniObject setColor(jint arg0);
		QAndroidJniObject extend(__jni_impl::android::app::Notification_Builder arg0);
		QAndroidJniObject getLargeIcon();
		jint getColor();
		QAndroidJniObject setLargeIcon(__jni_impl::android::graphics::Bitmap arg0);
		QAndroidJniObject setUnreadConversation(__jni_impl::android::app::Notification_CarExtender_UnreadConversation arg0);
		QAndroidJniObject getUnreadConversation();
	};
} // namespace __jni_impl::android::app

#include "Notification.hpp"
#include "Notification_Builder.hpp"
#include "../graphics/Bitmap.hpp"
#include "Notification_CarExtender_UnreadConversation.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void Notification_CarExtender::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$CarExtender",
			"()V"
		);
	}
	void Notification_CarExtender::__constructor(__jni_impl::android::app::Notification arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$CarExtender",
			"(Landroid/app/Notification;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject Notification_CarExtender::setColor(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setColor",
			"(I)Landroid/app/Notification$CarExtender;",
			arg0
		);
	}
	QAndroidJniObject Notification_CarExtender::extend(__jni_impl::android::app::Notification_Builder arg0)
	{
		return __thiz.callObjectMethod(
			"extend",
			"(Landroid/app/Notification$Builder;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_CarExtender::getLargeIcon()
	{
		return __thiz.callObjectMethod(
			"getLargeIcon",
			"()Landroid/graphics/Bitmap;"
		);
	}
	jint Notification_CarExtender::getColor()
	{
		return __thiz.callMethod<jint>(
			"getColor",
			"()I"
		);
	}
	QAndroidJniObject Notification_CarExtender::setLargeIcon(__jni_impl::android::graphics::Bitmap arg0)
	{
		return __thiz.callObjectMethod(
			"setLargeIcon",
			"(Landroid/graphics/Bitmap;)Landroid/app/Notification$CarExtender;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_CarExtender::setUnreadConversation(__jni_impl::android::app::Notification_CarExtender_UnreadConversation arg0)
	{
		return __thiz.callObjectMethod(
			"setUnreadConversation",
			"(Landroid/app/Notification$CarExtender$UnreadConversation;)Landroid/app/Notification$CarExtender;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_CarExtender::getUnreadConversation()
	{
		return __thiz.callObjectMethod(
			"getUnreadConversation",
			"()Landroid/app/Notification$CarExtender$UnreadConversation;"
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class Notification_CarExtender : public __jni_impl::android::app::Notification_CarExtender
	{
	public:
		Notification_CarExtender(QAndroidJniObject obj) { __thiz = obj; }
		Notification_CarExtender()
		{
			__constructor();
		}
		Notification_CarExtender(__jni_impl::android::app::Notification arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_NOTIFICATION_CAREXTENDER

