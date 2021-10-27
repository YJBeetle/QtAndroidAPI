#include "../content/Context.hpp"
#include "./ViewTreeObserver.hpp"

namespace android::view
{
	// Fields
	
	ViewTreeObserver::ViewTreeObserver(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void ViewTreeObserver::addOnDrawListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addOnDrawListener",
			"(Landroid/view/ViewTreeObserver$OnDrawListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewTreeObserver::addOnGlobalFocusChangeListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addOnGlobalFocusChangeListener",
			"(Landroid/view/ViewTreeObserver$OnGlobalFocusChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewTreeObserver::addOnGlobalLayoutListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addOnGlobalLayoutListener",
			"(Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewTreeObserver::addOnPreDrawListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addOnPreDrawListener",
			"(Landroid/view/ViewTreeObserver$OnPreDrawListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewTreeObserver::addOnScrollChangedListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addOnScrollChangedListener",
			"(Landroid/view/ViewTreeObserver$OnScrollChangedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewTreeObserver::addOnSystemGestureExclusionRectsChangedListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addOnSystemGestureExclusionRectsChangedListener",
			"(Ljava/util/function/Consumer;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewTreeObserver::addOnTouchModeChangeListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addOnTouchModeChangeListener",
			"(Landroid/view/ViewTreeObserver$OnTouchModeChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewTreeObserver::addOnWindowAttachListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addOnWindowAttachListener",
			"(Landroid/view/ViewTreeObserver$OnWindowAttachListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewTreeObserver::addOnWindowFocusChangeListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addOnWindowFocusChangeListener",
			"(Landroid/view/ViewTreeObserver$OnWindowFocusChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewTreeObserver::dispatchOnDraw()
	{
		__thiz.callMethod<void>(
			"dispatchOnDraw",
			"()V"
		);
	}
	void ViewTreeObserver::dispatchOnGlobalLayout()
	{
		__thiz.callMethod<void>(
			"dispatchOnGlobalLayout",
			"()V"
		);
	}
	jboolean ViewTreeObserver::dispatchOnPreDraw()
	{
		return __thiz.callMethod<jboolean>(
			"dispatchOnPreDraw",
			"()Z"
		);
	}
	jboolean ViewTreeObserver::isAlive()
	{
		return __thiz.callMethod<jboolean>(
			"isAlive",
			"()Z"
		);
	}
	void ViewTreeObserver::registerFrameCommitCallback(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"registerFrameCommitCallback",
			"(Ljava/lang/Runnable;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewTreeObserver::removeGlobalOnLayoutListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeGlobalOnLayoutListener",
			"(Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewTreeObserver::removeOnDrawListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnDrawListener",
			"(Landroid/view/ViewTreeObserver$OnDrawListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewTreeObserver::removeOnGlobalFocusChangeListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnGlobalFocusChangeListener",
			"(Landroid/view/ViewTreeObserver$OnGlobalFocusChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewTreeObserver::removeOnGlobalLayoutListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnGlobalLayoutListener",
			"(Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewTreeObserver::removeOnPreDrawListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnPreDrawListener",
			"(Landroid/view/ViewTreeObserver$OnPreDrawListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewTreeObserver::removeOnScrollChangedListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnScrollChangedListener",
			"(Landroid/view/ViewTreeObserver$OnScrollChangedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewTreeObserver::removeOnSystemGestureExclusionRectsChangedListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnSystemGestureExclusionRectsChangedListener",
			"(Ljava/util/function/Consumer;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewTreeObserver::removeOnTouchModeChangeListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnTouchModeChangeListener",
			"(Landroid/view/ViewTreeObserver$OnTouchModeChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewTreeObserver::removeOnWindowAttachListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnWindowAttachListener",
			"(Landroid/view/ViewTreeObserver$OnWindowAttachListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewTreeObserver::removeOnWindowFocusChangeListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnWindowFocusChangeListener",
			"(Landroid/view/ViewTreeObserver$OnWindowFocusChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean ViewTreeObserver::unregisterFrameCommitCallback(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"unregisterFrameCommitCallback",
			"(Ljava/lang/Runnable;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace android::view

