#pragma once

#include "./Int3.def.hpp"

namespace android::renderscript
{
	// Fields
	inline jint Int3::x()
	{
		return getField<jint>(
			"x"
		);
	}
	inline jint Int3::y()
	{
		return getField<jint>(
			"y"
		);
	}
	inline jint Int3::z()
	{
		return getField<jint>(
			"z"
		);
	}
	
	// Constructors
	inline Int3::Int3()
		: JObject(
			"android.renderscript.Int3",
			"()V"
		) {}
	inline Int3::Int3(jint arg0, jint arg1, jint arg2)
		: JObject(
			"android.renderscript.Int3",
			"(III)V",
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
