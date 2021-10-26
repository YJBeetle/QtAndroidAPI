#pragma once

#ifndef ANDROID_INPUTMETHODSERVICE_KEYBOARDVIEW
#define ANDROID_INPUTMETHODSERVICE_KEYBOARDVIEW

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::inputmethodservice
{
	class Keyboard;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view
{
	class MotionEvent;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::inputmethodservice
{
	class Keyboard_Key;
}

namespace __jni_impl::android::inputmethodservice
{
	class KeyboardView : public __jni_impl::android::view::View
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		void closing();
		void setOnKeyboardActionListener(__jni_impl::__JniBaseClass arg0);
		void setKeyboard(__jni_impl::android::inputmethodservice::Keyboard arg0);
		QAndroidJniObject getKeyboard();
		void setPreviewEnabled(jboolean arg0);
		jboolean isPreviewEnabled();
		void setVerticalCorrection(jint arg0);
		void setPopupParent(__jni_impl::android::view::View arg0);
		void setPopupOffset(jint arg0, jint arg1);
		void setProximityCorrectionEnabled(jboolean arg0);
		jboolean isProximityCorrectionEnabled();
		void invalidateAllKeys();
		jboolean handleBack();
		jboolean onHoverEvent(__jni_impl::android::view::MotionEvent arg0);
		void onSizeChanged(jint arg0, jint arg1, jint arg2, jint arg3);
		void onDraw(__jni_impl::android::graphics::Canvas arg0);
		void onMeasure(jint arg0, jint arg1);
		void invalidateKey(jint arg0);
		jboolean setShifted(jboolean arg0);
		jboolean isShifted();
		void onClick(__jni_impl::android::view::View arg0);
		jboolean onTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		void onDetachedFromWindow();
	};
} // namespace __jni_impl::android::inputmethodservice

#include "../content/Context.hpp"
#include "Keyboard.hpp"
#include "../view/View.hpp"
#include "../view/MotionEvent.hpp"
#include "../graphics/Canvas.hpp"
#include "Keyboard_Key.hpp"

namespace __jni_impl::android::inputmethodservice
{
	// Fields
	
	// Constructors
	void KeyboardView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.KeyboardView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	void KeyboardView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.KeyboardView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void KeyboardView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.KeyboardView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void KeyboardView::closing()
	{
		__thiz.callMethod<void>(
			"closing",
			"()V"
		);
	}
	void KeyboardView::setOnKeyboardActionListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnKeyboardActionListener",
			"(Landroid/inputmethodservice/KeyboardView$OnKeyboardActionListener;)V",
			arg0.__jniObject().object()
		);
	}
	void KeyboardView::setKeyboard(__jni_impl::android::inputmethodservice::Keyboard arg0)
	{
		__thiz.callMethod<void>(
			"setKeyboard",
			"(Landroid/inputmethodservice/Keyboard;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject KeyboardView::getKeyboard()
	{
		return __thiz.callObjectMethod(
			"getKeyboard",
			"()Landroid/inputmethodservice/Keyboard;"
		);
	}
	void KeyboardView::setPreviewEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setPreviewEnabled",
			"(Z)V",
			arg0
		);
	}
	jboolean KeyboardView::isPreviewEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isPreviewEnabled",
			"()Z"
		);
	}
	void KeyboardView::setVerticalCorrection(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVerticalCorrection",
			"(I)V",
			arg0
		);
	}
	void KeyboardView::setPopupParent(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setPopupParent",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void KeyboardView::setPopupOffset(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setPopupOffset",
			"(II)V",
			arg0,
			arg1
		);
	}
	void KeyboardView::setProximityCorrectionEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setProximityCorrectionEnabled",
			"(Z)V",
			arg0
		);
	}
	jboolean KeyboardView::isProximityCorrectionEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isProximityCorrectionEnabled",
			"()Z"
		);
	}
	void KeyboardView::invalidateAllKeys()
	{
		__thiz.callMethod<void>(
			"invalidateAllKeys",
			"()V"
		);
	}
	jboolean KeyboardView::handleBack()
	{
		return __thiz.callMethod<jboolean>(
			"handleBack",
			"()Z"
		);
	}
	jboolean KeyboardView::onHoverEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onHoverEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void KeyboardView::onSizeChanged(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onSizeChanged",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void KeyboardView::onDraw(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"onDraw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	void KeyboardView::onMeasure(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onMeasure",
			"(II)V",
			arg0,
			arg1
		);
	}
	void KeyboardView::invalidateKey(jint arg0)
	{
		__thiz.callMethod<void>(
			"invalidateKey",
			"(I)V",
			arg0
		);
	}
	jboolean KeyboardView::setShifted(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setShifted",
			"(Z)Z",
			arg0
		);
	}
	jboolean KeyboardView::isShifted()
	{
		return __thiz.callMethod<jboolean>(
			"isShifted",
			"()Z"
		);
	}
	void KeyboardView::onClick(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"onClick",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean KeyboardView::onTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void KeyboardView::onDetachedFromWindow()
	{
		__thiz.callMethod<void>(
			"onDetachedFromWindow",
			"()V"
		);
	}
} // namespace __jni_impl::android::inputmethodservice

namespace android::inputmethodservice
{
	class KeyboardView : public __jni_impl::android::inputmethodservice::KeyboardView
	{
	public:
		KeyboardView(QAndroidJniObject obj) { __thiz = obj; }
		KeyboardView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		KeyboardView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		KeyboardView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::inputmethodservice

#endif // ANDROID_INPUTMETHODSERVICE_KEYBOARDVIEW

