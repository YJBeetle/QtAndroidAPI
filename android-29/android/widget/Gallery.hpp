#pragma once

#ifndef ANDROID_WIDGET_GALLERY
#define ANDROID_WIDGET_GALLERY

#include "AbsSpinner.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class MotionEvent;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view::animation
{
	class Transformation;
}
namespace __jni_impl::android::view
{
	class ViewGroup_LayoutParams;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}

namespace __jni_impl::android::widget
{
	class Gallery : public __jni_impl::android::widget::AbsSpinner
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		void setGravity(jint arg0);
		void setCallbackDuringFling(jboolean arg0);
		void setAnimationDuration(jint arg0);
		void setSpacing(jint arg0);
		void setUnselectedAlpha(jfloat arg0);
		jboolean onSingleTapUp(__jni_impl::android::view::MotionEvent arg0);
		jboolean onScroll(__jni_impl::android::view::MotionEvent arg0, __jni_impl::android::view::MotionEvent arg1, jfloat arg2, jfloat arg3);
		jboolean onDown(__jni_impl::android::view::MotionEvent arg0);
		void onShowPress(__jni_impl::android::view::MotionEvent arg0);
		void onLongPress(__jni_impl::android::view::MotionEvent arg0);
		jboolean onFling(__jni_impl::android::view::MotionEvent arg0, __jni_impl::android::view::MotionEvent arg1, jfloat arg2, jfloat arg3);
		jboolean onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean dispatchKeyEvent(__jni_impl::android::view::KeyEvent arg0);
		jboolean showContextMenuForChild(__jni_impl::android::view::View arg0);
		jboolean showContextMenuForChild(__jni_impl::android::view::View arg0, jfloat arg1, jfloat arg2);
		QAndroidJniObject getAccessibilityClassName();
		void dispatchSetSelected(jboolean arg0);
		QAndroidJniObject generateLayoutParams(__jni_impl::__JniBaseClass arg0);
		jboolean showContextMenu(jfloat arg0, jfloat arg1);
		jboolean showContextMenu();
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/View.hpp"
#include "../view/animation/Transformation.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../graphics/Rect.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void Gallery::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Gallery",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	void Gallery::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Gallery",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void Gallery::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Gallery",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void Gallery::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Gallery",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void Gallery::setGravity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setGravity",
			"(I)V",
			arg0);
	}
	void Gallery::setCallbackDuringFling(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setCallbackDuringFling",
			"(Z)V",
			arg0);
	}
	void Gallery::setAnimationDuration(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAnimationDuration",
			"(I)V",
			arg0);
	}
	void Gallery::setSpacing(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSpacing",
			"(I)V",
			arg0);
	}
	void Gallery::setUnselectedAlpha(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setUnselectedAlpha",
			"(F)V",
			arg0);
	}
	jboolean Gallery::onSingleTapUp(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onSingleTapUp",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean Gallery::onScroll(__jni_impl::android::view::MotionEvent arg0, __jni_impl::android::view::MotionEvent arg1, jfloat arg2, jfloat arg3)
	{
		return __thiz.callMethod<jboolean>(
			"onScroll",
			"(Landroid/view/MotionEvent;Landroid/view/MotionEvent;FF)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	jboolean Gallery::onDown(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onDown",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	void Gallery::onShowPress(__jni_impl::android::view::MotionEvent arg0)
	{
		__thiz.callMethod<void>(
			"onShowPress",
			"(Landroid/view/MotionEvent;)V",
			arg0.__jniObject().object());
	}
	void Gallery::onLongPress(__jni_impl::android::view::MotionEvent arg0)
	{
		__thiz.callMethod<void>(
			"onLongPress",
			"(Landroid/view/MotionEvent;)V",
			arg0.__jniObject().object());
	}
	jboolean Gallery::onFling(__jni_impl::android::view::MotionEvent arg0, __jni_impl::android::view::MotionEvent arg1, jfloat arg2, jfloat arg3)
	{
		return __thiz.callMethod<jboolean>(
			"onFling",
			"(Landroid/view/MotionEvent;Landroid/view/MotionEvent;FF)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	jboolean Gallery::onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object());
	}
	jboolean Gallery::onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object());
	}
	jboolean Gallery::onTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean Gallery::dispatchKeyEvent(__jni_impl::android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean Gallery::showContextMenuForChild(__jni_impl::android::view::View arg0)
	{
		return __thiz.callMethod<jboolean>(
			"showContextMenuForChild",
			"(Landroid/view/View;)Z",
			arg0.__jniObject().object());
	}
	jboolean Gallery::showContextMenuForChild(__jni_impl::android::view::View arg0, jfloat arg1, jfloat arg2)
	{
		return __thiz.callMethod<jboolean>(
			"showContextMenuForChild",
			"(Landroid/view/View;FF)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	QAndroidJniObject Gallery::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;");
	}
	void Gallery::dispatchSetSelected(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"dispatchSetSelected",
			"(Z)V",
			arg0);
	}
	QAndroidJniObject Gallery::generateLayoutParams(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/view/ViewGroup$LayoutParams;",
			arg0.__jniObject().object());
	}
	jboolean Gallery::showContextMenu(jfloat arg0, jfloat arg1)
	{
		return __thiz.callMethod<jboolean>(
			"showContextMenu",
			"(FF)Z",
			arg0,
			arg1);
	}
	jboolean Gallery::showContextMenu()
	{
		return __thiz.callMethod<jboolean>(
			"showContextMenu",
			"()Z");
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class Gallery : public __jni_impl::android::widget::Gallery
	{
	public:
		Gallery(QAndroidJniObject obj) { __thiz = obj; }
		Gallery(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		Gallery(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		Gallery(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Gallery(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_GALLERY

