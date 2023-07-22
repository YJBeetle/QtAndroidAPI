#pragma once

#include "./Long4.def.hpp"

namespace android::renderscript
{
	// Fields
	inline jlong Long4::w()
	{
		return getField<jlong>(
			"w"
		);
	}
	inline jlong Long4::x()
	{
		return getField<jlong>(
			"x"
		);
	}
	inline jlong Long4::y()
	{
		return getField<jlong>(
			"y"
		);
	}
	inline jlong Long4::z()
	{
		return getField<jlong>(
			"z"
		);
	}
	
	// Constructors
	inline Long4::Long4()
		: JObject(
			"android.renderscript.Long4",
			"()V"
		) {}
	inline Long4::Long4(jlong arg0, jlong arg1, jlong arg2, jlong arg3)
		: JObject(
			"android.renderscript.Long4",
			"(JJJJ)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
} // namespace android::renderscript

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::renderscript;
#endif
