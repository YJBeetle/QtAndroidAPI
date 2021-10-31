#include "./Currency_CurrencyUsage.hpp"
#include "./ULocale.hpp"
#include "../../../java/util/Currency.hpp"
#include "../../../java/util/Date.hpp"
#include "../../../java/util/Locale.hpp"
#include "./Currency.hpp"

namespace android::icu::util
{
	// Fields
	jint Currency::LONG_NAME()
	{
		return getStaticField<jint>(
			"android.icu.util.Currency",
			"LONG_NAME"
		);
	}
	jint Currency::NARROW_SYMBOL_NAME()
	{
		return getStaticField<jint>(
			"android.icu.util.Currency",
			"NARROW_SYMBOL_NAME"
		);
	}
	jint Currency::PLURAL_LONG_NAME()
	{
		return getStaticField<jint>(
			"android.icu.util.Currency",
			"PLURAL_LONG_NAME"
		);
	}
	jint Currency::SYMBOL_NAME()
	{
		return getStaticField<jint>(
			"android.icu.util.Currency",
			"SYMBOL_NAME"
		);
	}
	
	// QAndroidJniObject forward
	Currency::Currency(QAndroidJniObject obj) : android::icu::util::MeasureUnit(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::util::Currency Currency::fromJavaCurrency(java::util::Currency arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.Currency",
			"fromJavaCurrency",
			"(Ljava/util/Currency;)Landroid/icu/util/Currency;",
			arg0.object()
		);
	}
	__JniBaseClass Currency::getAvailableCurrencies()
	{
		return callStaticObjectMethod(
			"android.icu.util.Currency",
			"getAvailableCurrencies",
			"()Ljava/util/Set;"
		);
	}
	jarray Currency::getAvailableCurrencyCodes(android::icu::util::ULocale arg0, java::util::Date arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.Currency",
			"getAvailableCurrencyCodes",
			"(Landroid/icu/util/ULocale;Ljava/util/Date;)[Ljava/lang/String;",
			arg0.object(),
			arg1.object()
		).object<jarray>();
	}
	jarray Currency::getAvailableCurrencyCodes(java::util::Locale arg0, java::util::Date arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.Currency",
			"getAvailableCurrencyCodes",
			"(Ljava/util/Locale;Ljava/util/Date;)[Ljava/lang/String;",
			arg0.object(),
			arg1.object()
		).object<jarray>();
	}
	jarray Currency::getAvailableLocales()
	{
		return callStaticObjectMethod(
			"android.icu.util.Currency",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		).object<jarray>();
	}
	jarray Currency::getAvailableULocales()
	{
		return callStaticObjectMethod(
			"android.icu.util.Currency",
			"getAvailableULocales",
			"()[Landroid/icu/util/ULocale;"
		).object<jarray>();
	}
	android::icu::util::Currency Currency::getInstance(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.Currency",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/util/Currency;",
			arg0.object()
		);
	}
	android::icu::util::Currency Currency::getInstance(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.Currency",
			"getInstance",
			"(Ljava/lang/String;)Landroid/icu/util/Currency;",
			arg0
		);
	}
	android::icu::util::Currency Currency::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.Currency",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/util/Currency;",
			arg0.object()
		);
	}
	jarray Currency::getKeywordValuesForLocale(jstring arg0, android::icu::util::ULocale arg1, jboolean arg2)
	{
		return callStaticObjectMethod(
			"android.icu.util.Currency",
			"getKeywordValuesForLocale",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;Z)[Ljava/lang/String;",
			arg0,
			arg1.object(),
			arg2
		).object<jarray>();
	}
	jboolean Currency::isAvailable(jstring arg0, java::util::Date arg1, java::util::Date arg2)
	{
		return callStaticMethod<jboolean>(
			"android.icu.util.Currency",
			"isAvailable",
			"(Ljava/lang/String;Ljava/util/Date;Ljava/util/Date;)Z",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	jstring Currency::getCurrencyCode()
	{
		return callObjectMethod(
			"getCurrencyCode",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Currency::getDefaultFractionDigits()
	{
		return callMethod<jint>(
			"getDefaultFractionDigits",
			"()I"
		);
	}
	jint Currency::getDefaultFractionDigits(android::icu::util::Currency_CurrencyUsage arg0)
	{
		return callMethod<jint>(
			"getDefaultFractionDigits",
			"(Landroid/icu/util/Currency$CurrencyUsage;)I",
			arg0.object()
		);
	}
	jstring Currency::getDisplayName()
	{
		return callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Currency::getDisplayName(java::util::Locale arg0)
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring Currency::getName(android::icu::util::ULocale arg0, jint arg1, jbooleanArray arg2)
	{
		return callObjectMethod(
			"getName",
			"(Landroid/icu/util/ULocale;I[Z)Ljava/lang/String;",
			arg0.object(),
			arg1,
			arg2
		).object<jstring>();
	}
	jstring Currency::getName(java::util::Locale arg0, jint arg1, jbooleanArray arg2)
	{
		return callObjectMethod(
			"getName",
			"(Ljava/util/Locale;I[Z)Ljava/lang/String;",
			arg0.object(),
			arg1,
			arg2
		).object<jstring>();
	}
	jstring Currency::getName(android::icu::util::ULocale arg0, jint arg1, jstring arg2, jbooleanArray arg3)
	{
		return callObjectMethod(
			"getName",
			"(Landroid/icu/util/ULocale;ILjava/lang/String;[Z)Ljava/lang/String;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		).object<jstring>();
	}
	jstring Currency::getName(java::util::Locale arg0, jint arg1, jstring arg2, jbooleanArray arg3)
	{
		return callObjectMethod(
			"getName",
			"(Ljava/util/Locale;ILjava/lang/String;[Z)Ljava/lang/String;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		).object<jstring>();
	}
	jint Currency::getNumericCode()
	{
		return callMethod<jint>(
			"getNumericCode",
			"()I"
		);
	}
	jdouble Currency::getRoundingIncrement()
	{
		return callMethod<jdouble>(
			"getRoundingIncrement",
			"()D"
		);
	}
	jdouble Currency::getRoundingIncrement(android::icu::util::Currency_CurrencyUsage arg0)
	{
		return callMethod<jdouble>(
			"getRoundingIncrement",
			"(Landroid/icu/util/Currency$CurrencyUsage;)D",
			arg0.object()
		);
	}
	jstring Currency::getSymbol()
	{
		return callObjectMethod(
			"getSymbol",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Currency::getSymbol(android::icu::util::ULocale arg0)
	{
		return callObjectMethod(
			"getSymbol",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring Currency::getSymbol(java::util::Locale arg0)
	{
		return callObjectMethod(
			"getSymbol",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	java::util::Currency Currency::toJavaCurrency()
	{
		return callObjectMethod(
			"toJavaCurrency",
			"()Ljava/util/Currency;"
		);
	}
	jstring Currency::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::util

