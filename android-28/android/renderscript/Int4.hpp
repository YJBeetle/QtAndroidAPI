#pragma once

#include "./Int4.def.hpp"

namespace android::renderscript
{
	// Fields
	inline jint Int4::w()
	{
		return getField<jint>(
			"w"
		);
	}
	inline jint Int4::x()
	{
		return getField<jint>(
			"x"
		);
	}
	inline jint Int4::y()
	{
		return getField<jint>(
			"y"
		);
	}
	inline jint Int4::z()
	{
		return getField<jint>(
			"z"
		);
	}
	
	// Constructors
	inline Int4::Int4()
		: JObject(
			"android.renderscript.Int4",
			"()V"
		) {}
	inline Int4::Int4(jint arg0, jint arg1, jint arg2, jint arg3)
		: JObject(
			"android.renderscript.Int4",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
} // namespace android::renderscript

// Base class headers

