#pragma once

#ifndef ANDROID_APP_NOTIFICATION_BIGPICTURESTYLE
#define ANDROID_APP_NOTIFICATION_BIGPICTURESTYLE

#include "../../__JniBaseClass.hpp"
#include "Notification_Style.hpp"

namespace __jni_impl::android::app
{
	class Notification_Builder;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::graphics::drawable
{
	class Icon;
}

namespace __jni_impl::android::app
{
	class Notification_BigPictureStyle : public __jni_impl::android::app::Notification_Style
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::app::Notification_Builder arg0);
		
		// Methods
		QAndroidJniObject setSummaryText(jstring arg0);
		QAndroidJniObject bigPicture(__jni_impl::android::graphics::Bitmap arg0);
		QAndroidJniObject bigLargeIcon(__jni_impl::android::graphics::drawable::Icon arg0);
		QAndroidJniObject bigLargeIcon(__jni_impl::android::graphics::Bitmap arg0);
		QAndroidJniObject setBigContentTitle(jstring arg0);
	};
} // namespace __jni_impl::android::app

#include "Notification_Builder.hpp"
#include "../graphics/Bitmap.hpp"
#include "../graphics/drawable/Icon.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void Notification_BigPictureStyle::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$BigPictureStyle",
			"()V");
	}
	void Notification_BigPictureStyle::__constructor(__jni_impl::android::app::Notification_Builder arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$BigPictureStyle",
			"(Landroid/app/Notification$Builder;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject Notification_BigPictureStyle::setSummaryText(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setSummaryText",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$BigPictureStyle;",
			arg0);
	}
	QAndroidJniObject Notification_BigPictureStyle::bigPicture(__jni_impl::android::graphics::Bitmap arg0)
	{
		return __thiz.callObjectMethod(
			"bigPicture",
			"(Landroid/graphics/Bitmap;)Landroid/app/Notification$BigPictureStyle;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Notification_BigPictureStyle::bigLargeIcon(__jni_impl::android::graphics::drawable::Icon arg0)
	{
		return __thiz.callObjectMethod(
			"bigLargeIcon",
			"(Landroid/graphics/drawable/Icon;)Landroid/app/Notification$BigPictureStyle;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Notification_BigPictureStyle::bigLargeIcon(__jni_impl::android::graphics::Bitmap arg0)
	{
		return __thiz.callObjectMethod(
			"bigLargeIcon",
			"(Landroid/graphics/Bitmap;)Landroid/app/Notification$BigPictureStyle;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Notification_BigPictureStyle::setBigContentTitle(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setBigContentTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$BigPictureStyle;",
			arg0);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class Notification_BigPictureStyle : public __jni_impl::android::app::Notification_BigPictureStyle
	{
	public:
		Notification_BigPictureStyle(QAndroidJniObject obj) { __thiz = obj; }
		Notification_BigPictureStyle()
		{
			__constructor();
		}
		Notification_BigPictureStyle(__jni_impl::android::app::Notification_Builder arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_NOTIFICATION_BIGPICTURESTYLE

