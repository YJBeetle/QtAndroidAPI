#pragma once

#include "./Long2.def.hpp"

namespace android::renderscript
{
	// Fields
	inline jlong Long2::x()
	{
		return getField<jlong>(
			"x"
		);
	}
	inline jlong Long2::y()
	{
		return getField<jlong>(
			"y"
		);
	}
	
	// Constructors
	inline Long2::Long2()
		: JObject(
			"android.renderscript.Long2",
			"()V"
		) {}
	inline Long2::Long2(jlong arg0, jlong arg1)
		: JObject(
			"android.renderscript.Long2",
			"(JJ)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::renderscript

// Base class headers

