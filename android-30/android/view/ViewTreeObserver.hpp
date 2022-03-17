#pragma once

#include "./ViewTreeObserver.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void ViewTreeObserver::addOnDrawListener(JObject arg0) const
	{
		callMethod<void>(
			"addOnDrawListener",
			"(Landroid/view/ViewTreeObserver$OnDrawListener;)V",
			arg0.object()
		);
	}
	inline void ViewTreeObserver::addOnGlobalFocusChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"addOnGlobalFocusChangeListener",
			"(Landroid/view/ViewTreeObserver$OnGlobalFocusChangeListener;)V",
			arg0.object()
		);
	}
	inline void ViewTreeObserver::addOnGlobalLayoutListener(JObject arg0) const
	{
		callMethod<void>(
			"addOnGlobalLayoutListener",
			"(Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;)V",
			arg0.object()
		);
	}
	inline void ViewTreeObserver::addOnPreDrawListener(JObject arg0) const
	{
		callMethod<void>(
			"addOnPreDrawListener",
			"(Landroid/view/ViewTreeObserver$OnPreDrawListener;)V",
			arg0.object()
		);
	}
	inline void ViewTreeObserver::addOnScrollChangedListener(JObject arg0) const
	{
		callMethod<void>(
			"addOnScrollChangedListener",
			"(Landroid/view/ViewTreeObserver$OnScrollChangedListener;)V",
			arg0.object()
		);
	}
	inline void ViewTreeObserver::addOnSystemGestureExclusionRectsChangedListener(JObject arg0) const
	{
		callMethod<void>(
			"addOnSystemGestureExclusionRectsChangedListener",
			"(Ljava/util/function/Consumer;)V",
			arg0.object()
		);
	}
	inline void ViewTreeObserver::addOnTouchModeChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"addOnTouchModeChangeListener",
			"(Landroid/view/ViewTreeObserver$OnTouchModeChangeListener;)V",
			arg0.object()
		);
	}
	inline void ViewTreeObserver::addOnWindowAttachListener(JObject arg0) const
	{
		callMethod<void>(
			"addOnWindowAttachListener",
			"(Landroid/view/ViewTreeObserver$OnWindowAttachListener;)V",
			arg0.object()
		);
	}
	inline void ViewTreeObserver::addOnWindowFocusChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"addOnWindowFocusChangeListener",
			"(Landroid/view/ViewTreeObserver$OnWindowFocusChangeListener;)V",
			arg0.object()
		);
	}
	inline void ViewTreeObserver::dispatchOnDraw() const
	{
		callMethod<void>(
			"dispatchOnDraw",
			"()V"
		);
	}
	inline void ViewTreeObserver::dispatchOnGlobalLayout() const
	{
		callMethod<void>(
			"dispatchOnGlobalLayout",
			"()V"
		);
	}
	inline jboolean ViewTreeObserver::dispatchOnPreDraw() const
	{
		return callMethod<jboolean>(
			"dispatchOnPreDraw",
			"()Z"
		);
	}
	inline jboolean ViewTreeObserver::isAlive() const
	{
		return callMethod<jboolean>(
			"isAlive",
			"()Z"
		);
	}
	inline void ViewTreeObserver::registerFrameCommitCallback(JObject arg0) const
	{
		callMethod<void>(
			"registerFrameCommitCallback",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
	inline void ViewTreeObserver::removeGlobalOnLayoutListener(JObject arg0) const
	{
		callMethod<void>(
			"removeGlobalOnLayoutListener",
			"(Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;)V",
			arg0.object()
		);
	}
	inline void ViewTreeObserver::removeOnDrawListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnDrawListener",
			"(Landroid/view/ViewTreeObserver$OnDrawListener;)V",
			arg0.object()
		);
	}
	inline void ViewTreeObserver::removeOnGlobalFocusChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnGlobalFocusChangeListener",
			"(Landroid/view/ViewTreeObserver$OnGlobalFocusChangeListener;)V",
			arg0.object()
		);
	}
	inline void ViewTreeObserver::removeOnGlobalLayoutListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnGlobalLayoutListener",
			"(Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;)V",
			arg0.object()
		);
	}
	inline void ViewTreeObserver::removeOnPreDrawListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnPreDrawListener",
			"(Landroid/view/ViewTreeObserver$OnPreDrawListener;)V",
			arg0.object()
		);
	}
	inline void ViewTreeObserver::removeOnScrollChangedListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnScrollChangedListener",
			"(Landroid/view/ViewTreeObserver$OnScrollChangedListener;)V",
			arg0.object()
		);
	}
	inline void ViewTreeObserver::removeOnSystemGestureExclusionRectsChangedListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnSystemGestureExclusionRectsChangedListener",
			"(Ljava/util/function/Consumer;)V",
			arg0.object()
		);
	}
	inline void ViewTreeObserver::removeOnTouchModeChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnTouchModeChangeListener",
			"(Landroid/view/ViewTreeObserver$OnTouchModeChangeListener;)V",
			arg0.object()
		);
	}
	inline void ViewTreeObserver::removeOnWindowAttachListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnWindowAttachListener",
			"(Landroid/view/ViewTreeObserver$OnWindowAttachListener;)V",
			arg0.object()
		);
	}
	inline void ViewTreeObserver::removeOnWindowFocusChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnWindowFocusChangeListener",
			"(Landroid/view/ViewTreeObserver$OnWindowFocusChangeListener;)V",
			arg0.object()
		);
	}
	inline jboolean ViewTreeObserver::unregisterFrameCommitCallback(JObject arg0) const
	{
		return callMethod<jboolean>(
			"unregisterFrameCommitCallback",
			"(Ljava/lang/Runnable;)Z",
			arg0.object()
		);
	}
} // namespace android::view

// Base class headers

