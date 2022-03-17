#pragma once

#include "./Byte3.def.hpp"

namespace android::renderscript
{
	// Fields
	inline jbyte Byte3::x()
	{
		return getField<jbyte>(
			"x"
		);
	}
	inline jbyte Byte3::y()
	{
		return getField<jbyte>(
			"y"
		);
	}
	inline jbyte Byte3::z()
	{
		return getField<jbyte>(
			"z"
		);
	}
	
	// Constructors
	inline Byte3::Byte3()
		: JObject(
			"android.renderscript.Byte3",
			"()V"
		) {}
	inline Byte3::Byte3(jbyte arg0, jbyte arg1, jbyte arg2)
		: JObject(
			"android.renderscript.Byte3",
			"(BBB)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
} // namespace android::renderscript

// Base class headers

