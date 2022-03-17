#pragma once

#include "./Rect.def.hpp"
#include "./Region.def.hpp"
#include "./RegionIterator.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline RegionIterator::RegionIterator(android::graphics::Region arg0)
		: JObject(
			"android.graphics.RegionIterator",
			"(Landroid/graphics/Region;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jboolean RegionIterator::next(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"next",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
} // namespace android::graphics

// Base class headers

