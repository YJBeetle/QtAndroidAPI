#pragma once

#ifndef ANDROID_WIDGET_SLIDINGDRAWER
#define ANDROID_WIDGET_SLIDINGDRAWER

#include "../view/ViewGroup.hpp"

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
namespace __jni_impl::android::graphics
{
	class Canvas;
}

namespace __jni_impl::android::widget
{
	class SlidingDrawer : public __jni_impl::android::view::ViewGroup
	{
	public:
		// Fields
		static jint ORIENTATION_HORIZONTAL();
		static jint ORIENTATION_VERTICAL();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		void lock();
		void close();
		void open();
		QAndroidJniObject getContent();
		void unlock();
		QAndroidJniObject getHandle();
		jboolean isOpened();
		void toggle();
		void animateToggle();
		void animateClose();
		void animateOpen();
		void setOnDrawerOpenListener(__jni_impl::__JniBaseClass arg0);
		void setOnDrawerCloseListener(__jni_impl::__JniBaseClass arg0);
		void setOnDrawerScrollListener(__jni_impl::__JniBaseClass arg0);
		jboolean isMoving();
		jboolean onTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean onInterceptTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		QAndroidJniObject getAccessibilityClassName();
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../view/MotionEvent.hpp"
#include "../graphics/Canvas.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	jint SlidingDrawer::ORIENTATION_HORIZONTAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.SlidingDrawer",
			"ORIENTATION_HORIZONTAL");
	}
	jint SlidingDrawer::ORIENTATION_VERTICAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.SlidingDrawer",
			"ORIENTATION_VERTICAL");
	}
	
	// Constructors
	void SlidingDrawer::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.SlidingDrawer",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	void SlidingDrawer::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.SlidingDrawer",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void SlidingDrawer::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.SlidingDrawer",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	void SlidingDrawer::lock()
	{
		__thiz.callMethod<void>(
			"lock",
			"()V");
	}
	void SlidingDrawer::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	void SlidingDrawer::open()
	{
		__thiz.callMethod<void>(
			"open",
			"()V");
	}
	QAndroidJniObject SlidingDrawer::getContent()
	{
		return __thiz.callObjectMethod(
			"getContent",
			"()Landroid/view/View;");
	}
	void SlidingDrawer::unlock()
	{
		__thiz.callMethod<void>(
			"unlock",
			"()V");
	}
	QAndroidJniObject SlidingDrawer::getHandle()
	{
		return __thiz.callObjectMethod(
			"getHandle",
			"()Landroid/view/View;");
	}
	jboolean SlidingDrawer::isOpened()
	{
		return __thiz.callMethod<jboolean>(
			"isOpened",
			"()Z");
	}
	void SlidingDrawer::toggle()
	{
		__thiz.callMethod<void>(
			"toggle",
			"()V");
	}
	void SlidingDrawer::animateToggle()
	{
		__thiz.callMethod<void>(
			"animateToggle",
			"()V");
	}
	void SlidingDrawer::animateClose()
	{
		__thiz.callMethod<void>(
			"animateClose",
			"()V");
	}
	void SlidingDrawer::animateOpen()
	{
		__thiz.callMethod<void>(
			"animateOpen",
			"()V");
	}
	void SlidingDrawer::setOnDrawerOpenListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnDrawerOpenListener",
			"(Landroid/widget/SlidingDrawer$OnDrawerOpenListener;)V",
			arg0.__jniObject().object());
	}
	void SlidingDrawer::setOnDrawerCloseListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnDrawerCloseListener",
			"(Landroid/widget/SlidingDrawer$OnDrawerCloseListener;)V",
			arg0.__jniObject().object());
	}
	void SlidingDrawer::setOnDrawerScrollListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnDrawerScrollListener",
			"(Landroid/widget/SlidingDrawer$OnDrawerScrollListener;)V",
			arg0.__jniObject().object());
	}
	jboolean SlidingDrawer::isMoving()
	{
		return __thiz.callMethod<jboolean>(
			"isMoving",
			"()Z");
	}
	jboolean SlidingDrawer::onTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean SlidingDrawer::onInterceptTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onInterceptTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject SlidingDrawer::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;");
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class SlidingDrawer : public __jni_impl::android::widget::SlidingDrawer
	{
	public:
		SlidingDrawer(QAndroidJniObject obj) { __thiz = obj; }
		SlidingDrawer(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		SlidingDrawer(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		SlidingDrawer(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_SLIDINGDRAWER

