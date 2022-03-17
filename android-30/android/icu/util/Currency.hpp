#pragma once

#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JBooleanArray.hpp"
#include "./Currency_CurrencyUsage.def.hpp"
#include "./ULocale.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Currency.def.hpp"
#include "../../../java/util/Date.def.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./Currency.def.hpp"

namespace android::icu::util
{
	// Fields
	inline jint Currency::LONG_NAME()
	{
		return getStaticField<jint>(
			"android.icu.util.Currency",
			"LONG_NAME"
		);
	}
	inline jint Currency::NARROW_SYMBOL_NAME()
	{
		return getStaticField<jint>(
			"android.icu.util.Currency",
			"NARROW_SYMBOL_NAME"
		);
	}
	inline jint Currency::PLURAL_LONG_NAME()
	{
		return getStaticField<jint>(
			"android.icu.util.Currency",
			"PLURAL_LONG_NAME"
		);
	}
	inline jint Currency::SYMBOL_NAME()
	{
		return getStaticField<jint>(
			"android.icu.util.Currency",
			"SYMBOL_NAME"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::util::Currency Currency::fromJavaCurrency(java::util::Currency arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.Currency",
			"fromJavaCurrency",
			"(Ljava/util/Currency;)Landroid/icu/util/Currency;",
			arg0.object()
		);
	}
	inline JObject Currency::getAvailableCurrencies()
	{
		return callStaticObjectMethod(
			"android.icu.util.Currency",
			"getAvailableCurrencies",
			"()Ljava/util/Set;"
		);
	}
	inline JArray Currency::getAvailableCurrencyCodes(android::icu::util::ULocale arg0, java::util::Date arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.Currency",
			"getAvailableCurrencyCodes",
			"(Landroid/icu/util/ULocale;Ljava/util/Date;)[Ljava/lang/String;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JArray Currency::getAvailableCurrencyCodes(java::util::Locale arg0, java::util::Date arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.Currency",
			"getAvailableCurrencyCodes",
			"(Ljava/util/Locale;Ljava/util/Date;)[Ljava/lang/String;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JArray Currency::getAvailableLocales()
	{
		return callStaticObjectMethod(
			"android.icu.util.Currency",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		);
	}
	inline JArray Currency::getAvailableULocales()
	{
		return callStaticObjectMethod(
			"android.icu.util.Currency",
			"getAvailableULocales",
			"()[Landroid/icu/util/ULocale;"
		);
	}
	inline android::icu::util::Currency Currency::getInstance(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.Currency",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/util/Currency;",
			arg0.object()
		);
	}
	inline android::icu::util::Currency Currency::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.Currency",
			"getInstance",
			"(Ljava/lang/String;)Landroid/icu/util/Currency;",
			arg0.object<jstring>()
		);
	}
	inline android::icu::util::Currency Currency::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.Currency",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/util/Currency;",
			arg0.object()
		);
	}
	inline JArray Currency::getKeywordValuesForLocale(JString arg0, android::icu::util::ULocale arg1, jboolean arg2)
	{
		return callStaticObjectMethod(
			"android.icu.util.Currency",
			"getKeywordValuesForLocale",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;Z)[Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2
		);
	}
	inline jboolean Currency::isAvailable(JString arg0, java::util::Date arg1, java::util::Date arg2)
	{
		return callStaticMethod<jboolean>(
			"android.icu.util.Currency",
			"isAvailable",
			"(Ljava/lang/String;Ljava/util/Date;Ljava/util/Date;)Z",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline JString Currency::getCurrencyCode() const
	{
		return callObjectMethod(
			"getCurrencyCode",
			"()Ljava/lang/String;"
		);
	}
	inline jint Currency::getDefaultFractionDigits() const
	{
		return callMethod<jint>(
			"getDefaultFractionDigits",
			"()I"
		);
	}
	inline jint Currency::getDefaultFractionDigits(android::icu::util::Currency_CurrencyUsage arg0) const
	{
		return callMethod<jint>(
			"getDefaultFractionDigits",
			"(Landroid/icu/util/Currency$CurrencyUsage;)I",
			arg0.object()
		);
	}
	inline JString Currency::getDisplayName() const
	{
		return callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;"
		);
	}
	inline JString Currency::getDisplayName(java::util::Locale arg0) const
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString Currency::getName(android::icu::util::ULocale arg0, jint arg1, JBooleanArray arg2) const
	{
		return callObjectMethod(
			"getName",
			"(Landroid/icu/util/ULocale;I[Z)Ljava/lang/String;",
			arg0.object(),
			arg1,
			arg2.object<jbooleanArray>()
		);
	}
	inline JString Currency::getName(java::util::Locale arg0, jint arg1, JBooleanArray arg2) const
	{
		return callObjectMethod(
			"getName",
			"(Ljava/util/Locale;I[Z)Ljava/lang/String;",
			arg0.object(),
			arg1,
			arg2.object<jbooleanArray>()
		);
	}
	inline JString Currency::getName(android::icu::util::ULocale arg0, jint arg1, JString arg2, JBooleanArray arg3) const
	{
		return callObjectMethod(
			"getName",
			"(Landroid/icu/util/ULocale;ILjava/lang/String;[Z)Ljava/lang/String;",
			arg0.object(),
			arg1,
			arg2.object<jstring>(),
			arg3.object<jbooleanArray>()
		);
	}
	inline JString Currency::getName(java::util::Locale arg0, jint arg1, JString arg2, JBooleanArray arg3) const
	{
		return callObjectMethod(
			"getName",
			"(Ljava/util/Locale;ILjava/lang/String;[Z)Ljava/lang/String;",
			arg0.object(),
			arg1,
			arg2.object<jstring>(),
			arg3.object<jbooleanArray>()
		);
	}
	inline jint Currency::getNumericCode() const
	{
		return callMethod<jint>(
			"getNumericCode",
			"()I"
		);
	}
	inline jdouble Currency::getRoundingIncrement() const
	{
		return callMethod<jdouble>(
			"getRoundingIncrement",
			"()D"
		);
	}
	inline jdouble Currency::getRoundingIncrement(android::icu::util::Currency_CurrencyUsage arg0) const
	{
		return callMethod<jdouble>(
			"getRoundingIncrement",
			"(Landroid/icu/util/Currency$CurrencyUsage;)D",
			arg0.object()
		);
	}
	inline JString Currency::getSymbol() const
	{
		return callObjectMethod(
			"getSymbol",
			"()Ljava/lang/String;"
		);
	}
	inline JString Currency::getSymbol(android::icu::util::ULocale arg0) const
	{
		return callObjectMethod(
			"getSymbol",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString Currency::getSymbol(java::util::Locale arg0) const
	{
		return callObjectMethod(
			"getSymbol",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline java::util::Currency Currency::toJavaCurrency() const
	{
		return callObjectMethod(
			"toJavaCurrency",
			"()Ljava/util/Currency;"
		);
	}
	inline JString Currency::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::util

// Base class headers
#include "./MeasureUnit.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::util;
#endif
