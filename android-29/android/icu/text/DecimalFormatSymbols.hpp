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
		QAndroidJniObject clone();
		static QAndroidJniObject getInstance(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getInstance();
		static QAndroidJniObject getInstance(__jni_impl::android::icu::util::ULocale arg0);
		static QAndroidJniObject getAvailableLocales();
		QAndroidJniObject getLocale();
		QAndroidJniObject getCurrency();
		void setCurrency(__jni_impl::android::icu::util::Currency arg0);
		QAndroidJniObject getInternationalCurrencySymbol();
		QAndroidJniObject getCurrencySymbol();
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
		QAndroidJniObject getInfinity();
		void setInfinity(jstring arg0);
		QAndroidJniObject getNaN();
		void setNaN(jstring arg0);
		void setMinusSign(jchar arg0);
		void setCurrencySymbol(jstring arg0);
		void setInternationalCurrencySymbol(jstring arg0);
		jchar getMonetaryDecimalSeparator();
		void setMonetaryDecimalSeparator(jchar arg0);
		QAndroidJniObject getExponentSeparator();
		void setExponentSeparator(jstring arg0);
		jchar getZeroDigit();
		jchar getMinusSign();
		jchar getDecimalSeparator();
		static QAndroidJniObject forNumberingSystem(__jni_impl::java::util::Locale arg0, __jni_impl::android::icu::text::NumberingSystem arg1);
		static QAndroidJniObject forNumberingSystem(__jni_impl::android::icu::util::ULocale arg0, __jni_impl::android::icu::text::NumberingSystem arg1);
		QAndroidJniObject getDigits();
		QAndroidJniObject getDigitStrings();
		void setDigitStrings(jarray arg0);
		jchar getSignificantDigit();
		void setSignificantDigit(jchar arg0);
		QAndroidJniObject getGroupingSeparatorString();
		void setGroupingSeparatorString(jstring arg0);
		QAndroidJniObject getDecimalSeparatorString();
		void setDecimalSeparatorString(jstring arg0);
		QAndroidJniObject getPerMillString();
		void setPerMillString(jstring arg0);
		QAndroidJniObject getPercentString();
		void setPercentString(jstring arg0);
		QAndroidJniObject getMinusSignString();
		void setMinusSignString(jstring arg0);
		jchar getPlusSign();
		void setPlusSign(jchar arg0);
		QAndroidJniObject getPlusSignString();
		void setPlusSignString(jstring arg0);
		QAndroidJniObject getMonetaryDecimalSeparatorString();
		void setMonetaryDecimalSeparatorString(jstring arg0);
		jchar getMonetaryGroupingSeparator();
		void setMonetaryGroupingSeparator(jchar arg0);
		QAndroidJniObject getMonetaryGroupingSeparatorString();
		void setMonetaryGroupingSeparatorString(jstring arg0);
		QAndroidJniObject getExponentMultiplicationSign();
		void setExponentMultiplicationSign(jstring arg0);
		jchar getPadEscape();
		void setPadEscape(jchar arg0);
		QAndroidJniObject getPatternForCurrencySpacing(jint arg0, jboolean arg1);
		void setPatternForCurrencySpacing(jint arg0, jboolean arg1, jstring arg2);
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
			"CURRENCY_SPC_CURRENCY_MATCH");
	}
	jint DecimalFormatSymbols::CURRENCY_SPC_INSERT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DecimalFormatSymbols",
			"CURRENCY_SPC_INSERT");
	}
	jint DecimalFormatSymbols::CURRENCY_SPC_SURROUNDING_MATCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DecimalFormatSymbols",
			"CURRENCY_SPC_SURROUNDING_MATCH");
	}
	
	// Constructors
	void DecimalFormatSymbols::__constructor(__jni_impl::android::icu::util::ULocale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DecimalFormatSymbols",
			"(Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object());
	}
	void DecimalFormatSymbols::__constructor(__jni_impl::java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DecimalFormatSymbols",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object());
	}
	void DecimalFormatSymbols::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DecimalFormatSymbols",
			"()V");
	}
	
	// Methods
	jboolean DecimalFormatSymbols::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint DecimalFormatSymbols::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject DecimalFormatSymbols::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject DecimalFormatSymbols::getInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DecimalFormatSymbols",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/DecimalFormatSymbols;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject DecimalFormatSymbols::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DecimalFormatSymbols",
			"getInstance",
			"()Landroid/icu/text/DecimalFormatSymbols;");
	}
	QAndroidJniObject DecimalFormatSymbols::getInstance(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DecimalFormatSymbols",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/DecimalFormatSymbols;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject DecimalFormatSymbols::getAvailableLocales()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DecimalFormatSymbols",
			"getAvailableLocales",
			"()[Ljava/util/Locale;");
	}
	QAndroidJniObject DecimalFormatSymbols::getLocale()
	{
		return __thiz.callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;");
	}
	QAndroidJniObject DecimalFormatSymbols::getCurrency()
	{
		return __thiz.callObjectMethod(
			"getCurrency",
			"()Landroid/icu/util/Currency;");
	}
	void DecimalFormatSymbols::setCurrency(__jni_impl::android::icu::util::Currency arg0)
	{
		__thiz.callMethod<void>(
			"setCurrency",
			"(Landroid/icu/util/Currency;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject DecimalFormatSymbols::getInternationalCurrencySymbol()
	{
		return __thiz.callObjectMethod(
			"getInternationalCurrencySymbol",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject DecimalFormatSymbols::getCurrencySymbol()
	{
		return __thiz.callObjectMethod(
			"getCurrencySymbol",
			"()Ljava/lang/String;");
	}
	void DecimalFormatSymbols::setZeroDigit(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setZeroDigit",
			"(C)V",
			arg0);
	}
	jchar DecimalFormatSymbols::getGroupingSeparator()
	{
		return __thiz.callMethod<jchar>(
			"getGroupingSeparator",
			"()C");
	}
	void DecimalFormatSymbols::setGroupingSeparator(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setGroupingSeparator",
			"(C)V",
			arg0);
	}
	void DecimalFormatSymbols::setDecimalSeparator(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setDecimalSeparator",
			"(C)V",
			arg0);
	}
	jchar DecimalFormatSymbols::getPerMill()
	{
		return __thiz.callMethod<jchar>(
			"getPerMill",
			"()C");
	}
	void DecimalFormatSymbols::setPerMill(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setPerMill",
			"(C)V",
			arg0);
	}
	jchar DecimalFormatSymbols::getPercent()
	{
		return __thiz.callMethod<jchar>(
			"getPercent",
			"()C");
	}
	void DecimalFormatSymbols::setPercent(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setPercent",
			"(C)V",
			arg0);
	}
	jchar DecimalFormatSymbols::getDigit()
	{
		return __thiz.callMethod<jchar>(
			"getDigit",
			"()C");
	}
	void DecimalFormatSymbols::setDigit(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setDigit",
			"(C)V",
			arg0);
	}
	jchar DecimalFormatSymbols::getPatternSeparator()
	{
		return __thiz.callMethod<jchar>(
			"getPatternSeparator",
			"()C");
	}
	void DecimalFormatSymbols::setPatternSeparator(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setPatternSeparator",
			"(C)V",
			arg0);
	}
	QAndroidJniObject DecimalFormatSymbols::getInfinity()
	{
		return __thiz.callObjectMethod(
			"getInfinity",
			"()Ljava/lang/String;");
	}
	void DecimalFormatSymbols::setInfinity(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setInfinity",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject DecimalFormatSymbols::getNaN()
	{
		return __thiz.callObjectMethod(
			"getNaN",
			"()Ljava/lang/String;");
	}
	void DecimalFormatSymbols::setNaN(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setNaN",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void DecimalFormatSymbols::setMinusSign(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setMinusSign",
			"(C)V",
			arg0);
	}
	void DecimalFormatSymbols::setCurrencySymbol(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setCurrencySymbol",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void DecimalFormatSymbols::setInternationalCurrencySymbol(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setInternationalCurrencySymbol",
			"(Ljava/lang/String;)V",
			arg0);
	}
	jchar DecimalFormatSymbols::getMonetaryDecimalSeparator()
	{
		return __thiz.callMethod<jchar>(
			"getMonetaryDecimalSeparator",
			"()C");
	}
	void DecimalFormatSymbols::setMonetaryDecimalSeparator(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setMonetaryDecimalSeparator",
			"(C)V",
			arg0);
	}
	QAndroidJniObject DecimalFormatSymbols::getExponentSeparator()
	{
		return __thiz.callObjectMethod(
			"getExponentSeparator",
			"()Ljava/lang/String;");
	}
	void DecimalFormatSymbols::setExponentSeparator(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setExponentSeparator",
			"(Ljava/lang/String;)V",
			arg0);
	}
	jchar DecimalFormatSymbols::getZeroDigit()
	{
		return __thiz.callMethod<jchar>(
			"getZeroDigit",
			"()C");
	}
	jchar DecimalFormatSymbols::getMinusSign()
	{
		return __thiz.callMethod<jchar>(
			"getMinusSign",
			"()C");
	}
	jchar DecimalFormatSymbols::getDecimalSeparator()
	{
		return __thiz.callMethod<jchar>(
			"getDecimalSeparator",
			"()C");
	}
	QAndroidJniObject DecimalFormatSymbols::forNumberingSystem(__jni_impl::java::util::Locale arg0, __jni_impl::android::icu::text::NumberingSystem arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DecimalFormatSymbols",
			"forNumberingSystem",
			"(Ljava/util/Locale;Landroid/icu/text/NumberingSystem;)Landroid/icu/text/DecimalFormatSymbols;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject DecimalFormatSymbols::forNumberingSystem(__jni_impl::android::icu::util::ULocale arg0, __jni_impl::android::icu::text::NumberingSystem arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DecimalFormatSymbols",
			"forNumberingSystem",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/NumberingSystem;)Landroid/icu/text/DecimalFormatSymbols;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject DecimalFormatSymbols::getDigits()
	{
		return __thiz.callObjectMethod(
			"getDigits",
			"()[C");
	}
	QAndroidJniObject DecimalFormatSymbols::getDigitStrings()
	{
		return __thiz.callObjectMethod(
			"getDigitStrings",
			"()[Ljava/lang/String;");
	}
	void DecimalFormatSymbols::setDigitStrings(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setDigitStrings",
			"([Ljava/lang/String;)V",
			arg0);
	}
	jchar DecimalFormatSymbols::getSignificantDigit()
	{
		return __thiz.callMethod<jchar>(
			"getSignificantDigit",
			"()C");
	}
	void DecimalFormatSymbols::setSignificantDigit(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setSignificantDigit",
			"(C)V",
			arg0);
	}
	QAndroidJniObject DecimalFormatSymbols::getGroupingSeparatorString()
	{
		return __thiz.callObjectMethod(
			"getGroupingSeparatorString",
			"()Ljava/lang/String;");
	}
	void DecimalFormatSymbols::setGroupingSeparatorString(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setGroupingSeparatorString",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject DecimalFormatSymbols::getDecimalSeparatorString()
	{
		return __thiz.callObjectMethod(
			"getDecimalSeparatorString",
			"()Ljava/lang/String;");
	}
	void DecimalFormatSymbols::setDecimalSeparatorString(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setDecimalSeparatorString",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject DecimalFormatSymbols::getPerMillString()
	{
		return __thiz.callObjectMethod(
			"getPerMillString",
			"()Ljava/lang/String;");
	}
	void DecimalFormatSymbols::setPerMillString(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPerMillString",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject DecimalFormatSymbols::getPercentString()
	{
		return __thiz.callObjectMethod(
			"getPercentString",
			"()Ljava/lang/String;");
	}
	void DecimalFormatSymbols::setPercentString(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPercentString",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject DecimalFormatSymbols::getMinusSignString()
	{
		return __thiz.callObjectMethod(
			"getMinusSignString",
			"()Ljava/lang/String;");
	}
	void DecimalFormatSymbols::setMinusSignString(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setMinusSignString",
			"(Ljava/lang/String;)V",
			arg0);
	}
	jchar DecimalFormatSymbols::getPlusSign()
	{
		return __thiz.callMethod<jchar>(
			"getPlusSign",
			"()C");
	}
	void DecimalFormatSymbols::setPlusSign(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setPlusSign",
			"(C)V",
			arg0);
	}
	QAndroidJniObject DecimalFormatSymbols::getPlusSignString()
	{
		return __thiz.callObjectMethod(
			"getPlusSignString",
			"()Ljava/lang/String;");
	}
	void DecimalFormatSymbols::setPlusSignString(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPlusSignString",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject DecimalFormatSymbols::getMonetaryDecimalSeparatorString()
	{
		return __thiz.callObjectMethod(
			"getMonetaryDecimalSeparatorString",
			"()Ljava/lang/String;");
	}
	void DecimalFormatSymbols::setMonetaryDecimalSeparatorString(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setMonetaryDecimalSeparatorString",
			"(Ljava/lang/String;)V",
			arg0);
	}
	jchar DecimalFormatSymbols::getMonetaryGroupingSeparator()
	{
		return __thiz.callMethod<jchar>(
			"getMonetaryGroupingSeparator",
			"()C");
	}
	void DecimalFormatSymbols::setMonetaryGroupingSeparator(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setMonetaryGroupingSeparator",
			"(C)V",
			arg0);
	}
	QAndroidJniObject DecimalFormatSymbols::getMonetaryGroupingSeparatorString()
	{
		return __thiz.callObjectMethod(
			"getMonetaryGroupingSeparatorString",
			"()Ljava/lang/String;");
	}
	void DecimalFormatSymbols::setMonetaryGroupingSeparatorString(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setMonetaryGroupingSeparatorString",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject DecimalFormatSymbols::getExponentMultiplicationSign()
	{
		return __thiz.callObjectMethod(
			"getExponentMultiplicationSign",
			"()Ljava/lang/String;");
	}
	void DecimalFormatSymbols::setExponentMultiplicationSign(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setExponentMultiplicationSign",
			"(Ljava/lang/String;)V",
			arg0);
	}
	jchar DecimalFormatSymbols::getPadEscape()
	{
		return __thiz.callMethod<jchar>(
			"getPadEscape",
			"()C");
	}
	void DecimalFormatSymbols::setPadEscape(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setPadEscape",
			"(C)V",
			arg0);
	}
	QAndroidJniObject DecimalFormatSymbols::getPatternForCurrencySpacing(jint arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"getPatternForCurrencySpacing",
			"(IZ)Ljava/lang/String;",
			arg0,
			arg1);
	}
	void DecimalFormatSymbols::setPatternForCurrencySpacing(jint arg0, jboolean arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"setPatternForCurrencySpacing",
			"(IZLjava/lang/String;)V",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject DecimalFormatSymbols::getULocale()
	{
		return __thiz.callObjectMethod(
			"getULocale",
			"()Landroid/icu/util/ULocale;");
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

