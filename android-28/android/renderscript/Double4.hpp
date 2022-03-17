#pragma once

#include "./Double4.def.hpp"

namespace android::renderscript
{
	// Fields
	inline jdouble Double4::w()
	{
		return getField<jdouble>(
			"w"
		);
	}
	inline jdouble Double4::x()
	{
		return getField<jdouble>(
			"x"
		);
	}
	inline jdouble Double4::y()
	{
		return getField<jdouble>(
			"y"
		);
	}
	inline jdouble Double4::z()
	{
		return getField<jdouble>(
			"z"
		);
	}
	
	// Constructors
	inline Double4::Double4()
		: JObject(
			"android.renderscript.Double4",
			"()V"
		) {}
	inline Double4::Double4(jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3)
		: JObject(
			"android.renderscript.Double4",
			"(DDDD)V",
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
