#include "../graphics/Point.hpp"
#include "../graphics/Rect.hpp"
#include "./Surface.hpp"
#include "./ScrollCaptureSession.hpp"

namespace android::view
{
	// Fields
	
	// QJniObject forward
	ScrollCaptureSession::ScrollCaptureSession(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ScrollCaptureSession::ScrollCaptureSession(android::view::Surface arg0, android::graphics::Rect arg1, android::graphics::Point arg2)
		: __JniBaseClass(
			"android.view.ScrollCaptureSession",
			"(Landroid/view/Surface;Landroid/graphics/Rect;Landroid/graphics/Point;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	android::graphics::Point ScrollCaptureSession::getPositionInWindow()
	{
		return callObjectMethod(
			"getPositionInWindow",
			"()Landroid/graphics/Point;"
		);
	}
	android::graphics::Rect ScrollCaptureSession::getScrollBounds()
	{
		return callObjectMethod(
			"getScrollBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	android::view::Surface ScrollCaptureSession::getSurface()
	{
		return callObjectMethod(
			"getSurface",
			"()Landroid/view/Surface;"
		);
	}
} // namespace android::view

