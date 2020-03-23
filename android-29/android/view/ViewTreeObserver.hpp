#pragma once

#ifndef ANDROID_VIEW_VIEWTREEOBSERVER
#define ANDROID_VIEW_VIEWTREEOBSERVER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::view
{
	class ViewTreeObserver : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean isAlive();
		void addOnWindowAttachListener(__jni_impl::__JniBaseClass arg0);
		void removeOnWindowAttachListener(__jni_impl::__JniBaseClass arg0);
		void addOnWindowFocusChangeListener(__jni_impl::__JniBaseClass arg0);
		void removeOnWindowFocusChangeListener(__jni_impl::__JniBaseClass arg0);
		void addOnGlobalFocusChangeListener(__jni_impl::__JniBaseClass arg0);
		void removeOnGlobalFocusChangeListener(__jni_impl::__JniBaseClass arg0);
		void addOnGlobalLayoutListener(__jni_impl::__JniBaseClass arg0);
		void removeGlobalOnLayoutListener(__jni_impl::__JniBaseClass arg0);
		void removeOnGlobalLayoutListener(__jni_impl::__JniBaseClass arg0);
		void addOnPreDrawListener(__jni_impl::__JniBaseClass arg0);
		void removeOnPreDrawListener(__jni_impl::__JniBaseClass arg0);
		void addOnDrawListener(__jni_impl::__JniBaseClass arg0);
		void removeOnDrawListener(__jni_impl::__JniBaseClass arg0);
		void registerFrameCommitCallback(__jni_impl::__JniBaseClass arg0);
		jboolean unregisterFrameCommitCallback(__jni_impl::__JniBaseClass arg0);
		void addOnScrollChangedListener(__jni_impl::__JniBaseClass arg0);
		void removeOnScrollChangedListener(__jni_impl::__JniBaseClass arg0);
		void addOnTouchModeChangeListener(__jni_impl::__JniBaseClass arg0);
		void removeOnTouchModeChangeListener(__jni_impl::__JniBaseClass arg0);
		void addOnSystemGestureExclusionRectsChangedListener(__jni_impl::__JniBaseClass arg0);
		void removeOnSystemGestureExclusionRectsChangedListener(__jni_impl::__JniBaseClass arg0);
		void dispatchOnGlobalLayout();
		jboolean dispatchOnPreDraw();
		void dispatchOnDraw();
	};
} // namespace __jni_impl::android::view

#include "../content/Context.hpp"

namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void ViewTreeObserver::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewTreeObserver",
			"(V)V");
	}
	
	// Methods
	jboolean ViewTreeObserver::isAlive()
	{
		return __thiz.callMethod<jboolean>(
			"isAlive",
			"()Z");
	}
	void ViewTreeObserver::addOnWindowAttachListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addOnWindowAttachListener",
			"(Landroid/view/ViewTreeObserver$OnWindowAttachListener;)V",
			arg0.__jniObject().object());
	}
	void ViewTreeObserver::removeOnWindowAttachListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnWindowAttachListener",
			"(Landroid/view/ViewTreeObserver$OnWindowAttachListener;)V",
			arg0.__jniObject().object());
	}
	void ViewTreeObserver::addOnWindowFocusChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addOnWindowFocusChangeListener",
			"(Landroid/view/ViewTreeObserver$OnWindowFocusChangeListener;)V",
			arg0.__jniObject().object());
	}
	void ViewTreeObserver::removeOnWindowFocusChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnWindowFocusChangeListener",
			"(Landroid/view/ViewTreeObserver$OnWindowFocusChangeListener;)V",
			arg0.__jniObject().object());
	}
	void ViewTreeObserver::addOnGlobalFocusChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addOnGlobalFocusChangeListener",
			"(Landroid/view/ViewTreeObserver$OnGlobalFocusChangeListener;)V",
			arg0.__jniObject().object());
	}
	void ViewTreeObserver::removeOnGlobalFocusChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnGlobalFocusChangeListener",
			"(Landroid/view/ViewTreeObserver$OnGlobalFocusChangeListener;)V",
			arg0.__jniObject().object());
	}
	void ViewTreeObserver::addOnGlobalLayoutListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addOnGlobalLayoutListener",
			"(Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;)V",
			arg0.__jniObject().object());
	}
	void ViewTreeObserver::removeGlobalOnLayoutListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeGlobalOnLayoutListener",
			"(Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;)V",
			arg0.__jniObject().object());
	}
	void ViewTreeObserver::removeOnGlobalLayoutListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnGlobalLayoutListener",
			"(Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;)V",
			arg0.__jniObject().object());
	}
	void ViewTreeObserver::addOnPreDrawListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addOnPreDrawListener",
			"(Landroid/view/ViewTreeObserver$OnPreDrawListener;)V",
			arg0.__jniObject().object());
	}
	void ViewTreeObserver::removeOnPreDrawListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnPreDrawListener",
			"(Landroid/view/ViewTreeObserver$OnPreDrawListener;)V",
			arg0.__jniObject().object());
	}
	void ViewTreeObserver::addOnDrawListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addOnDrawListener",
			"(Landroid/view/ViewTreeObserver$OnDrawListener;)V",
			arg0.__jniObject().object());
	}
	void ViewTreeObserver::removeOnDrawListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnDrawListener",
			"(Landroid/view/ViewTreeObserver$OnDrawListener;)V",
			arg0.__jniObject().object());
	}
	void ViewTreeObserver::registerFrameCommitCallback(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"registerFrameCommitCallback",
			"(Ljava/lang/Runnable;)V",
			arg0.__jniObject().object());
	}
	jboolean ViewTreeObserver::unregisterFrameCommitCallback(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"unregisterFrameCommitCallback",
			"(Ljava/lang/Runnable;)Z",
			arg0.__jniObject().object());
	}
	void ViewTreeObserver::addOnScrollChangedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addOnScrollChangedListener",
			"(Landroid/view/ViewTreeObserver$OnScrollChangedListener;)V",
			arg0.__jniObject().object());
	}
	void ViewTreeObserver::removeOnScrollChangedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnScrollChangedListener",
			"(Landroid/view/ViewTreeObserver$OnScrollChangedListener;)V",
			arg0.__jniObject().object());
	}
	void ViewTreeObserver::addOnTouchModeChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addOnTouchModeChangeListener",
			"(Landroid/view/ViewTreeObserver$OnTouchModeChangeListener;)V",
			arg0.__jniObject().object());
	}
	void ViewTreeObserver::removeOnTouchModeChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnTouchModeChangeListener",
			"(Landroid/view/ViewTreeObserver$OnTouchModeChangeListener;)V",
			arg0.__jniObject().object());
	}
	void ViewTreeObserver::addOnSystemGestureExclusionRectsChangedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addOnSystemGestureExclusionRectsChangedListener",
			"(Ljava/util/function/Consumer;)V",
			arg0.__jniObject().object());
	}
	void ViewTreeObserver::removeOnSystemGestureExclusionRectsChangedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnSystemGestureExclusionRectsChangedListener",
			"(Ljava/util/function/Consumer;)V",
			arg0.__jniObject().object());
	}
	void ViewTreeObserver::dispatchOnGlobalLayout()
	{
		__thiz.callMethod<void>(
			"dispatchOnGlobalLayout",
			"()V");
	}
	jboolean ViewTreeObserver::dispatchOnPreDraw()
	{
		return __thiz.callMethod<jboolean>(
			"dispatchOnPreDraw",
			"()Z");
	}
	void ViewTreeObserver::dispatchOnDraw()
	{
		__thiz.callMethod<void>(
			"dispatchOnDraw",
			"()V");
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class ViewTreeObserver : public __jni_impl::android::view::ViewTreeObserver
	{
	public:
		ViewTreeObserver(QAndroidJniObject obj) { __thiz = obj; }
		ViewTreeObserver()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_VIEWTREEOBSERVER

