#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./NumberFormatter_DecimalSeparatorDisplay.def.hpp"

namespace android::icu::number
{
	// Fields
	inline android::icu::number::NumberFormatter_DecimalSeparatorDisplay NumberFormatter_DecimalSeparatorDisplay::ALWAYS()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$DecimalSeparatorDisplay",
			"ALWAYS",
			"Landroid/icu/number/NumberFormatter$DecimalSeparatorDisplay;"
		);
	}
	inline android::icu::number::NumberFormatter_DecimalSeparatorDisplay NumberFormatter_DecimalSeparatorDisplay::AUTO()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$DecimalSeparatorDisplay",
			"AUTO",
			"Landroid/icu/number/NumberFormatter$DecimalSeparatorDisplay;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::number::NumberFormatter_DecimalSeparatorDisplay NumberFormatter_DecimalSeparatorDisplay::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.number.NumberFormatter$DecimalSeparatorDisplay",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/number/NumberFormatter$DecimalSeparatorDisplay;",
			arg0.object<jstring>()
		);
	}
	inline JArray NumberFormatter_DecimalSeparatorDisplay::values()
	{
		return callStaticObjectMethod(
			"android.icu.number.NumberFormatter$DecimalSeparatorDisplay",
			"values",
			"()[Landroid/icu/number/NumberFormatter$DecimalSeparatorDisplay;"
		);
	}
} // namespace android::icu::number

// Base class headers
#include "../../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::number;
#endif
