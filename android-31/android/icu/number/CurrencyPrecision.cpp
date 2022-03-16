#include "./Precision.hpp"
#include "../util/Currency.hpp"
#include "./CurrencyPrecision.hpp"

namespace android::icu::number
{
	// Fields
	
	// Constructors
	
	// Methods
	android::icu::number::Precision CurrencyPrecision::withCurrency(android::icu::util::Currency arg0) const
	{
		return callObjectMethod(
			"withCurrency",
			"(Landroid/icu/util/Currency;)Landroid/icu/number/Precision;",
			arg0.object()
		);
	}
} // namespace android::icu::number

