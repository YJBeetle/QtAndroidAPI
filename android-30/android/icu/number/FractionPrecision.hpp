#pragma once

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
} // namespace android::icu::number

// Base class headers
#include "./Precision.hpp"

