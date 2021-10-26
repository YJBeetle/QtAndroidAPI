#pragma once

#ifndef ANDROID_ICU_UTIL_CURRENCY_CURRENCYUSAGE
#define ANDROID_ICU_UTIL_CURRENCY_CURRENCYUSAGE

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::android::icu::util
{
	class Currency_CurrencyUsage : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject STANDARD();
		static QAndroidJniObject CASH();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jarray values();
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
	};
} // namespace __jni_impl::android::icu::util


namespace __jni_impl::android::icu::util
{
	// Fields
	QAndroidJniObject Currency_CurrencyUsage::STANDARD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.Currency$CurrencyUsage",
			"STANDARD",
			"Landroid/icu/util/Currency$CurrencyUsage;"
		);
	}
	QAndroidJniObject Currency_CurrencyUsage::CASH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.Currency$CurrencyUsage",
			"CASH",
			"Landroid/icu/util/Currency$CurrencyUsage;"
		);
	}
	
	// Constructors
	void Currency_CurrencyUsage::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.Currency$CurrencyUsage",
			"(V)V");
	}
	
	// Methods
	jarray Currency_CurrencyUsage::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Currency$CurrencyUsage",
			"values",
			"()[Landroid/icu/util/Currency$CurrencyUsage;"
		).object<jarray>();
	}
	QAndroidJniObject Currency_CurrencyUsage::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Currency$CurrencyUsage",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/util/Currency$CurrencyUsage;",
			arg0
		);
	}
	QAndroidJniObject Currency_CurrencyUsage::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Currency$CurrencyUsage",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/util/Currency$CurrencyUsage;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::icu::util

namespace android::icu::util
{
	class Currency_CurrencyUsage : public __jni_impl::android::icu::util::Currency_CurrencyUsage
	{
	public:
		Currency_CurrencyUsage(QAndroidJniObject obj) { __thiz = obj; }
		Currency_CurrencyUsage()
		{
			__constructor();
		}
	};
} // namespace android::icu::util

#endif // ANDROID_ICU_UTIL_CURRENCY_CURRENCYUSAGE

