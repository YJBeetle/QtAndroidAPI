#pragma once

#include "../graphics/Rect.def.hpp"
#include "./WindowInsets.def.hpp"
#include "./WindowMetrics.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	inline WindowMetrics::WindowMetrics(android::graphics::Rect arg0, android::view::WindowInsets arg1)
		: JObject(
			"android.view.WindowMetrics",
			"(Landroid/graphics/Rect;Landroid/view/WindowInsets;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline android::graphics::Rect WindowMetrics::getBounds() const
	{
		return callObjectMethod(
			"getBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	inline android::view::WindowInsets WindowMetrics::getWindowInsets() const
	{
		return callObjectMethod(
			"getWindowInsets",
			"()Landroid/view/WindowInsets;"
		);
	}
} // namespace android::view

// Base class headers

