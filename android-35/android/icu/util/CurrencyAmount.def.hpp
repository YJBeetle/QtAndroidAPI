#pragma once

#include "./Measure.def.hpp"

namespace android::icu::util
{
	class Currency;
}
namespace java::lang
{
	class Number;
}
namespace java::util
{
	class Currency;
}

namespace android::icu::util
{
	class CurrencyAmount : public android::icu::util::Measure
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CurrencyAmount(const char *className, const char *sig, Ts...agv) : android::icu::util::Measure(className, sig, std::forward<Ts>(agv)...) {}
		CurrencyAmount(QJniObject obj) : android::icu::util::Measure(obj) {}
		
		// Constructors
		CurrencyAmount(jdouble arg0, android::icu::util::Currency arg1);
		CurrencyAmount(jdouble arg0, java::util::Currency arg1);
		CurrencyAmount(java::lang::Number arg0, android::icu::util::Currency arg1);
		CurrencyAmount(java::lang::Number arg0, java::util::Currency arg1);
		
		// Methods
		android::icu::util::Currency getCurrency() const;
	};
} // namespace android::icu::util

