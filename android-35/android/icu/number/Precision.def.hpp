#pragma once

#include "../../../JObject.hpp"

namespace android::icu::number
{
	class CurrencyPrecision;
}
namespace android::icu::number
{
	class FractionPrecision;
}
namespace android::icu::number
{
	class NumberFormatter_TrailingZeroDisplay;
}
namespace android::icu::util
{
	class Currency_CurrencyUsage;
}
namespace java::math
{
	class BigDecimal;
}

namespace android::icu::number
{
	class Precision : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Precision(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Precision(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::number::CurrencyPrecision currency(android::icu::util::Currency_CurrencyUsage arg0);
		static android::icu::number::FractionPrecision fixedFraction(jint arg0);
		static android::icu::number::Precision fixedSignificantDigits(jint arg0);
		static android::icu::number::Precision increment(java::math::BigDecimal arg0);
		static android::icu::number::FractionPrecision integer();
		static android::icu::number::FractionPrecision maxFraction(jint arg0);
		static android::icu::number::Precision maxSignificantDigits(jint arg0);
		static android::icu::number::FractionPrecision minFraction(jint arg0);
		static android::icu::number::FractionPrecision minMaxFraction(jint arg0, jint arg1);
		static android::icu::number::Precision minMaxSignificantDigits(jint arg0, jint arg1);
		static android::icu::number::Precision minSignificantDigits(jint arg0);
		static android::icu::number::Precision unlimited();
		android::icu::number::Precision trailingZeroDisplay(android::icu::number::NumberFormatter_TrailingZeroDisplay arg0) const;
	};
} // namespace android::icu::number

