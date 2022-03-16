#pragma once

#include "./Short4.def.hpp"

namespace android::renderscript
{
	// Fields
	inline jshort Short4::w()
	{
		return getField<jshort>(
			"w"
		);
	}
	inline jshort Short4::x()
	{
		return getField<jshort>(
			"x"
		);
	}
	inline jshort Short4::y()
	{
		return getField<jshort>(
			"y"
		);
	}
	inline jshort Short4::z()
	{
		return getField<jshort>(
			"z"
		);
	}
	
	// Constructors
	inline Short4::Short4()
		: JObject(
			"android.renderscript.Short4",
			"()V"
		) {}
	inline Short4::Short4(jshort arg0, jshort arg1, jshort arg2, jshort arg3)
		: JObject(
			"android.renderscript.Short4",
			"(SSSS)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
} // namespace android::renderscript

// Base class headers

