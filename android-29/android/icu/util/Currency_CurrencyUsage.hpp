#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./Currency_CurrencyUsage.def.hpp"

namespace android::icu::util
{
	// Fields
	inline android::icu::util::Currency_CurrencyUsage Currency_CurrencyUsage::CASH()
	{
		return getStaticObjectField(
			"android.icu.util.Currency$CurrencyUsage",
			"CASH",
			"Landroid/icu/util/Currency$CurrencyUsage;"
		);
	}
	inline android::icu::util::Currency_CurrencyUsage Currency_CurrencyUsage::STANDARD()
	{
		return getStaticObjectField(
			"android.icu.util.Currency$CurrencyUsage",
			"STANDARD",
			"Landroid/icu/util/Currency$CurrencyUsage;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::util::Currency_CurrencyUsage Currency_CurrencyUsage::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.Currency$CurrencyUsage",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/util/Currency$CurrencyUsage;",
			arg0.object<jstring>()
		);
	}
	inline JArray Currency_CurrencyUsage::values()
	{
		return callStaticObjectMethod(
			"android.icu.util.Currency$CurrencyUsage",
			"values",
			"()[Landroid/icu/util/Currency$CurrencyUsage;"
		);
	}
} // namespace android::icu::util

// Base class headers
#include "../../../java/lang/Enum.hpp"

