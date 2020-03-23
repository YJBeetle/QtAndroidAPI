#pragma once

#ifndef ANDROID_ICU_UTIL_CURRENCY
#define ANDROID_ICU_UTIL_CURRENCY

#include "MeasureUnit.hpp"

namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::android::icu::util
{
	class ULocale;
}
namespace __jni_impl::android::icu::util
{
	class Currency_CurrencyUsage;
}
namespace __jni_impl::java::util
{
	class Date;
}
namespace __jni_impl::java::util
{
	class Currency;
}

namespace __jni_impl::android::icu::util
{
	class Currency : public __jni_impl::android::icu::util::MeasureUnit
	{
	public:
		// Fields
		static jint LONG_NAME();
		static jint PLURAL_LONG_NAME();
		static jint SYMBOL_NAME();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getName(__jni_impl::java::util::Locale arg0, jint arg1, jbooleanArray arg2);
		QAndroidJniObject getName(__jni_impl::java::util::Locale arg0, jint arg1, jstring arg2, jbooleanArray arg3);
		QAndroidJniObject getName(__jni_impl::android::icu::util::ULocale arg0, jint arg1, jstring arg2, jbooleanArray arg3);
		QAndroidJniObject getName(__jni_impl::android::icu::util::ULocale arg0, jint arg1, jbooleanArray arg2);
		QAndroidJniObject toString();
		static QAndroidJniObject getInstance(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getInstance(__jni_impl::android::icu::util::ULocale arg0);
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getAvailableLocales();
		QAndroidJniObject getDisplayName();
		QAndroidJniObject getDisplayName(__jni_impl::java::util::Locale arg0);
		jint getDefaultFractionDigits();
		jint getDefaultFractionDigits(__jni_impl::android::icu::util::Currency_CurrencyUsage arg0);
		QAndroidJniObject getCurrencyCode();
		QAndroidJniObject getSymbol(__jni_impl::android::icu::util::ULocale arg0);
		QAndroidJniObject getSymbol(__jni_impl::java::util::Locale arg0);
		QAndroidJniObject getSymbol();
		static jboolean isAvailable(jstring arg0, __jni_impl::java::util::Date arg1, __jni_impl::java::util::Date arg2);
		static QAndroidJniObject getAvailableCurrencyCodes(__jni_impl::java::util::Locale arg0, __jni_impl::java::util::Date arg1);
		static QAndroidJniObject getAvailableCurrencyCodes(__jni_impl::android::icu::util::ULocale arg0, __jni_impl::java::util::Date arg1);
		static QAndroidJniObject getAvailableCurrencies();
		static QAndroidJniObject fromJavaCurrency(__jni_impl::java::util::Currency arg0);
		QAndroidJniObject toJavaCurrency();
		jint getNumericCode();
		jdouble getRoundingIncrement(__jni_impl::android::icu::util::Currency_CurrencyUsage arg0);
		jdouble getRoundingIncrement();
		static QAndroidJniObject getAvailableULocales();
		static QAndroidJniObject getKeywordValuesForLocale(jstring arg0, __jni_impl::android::icu::util::ULocale arg1, jboolean arg2);
	};
} // namespace __jni_impl::android::icu::util

#include "../../../java/util/Locale.hpp"
#include "ULocale.hpp"
#include "Currency_CurrencyUsage.hpp"
#include "../../../java/util/Date.hpp"
#include "../../../java/util/Currency.hpp"

namespace __jni_impl::android::icu::util
{
	// Fields
	jint Currency::LONG_NAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Currency",
			"LONG_NAME");
	}
	jint Currency::PLURAL_LONG_NAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Currency",
			"PLURAL_LONG_NAME");
	}
	jint Currency::SYMBOL_NAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Currency",
			"SYMBOL_NAME");
	}
	
	// Constructors
	void Currency::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.Currency",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Currency::getName(__jni_impl::java::util::Locale arg0, jint arg1, jbooleanArray arg2)
	{
		return __thiz.callObjectMethod(
			"getName",
			"(Ljava/util/Locale;I[Z)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	QAndroidJniObject Currency::getName(__jni_impl::java::util::Locale arg0, jint arg1, jstring arg2, jbooleanArray arg3)
	{
		return __thiz.callObjectMethod(
			"getName",
			"(Ljava/util/Locale;ILjava/lang/String;[Z)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3);
	}
	QAndroidJniObject Currency::getName(__jni_impl::android::icu::util::ULocale arg0, jint arg1, jstring arg2, jbooleanArray arg3)
	{
		return __thiz.callObjectMethod(
			"getName",
			"(Landroid/icu/util/ULocale;ILjava/lang/String;[Z)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3);
	}
	QAndroidJniObject Currency::getName(__jni_impl::android::icu::util::ULocale arg0, jint arg1, jbooleanArray arg2)
	{
		return __thiz.callObjectMethod(
			"getName",
			"(Landroid/icu/util/ULocale;I[Z)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	QAndroidJniObject Currency::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Currency::getInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Currency",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/util/Currency;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Currency::getInstance(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Currency",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/util/Currency;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Currency::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Currency",
			"getInstance",
			"(Ljava/lang/String;)Landroid/icu/util/Currency;",
			arg0);
	}
	QAndroidJniObject Currency::getAvailableLocales()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Currency",
			"getAvailableLocales",
			"()[Ljava/util/Locale;");
	}
	QAndroidJniObject Currency::getDisplayName()
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Currency::getDisplayName(__jni_impl::java::util::Locale arg0)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	jint Currency::getDefaultFractionDigits()
	{
		return __thiz.callMethod<jint>(
			"getDefaultFractionDigits",
			"()I");
	}
	jint Currency::getDefaultFractionDigits(__jni_impl::android::icu::util::Currency_CurrencyUsage arg0)
	{
		return __thiz.callMethod<jint>(
			"getDefaultFractionDigits",
			"(Landroid/icu/util/Currency$CurrencyUsage;)I",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Currency::getCurrencyCode()
	{
		return __thiz.callObjectMethod(
			"getCurrencyCode",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Currency::getSymbol(__jni_impl::android::icu::util::ULocale arg0)
	{
		return __thiz.callObjectMethod(
			"getSymbol",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Currency::getSymbol(__jni_impl::java::util::Locale arg0)
	{
		return __thiz.callObjectMethod(
			"getSymbol",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Currency::getSymbol()
	{
		return __thiz.callObjectMethod(
			"getSymbol",
			"()Ljava/lang/String;");
	}
	jboolean Currency::isAvailable(jstring arg0, __jni_impl::java::util::Date arg1, __jni_impl::java::util::Date arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.util.Currency",
			"isAvailable",
			"(Ljava/lang/String;Ljava/util/Date;Ljava/util/Date;)Z",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	QAndroidJniObject Currency::getAvailableCurrencyCodes(__jni_impl::java::util::Locale arg0, __jni_impl::java::util::Date arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Currency",
			"getAvailableCurrencyCodes",
			"(Ljava/util/Locale;Ljava/util/Date;)[Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject Currency::getAvailableCurrencyCodes(__jni_impl::android::icu::util::ULocale arg0, __jni_impl::java::util::Date arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Currency",
			"getAvailableCurrencyCodes",
			"(Landroid/icu/util/ULocale;Ljava/util/Date;)[Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject Currency::getAvailableCurrencies()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Currency",
			"getAvailableCurrencies",
			"()Ljava/util/Set;");
	}
	QAndroidJniObject Currency::fromJavaCurrency(__jni_impl::java::util::Currency arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Currency",
			"fromJavaCurrency",
			"(Ljava/util/Currency;)Landroid/icu/util/Currency;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Currency::toJavaCurrency()
	{
		return __thiz.callObjectMethod(
			"toJavaCurrency",
			"()Ljava/util/Currency;");
	}
	jint Currency::getNumericCode()
	{
		return __thiz.callMethod<jint>(
			"getNumericCode",
			"()I");
	}
	jdouble Currency::getRoundingIncrement(__jni_impl::android::icu::util::Currency_CurrencyUsage arg0)
	{
		return __thiz.callMethod<jdouble>(
			"getRoundingIncrement",
			"(Landroid/icu/util/Currency$CurrencyUsage;)D",
			arg0.__jniObject().object());
	}
	jdouble Currency::getRoundingIncrement()
	{
		return __thiz.callMethod<jdouble>(
			"getRoundingIncrement",
			"()D");
	}
	QAndroidJniObject Currency::getAvailableULocales()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Currency",
			"getAvailableULocales",
			"()[Landroid/icu/util/ULocale;");
	}
	QAndroidJniObject Currency::getKeywordValuesForLocale(jstring arg0, __jni_impl::android::icu::util::ULocale arg1, jboolean arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Currency",
			"getKeywordValuesForLocale",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;Z)[Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object(),
			arg2);
	}
} // namespace __jni_impl::android::icu::util

namespace android::icu::util
{
	class Currency : public __jni_impl::android::icu::util::Currency
	{
	public:
		Currency(QAndroidJniObject obj) { __thiz = obj; }
		Currency()
		{
			__constructor();
		}
	};
} // namespace android::icu::util

#endif // ANDROID_ICU_UTIL_CURRENCY

