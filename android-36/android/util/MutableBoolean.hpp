#pragma once

#include "./MutableBoolean.def.hpp"

namespace android::util
{
	// Fields
	inline jboolean MutableBoolean::value()
	{
		return getField<jboolean>(
			"value"
		);
	}
	
	// Constructors
	inline MutableBoolean::MutableBoolean(jboolean arg0)
		: JObject(
			"android.util.MutableBoolean",
			"(Z)V",
			arg0
		) {}
	
	// Methods
} // namespace android::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::util;
#endif
