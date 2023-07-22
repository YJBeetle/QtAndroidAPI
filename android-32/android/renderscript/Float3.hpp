#pragma once

#include "./Float3.def.hpp"

namespace android::renderscript
{
	// Fields
	inline jfloat Float3::x()
	{
		return getField<jfloat>(
			"x"
		);
	}
	inline jfloat Float3::y()
	{
		return getField<jfloat>(
			"y"
		);
	}
	inline jfloat Float3::z()
	{
		return getField<jfloat>(
			"z"
		);
	}
	
	// Constructors
	inline Float3::Float3()
		: JObject(
			"android.renderscript.Float3",
			"()V"
		) {}
	inline Float3::Float3(jfloat arg0, jfloat arg1, jfloat arg2)
		: JObject(
			"android.renderscript.Float3",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
} // namespace android::renderscript

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::renderscript;
#endif
