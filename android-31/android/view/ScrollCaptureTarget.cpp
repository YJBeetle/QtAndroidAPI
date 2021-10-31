#include "../graphics/Point.hpp"
#include "../graphics/Rect.hpp"
#include "./View.hpp"
#include "./ScrollCaptureTarget.hpp"

namespace android::view
{
	// Fields
	
	// QJniObject forward
	ScrollCaptureTarget::ScrollCaptureTarget(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ScrollCaptureTarget::ScrollCaptureTarget(android::view::View arg0, android::graphics::Rect arg1, android::graphics::Point arg2, __JniBaseClass arg3)
		: __JniBaseClass(
			"android.view.ScrollCaptureTarget",
			"(Landroid/view/View;Landroid/graphics/Rect;Landroid/graphics/Point;Landroid/view/ScrollCaptureCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	__JniBaseClass ScrollCaptureTarget::getCallback()
	{
		return callObjectMethod(
			"getCallback",
			"()Landroid/view/ScrollCaptureCallback;"
		);
	}
	android::view::View ScrollCaptureTarget::getContainingView()
	{
		return callObjectMethod(
			"getContainingView",
			"()Landroid/view/View;"
		);
	}
	jint ScrollCaptureTarget::getHint()
	{
		return callMethod<jint>(
			"getHint",
			"()I"
		);
	}
	android::graphics::Rect ScrollCaptureTarget::getLocalVisibleRect()
	{
		return callObjectMethod(
			"getLocalVisibleRect",
			"()Landroid/graphics/Rect;"
		);
	}
	android::graphics::Point ScrollCaptureTarget::getPositionInWindow()
	{
		return callObjectMethod(
			"getPositionInWindow",
			"()Landroid/graphics/Point;"
		);
	}
	android::graphics::Rect ScrollCaptureTarget::getScrollBounds()
	{
		return callObjectMethod(
			"getScrollBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	void ScrollCaptureTarget::setScrollBounds(android::graphics::Rect arg0)
	{
		callMethod<void>(
			"setScrollBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	jstring ScrollCaptureTarget::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ScrollCaptureTarget::updatePositionInWindow()
	{
		callMethod<void>(
			"updatePositionInWindow",
			"()V"
		);
	}
} // namespace android::view

