#pragma once

#include "./Byte2.def.hpp"

namespace android::renderscript
{
	// Fields
	inline jbyte Byte2::x()
	{
		return getField<jbyte>(
			"x"
		);
	}
	inline jbyte Byte2::y()
	{
		return getField<jbyte>(
			"y"
		);
	}
	
	// Constructors
	inline Byte2::Byte2()
		: JObject(
			"android.renderscript.Byte2",
			"()V"
		) {}
	inline Byte2::Byte2(jbyte arg0, jbyte arg1)
		: JObject(
			"android.renderscript.Byte2",
			"(BB)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::renderscript

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::renderscript;
#endif
