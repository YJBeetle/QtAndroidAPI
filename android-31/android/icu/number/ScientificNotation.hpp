#pragma once

#include "./NumberFormatter_SignDisplay.def.hpp"
#include "./ScientificNotation.def.hpp"

namespace android::icu::number
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::icu::number::ScientificNotation ScientificNotation::withExponentSignDisplay(android::icu::number::NumberFormatter_SignDisplay arg0) const
	{
		return callObjectMethod(
			"withExponentSignDisplay",
			"(Landroid/icu/number/NumberFormatter$SignDisplay;)Landroid/icu/number/ScientificNotation;",
			arg0.object()
		);
	}
	inline android::icu::number::ScientificNotation ScientificNotation::withMinExponentDigits(jint arg0) const
	{
		return callObjectMethod(
			"withMinExponentDigits",
			"(I)Landroid/icu/number/ScientificNotation;",
			arg0
		);
	}
} // namespace android::icu::number

// Base class headers
#include "./Notation.hpp"

