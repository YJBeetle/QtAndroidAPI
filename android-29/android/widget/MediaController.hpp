#pragma once

#ifndef ANDROID_WIDGET_MEDIACONTROLLER
#define ANDROID_WIDGET_MEDIACONTROLLER

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "FrameLayout.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view
{
	class MotionEvent;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
}

namespace __jni_impl::android::widget
{
	class MediaController : public __jni_impl::android::widget::FrameLayout
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, jboolean arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		void show(jint arg0);
		void show();
		jboolean isShowing();
		void hide();
		QAndroidJniObject getAccessibilityClassName();
		void setEnabled(jboolean arg0);
		void onFinishInflate();
		void setMediaPlayer(__jni_impl::__JniBaseClass arg0);
		void setAnchorView(__jni_impl::android::view::View arg0);
		void setPrevNextListeners(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		jboolean onTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean onTrackballEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean dispatchKeyEvent(__jni_impl::android::view::KeyEvent arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/KeyEvent.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void MediaController::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.MediaController",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	void MediaController::__constructor(__jni_impl::android::content::Context arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.MediaController",
			"(Landroid/content/Context;Z)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void MediaController::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.MediaController",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	void MediaController::show(jint arg0)
	{
		__thiz.callMethod<void>(
			"show",
			"(I)V",
			arg0);
	}
	void MediaController::show()
	{
		__thiz.callMethod<void>(
			"show",
			"()V");
	}
	jboolean MediaController::isShowing()
	{
		return __thiz.callMethod<jboolean>(
			"isShowing",
			"()Z");
	}
	void MediaController::hide()
	{
		__thiz.callMethod<void>(
			"hide",
			"()V");
	}
	QAndroidJniObject MediaController::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;");
	}
	void MediaController::setEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0);
	}
	void MediaController::onFinishInflate()
	{
		__thiz.callMethod<void>(
			"onFinishInflate",
			"()V");
	}
	void MediaController::setMediaPlayer(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setMediaPlayer",
			"(Landroid/widget/MediaController$MediaPlayerControl;)V",
			arg0.__jniObject().object());
	}
	void MediaController::setAnchorView(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setAnchorView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object());
	}
	void MediaController::setPrevNextListeners(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setPrevNextListeners",
			"(Landroid/view/View$OnClickListener;Landroid/view/View$OnClickListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	jboolean MediaController::onTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean MediaController::onTrackballEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean MediaController::dispatchKeyEvent(__jni_impl::android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class MediaController : public __jni_impl::android::widget::MediaController
	{
	public:
		MediaController(QAndroidJniObject obj) { __thiz = obj; }
		MediaController(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		MediaController(__jni_impl::android::content::Context arg0, jboolean arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		MediaController(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_MEDIACONTROLLER

