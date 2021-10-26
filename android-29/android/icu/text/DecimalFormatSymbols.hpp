#pragma once

#ifndef ANDROID_ICU_TEXT_DECIMALFORMATSYMBOLS
#define ANDROID_ICU_TEXT_DECIMALFORMATSYMBOLS

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::util
{
	class ULocale;
}
namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::android::icu::util
{
	class Currency;
}
namespace __jni_impl::android::icu::text
{
	class NumberingSystem;
}

namespace __jni_impl::android::icu::text
{
	class DecimalFormatSymbols : public __JniBaseClass
	{
	public:
		// Fields
		static jint CURRENCY_SPC_CURRENCY_MATCH();
		static jint CURRENCY_SPC_INSERT();
		static jint CURRENCY_SPC_SURROUNDING_MATCH();
		
		// Constructors
		void __constructor(__jni_impl::android::icu::util::ULocale arg0);
		void __constructor(__jni_impl::java::util::Locale arg0);
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jobject clone();
		static QAndroidJniObject getInstance(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getInstance();
		static QAndroidJniObject getInstance(__jni_impl::android::icu::util::ULocale arg0);
		static jarray getAvailableLocales();
		QAndroidJniObject getLocale();
		QAndroidJniObject getCurrency();
		void setCurrency(__jni_impl::android::icu::util::Currency arg0);
		jstring getInternationalCurrencySymbol();
		jstring getCurrencySymbol();
		void setZeroDigit(jchar arg0);
		jchar getGroupingSeparator();
		void setGroupingSeparator(jchar arg0);
		void setDecimalSeparator(jchar arg0);
		jchar getPerMill();
		void setPerMill(jchar arg0);
		jchar getPercent();
		void setPercent(jchar arg0);
		jchar getDigit();
		void setDigit(jchar arg0);
		jchar getPatternSeparator();
		void setPatternSeparator(jchar arg0);
		jstring getInfinity();
		void setInfinity(jstring arg0);
		void setInfinity(const QString &arg0);
		jstring getNaN();
		void setNaN(jstring arg0);
		void setNaN(const QString &arg0);
		void setMinusSign(jchar arg0);
		void setCurrencySymbol(jstring arg0);
		void setCurrencySymbol(const QString &arg0);
		void setInternationalCurrencySymbol(jstring arg0);
		void setInternationalCurrencySymbol(const QString &arg0);
		jchar getMonetaryDecimalSeparator();
		void setMonetaryDecimalSeparator(jchar arg0);
		jstring getExponentSeparator();
		void setExponentSeparator(jstring arg0);
		void setExponentSeparator(const QString &arg0);
		jchar getZeroDigit();
		jchar getMinusSign();
		jchar getDecimalSeparator();
		static QAndroidJniObject forNumberingSystem(__jni_impl::java::util::Locale arg0, __jni_impl::android::icu::text::NumberingSystem arg1);
		static QAndroidJniObject forNumberingSystem(__jni_impl::android::icu::util::ULocale arg0, __jni_impl::android::icu::text::NumberingSystem arg1);
		jcharArray getDigits();
		jarray getDigitStrings();
		void setDigitStrings(jarray arg0);
		jchar getSignificantDigit();
		void setSignificantDigit(jchar arg0);
		jstring getGroupingSeparatorString();
		void setGroupingSeparatorString(jstring arg0);
		void setGroupingSeparatorString(const QString &arg0);
		jstring getDecimalSeparatorString();
		void setDecimalSeparatorString(jstring arg0);
		void setDecimalSeparatorString(const QString &arg0);
		jstring getPerMillString();
		void setPerMillString(jstring arg0);
		void setPerMillString(const QString &arg0);
		jstring getPercentString();
		void setPercentString(jstring arg0);
		void setPercentString(const QString &arg0);
		jstring getMinusSignString();
		void setMinusSignString(jstring arg0);
		void setMinusSignString(const QString &arg0);
		jchar getPlusSign();
		void setPlusSign(jchar arg0);
		jstring getPlusSignString();
		void setPlusSignString(jstring arg0);
		void setPlusSignString(const QString &arg0);
		jstring getMonetaryDecimalSeparatorString();
		void setMonetaryDecimalSeparatorString(jstring arg0);
		void setMonetaryDecimalSeparatorString(const QString &arg0);
		jchar getMonetaryGroupingSeparator();
		void setMonetaryGroupingSeparator(jchar arg0);
		jstring getMonetaryGroupingSeparatorString();
		void setMonetaryGroupingSeparatorString(jstring arg0);
		void setMonetaryGroupingSeparatorString(const QString &arg0);
		jstring getExponentMultiplicationSign();
		void setExponentMultiplicationSign(jstring arg0);
		void setExponentMultiplicationSign(const QString &arg0);
		jchar getPadEscape();
		void setPadEscape(jchar arg0);
		jstring getPatternForCurrencySpacing(jint arg0, jboolean arg1);
		void setPatternForCurrencySpacing(jint arg0, jboolean arg1, jstring arg2);
		void setPatternForCurrencySpacing(jint arg0, jboolean arg1, const QString &arg2);
		QAndroidJniObject getULocale();
	};
} // namespace __jni_impl::android::icu::text

#include "../util/ULocale.hpp"
#include "../../../java/util/Locale.hpp"
#include "../util/Currency.hpp"
#include "NumberingSystem.hpp"

namespace __jni_impl::android::icu::text
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
	
