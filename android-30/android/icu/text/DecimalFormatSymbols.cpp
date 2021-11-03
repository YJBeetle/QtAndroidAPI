#include "../../../JCharArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "./NumberingSystem.hpp"
#include "../util/Currency.hpp"
#include "../util/ULocale.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
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
	
	// QJniObject forward
	DecimalFormatSymbols::DecimalFormatSymbols(QJniObject obj) : JObject(obj) {}
	
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
	JArray DecimalFormatSymbols::getAvailableLocales()
	{
		return callStaticObjectMethod(
			"android.icu.text.DecimalFormatSymbols",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		);
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
	JObject DecimalFormatSymbols::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	jboolean DecimalFormatSymbols::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::icu::util::Currency DecimalFormatSymbols::getCurrency() const
	{
		return callObjectMethod(
			"getCurrency",
			"()Landroid/icu/util/Currency;"
		);
	}
	JString DecimalFormatSymbols::getCurrencySymbol() const
	{
		return callObjectMethod(
			"getCurrencySymbol",
			"()Ljava/lang/String;"
		);
	}
	jchar DecimalFormatSymbols::getDecimalSeparator() const
	{
		return callMethod<jchar>(
			"getDecimalSeparator",
			"()C"
		);
	}
	JString DecimalFormatSymbols::getDecimalSeparatorString() const
	{
		return callObjectMethod(
			"getDecimalSeparatorString",
			"()Ljava/lang/String;"
		);
	}
	jchar DecimalFormatSymbols::getDigit() const
	{
		return callMethod<jchar>(
			"getDigit",
			"()C"
		);
	}
	JArray DecimalFormatSymbols::getDigitStrings() const
	{
		return callObjectMethod(
			"getDigitStrings",
			"()[Ljava/lang/String;"
		);
	}
	JCharArray DecimalFormatSymbols::getDigits() const
	{
		return callObjectMethod(
			"getDigits",
			"()[C"
		);
	}
	JString DecimalFormatSymbols::getExponentMultiplicationSign() const
	{
		return callObjectMethod(
			"getExponentMultiplicationSign",
			"()Ljava/lang/String;"
		);
	}
	JString DecimalFormatSymbols::getExponentSeparator() const
	{
		return callObjectMethod(
			"getExponentSeparator",
			"()Ljava/lang/String;"
		);
	}
	jchar DecimalFormatSymbols::getGroupingSeparator() const
	{
		return callMethod<jchar>(
			"getGroupingSeparator",
			"()C"
		);
	}
	JString DecimalFormatSymbols::getGroupingSeparatorString() const
	{
		return callObjectMethod(
			"getGroupingSeparatorString",
			"()Ljava/lang/String;"
		);
	}
	JString DecimalFormatSymbols::getInfinity() const
	{
		return callObjectMethod(
			"getInfinity",
			"()Ljava/lang/String;"
		);
	}
	JString DecimalFormatSymbols::getInternationalCurrencySymbol() const
	{
		return callObjectMethod(
			"getInternationalCurrencySymbol",
			"()Ljava/lang/String;"
		);
	}
	java::util::Locale DecimalFormatSymbols::getLocale() const
	{
		return callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	jchar DecimalFormatSymbols::getMinusSign() const
	{
		return callMethod<jchar>(
			"getMinusSign",
			"()C"
		);
	}
	JString DecimalFormatSymbols::getMinusSignString() const
	{
		return callObjectMethod(
			"getMinusSignString",
			"()Ljava/lang/String;"
		);
	}
	jchar DecimalFormatSymbols::getMonetaryDecimalSeparator() const
	{
		return callMethod<jchar>(
			"getMonetaryDecimalSeparator",
			"()C"
		);
	}
	JString DecimalFormatSymbols::getMonetaryDecimalSeparatorString() const
	{
		return callObjectMethod(
			"getMonetaryDecimalSeparatorString",
			"()Ljava/lang/String;"
		);
	}
	jchar DecimalFormatSymbols::getMonetaryGroupingSeparator() const
	{
		return callMethod<jchar>(
			"getMonetaryGroupingSeparator",
			"()C"
		);
	}
	JString DecimalFormatSymbols::getMonetaryGroupingSeparatorString() const
	{
		return callObjectMethod(
			"getMonetaryGroupingSeparatorString",
			"()Ljava/lang/String;"
		);
	}
	JString DecimalFormatSymbols::getNaN() const
	{
		return callObjectMethod(
			"getNaN",
			"()Ljava/lang/String;"
		);
	}
	jchar DecimalFormatSymbols::getPadEscape() const
	{
		return callMethod<jchar>(
			"getPadEscape",
			"()C"
		);
	}
	JString DecimalFormatSymbols::getPatternForCurrencySpacing(jint arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"getPatternForCurrencySpacing",
			"(IZ)Ljava/lang/String;",
			arg0,
			arg1
		);
	}
	jchar DecimalFormatSymbols::getPatternSeparator() const
	{
		return callMethod<jchar>(
			"getPatternSeparator",
			"()C"
		);
	}
	jchar DecimalFormatSymbols::getPerMill() const
	{
		return callMethod<jchar>(
			"getPerMill",
			"()C"
		);
	}
	JString DecimalFormatSymbols::getPerMillString() const
	{
		return callObjectMethod(
			"getPerMillString",
			"()Ljava/lang/String;"
		);
	}
	jchar DecimalFormatSymbols::getPercent() const
	{
		return callMethod<jchar>(
			"getPercent",
			"()C"
		);
	}
	JString DecimalFormatSymbols::getPercentString() const
	{
		return callObjectMethod(
			"getPercentString",
			"()Ljava/lang/String;"
		);
	}
	jchar DecimalFormatSymbols::getPlusSign() const
	{
		return callMethod<jchar>(
			"getPlusSign",
			"()C"
		);
	}
	JString DecimalFormatSymbols::getPlusSignString() const
	{
		return callObjectMethod(
			"getPlusSignString",
			"()Ljava/lang/String;"
		);
	}
	jchar DecimalFormatSymbols::getSignificantDigit() const
	{
		return callMethod<jchar>(
			"getSignificantDigit",
			"()C"
		);
	}
	android::icu::util::ULocale DecimalFormatSymbols::getULocale() const
	{
		return callObjectMethod(
			"getULocale",
			"()Landroid/icu/util/ULocale;"
		);
	}
	jchar DecimalFormatSymbols::getZeroDigit() const
	{
		return callMethod<jchar>(
			"getZeroDigit",
			"()C"
		);
	}
	jint DecimalFormatSymbols::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void DecimalFormatSymbols::setCurrency(android::icu::util::Currency arg0) const
	{
		callMethod<void>(
			"setCurrency",
			"(Landroid/icu/util/Currency;)V",
			arg0.object()
		);
	}
	void DecimalFormatSymbols::setCurrencySymbol(JString arg0) const
	{
		callMethod<void>(
			"setCurrencySymbol",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DecimalFormatSymbols::setDecimalSeparator(jchar arg0) const
	{
		callMethod<void>(
			"setDecimalSeparator",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setDecimalSeparatorString(JString arg0) const
	{
		callMethod<void>(
			"setDecimalSeparatorString",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DecimalFormatSymbols::setDigit(jchar arg0) const
	{
		callMethod<void>(
			"setDigit",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setDigitStrings(JArray arg0) const
	{
		callMethod<void>(
			"setDigitStrings",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void DecimalFormatSymbols::setExponentMultiplicationSign(JString arg0) const
	{
		callMethod<void>(
			"setExponentMultiplicationSign",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DecimalFormatSymbols::setExponentSeparator(JString arg0) const
	{
		callMethod<void>(
			"setExponentSeparator",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DecimalFormatSymbols::setGroupingSeparator(jchar arg0) const
	{
		callMethod<void>(
			"setGroupingSeparator",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setGroupingSeparatorString(JString arg0) const
	{
		callMethod<void>(
			"setGroupingSeparatorString",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DecimalFormatSymbols::setInfinity(JString arg0) const
	{
		callMethod<void>(
			"setInfinity",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DecimalFormatSymbols::setInternationalCurrencySymbol(JString arg0) const
	{
		callMethod<void>(
			"setInternationalCurrencySymbol",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DecimalFormatSymbols::setMinusSign(jchar arg0) const
	{
		callMethod<void>(
			"setMinusSign",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setMinusSignString(JString arg0) const
	{
		callMethod<void>(
			"setMinusSignString",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DecimalFormatSymbols::setMonetaryDecimalSeparator(jchar arg0) const
	{
		callMethod<void>(
			"setMonetaryDecimalSeparator",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setMonetaryDecimalSeparatorString(JString arg0) const
	{
		callMethod<void>(
			"setMonetaryDecimalSeparatorString",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DecimalFormatSymbols::setMonetaryGroupingSeparator(jchar arg0) const
	{
		callMethod<void>(
			"setMonetaryGroupingSeparator",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setMonetaryGroupingSeparatorString(JString arg0) const
	{
		callMethod<void>(
			"setMonetaryGroupingSeparatorString",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DecimalFormatSymbols::setNaN(JString arg0) const
	{
		callMethod<void>(
			"setNaN",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DecimalFormatSymbols::setPadEscape(jchar arg0) const
	{
		callMethod<void>(
			"setPadEscape",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setPatternForCurrencySpacing(jint arg0, jboolean arg1, JString arg2) const
	{
		callMethod<void>(
			"setPatternForCurrencySpacing",
			"(IZLjava/lang/String;)V",
			arg0,
			arg1,
			arg2.object<jstring>()
		);
	}
	void DecimalFormatSymbols::setPatternSeparator(jchar arg0) const
	{
		callMethod<void>(
			"setPatternSeparator",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setPerMill(jchar arg0) const
	{
		callMethod<void>(
			"setPerMill",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setPerMillString(JString arg0) const
	{
		callMethod<void>(
			"setPerMillString",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DecimalFormatSymbols::setPercent(jchar arg0) const
	{
		callMethod<void>(
			"setPercent",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setPercentString(JString arg0) const
	{
		callMethod<void>(
			"setPercentString",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DecimalFormatSymbols::setPlusSign(jchar arg0) const
	{
		callMethod<void>(
			"setPlusSign",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setPlusSignString(JString arg0) const
	{
		callMethod<void>(
			"setPlusSignString",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DecimalFormatSymbols::setSignificantDigit(jchar arg0) const
	{
		callMethod<void>(
			"setSignificantDigit",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setZeroDigit(jchar arg0) const
	{
		callMethod<void>(
			"setZeroDigit",
			"(C)V",
			arg0
		);
	}
} // namespace android::icu::text

