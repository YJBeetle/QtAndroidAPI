#pragma once

#include "./Measure.hpp"

namespace android::icu::util
{
	class Currency;
}
namespace java::lang
{
	class Number;
}

namespace android::icu::util
{
	class CurrencyAmount : public android::icu::util::Measure
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CurrencyAmount(const char *className, const char *sig, Ts...agv) : android::icu::util::Measure(className, sig, std::forward<Ts>(agv)...) {}
		CurrencyAmount(QAndroidJniObject obj);
		
		// Constructors
		CurrencyAmount(jdouble arg0, android::icu::util::Currency arg1);
		CurrencyAmount(java::lang::Number arg0, android::icu::util::Currency arg1);
		
		// Methods
		android::icu::util::Currency getCurrency();
	};
} // namespace android::icu::util

