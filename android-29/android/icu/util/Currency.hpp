#pragma once

#ifndef ANDROID_ICU_UTIL_CURRENCY
#define ANDROID_ICU_UTIL_CURRENCY

#include "../../../__JniBaseClass.hpp"
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
		jstring getName(__jni_impl::java::util::Locale arg0, jint arg1, jbooleanArray arg2);
		jstring getName(__jni_impl::java::util::Locale arg0, jint arg1, jstring arg2, jbooleanArray arg3);
		jstring getName(__jni_impl::java::util::Locale arg0, jint arg1, const QString &arg2, jbooleanArray arg3);
		jstring getName(__jni_impl::android::icu::util::ULocale arg0, jint arg1, jstring arg2, jbooleanArray arg3);
		jstring getName(__jni_impl::android::icu::util::ULocale arg0, jint arg1, const QString &arg2, jbooleanArray arg3);
		jstring getName(__jni_impl::android::icu::util::ULocale arg0, jint arg1, jbooleanArray arg2);
		jstring toString();
		static QAndroidJniObject getInstance(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getInstance(__jni_impl::android::icu::util::ULocale arg0);
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(const QString &arg0);
		static jarray getAvailableLocales();
		jstring getDisplayName();
		jstring getDisplayName(__jni_impl::java::util::Locale arg0);
		jint getDefaultFractionDigits();
		jint getDefaultFractionDigits(__jni_impl::android::icu::util::Currency_CurrencyUsage arg0);
		jstring getCurrencyCode();
		jstring getSymbol(__jni_impl::android::icu::util::ULocale arg0);
		jstring getSymbol(__jni_impl::java::util::Locale arg0);
		jstring getSymbol();
		static jarray getAvailableCurrencyCodes(__jni_impl::java::util::Locale arg0, __jni_impl::java::util::Date arg1);
		static jarray getAvailableCurrencyCodes(__jni_impl::android::icu::util::ULocale arg0, __jni_impl::java::util::Date arg1);
		static QAndroidJniObject getAvailableCurrencies();
		static QAndroidJniObject fromJavaCurrency(__jni_impl::java::util::Currency arg0);
		QAndroidJniObject toJavaCurrency();
		jint getNumericCode();
		jdouble getRoundingIncrement();
		jdouble getRoundingIncrement(__jni_impl::android::icu::util::Currency_CurrencyUsage arg0);
		static jarray getAvailableULocales();
		static jarray getKeywordValuesForLocale(jstring arg0, __jni_impl::android::icu::util::ULocale arg1, jboolean arg2);
		static jarray getKeywordValuesForLocale(const QString &arg0, __jni_impl::android::icu::util::ULocale arg1, jboolean arg2);
		static jboolean isAvailable(jstring arg0, __jni_impl::java::util::Date arg1, __jni_impl::java::util::Date arg2);
		static jboolean isAvailable(const QString &arg0, __jni_impl::java::util::Date arg1, __jni_impl::java::util::Date arg2);
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
			"LONG_NAME"
		);
	}
	jint Currency::PLURAL_LONG_NAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Currency",
			"PLURAL_LONG_NAME"
		);
	}
	jint Currency::SYMBOL_NAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.Currency",
			"SYMBOL_NAME"
		);
	}
	
	// Constructors
	void Currency::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.Currency",
			"(V)V");
	}
	
	// Methods
	jstring Currency::getName(__jni_impl::java::util::Locale arg0, jint arg1, jbooleanArray arg2)
	{
		return __thiz.callObjectMethod(
			"getName",
			"(Ljava/util/Locale;I[Z)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		).object<jstring>();
	}
	jstring Currency::getName(__jni_impl::java::util::Locale arg0, jint arg1, jstring arg2, jbooleanArray arg3)
	{
		return __thiz.callObjectMethod(
			"getName",
			"(Ljava/util/Locale;ILjava/lang/String;[Z)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		).object<jstring>();
	}
	jstring Currency::getName(__jni_impl::java::util::Locale arg0, jint arg1, const QString &arg2, jbooleanArray arg3)
	{
		return __thiz.callObjectMethod(
			"getName",
			"(Ljava/util/Locale;ILjava/lang/String;[Z)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3
		).object<jstring>();
	}
	jstring Currency::getName(__jni_impl::android::icu::util::ULocale arg0, jint arg1, jstring arg2, jbooleanArray arg3)
	{
		return __thiz.callObjectMethod(
			"getName",
			"(Landroid/icu/util/ULocale;ILjava/lang/String;[Z)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		).object<jstring>();
	}
	jstring Currency::getName(__jni_impl::android::icu::util::ULocale arg0, jint arg1, const QString &arg2, jbooleanArray arg3)
	{
		return __thiz.callObjectMethod(
			"getName",
			"(Landroid/icu/util/ULocale;ILjava/lang/String;[Z)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3
		).object<jstring>();
	}
	jstring Currency::getName(__jni_impl::android::icu::util::ULocale arg0, jint arg1, jbooleanArray arg2)
	{
		return __thiz.callObjectMethod(
			"getName",
			"(Landroid/icu/util/ULocale;I[Z)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		).object<jstring>();
	}
	jstring Currency::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Currency::getInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Currency",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/util/Currency;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Currency::getInstance(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Currency",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/util/Currency;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Currency::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Currency",
			"getInstance",
			"(Ljava/lang/String;)Landroid/icu/util/Currency;",
			arg0
		);
	}
	QAndroidJniObject Currency::getInstance(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Currency",
			"getInstance",
			"(Ljava/lang/String;)Landroid/icu/util/Currency;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray Currency::getAvailableLocales()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Currency",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		).object<jarray>();
	}
	jstring Currency::getDisplayName()
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Currency::getDisplayName(__jni_impl::java::util::Locale arg0)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jint Currency::getDefaultFractionDigits()
	{
		return __thiz.callMethod<jint>(
			"getDefaultFractionDigits",
			"()I"
		);
	}
	jint Currency::getDefaultFractionDigits(__jni_impl::android::icu::util::Currency_CurrencyUsage arg0)
	{
		return __thiz.callMethod<jint>(
			"getDefaultFractionDigits",
			"(Landroid/icu/util/Currency$CurrencyUsage;)I",
			arg0.__jniObject().object()
		);
	}
	jstring Currency::getCurrencyCode()
	{
		return __thiz.callObjectMethod(
			"getCurrencyCode",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Currency::getSymbol(__jni_impl::android::icu::util::ULocale arg0)
	{
		return __thiz.callObjectMethod(
			"getSymbol",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring Currency::getSymbol(__jni_impl::java::util::Locale arg0)
	{
		return __thiz.callObjectMethod(
			"getSymbol",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring Currency::getSymbol()
	{
		return __thiz.callObjectMethod(
			"getSymbol",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray Currency::getAvailableCurrencyCodes(__jni_impl::java::util::Locale arg0, __jni_impl::java::util::Date arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Currency",
			"getAvailableCurrencyCodes",
			"(Ljava/util/Locale;Ljava/util/Date;)[Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		).object<jarray>();
	}
	jarray Currency::getAvailableCurrencyCodes(__jni_impl::android::icu::util::ULocale arg0, __jni_impl::java::util::Date arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Currency",
			"getAvailableCurrencyCodes",
			"(Landroid/icu/util/ULocale;Ljava/util/Date;)[Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		).object<jarray>();
	}
	QAndroidJniObject Currency::getAvailableCurrencies()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Currency",
			"getAvailableCurrencies",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject Currency::fromJavaCurrency(__jni_impl::java::util::Currency arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Currency",
			"fromJavaCurrency",
			"(Ljava/util/Currency;)Landroid/icu/util/Currency;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Currency::toJavaCurrency()
	{
		return __thiz.callObjectMethod(
			"toJavaCurrency",
			"()Ljava/util/Currency;"
		);
	}
	jint Currency::getNumericCode()
	{
		return __thiz.callMethod<jint>(
			"getNumericCode",
			"()I"
		);
	}
	jdouble Currency::getRoundingIncrement()
	{
		return __thiz.callMethod<jdouble>(
			"getRoundingIncrement",
			"()D"
		);
	}
	jdouble Currency::getRoundingIncrement(__jni_impl::android::icu::util::Currency_CurrencyUsage arg0)
	{
		return __thiz.callMethod<jdouble>(
			"getRoundingIncrement",
			"(Landroid/icu/util/Currency$CurrencyUsage;)D",
			arg0.__jniObject().object()
		);
	}
	jarray Currency::getAvailableULocales()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Currency",
			"getAvailableULocales",
			"()[Landroid/icu/util/ULocale;"
		).object<jarray>();
	}
	jarray Currency::getKeywordValuesForLocale(jstring arg0, __jni_impl::android::icu::util::ULocale arg1, jboolean arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Currency",
			"getKeywordValuesForLocale",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;Z)[Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object(),
			arg2
		).object<jarray>();
	}
	jarray Currency::getKeywordValuesForLocale(const QString &arg0, __jni_impl::android::icu::util::ULocale arg1, jboolean arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Currency",
			"getKeywordValuesForLocale",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;Z)[Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2
		).object<jarray>();
	}
	jboolean Currency::isAvailable(jstring arg0, __jni_impl::java::util::Date arg1, __jni_impl::java::util::Date arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.util.Currency",
			"isAvailable",
			"(Ljava/lang/String;Ljava/util/Date;Ljava/util/Date;)Z",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jboolean Currency::isAvailable(const QString &arg0, __jni_impl::java::util::Date arg1, __jni_impl::java::util::Date arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.util.Currency",
			"isAvailable",
			"(Ljava/lang/String;Ljava/util/Date;Ljava/util/Date;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
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

