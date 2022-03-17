#pragma once

#include "./MutableChar.def.hpp"

namespace android::util
{
	// Fields
	inline jchar MutableChar::value()
	{
		return getField<jchar>(
			"value"
		);
	}
	
	// Constructors
	inline MutableChar::MutableChar(jchar arg0)
		: JObject(
			"android.util.MutableChar",
			"(C)V",
			arg0
		) {}
	
	// Methods
} // namespace android::util

// Base class headers

