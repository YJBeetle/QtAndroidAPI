#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./NumberFormatter_RoundingPriority.def.hpp"

namespace android::icu::number
{
	// Fields
	inline android::icu::number::NumberFormatter_RoundingPriority NumberFormatter_RoundingPriority::RELAXED()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$RoundingPriority",
			"RELAXED",
			"Landroid/icu/number/NumberFormatter$RoundingPriority;"
		);
	}
	inline android::icu::number::NumberFormatter_RoundingPriority NumberFormatter_RoundingPriority::STRICT()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$RoundingPriority",
			"STRICT",
			"Landroid/icu/number/NumberFormatter$RoundingPriority;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::number::NumberFormatter_RoundingPriority NumberFormatter_RoundingPriority::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.number.NumberFormatter$RoundingPriority",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/number/NumberFormatter$RoundingPriority;",
			arg0.object<jstring>()
		);
	}
	inline JArray NumberFormatter_RoundingPriority::values()
	{
		return callStaticObjectMethod(
			"android.icu.number.NumberFormatter$RoundingPriority",
			"values",
			"()[Landroid/icu/number/NumberFormatter$RoundingPriority;"
		);
	}
} // namespace android::icu::number

// Base class headers
#include "../../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::number;
#endif
