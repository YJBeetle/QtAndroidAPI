#pragma once

#include "./Double3.def.hpp"

namespace android::renderscript
{
	// Fields
	inline jdouble Double3::x()
	{
		return getField<jdouble>(
			"x"
		);
	}
	inline jdouble Double3::y()
	{
		return getField<jdouble>(
			"y"
		);
	}
	inline jdouble Double3::z()
	{
		return getField<jdouble>(
			"z"
		);
	}
	
	// Constructors
	inline Double3::Double3()
		: JObject(
			"android.renderscript.Double3",
			"()V"
		) {}
	inline Double3::Double3(jdouble arg0, jdouble arg1, jdouble arg2)
		: JObject(
			"android.renderscript.Double3",
			"(DDD)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
} // namespace android::renderscript

// Base class headers

