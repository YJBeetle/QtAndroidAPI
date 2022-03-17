#pragma once

#include "./MutableLong.def.hpp"

namespace android::util
{
	// Fields
	inline jlong MutableLong::value()
	{
		return getField<jlong>(
			"value"
		);
	}
	
	// Constructors
	inline MutableLong::MutableLong(jlong arg0)
		: JObject(
			"android.util.MutableLong",
			"(J)V",
			arg0
		) {}
	
	// Methods
} // namespace android::util

// Base class headers

