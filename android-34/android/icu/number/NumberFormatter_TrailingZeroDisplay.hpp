#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./NumberFormatter_TrailingZeroDisplay.def.hpp"

namespace android::icu::number
{
	// Fields
	inline android::icu::number::NumberFormatter_TrailingZeroDisplay NumberFormatter_TrailingZeroDisplay::AUTO()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$TrailingZeroDisplay",
			"AUTO",
			"Landroid/icu/number/NumberFormatter$TrailingZeroDisplay;"
		);
	}
	inline android::icu::number::NumberFormatter_TrailingZeroDisplay NumberFormatter_TrailingZeroDisplay::HIDE_IF_WHOLE()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$TrailingZeroDisplay",
			"HIDE_IF_WHOLE",
			"Landroid/icu/number/NumberFormatter$TrailingZeroDisplay;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::number::NumberFormatter_TrailingZeroDisplay NumberFormatter_TrailingZeroDisplay::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.number.NumberFormatter$TrailingZeroDisplay",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/number/NumberFormatter$TrailingZeroDisplay;",
			arg0.object<jstring>()
		);
	}
	inline JArray NumberFormatter_TrailingZeroDisplay::values()
	{
		return callStaticObjectMethod(
			"android.icu.number.NumberFormatter$TrailingZeroDisplay",
			"values",
			"()[Landroid/icu/number/NumberFormatter$TrailingZeroDisplay;"
		);
	}
} // namespace android::icu::number

// Base class headers
#include "../../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::number;
#endif
