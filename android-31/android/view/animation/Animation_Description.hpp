#pragma once

#include "./Animation_Description.def.hpp"

namespace android::view::animation
{
	// Fields
	inline jint Animation_Description::type()
	{
		return getField<jint>(
			"type"
		);
	}
	inline jfloat Animation_Description::value()
	{
		return getField<jfloat>(
			"value"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::view::animation

// Base class headers

