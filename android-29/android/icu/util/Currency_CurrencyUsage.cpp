#include "./Currency_CurrencyUsage.hpp"

namespace android::icu::util
{
	// Fields
	QAndroidJniObject Currency_CurrencyUsage::CASH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.Currency$CurrencyUsage",
			"CASH",
			"Landroid/icu/util/Currency$CurrencyUsage;"
		);
	}
	QAndroidJniObject Currency_CurrencyUsage::STANDARD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.Currency$CurrencyUsage",
			"STANDARD",
			"Landroid/icu/util/Currency$CurrencyUsage;"
		);
	}
	
	Currency_CurrencyUsage::Currency_CurrencyUsage(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Currency_CurrencyUsage::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Currency$CurrencyUsage",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/util/Currency$CurrencyUsage;",
			arg0
		);
	}
	jarray Currency_CurrencyUsage::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.Currency$CurrencyUsage",
			"values",
			"()[Landroid/icu/util/Currency$CurrencyUsage;"
		).object<jarray>();
	}
} // namespace android::icu::util

