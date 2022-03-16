#pragma once

#include "../graphics/drawable/Drawable.def.hpp"
#include "./ViewOverlay.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void ViewOverlay::add(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"add",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void ViewOverlay::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline void ViewOverlay::remove(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"remove",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
} // namespace android::view

// Base class headers

