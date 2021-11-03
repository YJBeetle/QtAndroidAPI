#pragma once

#include "../../../JObject.hpp"
#include "./Precision.hpp"

namespace android::icu::number
{
	class Precision;
}
namespace android::icu::util
{
	class Currency;
}

namespace android::icu::number
{
	class CurrencyPrecision : public android::icu::number::Precision
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CurrencyPrecision(const char *className, const char *sig, Ts...agv) : android::icu::number::Precision(className, sig, std::forward<Ts>(agv)...) {}
		CurrencyPrecision(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::icu::number::Precision withCurrency(android::icu::util::Currency arg0);
	};
} // namespace android::icu::number

