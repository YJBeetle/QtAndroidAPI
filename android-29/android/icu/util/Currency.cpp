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
	
	Currency::Currency(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Currency::fromJavaCurrency(java::util::Currency arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Currency",
			"fromJavaCurrency",
			"(Ljava/util/Currency;)Landroid/icu/util/Currency;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Currency::getAvailableCurrencies()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Currency",
			"getAvailableCurrencies",
			"()Ljava/util/Set;"
		);
	}
	jarray Currency::getAvailableCurrencyCodes(android::icu::util::ULocale arg0, java::util::Date arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Currency",
			"getAvailableCurrencyCodes",
			"(Landroid/icu/util/ULocale;Ljava/util/Date;)[Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		).object<jarray>();
	}
	jarray Currency::getAvailableCurrencyCodes(java::util::Locale arg0, java::util::Date arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Currency",
			"getAvailableCurrencyCodes",
			"(Ljava/util/Locale;Ljava/util/Date;)[Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		).object<jarray>();
	}
	jarray Currency::getAvailableLocales()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Currency",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		).object<jarray>();
	}
	jarray Currency::getAvailableULocales()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Currency",
			"getAvailableULocales",
			"()[Landroid/icu/util/ULocale;"
		).object<jarray>();
	}
	QAndroidJniObject Currency::getInstance(android::icu::util::ULocale arg0)
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
	QAndroidJniObject Currency::getInstance(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Currency",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/util/Currency;",
			arg0.__jniObject().object()
		);
	}
	jarray Currency::getKeywordValuesForLocale(jstring arg0, android::icu::util::ULocale arg1, jboolean arg2)
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
	jboolean Currency::isAvailable(jstring arg0, java::util::Date arg1, java::util::Date arg2)
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
	jstring Currency::getCurrencyCode()
	{
		return __thiz.callObjectMethod(
			"getCurrencyCode",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Currency::getDefaultFractionDigits()
	{
		return __thiz.callMethod<jint>(
			"getDefaultFractionDigits",
			"()I"
		);
	}
	jint Currency::getDefaultFractionDigits(android::icu::util::Currency_CurrencyUsage arg0)
	{
		return __thiz.callMethod<jint>(
			"getDefaultFractionDigits",
			"(Landroid/icu/util/Currency$CurrencyUsage;)I",
			arg0.__jniObject().object()
		);
	}
	jstring Currency::getDisplayName()
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Currency::getDisplayName(java::util::Locale arg0)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring Currency::getName(android::icu::util::ULocale arg0, jint arg1, jbooleanArray arg2)
	{
		return __thiz.callObjectMethod(
			"getName",
			"(Landroid/icu/util/ULocale;I[Z)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		).object<jstring>();
	}
	jstring Currency::getName(java::util::Locale arg0, jint arg1, jbooleanArray arg2)
	{
		return __thiz.callObjectMethod(
			"getName",
			"(Ljava/util/Locale;I[Z)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		).object<jstring>();
	}
	jstring Currency::getName(android::icu::util::ULocale arg0, jint arg1, jstring arg2, jbooleanArray arg3)
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
	jstring Currency::getName(java::util::Locale arg0, jint arg1, jstring arg2, jbooleanArray arg3)
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
	jdouble Currency::getRoundingIncrement(android::icu::util::Currency_CurrencyUsage arg0)
	{
		return __thiz.callMethod<jdouble>(
			"getRoundingIncrement",
			"(Landroid/icu/util/Currency$CurrencyUsage;)D",
			arg0.__jniObject().object()
		);
	}
	jstring Currency::getSymbol()
	{
		return __thiz.callObjectMethod(
			"getSymbol",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Currency::getSymbol(android::icu::util::ULocale arg0)
	{
		return __thiz.callObjectMethod(
			"getSymbol",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring Currency::getSymbol(java::util::Locale arg0)
	{
		return __thiz.callObjectMethod(
			"getSymbol",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject Currency::toJavaCurrency()
	{
		return __thiz.callObjectMethod(
			"toJavaCurrency",
			"()Ljava/util/Currency;"
		);
	}
	jstring Currency::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::util

