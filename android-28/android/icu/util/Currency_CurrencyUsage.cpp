#include "../../../JArray.hpp"
#include "../../../JString.hpp"
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
	
	// Constructors
	
	// Methods
	android::icu::util::Currency_CurrencyUsage Currency_CurrencyUsage::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.Currency$CurrencyUsage",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/util/Currency$CurrencyUsage;",
			arg0.object<jstring>()
		);
	}
	JArray Currency_CurrencyUsage::values()
	{
		return callStaticObjectMethod(
			"android.icu.util.Currency$CurrencyUsage",
			"values",
			"()[Landroid/icu/util/Currency$CurrencyUsage;"
		);
	}
} // namespace android::icu::util

