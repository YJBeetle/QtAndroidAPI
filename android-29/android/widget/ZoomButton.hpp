#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "ImageView.hpp"
#include "ImageButton.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
}
namespace __jni_impl::android::view
{
	class MotionEvent;
}
namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::widget
{
	class ZoomButton : public __jni_impl::android::widget::ImageButton
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		jboolean dispatchUnhandledMove(__jni_impl::android::view::View arg0, jint arg1);
		jstring getAccessibilityClassName();
		jboolean onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onLongClick(__jni_impl::android::view::View arg0);
		jboolean onTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		void setEnabled(jboolean arg0);
		void setZoomSpeed(jlong arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/View.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void ZoomButton::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ZoomButton",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void ZoomButton::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ZoomButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ZoomButton::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ZoomButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void ZoomButton::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ZoomButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	jboolean ZoomButton::dispatchUnhandledMove(__jni_impl::android::view::View arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchUnhandledMove",
			"(Landroid/view/View;I)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jstring ZoomButton::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean ZoomButton::onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean ZoomButton::onLongClick(__jni_impl::android::view::View arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onLongClick",
			"(Landroid/view/View;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean ZoomButton::onTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void ZoomButton::setEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void ZoomButton::setZoomSpeed(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setZoomSpeed",
			"(J)V",
			arg0
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class ZoomButton : public __jni_impl::android::widget::ZoomButton
	{
	public:
		ZoomButton(QAndroidJniObject obj) { __thiz = obj; }
		ZoomButton(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		ZoomButton(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ZoomButton(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		ZoomButton(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::widget

