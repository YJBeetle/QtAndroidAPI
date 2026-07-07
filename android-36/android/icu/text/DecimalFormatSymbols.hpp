#pragma once

#include "../../../JCharArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "./NumberingSystem.def.hpp"
#include "../util/Currency.def.hpp"
#include "../util/ULocale.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./DecimalFormatSymbols.def.hpp"

namespace android::icu::text
{
	// Fields
	inline jint DecimalFormatSymbols::CURRENCY_SPC_CURRENCY_MATCH()
	{
		return getStaticField<jint>(
			"android.icu.text.DecimalFormatSymbols",
			"CURRENCY_SPC_CURRENCY_MATCH"
		);
	}
	inline jint DecimalFormatSymbols::CURRENCY_SPC_INSERT()
	{
		return getStaticField<jint>(
			"android.icu.text.DecimalFormatSymbols",
			"CURRENCY_SPC_INSERT"
		);
	}
	inline jint DecimalFormatSymbols::CURRENCY_SPC_SURROUNDING_MATCH()
	{
		return getStaticField<jint>(
			"android.icu.text.DecimalFormatSymbols",
			"CURRENCY_SPC_SURROUNDING_MATCH"
		);
	}
	
	// Constructors
	inline DecimalFormatSymbols::DecimalFormatSymbols()
		: JObject(
			"android.icu.text.DecimalFormatSymbols",
			"()V"
		) {}
	inline DecimalFormatSymbols::DecimalFormatSymbols(android::icu::util::ULocale arg0)
		: JObject(
			"android.icu.text.DecimalFormatSymbols",
			"(Landroid/icu/util/ULocale;)V",
			arg0.object()
		) {}
	inline DecimalFormatSymbols::DecimalFormatSymbols(java::util::Locale arg0)
		: JObject(
			"android.icu.text.DecimalFormatSymbols",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::icu::text::DecimalFormatSymbols DecimalFormatSymbols::forNumberingSystem(android::icu::util::ULocale arg0, android::icu::text::NumberingSystem arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.DecimalFormatSymbols",
			"forNumberingSystem",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/NumberingSystem;)Landroid/icu/text/DecimalFormatSymbols;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::icu::text::DecimalFormatSymbols DecimalFormatSymbols::forNumberingSystem(java::util::Locale arg0, android::icu::text::NumberingSystem arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.DecimalFormatSymbols",
			"forNumberingSystem",
			"(Ljava/util/Locale;Landroid/icu/text/NumberingSystem;)Landroid/icu/text/DecimalFormatSymbols;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JArray DecimalFormatSymbols::getAvailableLocales()
	{
		return callStaticObjectMethod(
			"android.icu.text.DecimalFormatSymbols",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		);
	}
	inline JArray DecimalFormatSymbols::getAvailableULocales()
	{
		return callStaticObjectMethod(
			"android.icu.text.DecimalFormatSymbols",
			"getAvailableULocales",
			"()[Landroid/icu/util/ULocale;"
		);
	}
	inline android::icu::text::DecimalFormatSymbols DecimalFormatSymbols::getInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.DecimalFormatSymbols",
			"getInstance",
			"()Landroid/icu/text/DecimalFormatSymbols;"
		);
	}
	inline android::icu::text::DecimalFormatSymbols DecimalFormatSymbols::getInstance(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DecimalFormatSymbols",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/DecimalFormatSymbols;",
			arg0.object()
		);
	}
	inline android::icu::text::DecimalFormatSymbols DecimalFormatSymbols::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DecimalFormatSymbols",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/DecimalFormatSymbols;",
			arg0.object()
		);
	}
	inline JObject DecimalFormatSymbols::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline jboolean DecimalFormatSymbols::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::icu::util::Currency DecimalFormatSymbols::getCurrency() const
	{
		return callObjectMethod(
			"getCurrency",
			"()Landroid/icu/util/Currency;"
		);
	}
	inline JString DecimalFormatSymbols::getCurrencySymbol() const
	{
		return callObjectMethod(
			"getCurrencySymbol",
			"()Ljava/lang/String;"
		);
	}
	inline jchar DecimalFormatSymbols::getDecimalSeparator() const
	{
		return callMethod<jchar>(
			"getDecimalSeparator",
			"()C"
		);
	}
	inline JString DecimalFormatSymbols::getDecimalSeparatorString() const
	{
		return callObjectMethod(
			"getDecimalSeparatorString",
			"()Ljava/lang/String;"
		);
	}
	inline jchar DecimalFormatSymbols::getDigit() const
	{
		return callMethod<jchar>(
			"getDigit",
			"()C"
		);
	}
	inline JArray DecimalFormatSymbols::getDigitStrings() const
	{
		return callObjectMethod(
			"getDigitStrings",
			"()[Ljava/lang/String;"
		);
	}
	inline JCharArray DecimalFormatSymbols::getDigits() const
	{
		return callObjectMethod(
			"getDigits",
			"()[C"
		);
	}
	inline JString DecimalFormatSymbols::getExponentMultiplicationSign() const
	{
		return callObjectMethod(
			"getExponentMultiplicationSign",
			"()Ljava/lang/String;"
		);
	}
	inline JString DecimalFormatSymbols::getExponentSeparator() const
	{
		return callObjectMethod(
			"getExponentSeparator",
			"()Ljava/lang/String;"
		);
	}
	inline jchar DecimalFormatSymbols::getGroupingSeparator() const
	{
		return callMethod<jchar>(
			"getGroupingSeparator",
			"()C"
		);
	}
	inline JString DecimalFormatSymbols::getGroupingSeparatorString() const
	{
		return callObjectMethod(
			"getGroupingSeparatorString",
			"()Ljava/lang/String;"
		);
	}
	inline JString DecimalFormatSymbols::getInfinity() const
	{
		return callObjectMethod(
			"getInfinity",
			"()Ljava/lang/String;"
		);
	}
	inline JString DecimalFormatSymbols::getInternationalCurrencySymbol() const
	{
		return callObjectMethod(
			"getInternationalCurrencySymbol",
			"()Ljava/lang/String;"
		);
	}
	inline java::util::Locale DecimalFormatSymbols::getLocale() const
	{
		return callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	inline jchar DecimalFormatSymbols::getMinusSign() const
	{
		return callMethod<jchar>(
			"getMinusSign",
			"()C"
		);
	}
	inline JString DecimalFormatSymbols::getMinusSignString() const
	{
		return callObjectMethod(
			"getMinusSignString",
			"()Ljava/lang/String;"
		);
	}
	inline jchar DecimalFormatSymbols::getMonetaryDecimalSeparator() const
	{
		return callMethod<jchar>(
			"getMonetaryDecimalSeparator",
			"()C"
		);
	}
	inline JString DecimalFormatSymbols::getMonetaryDecimalSeparatorString() const
	{
		return callObjectMethod(
			"getMonetaryDecimalSeparatorString",
			"()Ljava/lang/String;"
		);
	}
	inline jchar DecimalFormatSymbols::getMonetaryGroupingSeparator() const
	{
		return callMethod<jchar>(
			"getMonetaryGroupingSeparator",
			"()C"
		);
	}
	inline JString DecimalFormatSymbols::getMonetaryGroupingSeparatorString() const
	{
		return callObjectMethod(
			"getMonetaryGroupingSeparatorString",
			"()Ljava/lang/String;"
		);
	}
	inline JString DecimalFormatSymbols::getNaN() const
	{
		return callObjectMethod(
			"getNaN",
			"()Ljava/lang/String;"
		);
	}
	inline jchar DecimalFormatSymbols::getPadEscape() const
	{
		return callMethod<jchar>(
			"getPadEscape",
			"()C"
		);
	}
	inline JString DecimalFormatSymbols::getPatternForCurrencySpacing(jint arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"getPatternForCurrencySpacing",
			"(IZ)Ljava/lang/String;",
			arg0,
			arg1
		);
	}
	inline jchar DecimalFormatSymbols::getPatternSeparator() const
	{
		return callMethod<jchar>(
			"getPatternSeparator",
			"()C"
		);
	}
	inline jchar DecimalFormatSymbols::getPerMill() const
	{
		return callMethod<jchar>(
			"getPerMill",
			"()C"
		);
	}
	inline JString DecimalFormatSymbols::getPerMillString() const
	{
		return callObjectMethod(
			"getPerMillString",
			"()Ljava/lang/String;"
		);
	}
	inline jchar DecimalFormatSymbols::getPercent() const
	{
		return callMethod<jchar>(
			"getPercent",
			"()C"
		);
	}
	inline JString DecimalFormatSymbols::getPercentString() const
	{
		return callObjectMethod(
			"getPercentString",
			"()Ljava/lang/String;"
		);
	}
	inline jchar DecimalFormatSymbols::getPlusSign() const
	{
		return callMethod<jchar>(
			"getPlusSign",
			"()C"
		);
	}
	inline JString DecimalFormatSymbols::getPlusSignString() const
	{
		return callObjectMethod(
			"getPlusSignString",
			"()Ljava/lang/String;"
		);
	}
	inline jchar DecimalFormatSymbols::getSignificantDigit() const
	{
		return callMethod<jchar>(
			"getSignificantDigit",
			"()C"
		);
	}
	inline android::icu::util::ULocale DecimalFormatSymbols::getULocale() const
	{
		return callObjectMethod(
			"getULocale",
			"()Landroid/icu/util/ULocale;"
		);
	}
	inline jchar DecimalFormatSymbols::getZeroDigit() const
	{
		return callMethod<jchar>(
			"getZeroDigit",
			"()C"
		);
	}
	inline jint DecimalFormatSymbols::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void DecimalFormatSymbols::setCurrency(android::icu::util::Currency arg0) const
	{
		callMethod<void>(
			"setCurrency",
			"(Landroid/icu/util/Currency;)V",
			arg0.object()
		);
	}
	inline void DecimalFormatSymbols::setCurrencySymbol(JString arg0) const
	{
		callMethod<void>(
			"setCurrencySymbol",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void DecimalFormatSymbols::setDecimalSeparator(jchar arg0) const
	{
		callMethod<void>(
			"setDecimalSeparator",
			"(C)V",
			arg0
		);
	}
	inline void DecimalFormatSymbols::setDecimalSeparatorString(JString arg0) const
	{
		callMethod<void>(
			"setDecimalSeparatorString",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void DecimalFormatSymbols::setDigit(jchar arg0) const
	{
		callMethod<void>(
			"setDigit",
			"(C)V",
			arg0
		);
	}
	inline void DecimalFormatSymbols::setDigitStrings(JArray arg0) const
	{
		callMethod<void>(
			"setDigitStrings",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	inline void DecimalFormatSymbols::setExponentMultiplicationSign(JString arg0) const
	{
		callMethod<void>(
			"setExponentMultiplicationSign",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void DecimalFormatSymbols::setExponentSeparator(JString arg0) const
	{
		callMethod<void>(
			"setExponentSeparator",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void DecimalFormatSymbols::setGroupingSeparator(jchar arg0) const
	{
		callMethod<void>(
			"setGroupingSeparator",
			"(C)V",
			arg0
		);
	}
	inline void DecimalFormatSymbols::setGroupingSeparatorString(JString arg0) const
	{
		callMethod<void>(
			"setGroupingSeparatorString",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void DecimalFormatSymbols::setInfinity(JString arg0) const
	{
		callMethod<void>(
			"setInfinity",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void DecimalFormatSymbols::setInternationalCurrencySymbol(JString arg0) const
	{
		callMethod<void>(
			"setInternationalCurrencySymbol",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void DecimalFormatSymbols::setMinusSign(jchar arg0) const
	{
		callMethod<void>(
			"setMinusSign",
			"(C)V",
			arg0
		);
	}
	inline void DecimalFormatSymbols::setMinusSignString(JString arg0) const
	{
		callMethod<void>(
			"setMinusSignString",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void DecimalFormatSymbols::setMonetaryDecimalSeparator(jchar arg0) const
	{
		callMethod<void>(
			"setMonetaryDecimalSeparator",
			"(C)V",
			arg0
		);
	}
	inline void DecimalFormatSymbols::setMonetaryDecimalSeparatorString(JString arg0) const
	{
		callMethod<void>(
			"setMonetaryDecimalSeparatorString",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void DecimalFormatSymbols::setMonetaryGroupingSeparator(jchar arg0) const
	{
		callMethod<void>(
			"setMonetaryGroupingSeparator",
			"(C)V",
			arg0
		);
	}
	inline void DecimalFormatSymbols::setMonetaryGroupingSeparatorString(JString arg0) const
	{
		callMethod<void>(
			"setMonetaryGroupingSeparatorString",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void DecimalFormatSymbols::setNaN(JString arg0) const
	{
		callMethod<void>(
			"setNaN",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void DecimalFormatSymbols::setPadEscape(jchar arg0) const
	{
		callMethod<void>(
			"setPadEscape",
			"(C)V",
			arg0
		);
	}
	inline void DecimalFormatSymbols::setPatternForCurrencySpacing(jint arg0, jboolean arg1, JString arg2) const
	{
		callMethod<void>(
			"setPatternForCurrencySpacing",
			"(IZLjava/lang/String;)V",
			arg0,
			arg1,
			arg2.object<jstring>()
		);
	}
	inline void DecimalFormatSymbols::setPatternSeparator(jchar arg0) const
	{
		callMethod<void>(
			"setPatternSeparator",
			"(C)V",
			arg0
		);
	}
	inline void DecimalFormatSymbols::setPerMill(jchar arg0) const
	{
		callMethod<void>(
			"setPerMill",
			"(C)V",
			arg0
		);
	}
	inline void DecimalFormatSymbols::setPerMillString(JString arg0) const
	{
		callMethod<void>(
			"setPerMillString",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void DecimalFormatSymbols::setPercent(jchar arg0) const
	{
		callMethod<void>(
			"setPercent",
			"(C)V",
			arg0
		);
	}
	inline void DecimalFormatSymbols::setPercentString(JString arg0) const
	{
		callMethod<void>(
			"setPercentString",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void DecimalFormatSymbols::setPlusSign(jchar arg0) const
	{
		callMethod<void>(
			"setPlusSign",
			"(C)V",
			arg0
		);
	}
	inline void DecimalFormatSymbols::setPlusSignString(JString arg0) const
	{
		callMethod<void>(
			"setPlusSignString",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void DecimalFormatSymbols::setSignificantDigit(jchar arg0) const
	{
		callMethod<void>(
			"setSignificantDigit",
			"(C)V",
			arg0
		);
	}
	inline void DecimalFormatSymbols::setZeroDigit(jchar arg0) const
	{
		callMethod<void>(
			"setZeroDigit",
			"(C)V",
			arg0
		);
	}
} // namespace android::icu::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
