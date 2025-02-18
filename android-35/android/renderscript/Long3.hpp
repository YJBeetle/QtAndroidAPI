#pragma once

#include "./Long3.def.hpp"

namespace android::renderscript
{
	// Fields
	inline jlong Long3::x()
	{
		return getField<jlong>(
			"x"
		);
	}
	inline jlong Long3::y()
	{
		return getField<jlong>(
			"y"
		);
	}
	inline jlong Long3::z()
	{
		return getField<jlong>(
			"z"
		);
	}
	
	// Constructors
	inline Long3::Long3()
		: JObject(
			"android.renderscript.Long3",
			"()V"
		) {}
	inline Long3::Long3(jlong arg0, jlong arg1, jlong arg2)
		: JObject(
			"android.renderscript.Long3",
			"(JJJ)V",
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
