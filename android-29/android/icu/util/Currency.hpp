#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./MeasureUnit.hpp"

namespace android::icu::util
{
	class Currency_CurrencyUsage;
}
namespace android::icu::util
{
	class ULocale;
}
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
		
		Currency(QAndroidJniObject obj);
		// Constructors
		Currency() = default;
		
		// Methods
		static QAndroidJniObject fromJavaCurrency(java::util::Currency arg0);
		static QAndroidJniObject getAvailableCurrencies();
		static jarray getAvailableCurrencyCodes(android::icu::util::ULocale arg0, java::util::Date arg1);
		static jarray getAvailableCurrencyCodes(java::util::Locale arg0, java::util::Date arg1);
		static jarray getAvailableLocales();
		static jarray getAvailableULocales();
		static QAndroidJniObject getInstance(android::icu::util::ULocale arg0);
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(const QString &arg0);
		static QAndroidJniObject getInstance(java::util::Locale arg0);
		static jarray getKeywordValuesForLocale(jstring arg0, android::icu::util::ULocale arg1, jboolean arg2);
		static jarray getKeywordValuesForLocale(const QString &arg0, android::icu::util::ULocale arg1, jboolean arg2);
		static jboolean isAvailable(jstring arg0, java::util::Date arg1, java::util::Date arg2);
		static jboolean isAvailable(const QString &arg0, java::util::Date arg1, java::util::Date arg2);
		jstring getCurrencyCode();
		jint getDefaultFractionDigits();
		jint getDefaultFractionDigits(android::icu::util::Currency_CurrencyUsage arg0);
		jstring getDisplayName();
		jstring getDisplayName(java::util::Locale arg0);
		jstring getName(android::icu::util::ULocale arg0, jint arg1, jbooleanArray arg2);
		jstring getName(java::util::Locale arg0, jint arg1, jbooleanArray arg2);
		jstring getName(android::icu::util::ULocale arg0, jint arg1, jstring arg2, jbooleanArray arg3);
		jstring getName(android::icu::util::ULocale arg0, jint arg1, const QString &arg2, jbooleanArray arg3);
		jstring getName(java::util::Locale arg0, jint arg1, jstring arg2, jbooleanArray arg3);
		jstring getName(java::util::Locale arg0, jint arg1, const QString &arg2, jbooleanArray arg3);
		jint getNumericCode();
		jdouble getRoundingIncrement();
		jdouble getRoundingIncrement(android::icu::util::Currency_CurrencyUsage arg0);
		jstring getSymbol();
		jstring getSymbol(android::icu::util::ULocale arg0);
		jstring getSymbol(java::util::Locale arg0);
		QAndroidJniObject toJavaCurrency();
		jstring toString();
	};
} // namespace android::icu::util

