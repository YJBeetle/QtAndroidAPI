#pragma once

#include "./Double2.def.hpp"

namespace android::renderscript
{
	// Fields
	inline jdouble Double2::x()
	{
		return getField<jdouble>(
			"x"
		);
	}
	inline jdouble Double2::y()
	{
		return getField<jdouble>(
			"y"
		);
	}
	
	// Constructors
	inline Double2::Double2()
		: JObject(
			"android.renderscript.Double2",
			"()V"
		) {}
	inline Double2::Double2(jdouble arg0, jdouble arg1)
		: JObject(
			"android.renderscript.Double2",
			"(DD)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::renderscript

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::renderscript;
#endif
