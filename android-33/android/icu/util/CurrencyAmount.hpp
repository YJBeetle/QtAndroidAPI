#pragma once

#include "./Currency.def.hpp"
#include "../../../java/lang/Number.def.hpp"
#include "../../../java/util/Currency.def.hpp"
#include "./CurrencyAmount.def.hpp"

namespace android::icu::util
{
	// Fields
	
	// Constructors
	inline CurrencyAmount::CurrencyAmount(jdouble arg0, android::icu::util::Currency arg1)
		: android::icu::util::Measure(
			"android.icu.util.CurrencyAmount",
			"(DLandroid/icu/util/Currency;)V",
			arg0,
			arg1.object()
		) {}
	inline CurrencyAmount::CurrencyAmount(jdouble arg0, java::util::Currency arg1)
		: android::icu::util::Measure(
			"android.icu.util.CurrencyAmount",
			"(DLjava/util/Currency;)V",
			arg0,
			arg1.object()
		) {}
	inline CurrencyAmount::CurrencyAmount(java::lang::Number arg0, android::icu::util::Currency arg1)
		: android::icu::util::Measure(
			"android.icu.util.CurrencyAmount",
			"(Ljava/lang/Number;Landroid/icu/util/Currency;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline CurrencyAmount::CurrencyAmount(java::lang::Number arg0, java::util::Currency arg1)
		: android::icu::util::Measure(
			"android.icu.util.CurrencyAmount",
			"(Ljava/lang/Number;Ljava/util/Currency;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline android::icu::util::Currency CurrencyAmount::getCurrency() const
	{
		return callObjectMethod(
			"getCurrency",
			"()Landroid/icu/util/Currency;"
		);
	}
} // namespace android::icu::util

// Base class headers
#include "./Measure.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::util;
#endif
