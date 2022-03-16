#pragma once

#include "./Short2.def.hpp"

namespace android::renderscript
{
	// Fields
	inline jshort Short2::x()
	{
		return getField<jshort>(
			"x"
		);
	}
	inline jshort Short2::y()
	{
		return getField<jshort>(
			"y"
		);
	}
	
	// Constructors
	inline Short2::Short2()
		: JObject(
			"android.renderscript.Short2",
			"()V"
		) {}
	inline Short2::Short2(jshort arg0, jshort arg1)
		: JObject(
			"android.renderscript.Short2",
			"(SS)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::renderscript

// Base class headers

