#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Measure.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CurrencyAmount(const char *className, const char *sig, Ts...agv) : android::icu::util::Measure(className, sig, std::forward<Ts>(agv)...) {}
		CurrencyAmount(QAndroidJniObject obj);
		
		// Constructors
		CurrencyAmount(jdouble arg0, android::icu::util::Currency arg1);
		CurrencyAmount(jdouble arg0, java::util::Currency arg1);
		CurrencyAmount(java::lang::Number arg0, android::icu::util::Currency arg1);
		CurrencyAmount(java::lang::Number arg0, java::util::Currency arg1);
		
		// Methods
		QAndroidJniObject getCurrency();
	};
} // namespace android::icu::util

