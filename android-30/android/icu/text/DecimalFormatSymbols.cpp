#include "./NumberingSystem.hpp"
#include "../util/Currency.hpp"
#include "../util/ULocale.hpp"
#include "../../../java/util/Locale.hpp"
#include "./DecimalFormatSymbols.hpp"

namespace android::icu::text
{
	// Fields
	jint DecimalFormatSymbols::CURRENCY_SPC_CURRENCY_MATCH()
	{
		return getStaticField<jint>(
			"android.icu.text.DecimalFormatSymbols",
			"CURRENCY_SPC_CURRENCY_MATCH"
		);
	}
	jint DecimalFormatSymbols::CURRENCY_SPC_INSERT()
	{
		return getStaticField<jint>(
			"android.icu.text.DecimalFormatSymbols",
			"CURRENCY_SPC_INSERT"
		);
	}
	jint DecimalFormatSymbols::CURRENCY_SPC_SURROUNDING_MATCH()
	{
		return getStaticField<jint>(
			"android.icu.text.DecimalFormatSymbols",
			"CURRENCY_SPC_SURROUNDING_MATCH"
		);
	}
	
	// QAndroidJniObject forward
	DecimalFormatSymbols::DecimalFormatSymbols(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	DecimalFormatSymbols::DecimalFormatSymbols()
		: JObject(
			"android.icu.text.DecimalFormatSymbols",
			"()V"
		) {}
	DecimalFormatSymbols::DecimalFormatSymbols(android::icu::util::ULocale arg0)
		: JObject(
			"android.icu.text.DecimalFormatSymbols",
			"(Landroid/icu/util/ULocale;)V",
			arg0.object()
		) {}
	DecimalFormatSymbols::DecimalFormatSymbols(java::util::Locale arg0)
		: JObject(
			"android.icu.text.DecimalFormatSymbols",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	
	// Methods
	android::icu::text::DecimalFormatSymbols DecimalFormatSymbols::forNumberingSystem(android::icu::util::ULocale arg0, android::icu::text::NumberingSystem arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.DecimalFormatSymbols",
			"forNumberingSystem",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/NumberingSystem;)Landroid/icu/text/DecimalFormatSymbols;",
			arg0.object(),
			arg1.object()
		);
	}
	android::icu::text::DecimalFormatSymbols DecimalFormatSymbols::forNumberingSystem(java::util::Locale arg0, android::icu::text::NumberingSystem arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.DecimalFormatSymbols",
			"forNumberingSystem",
			"(Ljava/util/Locale;Landroid/icu/text/NumberingSystem;)Landroid/icu/text/DecimalFormatSymbols;",
			arg0.object(),
			arg1.object()
		);
	}
	jarray DecimalFormatSymbols::getAvailableLocales()
	{
		return callStaticObjectMethod(
			"android.icu.text.DecimalFormatSymbols",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		).object<jarray>();
	}
	android::icu::text::DecimalFormatSymbols DecimalFormatSymbols::getInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.DecimalFormatSymbols",
			"getInstance",
			"()Landroid/icu/text/DecimalFormatSymbols;"
		);
	}
	android::icu::text::DecimalFormatSymbols DecimalFormatSymbols::getInstance(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DecimalFormatSymbols",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/DecimalFormatSymbols;",
			arg0.object()
		);
	}
	android::icu::text::DecimalFormatSymbols DecimalFormatSymbols::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DecimalFormatSymbols",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/DecimalFormatSymbols;",
			arg0.object()
		);
	}
	jobject DecimalFormatSymbols::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean DecimalFormatSymbols::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::icu::util::Currency DecimalFormatSymbols::getCurrency()
	{
		return callObjectMethod(
			"getCurrency",
			"()Landroid/icu/util/Currency;"
		);
	}
	jstring DecimalFormatSymbols::getCurrencySymbol()
	{
		return callObjectMethod(
			"getCurrencySymbol",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jchar DecimalFormatSymbols::getDecimalSeparator()
	{
		return callMethod<jchar>(
			"getDecimalSeparator",
			"()C"
		);
	}
	jstring DecimalFormatSymbols::getDecimalSeparatorString()
	{
		return callObjectMethod(
			"getDecimalSeparatorString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jchar DecimalFormatSymbols::getDigit()
	{
		return callMethod<jchar>(
			"getDigit",
			"()C"
		);
	}
	jarray DecimalFormatSymbols::getDigitStrings()
	{
		return callObjectMethod(
			"getDigitStrings",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jcharArray DecimalFormatSymbols::getDigits()
	{
		return callObjectMethod(
			"getDigits",
			"()[C"
		).object<jcharArray>();
	}
	jstring DecimalFormatSymbols::getExponentMultiplicationSign()
	{
		return callObjectMethod(
			"getExponentMultiplicationSign",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DecimalFormatSymbols::getExponentSeparator()
	{
		return callObjectMethod(
			"getExponentSeparator",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jchar DecimalFormatSymbols::getGroupingSeparator()
	{
		return callMethod<jchar>(
			"getGroupingSeparator",
			"()C"
		);
	}
	jstring DecimalFormatSymbols::getGroupingSeparatorString()
	{
		return callObjectMethod(
			"getGroupingSeparatorString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DecimalFormatSymbols::getInfinity()
	{
		return callObjectMethod(
			"getInfinity",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DecimalFormatSymbols::getInternationalCurrencySymbol()
	{
		return callObjectMethod(
			"getInternationalCurrencySymbol",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::util::Locale DecimalFormatSymbols::getLocale()
	{
		return callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	jchar DecimalFormatSymbols::getMinusSign()
	{
		return callMethod<jchar>(
			"getMinusSign",
			"()C"
		);
	}
	jstring DecimalFormatSymbols::getMinusSignString()
	{
		return callObjectMethod(
			"getMinusSignString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jchar DecimalFormatSymbols::getMonetaryDecimalSeparator()
	{
		return callMethod<jchar>(
			"getMonetaryDecimalSeparator",
			"()C"
		);
	}
	jstring DecimalFormatSymbols::getMonetaryDecimalSeparatorString()
	{
		return callObjectMethod(
			"getMonetaryDecimalSeparatorString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jchar DecimalFormatSymbols::getMonetaryGroupingSeparator()
	{
		return callMethod<jchar>(
			"getMonetaryGroupingSeparator",
			"()C"
		);
	}
	jstring DecimalFormatSymbols::getMonetaryGroupingSeparatorString()
	{
		return callObjectMethod(
			"getMonetaryGroupingSeparatorString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DecimalFormatSymbols::getNaN()
	{
		return callObjectMethod(
			"getNaN",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jchar DecimalFormatSymbols::getPadEscape()
	{
		return callMethod<jchar>(
			"getPadEscape",
			"()C"
		);
	}
	jstring DecimalFormatSymbols::getPatternForCurrencySpacing(jint arg0, jboolean arg1)
	{
		return callObjectMethod(
			"getPatternForCurrencySpacing",
			"(IZ)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jchar DecimalFormatSymbols::getPatternSeparator()
	{
		return callMethod<jchar>(
			"getPatternSeparator",
			"()C"
		);
	}
	jchar DecimalFormatSymbols::getPerMill()
	{
		return callMethod<jchar>(
			"getPerMill",
			"()C"
		);
	}
	jstring DecimalFormatSymbols::getPerMillString()
	{
		return callObjectMethod(
			"getPerMillString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jchar DecimalFormatSymbols::getPercent()
	{
		return callMethod<jchar>(
			"getPercent",
			"()C"
		);
	}
	jstring DecimalFormatSymbols::getPercentString()
	{
		return callObjectMethod(
			"getPercentString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jchar DecimalFormatSymbols::getPlusSign()
	{
		return callMethod<jchar>(
			"getPlusSign",
			"()C"
		);
	}
	jstring DecimalFormatSymbols::getPlusSignString()
	{
		return callObjectMethod(
			"getPlusSignString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jchar DecimalFormatSymbols::getSignificantDigit()
	{
		return callMethod<jchar>(
			"getSignificantDigit",
			"()C"
		);
	}
	android::icu::util::ULocale DecimalFormatSymbols::getULocale()
	{
		return callObjectMethod(
			"getULocale",
			"()Landroid/icu/util/ULocale;"
		);
	}
	jchar DecimalFormatSymbols::getZeroDigit()
	{
		return callMethod<jchar>(
			"getZeroDigit",
			"()C"
		);
	}
	jint DecimalFormatSymbols::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void DecimalFormatSymbols::setCurrency(android::icu::util::Currency arg0)
	{
		callMethod<void>(
			"setCurrency",
			"(Landroid/icu/util/Currency;)V",
			arg0.object()
		);
	}
	void DecimalFormatSymbols::setCurrencySymbol(jstring arg0)
	{
		callMethod<void>(
			"setCurrencySymbol",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setDecimalSeparator(jchar arg0)
	{
		callMethod<void>(
			"setDecimalSeparator",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setDecimalSeparatorString(jstring arg0)
	{
		callMethod<void>(
			"setDecimalSeparatorString",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setDigit(jchar arg0)
	{
		callMethod<void>(
			"setDigit",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setDigitStrings(jarray arg0)
	{
		callMethod<void>(
			"setDigitStrings",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setExponentMultiplicationSign(jstring arg0)
	{
		callMethod<void>(
			"setExponentMultiplicationSign",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setExponentSeparator(jstring arg0)
	{
		callMethod<void>(
			"setExponentSeparator",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setGroupingSeparator(jchar arg0)
	{
		callMethod<void>(
			"setGroupingSeparator",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setGroupingSeparatorString(jstring arg0)
	{
		callMethod<void>(
			"setGroupingSeparatorString",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setInfinity(jstring arg0)
	{
		callMethod<void>(
			"setInfinity",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setInternationalCurrencySymbol(jstring arg0)
	{
		callMethod<void>(
			"setInternationalCurrencySymbol",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setMinusSign(jchar arg0)
	{
		callMethod<void>(
			"setMinusSign",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setMinusSignString(jstring arg0)
	{
		callMethod<void>(
			"setMinusSignString",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setMonetaryDecimalSeparator(jchar arg0)
	{
		callMethod<void>(
			"setMonetaryDecimalSeparator",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setMonetaryDecimalSeparatorString(jstring arg0)
	{
		callMethod<void>(
			"setMonetaryDecimalSeparatorString",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setMonetaryGroupingSeparator(jchar arg0)
	{
		callMethod<void>(
			"setMonetaryGroupingSeparator",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setMonetaryGroupingSeparatorString(jstring arg0)
	{
		callMethod<void>(
			"setMonetaryGroupingSeparatorString",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setNaN(jstring arg0)
	{
		callMethod<void>(
			"setNaN",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setPadEscape(jchar arg0)
	{
		callMethod<void>(
			"setPadEscape",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setPatternForCurrencySpacing(jint arg0, jboolean arg1, jstring arg2)
	{
		callMethod<void>(
			"setPatternForCurrencySpacing",
			"(IZLjava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void DecimalFormatSymbols::setPatternSeparator(jchar arg0)
	{
		callMethod<void>(
			"setPatternSeparator",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setPerMill(jchar arg0)
	{
		callMethod<void>(
			"setPerMill",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setPerMillString(jstring arg0)
	{
		callMethod<void>(
			"setPerMillString",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setPercent(jchar arg0)
	{
		callMethod<void>(
			"setPercent",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setPercentString(jstring arg0)
	{
		callMethod<void>(
			"setPercentString",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setPlusSign(jchar arg0)
	{
		callMethod<void>(
			"setPlusSign",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setPlusSignString(jstring arg0)
	{
		callMethod<void>(
			"setPlusSignString",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setSignificantDigit(jchar arg0)
	{
		callMethod<void>(
			"setSignificantDigit",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setZeroDigit(jchar arg0)
	{
		callMethod<void>(
			"setZeroDigit",
			"(C)V",
			arg0
		);
	}
} // namespace android::icu::text