	// Constructors
	void DecimalFormatSymbols::__constructor(__jni_impl::android::icu::util::ULocale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DecimalFormatSymbols",
			"(Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object()
		);
	}
	void DecimalFormatSymbols::__constructor(__jni_impl::java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DecimalFormatSymbols",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	void DecimalFormatSymbols::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DecimalFormatSymbols",
			"()V"
		);
	}
	
	// Methods
	jboolean DecimalFormatSymbols::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint DecimalFormatSymbols::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jobject DecimalFormatSymbols::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject DecimalFormatSymbols::getInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DecimalFormatSymbols",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/DecimalFormatSymbols;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DecimalFormatSymbols::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DecimalFormatSymbols",
			"getInstance",
			"()Landroid/icu/text/DecimalFormatSymbols;"
		);
	}
	QAndroidJniObject DecimalFormatSymbols::getInstance(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DecimalFormatSymbols",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/DecimalFormatSymbols;",
			arg0.__jniObject().object()
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
	QAndroidJniObject DecimalFormatSymbols::getLocale()
	{
		return __thiz.callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	QAndroidJniObject DecimalFormatSymbols::getCurrency()
	{
		return __thiz.callObjectMethod(
			"getCurrency",
			"()Landroid/icu/util/Currency;"
		);
	}
	void DecimalFormatSymbols::setCurrency(__jni_impl::android::icu::util::Currency arg0)
	{
		__thiz.callMethod<void>(
			"setCurrency",
			"(Landroid/icu/util/Currency;)V",
			arg0.__jniObject().object()
		);
	}
	jstring DecimalFormatSymbols::getInternationalCurrencySymbol()
	{
		return __thiz.callObjectMethod(
			"getInternationalCurrencySymbol",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DecimalFormatSymbols::getCurrencySymbol()
	{
		return __thiz.callObjectMethod(
			"getCurrencySymbol",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void DecimalFormatSymbols::setZeroDigit(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setZeroDigit",
			"(C)V",
			arg0
		);
	}
	jchar DecimalFormatSymbols::getGroupingSeparator()
	{
		return __thiz.callMethod<jchar>(
			"getGroupingSeparator",
			"()C"
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
	void DecimalFormatSymbols::setDecimalSeparator(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setDecimalSeparator",
			"(C)V",
			arg0
		);
	}
	jchar DecimalFormatSymbols::getPerMill()
	{
		return __thiz.callMethod<jchar>(
			"getPerMill",
			"()C"
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
	jchar DecimalFormatSymbols::getPercent()
	{
		return __thiz.callMethod<jchar>(
			"getPercent",
			"()C"
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
	jchar DecimalFormatSymbols::getDigit()
	{
		return __thiz.callMethod<jchar>(
			"getDigit",
			"()C"
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
	jchar DecimalFormatSymbols::getPatternSeparator()
	{
		return __thiz.callMethod<jchar>(
			"getPatternSeparator",
			"()C"
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
	jstring DecimalFormatSymbols::getInfinity()
	{
		return __thiz.callObjectMethod(
			"getInfinity",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jstring DecimalFormatSymbols::getNaN()
	{
		return __thiz.callObjectMethod(
			"getNaN",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	void DecimalFormatSymbols::setMinusSign(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setMinusSign",
			"(C)V",
			arg0
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
	jchar DecimalFormatSymbols::getMonetaryDecimalSeparator()
	{
		return __thiz.callMethod<jchar>(
			"getMonetaryDecimalSeparator",
			"()C"
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
	jstring DecimalFormatSymbols::getExponentSeparator()
	{
		return __thiz.callObjectMethod(
			"getExponentSeparator",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jchar DecimalFormatSymbols::getZeroDigit()
	{
		return __thiz.callMethod<jchar>(
			"getZeroDigit",
			"()C"
		);
	}
	jchar DecimalFormatSymbols::getMinusSign()
	{
		return __thiz.callMethod<jchar>(
			"getMinusSign",
			"()C"
		);
	}
	jchar DecimalFormatSymbols::getDecimalSeparator()
	{
		return __thiz.callMethod<jchar>(
			"getDecimalSeparator",
			"()C"
		);
	}
	QAndroidJniObject DecimalFormatSymbols::forNumberingSystem(__jni_impl::java::util::Locale arg0, __jni_impl::android::icu::text::NumberingSystem arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DecimalFormatSymbols",
			"forNumberingSystem",
			"(Ljava/util/Locale;Landroid/icu/text/NumberingSystem;)Landroid/icu/text/DecimalFormatSymbols;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DecimalFormatSymbols::forNumberingSystem(__jni_impl::android::icu::util::ULocale arg0, __jni_impl::android::icu::text::NumberingSystem arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DecimalFormatSymbols",
			"forNumberingSystem",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/NumberingSystem;)Landroid/icu/text/DecimalFormatSymbols;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jcharArray DecimalFormatSymbols::getDigits()
	{
		return __thiz.callObjectMethod(
			"getDigits",
			"()[C"
		).object<jcharArray>();
	}
	jarray DecimalFormatSymbols::getDigitStrings()
	{
		return __thiz.callObjectMethod(
			"getDigitStrings",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	void DecimalFormatSymbols::setDigitStrings(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setDigitStrings",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	jchar DecimalFormatSymbols::getSignificantDigit()
	{
		return __thiz.callMethod<jchar>(
			"getSignificantDigit",
			"()C"
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
	jstring DecimalFormatSymbols::getGroupingSeparatorString()
	{
		return __thiz.callObjectMethod(
			"getGroupingSeparatorString",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jstring DecimalFormatSymbols::getDecimalSeparatorString()
	{
		return __thiz.callObjectMethod(
			"getDecimalSeparatorString",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jstring DecimalFormatSymbols::getPerMillString()
	{
		return __thiz.callObjectMethod(
			"getPerMillString",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jstring DecimalFormatSymbols::getPercentString()
	{
		return __thiz.callObjectMethod(
			"getPercentString",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jstring DecimalFormatSymbols::getMinusSignString()
	{
		return __thiz.callObjectMethod(
			"getMinusSignString",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jchar DecimalFormatSymbols::getPlusSign()
	{
		return __thiz.callMethod<jchar>(
			"getPlusSign",
			"()C"
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
	jstring DecimalFormatSymbols::getPlusSignString()
	{
		return __thiz.callObjectMethod(
			"getPlusSignString",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jstring DecimalFormatSymbols::getMonetaryDecimalSeparatorString()
	{
		return __thiz.callObjectMethod(
			"getMonetaryDecimalSeparatorString",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jchar DecimalFormatSymbols::getMonetaryGroupingSeparator()
	{
		return __thiz.callMethod<jchar>(
			"getMonetaryGroupingSeparator",
			"()C"
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
	jstring DecimalFormatSymbols::getMonetaryGroupingSeparatorString()
	{
		return __thiz.callObjectMethod(
			"getMonetaryGroupingSeparatorString",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jstring DecimalFormatSymbols::getExponentMultiplicationSign()
	{
		return __thiz.callObjectMethod(
			"getExponentMultiplicationSign",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jchar DecimalFormatSymbols::getPadEscape()
	{
		return __thiz.callMethod<jchar>(
			"getPadEscape",
			"()C"
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
	jstring DecimalFormatSymbols::getPatternForCurrencySpacing(jint arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"getPatternForCurrencySpacing",
			"(IZ)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
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
	QAndroidJniObject DecimalFormatSymbols::getULocale()
	{
		return __thiz.callObjectMethod(
			"getULocale",
			"()Landroid/icu/util/ULocale;"
		);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class DecimalFormatSymbols : public __jni_impl::android::icu::text::DecimalFormatSymbols
	{
	public:
		DecimalFormatSymbols(QAndroidJniObject obj) { __thiz = obj; }
		DecimalFormatSymbols(__jni_impl::android::icu::util::ULocale arg0)
		{
			__constructor(
				arg0);
		}
		DecimalFormatSymbols(__jni_impl::java::util::Locale arg0)
		{
			__constructor(
				arg0);
		}
		DecimalFormatSymbols()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_DECIMALFORMATSYMBOLS

