#pragma once

#include "./FormattedNumberRange.def.hpp"
#include "../../../java/lang/Number.def.hpp"
#include "./LocalizedNumberRangeFormatter.def.hpp"

namespace android::icu::number
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::icu::number::FormattedNumberRange LocalizedNumberRangeFormatter::formatRange(jdouble arg0, jdouble arg1) const
	{
		return callObjectMethod(
			"formatRange",
			"(DD)Landroid/icu/number/FormattedNumberRange;",
			arg0,
			arg1
		);
	}
	inline android::icu::number::FormattedNumberRange LocalizedNumberRangeFormatter::formatRange(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"formatRange",
			"(II)Landroid/icu/number/FormattedNumberRange;",
			arg0,
			arg1
		);
	}
	inline android::icu::number::FormattedNumberRange LocalizedNumberRangeFormatter::formatRange(java::lang::Number arg0, java::lang::Number arg1) const
	{
		return callObjectMethod(
			"formatRange",
			"(Ljava/lang/Number;Ljava/lang/Number;)Landroid/icu/number/FormattedNumberRange;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::icu::number

// Base class headers
#include "./NumberRangeFormatterSettings.hpp"

