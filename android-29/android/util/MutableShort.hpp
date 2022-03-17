#pragma once

#include "./MutableShort.def.hpp"

namespace android::util
{
	// Fields
	inline jshort MutableShort::value()
	{
		return getField<jshort>(
			"value"
		);
	}
	
	// Constructors
	inline MutableShort::MutableShort(jshort arg0)
		: JObject(
			"android.util.MutableShort",
			"(S)V",
			arg0
		) {}
	
	// Methods
} // namespace android::util

// Base class headers

