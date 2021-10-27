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
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DecimalFormatSymbols",
			"CURRENCY_SPC_CURRENCY_MATCH"
		);
	}
	jint DecimalFormatSymbols::CURRENCY_SPC_INSERT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DecimalFormatSymbols",
			"CURRENCY_SPC_INSERT"
		);
	}
	jint DecimalFormatSymbols::CURRENCY_SPC_SURROUNDING_MATCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DecimalFormatSymbols",
			"CURRENCY_SPC_SURROUNDING_MATCH"
		);
	}
	
	DecimalFormatSymbols::DecimalFormatSymbols(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DecimalFormatSymbols::DecimalFormatSymbols()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DecimalFormatSymbols",
			"()V"
		);
	}
	DecimalFormatSymbols::DecimalFormatSymbols(android::icu::util::ULocale &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DecimalFormatSymbols",
			"(Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object()
		);
	}
	DecimalFormatSymbols::DecimalFormatSymbols(java::util::Locale &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DecimalFormatSymbols",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject DecimalFormatSymbols::forNumberingSystem(android::icu::util::ULocale arg0, android::icu::text::NumberingSystem arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DecimalFormatSymbols",
			"forNumberingSystem",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/NumberingSystem;)Landroid/icu/text/DecimalFormatSymbols;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DecimalFormatSymbols::forNumberingSystem(java::util::Locale arg0, android::icu::text::NumberingSystem arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DecimalFormatSymbols",
			"forNumberingSystem",
			"(Ljava/util/Locale;Landroid/icu/text/NumberingSystem;)Landroid/icu/text/DecimalFormatSymbols;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jarray DecimalFormatSymbols::getAvailableLocales()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DecimalFormatSymbols",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		).object<jarray>();
	}
	QAndroidJniObject DecimalFormatSymbols::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DecimalFormatSymbols",
			"getInstance",
			"()Landroid/icu/text/DecimalFormatSymbols;"
		);
	}
	QAndroidJniObject DecimalFormatSymbols::getInstance(android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DecimalFormatSymbols",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/DecimalFormatSymbols;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DecimalFormatSymbols::getInstance(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DecimalFormatSymbols",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/DecimalFormatSymbols;",
			arg0.__jniObject().object()
		);
	}
	jobject DecimalFormatSymbols::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean DecimalFormatSymbols::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject DecimalFormatSymbols::getCurrency()
	{
		return __thiz.callObjectMethod(
			"getCurrency",
			"()Landroid/icu/util/Currency;"
		);
	}
	jstring DecimalFormatSymbols::getCurrencySymbol()
	{
		return __thiz.callObjectMethod(
			"getCurrencySymbol",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jchar DecimalFormatSymbols::getDecimalSeparator()
	{
		return __thiz.callMethod<jchar>(
			"getDecimalSeparator",
			"()C"
		);
	}
	jstring DecimalFormatSymbols::getDecimalSeparatorString()
	{
		return __thiz.callObjectMethod(
			"getDecimalSeparatorString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jchar DecimalFormatSymbols::getDigit()
	{
		return __thiz.callMethod<jchar>(
			"getDigit",
			"()C"
		);
	}
	jarray DecimalFormatSymbols::getDigitStrings()
	{
		return __thiz.callObjectMethod(
			"getDigitStrings",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jcharArray DecimalFormatSymbols::getDigits()
	{
		return __thiz.callObjectMethod(
			"getDigits",
			"()[C"
		).object<jcharArray>();
	}
	jstring DecimalFormatSymbols::getExponentMultiplicationSign()
	{
		return __thiz.callObjectMethod(
			"getExponentMultiplicationSign",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DecimalFormatSymbols::getExponentSeparator()
	{
		return __thiz.callObjectMethod(
			"getExponentSeparator",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jchar DecimalFormatSymbols::getGroupingSeparator()
	{
		return __thiz.callMethod<jchar>(
			"getGroupingSeparator",
			"()C"
		);
	}
	jstring DecimalFormatSymbols::getGroupingSeparatorString()
	{
		return __thiz.callObjectMethod(
			"getGroupingSeparatorString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DecimalFormatSymbols::getInfinity()
	{
		return __thiz.callObjectMethod(
			"getInfinity",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DecimalFormatSymbols::getInternationalCurrencySymbol()
	{
		return __thiz.callObjectMethod(
			"getInternationalCurrencySymbol",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject DecimalFormatSymbols::getLocale()
	{
		return __thiz.callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	jchar DecimalFormatSymbols::getMinusSign()
	{
		return __thiz.callMethod<jchar>(
			"getMinusSign",
			"()C"
		);
	}
	jstring DecimalFormatSymbols::getMinusSignString()
	{
		return __thiz.callObjectMethod(
			"getMinusSignString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jchar DecimalFormatSymbols::getMonetaryDecimalSeparator()
	{
		return __thiz.callMethod<jchar>(
			"getMonetaryDecimalSeparator",
			"()C"
		);
	}
	jstring DecimalFormatSymbols::getMonetaryDecimalSeparatorString()
	{
		return __thiz.callObjectMethod(
			"getMonetaryDecimalSeparatorString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jchar DecimalFormatSymbols::getMonetaryGroupingSeparator()
	{
		return __thiz.callMethod<jchar>(
			"getMonetaryGroupingSeparator",
			"()C"
		);
	}
	jstring DecimalFormatSymbols::getMonetaryGroupingSeparatorString()
	{
		return __thiz.callObjectMethod(
			"getMonetaryGroupingSeparatorString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DecimalFormatSymbols::getNaN()
	{
		return __thiz.callObjectMethod(
			"getNaN",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jchar DecimalFormatSymbols::getPadEscape()
	{
		return __thiz.callMethod<jchar>(
			"getPadEscape",
			"()C"
		);
	}
	jstring DecimalFormatSymbols::getPatternForCurrencySpacing(jint arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"getPatternForCurrencySpacing",
			"(IZ)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jchar DecimalFormatSymbols::getPatternSeparator()
	{
		return __thiz.callMethod<jchar>(
			"getPatternSeparator",
			"()C"
		);
	}
	jchar DecimalFormatSymbols::getPerMill()
	{
		return __thiz.callMethod<jchar>(
			"getPerMill",
			"()C"
		);
	}
	jstring DecimalFormatSymbols::getPerMillString()
	{
		return __thiz.callObjectMethod(
			"getPerMillString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jchar DecimalFormatSymbols::getPercent()
	{
		return __thiz.callMethod<jchar>(
			"getPercent",
			"()C"
		);
	}
	jstring DecimalFormatSymbols::getPercentString()
	{
		return __thiz.callObjectMethod(
			"getPercentString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jchar DecimalFormatSymbols::getPlusSign()
	{
		return __thiz.callMethod<jchar>(
			"getPlusSign",
			"()C"
		);
	}
	jstring DecimalFormatSymbols::getPlusSignString()
	{
		return __thiz.callObjectMethod(
			"getPlusSignString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jchar DecimalFormatSymbols::getSignificantDigit()
	{
		return __thiz.callMethod<jchar>(
			"getSignificantDigit",
			"()C"
		);
	}
	QAndroidJniObject DecimalFormatSymbols::getULocale()
	{
		return __thiz.callObjectMethod(
			"getULocale",
			"()Landroid/icu/util/ULocale;"
		);
	}
	jchar DecimalFormatSymbols::getZeroDigit()
	{
		return __thiz.callMethod<jchar>(
			"getZeroDigit",
			"()C"
		);
	}
	jint DecimalFormatSymbols::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void DecimalFormatSymbols::setCurrency(android::icu::util::Currency arg0)
	{
		__thiz.callMethod<void>(
			"setCurrency",
			"(Landroid/icu/util/Currency;)V",
			arg0.__jniObject().object()
		);
	}
	void DecimalFormatSymbols::setCurrencySymbol(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setCurrencySymbol",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setCurrencySymbol(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setCurrencySymbol",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void DecimalFormatSymbols::setDecimalSeparator(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setDecimalSeparator",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setDecimalSeparatorString(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setDecimalSeparatorString",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setDecimalSeparatorString(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setDecimalSeparatorString",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void DecimalFormatSymbols::setDigit(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setDigit",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setDigitStrings(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setDigitStrings",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setExponentMultiplicationSign(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setExponentMultiplicationSign",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setExponentMultiplicationSign(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setExponentMultiplicationSign",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void DecimalFormatSymbols::setExponentSeparator(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setExponentSeparator",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setExponentSeparator(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setExponentSeparator",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void DecimalFormatSymbols::setGroupingSeparator(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setGroupingSeparator",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setGroupingSeparatorString(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setGroupingSeparatorString",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setGroupingSeparatorString(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setGroupingSeparatorString",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void DecimalFormatSymbols::setInfinity(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setInfinity",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setInfinity(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setInfinity",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void DecimalFormatSymbols::setInternationalCurrencySymbol(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setInternationalCurrencySymbol",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setInternationalCurrencySymbol(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setInternationalCurrencySymbol",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void DecimalFormatSymbols::setMinusSign(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setMinusSign",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setMinusSignString(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setMinusSignString",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setMinusSignString(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setMinusSignString",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void DecimalFormatSymbols::setMonetaryDecimalSeparator(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setMonetaryDecimalSeparator",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setMonetaryDecimalSeparatorString(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setMonetaryDecimalSeparatorString",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setMonetaryDecimalSeparatorString(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setMonetaryDecimalSeparatorString",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void DecimalFormatSymbols::setMonetaryGroupingSeparator(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setMonetaryGroupingSeparator",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setMonetaryGroupingSeparatorString(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setMonetaryGroupingSeparatorString",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setMonetaryGroupingSeparatorString(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setMonetaryGroupingSeparatorString",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void DecimalFormatSymbols::setNaN(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setNaN",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setNaN(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setNaN",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void DecimalFormatSymbols::setPadEscape(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setPadEscape",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setPatternForCurrencySpacing(jint arg0, jboolean arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"setPatternForCurrencySpacing",
			"(IZLjava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void DecimalFormatSymbols::setPatternForCurrencySpacing(jint arg0, jboolean arg1, const QString &arg2)
	{
		__thiz.callMethod<void>(
			"setPatternForCurrencySpacing",
			"(IZLjava/lang/String;)V",
			arg0,
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void DecimalFormatSymbols::setPatternSeparator(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setPatternSeparator",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setPerMill(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setPerMill",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setPerMillString(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPerMillString",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setPerMillString(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setPerMillString",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void DecimalFormatSymbols::setPercent(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setPercent",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setPercentString(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPercentString",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setPercentString(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setPercentString",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void DecimalFormatSymbols::setPlusSign(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setPlusSign",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setPlusSignString(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPlusSignString",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setPlusSignString(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setPlusSignString",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void DecimalFormatSymbols::setSignificantDigit(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setSignificantDigit",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setZeroDigit(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setZeroDigit",
			"(C)V",
			arg0
		);
	}
} // namespace android::icu::text

