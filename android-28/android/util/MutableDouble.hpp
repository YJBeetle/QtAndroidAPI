#pragma once

#include "./MutableDouble.def.hpp"

namespace android::util
{
	// Fields
	inline jdouble MutableDouble::value()
	{
		return getField<jdouble>(
			"value"
		);
	}
	
	// Constructors
	inline MutableDouble::MutableDouble(jdouble arg0)
		: JObject(
			"android.util.MutableDouble",
			"(D)V",
			arg0
		) {}
	
	// Methods
} // namespace android::util

// Base class headers

