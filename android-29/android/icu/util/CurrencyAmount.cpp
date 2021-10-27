#include "./Currency.hpp"
#include "../../../java/lang/Number.hpp"
#include "../../../java/util/Currency.hpp"
#include "./CurrencyAmount.hpp"

namespace android::icu::util
{
	// Fields
	
	CurrencyAmount::CurrencyAmount(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CurrencyAmount::CurrencyAmount(jdouble &arg0, android::icu::util::Currency &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.CurrencyAmount",
			"(DLandroid/icu/util/Currency;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	CurrencyAmount::CurrencyAmount(jdouble &arg0, java::util::Currency &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.CurrencyAmount",
			"(DLjava/util/Currency;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	CurrencyAmount::CurrencyAmount(java::lang::Number &arg0, android::icu::util::Currency &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.CurrencyAmount",
			"(Ljava/lang/Number;Landroid/icu/util/Currency;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	CurrencyAmount::CurrencyAmount(java::lang::Number &arg0, java::util::Currency &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.CurrencyAmount",
			"(Ljava/lang/Number;Ljava/util/Currency;)V",
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
} // namespace android::icu::util

