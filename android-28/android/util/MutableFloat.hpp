#pragma once

#include "./MutableFloat.def.hpp"

namespace android::util
{
	// Fields
	inline jfloat MutableFloat::value()
	{
		return getField<jfloat>(
			"value"
		);
	}
	
	// Constructors
	inline MutableFloat::MutableFloat(jfloat arg0)
		: JObject(
			"android.util.MutableFloat",
			"(F)V",
			arg0
		) {}
	
	// Methods
} // namespace android::util

// Base class headers

