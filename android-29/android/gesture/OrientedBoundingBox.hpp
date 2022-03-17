#pragma once

#include "./OrientedBoundingBox.def.hpp"

namespace android::gesture
{
	// Fields
	inline jfloat OrientedBoundingBox::centerX()
	{
		return getField<jfloat>(
			"centerX"
		);
	}
	inline jfloat OrientedBoundingBox::centerY()
	{
		return getField<jfloat>(
			"centerY"
		);
	}
	inline jfloat OrientedBoundingBox::height()
	{
		return getField<jfloat>(
			"height"
		);
	}
	inline jfloat OrientedBoundingBox::orientation()
	{
		return getField<jfloat>(
			"orientation"
		);
	}
	inline jfloat OrientedBoundingBox::squareness()
	{
		return getField<jfloat>(
			"squareness"
		);
	}
	inline jfloat OrientedBoundingBox::width()
	{
		return getField<jfloat>(
			"width"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::gesture

// Base class headers

