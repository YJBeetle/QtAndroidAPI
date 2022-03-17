#pragma once

#include "./Float2.def.hpp"

namespace android::renderscript
{
	// Fields
	inline jfloat Float2::x()
	{
		return getField<jfloat>(
			"x"
		);
	}
	inline jfloat Float2::y()
	{
		return getField<jfloat>(
			"y"
		);
	}
	
	// Constructors
	inline Float2::Float2()
		: JObject(
			"android.renderscript.Float2",
			"()V"
		) {}
	inline Float2::Float2(jfloat arg0, jfloat arg1)
		: JObject(
			"android.renderscript.Float2",
			"(FF)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::renderscript

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::renderscript;
#endif
