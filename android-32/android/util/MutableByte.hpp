#pragma once

#include "./MutableByte.def.hpp"

namespace android::util
{
	// Fields
	inline jbyte MutableByte::value()
	{
		return getField<jbyte>(
			"value"
		);
	}
	
	// Constructors
	inline MutableByte::MutableByte(jbyte arg0)
		: JObject(
			"android.util.MutableByte",
			"(B)V",
			arg0
		) {}
	
	// Methods
} // namespace android::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::util;
#endif
