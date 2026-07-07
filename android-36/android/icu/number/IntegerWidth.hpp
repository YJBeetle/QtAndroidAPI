#pragma once

#include "./IntegerWidth.def.hpp"

namespace android::icu::number
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::icu::number::IntegerWidth IntegerWidth::zeroFillTo(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.number.IntegerWidth",
			"zeroFillTo",
			"(I)Landroid/icu/number/IntegerWidth;",
			arg0
		);
	}
	inline android::icu::number::IntegerWidth IntegerWidth::truncateAt(jint arg0) const
	{
		return callObjectMethod(
			"truncateAt",
			"(I)Landroid/icu/number/IntegerWidth;",
			arg0
		);
	}
} // namespace android::icu::number

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::number;
#endif
