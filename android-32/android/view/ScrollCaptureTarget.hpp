#pragma once

#include "../graphics/Point.def.hpp"
#include "../graphics/Rect.def.hpp"
#include "./View.def.hpp"
#include "../../JString.hpp"
#include "./ScrollCaptureTarget.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	inline ScrollCaptureTarget::ScrollCaptureTarget(android::view::View arg0, android::graphics::Rect arg1, android::graphics::Point arg2, JObject arg3)
		: JObject(
			"android.view.ScrollCaptureTarget",
			"(Landroid/view/View;Landroid/graphics/Rect;Landroid/graphics/Point;Landroid/view/ScrollCaptureCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	inline JObject ScrollCaptureTarget::getCallback() const
	{
		return callObjectMethod(
			"getCallback",
			"()Landroid/view/ScrollCaptureCallback;"
		);
	}
	inline android::view::View ScrollCaptureTarget::getContainingView() const
	{
		return callObjectMethod(
			"getContainingView",
			"()Landroid/view/View;"
		);
	}
	inline jint ScrollCaptureTarget::getHint() const
	{
		return callMethod<jint>(
			"getHint",
			"()I"
		);
	}
	inline android::graphics::Rect ScrollCaptureTarget::getLocalVisibleRect() const
	{
		return callObjectMethod(
			"getLocalVisibleRect",
			"()Landroid/graphics/Rect;"
		);
	}
	inline android::graphics::Point ScrollCaptureTarget::getPositionInWindow() const
	{
		return callObjectMethod(
			"getPositionInWindow",
			"()Landroid/graphics/Point;"
		);
	}
	inline android::graphics::Rect ScrollCaptureTarget::getScrollBounds() const
	{
		return callObjectMethod(
			"getScrollBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	inline void ScrollCaptureTarget::setScrollBounds(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"setScrollBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	inline JString ScrollCaptureTarget::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ScrollCaptureTarget::updatePositionInWindow() const
	{
		callMethod<void>(
			"updatePositionInWindow",
			"()V"
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
