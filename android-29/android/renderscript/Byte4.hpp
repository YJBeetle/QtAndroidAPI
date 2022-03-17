#pragma once

#include "./Byte4.def.hpp"

namespace android::renderscript
{
	// Fields
	inline jbyte Byte4::w()
	{
		return getField<jbyte>(
			"w"
		);
	}
	inline jbyte Byte4::x()
	{
		return getField<jbyte>(
			"x"
		);
	}
	inline jbyte Byte4::y()
	{
		return getField<jbyte>(
			"y"
		);
	}
	inline jbyte Byte4::z()
	{
		return getField<jbyte>(
			"z"
		);
	}
	
	// Constructors
	inline Byte4::Byte4()
		: JObject(
			"android.renderscript.Byte4",
			"()V"
		) {}
	inline Byte4::Byte4(jbyte arg0, jbyte arg1, jbyte arg2, jbyte arg3)
		: JObject(
			"android.renderscript.Byte4",
			"(BBBB)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
} // namespace android::renderscript

// Base class headers

