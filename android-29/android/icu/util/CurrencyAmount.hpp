#pragma once

#ifndef ANDROID_ICU_UTIL_CURRENCYAMOUNT
#define ANDROID_ICU_UTIL_CURRENCYAMOUNT

#include "../../../__JniBaseClass.hpp"
#include "Measure.hpp"

namespace __jni_impl::java::util
{
	class Currency;
}
namespace __jni_impl::java::lang
{
	class Number;
}
namespace __jni_impl::android::icu::util
{
	class Currency;
}

namespace __jni_impl::android::icu::util
{
	class CurrencyAmount : public __jni_impl::android::icu::util::Measure
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jdouble arg0, __jni_impl::java::util::Currency arg1);
		void __constructor(__jni_impl::java::lang::Number arg0, __jni_impl::java::util::Currency arg1);
		void __constructor(jdouble arg0, __jni_impl::android::icu::util::Currency arg1);
		void __constructor(__jni_impl::java::lang::Number arg0, __jni_impl::android::icu::util::Currency arg1);
		
		// Methods
		QAndroidJniObject getCurrency();
	};
} // namespace __jni_impl::android::icu::util

#include "../../../java/util/Currency.hpp"
#include "../../../java/lang/Number.hpp"
#include "Currency.hpp"

namespace __jni_impl::android::icu::util
{
	// Fields
	
	// Constructors
	void CurrencyAmount::__constructor(jdouble arg0, __jni_impl::java::util::Currency arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.CurrencyAmount",
			"(DLjava/util/Currency;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void CurrencyAmount::__constructor(__jni_impl::java::lang::Number arg0, __jni_impl::java::util::Currency arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.CurrencyAmount",
			"(Ljava/lang/Number;Ljava/util/Currency;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void CurrencyAmount::__constructor(jdouble arg0, __jni_impl::android::icu::util::Currency arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.CurrencyAmount",
			"(DLandroid/icu/util/Currency;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void CurrencyAmount::__constructor(__jni_impl::java::lang::Number arg0, __jni_impl::android::icu::util::Currency arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.CurrencyAmount",
			"(Ljava/lang/Number;Landroid/icu/util/Currency;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject CurrencyAmount::getCurrency()
	{
		return __thiz.callObjectMethod(
			"getCurrency",
			"()Landroid/icu/util/Currency;"
		);
	}
} // namespace __jni_impl::android::icu::util

namespace android::icu::util
{
	class CurrencyAmount : public __jni_impl::android::icu::util::CurrencyAmount
	{
	public:
		CurrencyAmount(QAndroidJniObject obj) { __thiz = obj; }
		CurrencyAmount(jdouble arg0, __jni_impl::java::util::Currency arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		CurrencyAmount(__jni_impl::java::lang::Number arg0, __jni_impl::java::util::Currency arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		CurrencyAmount(jdouble arg0, __jni_impl::android::icu::util::Currency arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		CurrencyAmount(__jni_impl::java::lang::Number arg0, __jni_impl::android::icu::util::Currency arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::icu::util

#endif // ANDROID_ICU_UTIL_CURRENCYAMOUNT

