#include "../content/Context.hpp"
#include "./ViewTreeObserver.hpp"

namespace android::view
{
	// Fields
	
	// QAndroidJniObject forward
	ViewTreeObserver::ViewTreeObserver(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void ViewTreeObserver::addOnDrawListener(JObject arg0)
	{
		callMethod<void>(
			"addOnDrawListener",
			"(Landroid/view/ViewTreeObserver$OnDrawListener;)V",
			arg0.object()
		);
	}
	void ViewTreeObserver::addOnGlobalFocusChangeListener(JObject arg0)
	{
		callMethod<void>(
			"addOnGlobalFocusChangeListener",
			"(Landroid/view/ViewTreeObserver$OnGlobalFocusChangeListener;)V",
			arg0.object()
		);
	}
	void ViewTreeObserver::addOnGlobalLayoutListener(JObject arg0)
	{
		callMethod<void>(
			"addOnGlobalLayoutListener",
			"(Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;)V",
			arg0.object()
		);
	}
	void ViewTreeObserver::addOnPreDrawListener(JObject arg0)
	{
		callMethod<void>(
			"addOnPreDrawListener",
			"(Landroid/view/ViewTreeObserver$OnPreDrawListener;)V",
			arg0.object()
		);
	}
	void ViewTreeObserver::addOnScrollChangedListener(JObject arg0)
	{
		callMethod<void>(
			"addOnScrollChangedListener",
			"(Landroid/view/ViewTreeObserver$OnScrollChangedListener;)V",
			arg0.object()
		);
	}
	void ViewTreeObserver::addOnTouchModeChangeListener(JObject arg0)
	{
		callMethod<void>(
			"addOnTouchModeChangeListener",
			"(Landroid/view/ViewTreeObserver$OnTouchModeChangeListener;)V",
			arg0.object()
		);
	}
	void ViewTreeObserver::addOnWindowAttachListener(JObject arg0)
	{
		callMethod<void>(
			"addOnWindowAttachListener",
			"(Landroid/view/ViewTreeObserver$OnWindowAttachListener;)V",
			arg0.object()
		);
	}
	void ViewTreeObserver::addOnWindowFocusChangeListener(JObject arg0)
	{
		callMethod<void>(
			"addOnWindowFocusChangeListener",
			"(Landroid/view/ViewTreeObserver$OnWindowFocusChangeListener;)V",
			arg0.object()
		);
	}
	void ViewTreeObserver::dispatchOnDraw()
	{
		callMethod<void>(
			"dispatchOnDraw",
			"()V"
		);
	}
	void ViewTreeObserver::dispatchOnGlobalLayout()
	{
		callMethod<void>(
			"dispatchOnGlobalLayout",
			"()V"
		);
	}
	jboolean ViewTreeObserver::dispatchOnPreDraw()
	{
		return callMethod<jboolean>(
			"dispatchOnPreDraw",
			"()Z"
		);
	}
	jboolean ViewTreeObserver::isAlive()
	{
		return callMethod<jboolean>(
			"isAlive",
			"()Z"
		);
	}
	void ViewTreeObserver::removeGlobalOnLayoutListener(JObject arg0)
	{
		callMethod<void>(
			"removeGlobalOnLayoutListener",
			"(Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;)V",
			arg0.object()
		);
	}
	void ViewTreeObserver::removeOnDrawListener(JObject arg0)
	{
		callMethod<void>(
			"removeOnDrawListener",
			"(Landroid/view/ViewTreeObserver$OnDrawListener;)V",
			arg0.object()
		);
	}
	void ViewTreeObserver::removeOnGlobalFocusChangeListener(JObject arg0)
	{
		callMethod<void>(
			"removeOnGlobalFocusChangeListener",
			"(Landroid/view/ViewTreeObserver$OnGlobalFocusChangeListener;)V",
			arg0.object()
		);
	}
	void ViewTreeObserver::removeOnGlobalLayoutListener(JObject arg0)
	{
		callMethod<void>(
			"removeOnGlobalLayoutListener",
			"(Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;)V",
			arg0.object()
		);
	}
	void ViewTreeObserver::removeOnPreDrawListener(JObject arg0)
	{
		callMethod<void>(
			"removeOnPreDrawListener",
			"(Landroid/view/ViewTreeObserver$OnPreDrawListener;)V",
			arg0.object()
		);
	}
	void ViewTreeObserver::removeOnScrollChangedListener(JObject arg0)
	{
		callMethod<void>(
			"removeOnScrollChangedListener",
			"(Landroid/view/ViewTreeObserver$OnScrollChangedListener;)V",
			arg0.object()
		);
	}
	void ViewTreeObserver::removeOnTouchModeChangeListener(JObject arg0)
	{
		callMethod<void>(
			"removeOnTouchModeChangeListener",
			"(Landroid/view/ViewTreeObserver$OnTouchModeChangeListener;)V",
			arg0.object()
		);
	}
	void ViewTreeObserver::removeOnWindowAttachListener(JObject arg0)
	{
		callMethod<void>(
			"removeOnWindowAttachListener",
			"(Landroid/view/ViewTreeObserver$OnWindowAttachListener;)V",
			arg0.object()
		);
	}
	void ViewTreeObserver::removeOnWindowFocusChangeListener(JObject arg0)
	{
		callMethod<void>(
			"removeOnWindowFocusChangeListener",
			"(Landroid/view/ViewTreeObserver$OnWindowFocusChangeListener;)V",
			arg0.object()
		);
	}
} // namespace android::view

