#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::view
{
	class MotionEvent;
}

namespace __jni_impl::android::view
{
	class GestureDetector : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::Handler arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::Handler arg2, jboolean arg3);
		
		// Methods
		jboolean isLongpressEnabled();
		jboolean onGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean onTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		void setContextClickListener(__jni_impl::__JniBaseClass arg0);
		void setIsLongpressEnabled(jboolean arg0);
		void setOnDoubleTapListener(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::view

#include "../content/Context.hpp"
#include "../os/Handler.hpp"
#include "./MotionEvent.hpp"

namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void GestureDetector::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.GestureDetector",
			"(Landroid/view/GestureDetector$OnGestureListener;)V",
			arg0.__jniObject().object()
		);
	}
	void GestureDetector::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.GestureDetector",
			"(Landroid/content/Context;Landroid/view/GestureDetector$OnGestureListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void GestureDetector::__constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.GestureDetector",
			"(Landroid/view/GestureDetector$OnGestureListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void GestureDetector::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::Handler arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.GestureDetector",
			"(Landroid/content/Context;Landroid/view/GestureDetector$OnGestureListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void GestureDetector::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::Handler arg2, jboolean arg3)
	{
		__thiz = QAndroidJniObject(
			"android.view.GestureDetector",
			"(Landroid/content/Context;Landroid/view/GestureDetector$OnGestureListener;Landroid/os/Handler;Z)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	
	// Methods
	jboolean GestureDetector::isLongpressEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isLongpressEnabled",
			"()Z"
		);
	}
	jboolean GestureDetector::onGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean GestureDetector::onTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void GestureDetector::setContextClickListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setContextClickListener",
			"(Landroid/view/GestureDetector$OnContextClickListener;)V",
			arg0.__jniObject().object()
		);
	}
	void GestureDetector::setIsLongpressEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setIsLongpressEnabled",
			"(Z)V",
			arg0
		);
	}
	void GestureDetector::setOnDoubleTapListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnDoubleTapListener",
			"(Landroid/view/GestureDetector$OnDoubleTapListener;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class GestureDetector : public __jni_impl::android::view::GestureDetector
	{
	public:
		GestureDetector(QAndroidJniObject obj) { __thiz = obj; }
		GestureDetector(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		GestureDetector(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		GestureDetector(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		GestureDetector(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::Handler arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		GestureDetector(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::Handler arg2, jboolean arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::view

