#include "../content/Context.hpp"
#include "./ViewTreeObserver.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	
	// Methods
	void ViewTreeObserver::addOnDrawListener(JObject arg0) const
	{
		callMethod<void>(
			"addOnDrawListener",
			"(Landroid/view/ViewTreeObserver$OnDrawListener;)V",
			arg0.object()
		);
	}
	void ViewTreeObserver::addOnGlobalFocusChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"addOnGlobalFocusChangeListener",
			"(Landroid/view/ViewTreeObserver$OnGlobalFocusChangeListener;)V",
			arg0.object()
		);
	}
	void ViewTreeObserver::addOnGlobalLayoutListener(JObject arg0) const
	{
		callMethod<void>(
			"addOnGlobalLayoutListener",
			"(Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;)V",
			arg0.object()
		);
	}
	void ViewTreeObserver::addOnPreDrawListener(JObject arg0) const
	{
		callMethod<void>(
			"addOnPreDrawListener",
			"(Landroid/view/ViewTreeObserver$OnPreDrawListener;)V",
			arg0.object()
		);
	}
	void ViewTreeObserver::addOnScrollChangedListener(JObject arg0) const
	{
		callMethod<void>(
			"addOnScrollChangedListener",
			"(Landroid/view/ViewTreeObserver$OnScrollChangedListener;)V",
			arg0.object()
		);
	}
	void ViewTreeObserver::addOnTouchModeChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"addOnTouchModeChangeListener",
			"(Landroid/view/ViewTreeObserver$OnTouchModeChangeListener;)V",
			arg0.object()
		);
	}
	void ViewTreeObserver::addOnWindowAttachListener(JObject arg0) const
	{
		callMethod<void>(
			"addOnWindowAttachListener",
			"(Landroid/view/ViewTreeObserver$OnWindowAttachListener;)V",
			arg0.object()
		);
	}
	void ViewTreeObserver::addOnWindowFocusChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"addOnWindowFocusChangeListener",
			"(Landroid/view/ViewTreeObserver$OnWindowFocusChangeListener;)V",
			arg0.object()
		);
	}
	void ViewTreeObserver::dispatchOnDraw() const
	{
		callMethod<void>(
			"dispatchOnDraw",
			"()V"
		);
	}
	void ViewTreeObserver::dispatchOnGlobalLayout() const
	{
		callMethod<void>(
			"dispatchOnGlobalLayout",
			"()V"
		);
	}
	jboolean ViewTreeObserver::dispatchOnPreDraw() const
	{
		return callMethod<jboolean>(
			"dispatchOnPreDraw",
			"()Z"
		);
	}
	jboolean ViewTreeObserver::isAlive() const
	{
		return callMethod<jboolean>(
			"isAlive",
			"()Z"
		);
	}
	void ViewTreeObserver::removeGlobalOnLayoutListener(JObject arg0) const
	{
		callMethod<void>(
			"removeGlobalOnLayoutListener",
			"(Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;)V",
			arg0.object()
		);
	}
	void ViewTreeObserver::removeOnDrawListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnDrawListener",
			"(Landroid/view/ViewTreeObserver$OnDrawListener;)V",
			arg0.object()
		);
	}
	void ViewTreeObserver::removeOnGlobalFocusChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnGlobalFocusChangeListener",
			"(Landroid/view/ViewTreeObserver$OnGlobalFocusChangeListener;)V",
			arg0.object()
		);
	}
	void ViewTreeObserver::removeOnGlobalLayoutListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnGlobalLayoutListener",
			"(Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;)V",
			arg0.object()
		);
	}
	void ViewTreeObserver::removeOnPreDrawListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnPreDrawListener",
			"(Landroid/view/ViewTreeObserver$OnPreDrawListener;)V",
			arg0.object()
		);
	}
	void ViewTreeObserver::removeOnScrollChangedListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnScrollChangedListener",
			"(Landroid/view/ViewTreeObserver$OnScrollChangedListener;)V",
			arg0.object()
		);
	}
	void ViewTreeObserver::removeOnTouchModeChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnTouchModeChangeListener",
			"(Landroid/view/ViewTreeObserver$OnTouchModeChangeListener;)V",
			arg0.object()
		);
	}
	void ViewTreeObserver::removeOnWindowAttachListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnWindowAttachListener",
			"(Landroid/view/ViewTreeObserver$OnWindowAttachListener;)V",
			arg0.object()
		);
	}
	void ViewTreeObserver::removeOnWindowFocusChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnWindowFocusChangeListener",
			"(Landroid/view/ViewTreeObserver$OnWindowFocusChangeListener;)V",
			arg0.object()
		);
	}
} // namespace android::view

