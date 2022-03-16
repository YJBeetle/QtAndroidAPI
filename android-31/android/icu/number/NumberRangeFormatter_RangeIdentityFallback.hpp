#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./NumberRangeFormatter_RangeIdentityFallback.def.hpp"

namespace android::icu::number
{
	// Fields
	inline android::icu::number::NumberRangeFormatter_RangeIdentityFallback NumberRangeFormatter_RangeIdentityFallback::APPROXIMATELY()
	{
		return getStaticObjectField(
			"android.icu.number.NumberRangeFormatter$RangeIdentityFallback",
			"APPROXIMATELY",
			"Landroid/icu/number/NumberRangeFormatter$RangeIdentityFallback;"
		);
	}
	inline android::icu::number::NumberRangeFormatter_RangeIdentityFallback NumberRangeFormatter_RangeIdentityFallback::APPROXIMATELY_OR_SINGLE_VALUE()
	{
		return getStaticObjectField(
			"android.icu.number.NumberRangeFormatter$RangeIdentityFallback",
			"APPROXIMATELY_OR_SINGLE_VALUE",
			"Landroid/icu/number/NumberRangeFormatter$RangeIdentityFallback;"
		);
	}
	inline android::icu::number::NumberRangeFormatter_RangeIdentityFallback NumberRangeFormatter_RangeIdentityFallback::RANGE()
	{
		return getStaticObjectField(
			"android.icu.number.NumberRangeFormatter$RangeIdentityFallback",
			"RANGE",
			"Landroid/icu/number/NumberRangeFormatter$RangeIdentityFallback;"
		);
	}
	inline android::icu::number::NumberRangeFormatter_RangeIdentityFallback NumberRangeFormatter_RangeIdentityFallback::SINGLE_VALUE()
	{
		return getStaticObjectField(
			"android.icu.number.NumberRangeFormatter$RangeIdentityFallback",
			"SINGLE_VALUE",
			"Landroid/icu/number/NumberRangeFormatter$RangeIdentityFallback;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::number::NumberRangeFormatter_RangeIdentityFallback NumberRangeFormatter_RangeIdentityFallback::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.number.NumberRangeFormatter$RangeIdentityFallback",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/number/NumberRangeFormatter$RangeIdentityFallback;",
			arg0.object<jstring>()
		);
	}
	inline JArray NumberRangeFormatter_RangeIdentityFallback::values()
	{
		return callStaticObjectMethod(
			"android.icu.number.NumberRangeFormatter$RangeIdentityFallback",
			"values",
			"()[Landroid/icu/number/NumberRangeFormatter$RangeIdentityFallback;"
		);
	}
} // namespace android::icu::number

// Base class headers
#include "../../../java/lang/Enum.hpp"

