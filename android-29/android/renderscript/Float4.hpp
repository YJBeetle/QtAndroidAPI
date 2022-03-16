#pragma once

#include "./Float4.def.hpp"

namespace android::renderscript
{
	// Fields
	inline jfloat Float4::w()
	{
		return getField<jfloat>(
			"w"
		);
	}
	inline jfloat Float4::x()
	{
		return getField<jfloat>(
			"x"
		);
	}
	inline jfloat Float4::y()
	{
		return getField<jfloat>(
			"y"
		);
	}
	inline jfloat Float4::z()
	{
		return getField<jfloat>(
			"z"
		);
	}
	
	// Constructors
	inline Float4::Float4()
		: JObject(
			"android.renderscript.Float4",
			"()V"
		) {}
	inline Float4::Float4(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
		: JObject(
			"android.renderscript.Float4",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
} // namespace android::renderscript

// Base class headers

