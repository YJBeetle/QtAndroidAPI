#pragma once

#include "./Precision.def.hpp"
#include "../util/Currency.def.hpp"
#include "./CurrencyPrecision.def.hpp"

namespace android::icu::number
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::icu::number::Precision CurrencyPrecision::withCurrency(android::icu::util::Currency arg0) const
	{
		return callObjectMethod(
			"withCurrency",
			"(Landroid/icu/util/Currency;)Landroid/icu/number/Precision;",
			arg0.object()
		);
	}
} // namespace android::icu::number

// Base class headers
#include "./Precision.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::number;
#endif
