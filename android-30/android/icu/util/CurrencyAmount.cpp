#include "./Currency.hpp"
#include "../../../java/lang/Number.hpp"
#include "../../../java/util/Currency.hpp"
#include "./CurrencyAmount.hpp"

namespace android::icu::util
{
	// Fields
	
	// QJniObject forward
	CurrencyAmount::CurrencyAmount(QJniObject obj) : android::icu::util::Measure(obj) {}
	
	// Constructors
	CurrencyAmount::CurrencyAmount(jdouble arg0, android::icu::util::Currency arg1)
		: android::icu::util::Measure(
			"android.icu.util.CurrencyAmount",
			"(DLandroid/icu/util/Currency;)V",
			arg0,
			arg1.object()
		) {}
	CurrencyAmount::CurrencyAmount(jdouble arg0, java::util::Currency arg1)
		: android::icu::util::Measure(
			"android.icu.util.CurrencyAmount",
			"(DLjava/util/Currency;)V",
			arg0,
			arg1.object()
		) {}
	CurrencyAmount::CurrencyAmount(java::lang::Number arg0, android::icu::util::Currency arg1)
		: android::icu::util::Measure(
			"android.icu.util.CurrencyAmount",
			"(Ljava/lang/Number;Landroid/icu/util/Currency;)V",
			arg0.object(),
			arg1.object()
		) {}
	CurrencyAmount::CurrencyAmount(java::lang::Number arg0, java::util::Currency arg1)
		: android::icu::util::Measure(
			"android.icu.util.CurrencyAmount",
			"(Ljava/lang/Number;Ljava/util/Currency;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	android::icu::util::Currency CurrencyAmount::getCurrency()
	{
		return callObjectMethod(
			"getCurrency",
			"()Landroid/icu/util/Currency;"
		);
	}
} // namespace android::icu::util

