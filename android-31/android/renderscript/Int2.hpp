#pragma once

#include "./Int2.def.hpp"

namespace android::renderscript
{
	// Fields
	inline jint Int2::x()
	{
		return getField<jint>(
			"x"
		);
	}
	inline jint Int2::y()
	{
		return getField<jint>(
			"y"
		);
	}
	
	// Constructors
	inline Int2::Int2()
		: JObject(
			"android.renderscript.Int2",
			"()V"
		) {}
	inline Int2::Int2(jint arg0, jint arg1)
		: JObject(
			"android.renderscript.Int2",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::renderscript

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::renderscript;
#endif
