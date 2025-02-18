#pragma once

#include "./MutableInt.def.hpp"

namespace android::util
{
	// Fields
	inline jint MutableInt::value()
	{
		return getField<jint>(
			"value"
		);
	}
	
	// Constructors
	inline MutableInt::MutableInt(jint arg0)
		: JObject(
			"android.util.MutableInt",
			"(I)V",
			arg0
		) {}
	
	// Methods
} // namespace android::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::util;
#endif
