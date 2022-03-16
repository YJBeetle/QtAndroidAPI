#pragma once

#include "../graphics/Point.def.hpp"
#include "../graphics/Rect.def.hpp"
#include "./Surface.def.hpp"
#include "./ScrollCaptureSession.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	inline ScrollCaptureSession::ScrollCaptureSession(android::view::Surface arg0, android::graphics::Rect arg1, android::graphics::Point arg2)
		: JObject(
			"android.view.ScrollCaptureSession",
			"(Landroid/view/Surface;Landroid/graphics/Rect;Landroid/graphics/Point;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	inline android::graphics::Point ScrollCaptureSession::getPositionInWindow() const
	{
		return callObjectMethod(
			"getPositionInWindow",
			"()Landroid/graphics/Point;"
		);
	}
	inline android::graphics::Rect ScrollCaptureSession::getScrollBounds() const
	{
		return callObjectMethod(
			"getScrollBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	inline android::view::Surface ScrollCaptureSession::getSurface() const
	{
		return callObjectMethod(
			"getSurface",
			"()Landroid/view/Surface;"
		);
	}
} // namespace android::view

// Base class headers

