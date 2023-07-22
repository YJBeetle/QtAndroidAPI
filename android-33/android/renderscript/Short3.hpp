#pragma once

#include "./Short3.def.hpp"

namespace android::renderscript
{
	// Fields
	inline jshort Short3::x()
	{
		return getField<jshort>(
			"x"
		);
	}
	inline jshort Short3::y()
	{
		return getField<jshort>(
			"y"
		);
	}
	inline jshort Short3::z()
	{
		return getField<jshort>(
			"z"
		);
	}
	
	// Constructors
	inline Short3::Short3()
		: JObject(
			"android.renderscript.Short3",
			"()V"
		) {}
	inline Short3::Short3(jshort arg0, jshort arg1, jshort arg2)
		: JObject(
			"android.renderscript.Short3",
			"(SSS)V",
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
