#pragma once

#include "./NumberFormatter_RoundingPriority.def.hpp"
#include "./Precision.def.hpp"
#include "./FractionPrecision.def.hpp"

namespace android::icu::number
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::icu::number::Precision FractionPrecision::withMaxDigits(jint arg0) const
	{
		return callObjectMethod(
			"withMaxDigits",
			"(I)Landroid/icu/number/Precision;",
			arg0
		);
	}
	inline android::icu::number::Precision FractionPrecision::withMinDigits(jint arg0) const
	{
		return callObjectMethod(
			"withMinDigits",
			"(I)Landroid/icu/number/Precision;",
			arg0
		);
	}
	inline android::icu::number::Precision FractionPrecision::withSignificantDigits(jint arg0, jint arg1, android::icu::number::NumberFormatter_RoundingPriority arg2) const
	{
		return callObjectMethod(
			"withSignificantDigits",
			"(IILandroid/icu/number/NumberFormatter$RoundingPriority;)Landroid/icu/number/Precision;",
			arg0,
			arg1,
			arg2.object()
		);
	}
} // namespace android::icu::number

// Base class headers
#include "./Precision.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::number;
#endif
