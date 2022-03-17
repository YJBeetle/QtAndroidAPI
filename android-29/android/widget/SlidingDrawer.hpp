#pragma once

#include "../content/Context.def.hpp"
#include "../graphics/Canvas.def.hpp"
#include "../view/MotionEvent.def.hpp"
#include "../view/View.def.hpp"
#include "../../JString.hpp"
#include "./SlidingDrawer.def.hpp"

namespace android::widget
{
	// Fields
	inline jint SlidingDrawer::ORIENTATION_HORIZONTAL()
	{
		return getStaticField<jint>(
			"android.widget.SlidingDrawer",
			"ORIENTATION_HORIZONTAL"
		);
	}
	inline jint SlidingDrawer::ORIENTATION_VERTICAL()
	{
		return getStaticField<jint>(
			"android.widget.SlidingDrawer",
			"ORIENTATION_VERTICAL"
		);
	}
	
	// Constructors
	inline SlidingDrawer::SlidingDrawer(android::content::Context arg0, JObject arg1)
		: android::view::ViewGroup(
			"android.widget.SlidingDrawer",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline SlidingDrawer::SlidingDrawer(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::ViewGroup(
			"android.widget.SlidingDrawer",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline SlidingDrawer::SlidingDrawer(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::view::ViewGroup(
			"android.widget.SlidingDrawer",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline void SlidingDrawer::animateClose() const
	{
		callMethod<void>(
			"animateClose",
			"()V"
		);
	}
	inline void SlidingDrawer::animateOpen() const
	{
		callMethod<void>(
			"animateOpen",
			"()V"
		);
	}
	inline void SlidingDrawer::animateToggle() const
	{
		callMethod<void>(
			"animateToggle",
			"()V"
		);
	}
	inline void SlidingDrawer::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline JString SlidingDrawer::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::view::View SlidingDrawer::getContent() const
	{
		return callObjectMethod(
			"getContent",
			"()Landroid/view/View;"
		);
	}
	inline android::view::View SlidingDrawer::getHandle() const
	{
		return callObjectMethod(
			"getHandle",
			"()Landroid/view/View;"
		);
	}
	inline jboolean SlidingDrawer::isMoving() const
	{
		return callMethod<jboolean>(
			"isMoving",
			"()Z"
		);
	}
	inline jboolean SlidingDrawer::isOpened() const
	{
		return callMethod<jboolean>(
			"isOpened",
			"()Z"
		);
	}
	inline void SlidingDrawer::lock() const
	{
		callMethod<void>(
			"lock",
			"()V"
		);
	}
	inline jboolean SlidingDrawer::onInterceptTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onInterceptTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean SlidingDrawer::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline void SlidingDrawer::open() const
	{
		callMethod<void>(
			"open",
			"()V"
		);
	}
	inline void SlidingDrawer::setOnDrawerCloseListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnDrawerCloseListener",
			"(Landroid/widget/SlidingDrawer$OnDrawerCloseListener;)V",
			arg0.object()
		);
	}
	inline void SlidingDrawer::setOnDrawerOpenListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnDrawerOpenListener",
			"(Landroid/widget/SlidingDrawer$OnDrawerOpenListener;)V",
			arg0.object()
		);
	}
	inline void SlidingDrawer::setOnDrawerScrollListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnDrawerScrollListener",
			"(Landroid/widget/SlidingDrawer$OnDrawerScrollListener;)V",
			arg0.object()
		);
	}
	inline void SlidingDrawer::toggle() const
	{
		callMethod<void>(
			"toggle",
			"()V"
		);
	}
	inline void SlidingDrawer::unlock() const
	{
		callMethod<void>(
			"unlock",
			"()V"
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"

