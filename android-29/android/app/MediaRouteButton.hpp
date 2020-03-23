#pragma once

#ifndef ANDROID_APP_MEDIAROUTEBUTTON
#define ANDROID_APP_MEDIAROUTEBUTTON

#include "../view/View.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}

namespace __jni_impl::android::app
{
	class MediaRouteButton : public __jni_impl::android::view::View
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		void setRouteTypes(jint arg0);
		void setExtendedSettingsClickListener(__jni_impl::__JniBaseClass arg0);
		jint getRouteTypes();
		void onAttachedToWindow();
		void onDetachedFromWindow();
		void showDialog();
		void jumpDrawablesToCurrentState();
		jboolean performClick();
		void setContentDescription(jstring arg0);
		void setVisibility(jint arg0);
	};
} // namespace __jni_impl::android::app

#include "../content/Context.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/drawable/Drawable.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void MediaRouteButton::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.app.MediaRouteButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	void MediaRouteButton::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.MediaRouteButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void MediaRouteButton::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.MediaRouteButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void MediaRouteButton::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.MediaRouteButton",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void MediaRouteButton::setRouteTypes(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRouteTypes",
			"(I)V",
			arg0);
	}
	void MediaRouteButton::setExtendedSettingsClickListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setExtendedSettingsClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.__jniObject().object());
	}
	jint MediaRouteButton::getRouteTypes()
	{
		return __thiz.callMethod<jint>(
			"getRouteTypes",
			"()I");
	}
	void MediaRouteButton::onAttachedToWindow()
	{
		__thiz.callMethod<void>(
			"onAttachedToWindow",
			"()V");
	}
	void MediaRouteButton::onDetachedFromWindow()
	{
		__thiz.callMethod<void>(
			"onDetachedFromWindow",
			"()V");
	}
	void MediaRouteButton::showDialog()
	{
		__thiz.callMethod<void>(
			"showDialog",
			"()V");
	}
	void MediaRouteButton::jumpDrawablesToCurrentState()
	{
		__thiz.callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V");
	}
	jboolean MediaRouteButton::performClick()
	{
		return __thiz.callMethod<jboolean>(
			"performClick",
			"()Z");
	}
	void MediaRouteButton::setContentDescription(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setContentDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0);
	}
	void MediaRouteButton::setVisibility(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVisibility",
			"(I)V",
			arg0);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class MediaRouteButton : public __jni_impl::android::app::MediaRouteButton
	{
	public:
		MediaRouteButton(QAndroidJniObject obj) { __thiz = obj; }
		MediaRouteButton(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		MediaRouteButton(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		MediaRouteButton(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		MediaRouteButton(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_MEDIAROUTEBUTTON

