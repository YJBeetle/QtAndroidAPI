#pragma once

#include "./Precision.def.hpp"

namespace android::icu::number
{
	class NumberFormatter_RoundingPriority;
}
namespace android::icu::number
{
	class Precision;
}

namespace android::icu::number
{
	class FractionPrecision : public android::icu::number::Precision
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FractionPrecision(const char *className, const char *sig, Ts...agv) : android::icu::number::Precision(className, sig, std::forward<Ts>(agv)...) {}
		FractionPrecision(QJniObject obj) : android::icu::number::Precision(obj) {}
		
		// Constructors
		
		// Methods
		android::icu::number::Precision withMaxDigits(jint arg0) const;
		android::icu::number::Precision withMinDigits(jint arg0) const;
		android::icu::number::Precision withSignificantDigits(jint arg0, jint arg1, android::icu::number::NumberFormatter_RoundingPriority arg2) const;
	};
} // namespace android::icu::number

