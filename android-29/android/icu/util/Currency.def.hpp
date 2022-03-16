#pragma once

#include "./MeasureUnit.def.hpp"

class JArray;
class JArray;
class JArray;
class JBooleanArray;
namespace android::icu::util
{
	class Currency_CurrencyUsage;
}
namespace android::icu::util
{
	class ULocale;
}
class JString;
namespace java::util
{
	class Currency;
}
namespace java::util
{
	class Date;
}
namespace java::util
{
	class Locale;
}

namespace android::icu::util
{
	class Currency : public android::icu::util::MeasureUnit
	{
	public:
		// Fields
		static jint LONG_NAME();
		static jint PLURAL_LONG_NAME();
		static jint SYMBOL_NAME();
		
		// QJniObject forward
		template<typename ...Ts> explicit Currency(const char *className, const char *sig, Ts...agv) : android::icu::util::MeasureUnit(className, sig, std::forward<Ts>(agv)...) {}
		Currency(QJniObject obj) : android::icu::util::MeasureUnit(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::util::Currency fromJavaCurrency(java::util::Currency arg0);
		static JObject getAvailableCurrencies();
		static JArray getAvailableCurrencyCodes(android::icu::util::ULocale arg0, java::util::Date arg1);
		static JArray getAvailableCurrencyCodes(java::util::Locale arg0, java::util::Date arg1);
		static JArray getAvailableLocales();
		static JArray getAvailableULocales();
		static android::icu::util::Currency getInstance(android::icu::util::ULocale arg0);
		static android::icu::util::Currency getInstance(JString arg0);
		static android::icu::util::Currency getInstance(java::util::Locale arg0);
		static JArray getKeywordValuesForLocale(JString arg0, android::icu::util::ULocale arg1, jboolean arg2);
		static jboolean isAvailable(JString arg0, java::util::Date arg1, java::util::Date arg2);
		JString getCurrencyCode() const;
		jint getDefaultFractionDigits() const;
		jint getDefaultFractionDigits(android::icu::util::Currency_CurrencyUsage arg0) const;
		JString getDisplayName() const;
		JString getDisplayName(java::util::Locale arg0) const;
		JString getName(android::icu::util::ULocale arg0, jint arg1, JBooleanArray arg2) const;
		JString getName(java::util::Locale arg0, jint arg1, JBooleanArray arg2) const;
		JString getName(android::icu::util::ULocale arg0, jint arg1, JString arg2, JBooleanArray arg3) const;
		JString getName(java::util::Locale arg0, jint arg1, JString arg2, JBooleanArray arg3) const;
		jint getNumericCode() const;
		jdouble getRoundingIncrement() const;
		jdouble getRoundingIncrement(android::icu::util::Currency_CurrencyUsage arg0) const;
		JString getSymbol() const;
		JString getSymbol(android::icu::util::ULocale arg0) const;
		JString getSymbol(java::util::Locale arg0) const;
		java::util::Currency toJavaCurrency() const;
		JString toString() const;
	};
} // namespace android::icu::util

