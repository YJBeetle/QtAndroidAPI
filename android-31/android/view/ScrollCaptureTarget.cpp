#include "../graphics/Point.hpp"
#include "../graphics/Rect.hpp"
#include "./View.hpp"
#include "../../JString.hpp"
#include "./ScrollCaptureTarget.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	ScrollCaptureTarget::ScrollCaptureTarget(android::view::View arg0, android::graphics::Rect arg1, android::graphics::Point arg2, JObject arg3)
		: JObject(
			"android.view.ScrollCaptureTarget",
			"(Landroid/view/View;Landroid/graphics/Rect;Landroid/graphics/Point;Landroid/view/ScrollCaptureCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	JObject ScrollCaptureTarget::getCallback() const
	{
		return callObjectMethod(
			"getCallback",
			"()Landroid/view/ScrollCaptureCallback;"
		);
	}
	android::view::View ScrollCaptureTarget::getContainingView() const
	{
		return callObjectMethod(
			"getContainingView",
			"()Landroid/view/View;"
		);
	}
	jint ScrollCaptureTarget::getHint() const
	{
		return callMethod<jint>(
			"getHint",
			"()I"
		);
	}
	android::graphics::Rect ScrollCaptureTarget::getLocalVisibleRect() const
	{
		return callObjectMethod(
			"getLocalVisibleRect",
			"()Landroid/graphics/Rect;"
		);
	}
	android::graphics::Point ScrollCaptureTarget::getPositionInWindow() const
	{
		return callObjectMethod(
			"getPositionInWindow",
			"()Landroid/graphics/Point;"
		);
	}
	android::graphics::Rect ScrollCaptureTarget::getScrollBounds() const
	{
		return callObjectMethod(
			"getScrollBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	void ScrollCaptureTarget::setScrollBounds(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"setScrollBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	JString ScrollCaptureTarget::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ScrollCaptureTarget::updatePositionInWindow() const
	{
		callMethod<void>(
			"updatePositionInWindow",
			"()V"
		);
	}
} // namespace android::view

