#include "./Currency_CurrencyUsage.hpp"

namespace android::icu::util
{
	// Fields
	android::icu::util::Currency_CurrencyUsage Currency_CurrencyUsage::CASH()
	{
		return getStaticObjectField(
			"android.icu.util.Currency$CurrencyUsage",
			"CASH",
			"Landroid/icu/util/Currency$CurrencyUsage;"
		);
	}
	android::icu::util::Currency_CurrencyUsage Currency_CurrencyUsage::STANDARD()
	{
		return getStaticObjectField(
			"android.icu.util.Currency$CurrencyUsage",
			"STANDARD",
			"Landroid/icu/util/Currency$CurrencyUsage;"
		);
	}
	
	// QJniObject forward
	Currency_CurrencyUsage::Currency_CurrencyUsage(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::util::Currency_CurrencyUsage Currency_CurrencyUsage::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.Currency$CurrencyUsage",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/util/Currency$CurrencyUsage;",
			arg0
		);
	}
	jarray Currency_CurrencyUsage::values()
	{
		return callStaticObjectMethod(
			"android.icu.util.Currency$CurrencyUsage",
			"values",
			"()[Landroid/icu/util/Currency$CurrencyUsage;"
		).object<jarray>();
	}
} // namespace android::icu::util

