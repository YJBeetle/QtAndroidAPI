#pragma once

#include "./NumberRangeFormatter_RangeCollapse.def.hpp"
#include "./NumberRangeFormatter_RangeIdentityFallback.def.hpp"
#include "./UnlocalizedNumberFormatter.def.hpp"
#include "../../../JObject.hpp"
#include "./NumberRangeFormatterSettings.def.hpp"

namespace android::icu::number
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::icu::number::NumberRangeFormatterSettings NumberRangeFormatterSettings::collapse(android::icu::number::NumberRangeFormatter_RangeCollapse arg0) const
	{
		return callObjectMethod(
			"collapse",
			"(Landroid/icu/number/NumberRangeFormatter$RangeCollapse;)Landroid/icu/number/NumberRangeFormatterSettings;",
			arg0.object()
		);
	}
	inline jboolean NumberRangeFormatterSettings::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint NumberRangeFormatterSettings::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline android::icu::number::NumberRangeFormatterSettings NumberRangeFormatterSettings::identityFallback(android::icu::number::NumberRangeFormatter_RangeIdentityFallback arg0) const
	{
		return callObjectMethod(
			"identityFallback",
			"(Landroid/icu/number/NumberRangeFormatter$RangeIdentityFallback;)Landroid/icu/number/NumberRangeFormatterSettings;",
			arg0.object()
		);
	}
	inline android::icu::number::NumberRangeFormatterSettings NumberRangeFormatterSettings::numberFormatterBoth(android::icu::number::UnlocalizedNumberFormatter arg0) const
	{
		return callObjectMethod(
			"numberFormatterBoth",
			"(Landroid/icu/number/UnlocalizedNumberFormatter;)Landroid/icu/number/NumberRangeFormatterSettings;",
			arg0.object()
		);
	}
	inline android::icu::number::NumberRangeFormatterSettings NumberRangeFormatterSettings::numberFormatterFirst(android::icu::number::UnlocalizedNumberFormatter arg0) const
	{
		return callObjectMethod(
			"numberFormatterFirst",
			"(Landroid/icu/number/UnlocalizedNumberFormatter;)Landroid/icu/number/NumberRangeFormatterSettings;",
			arg0.object()
		);
	}
	inline android::icu::number::NumberRangeFormatterSettings NumberRangeFormatterSettings::numberFormatterSecond(android::icu::number::UnlocalizedNumberFormatter arg0) const
	{
		return callObjectMethod(
			"numberFormatterSecond",
			"(Landroid/icu/number/UnlocalizedNumberFormatter;)Landroid/icu/number/NumberRangeFormatterSettings;",
			arg0.object()
		);
	}
} // namespace android::icu::number

// Base class headers

