#pragma once

#include "./FormattedNumber.def.hpp"
#include "../util/Measure.def.hpp"
#include "../../../java/lang/Number.def.hpp"
#include "../../../java/text/Format.def.hpp"
#include "./LocalizedNumberFormatter.def.hpp"

namespace android::icu::number
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::icu::number::FormattedNumber LocalizedNumberFormatter::format(android::icu::util::Measure arg0) const
	{
		return callObjectMethod(
			"format",
			"(Landroid/icu/util/Measure;)Landroid/icu/number/FormattedNumber;",
			arg0.object()
		);
	}
	inline android::icu::number::FormattedNumber LocalizedNumberFormatter::format(jdouble arg0) const
	{
		return callObjectMethod(
			"format",
			"(D)Landroid/icu/number/FormattedNumber;",
			arg0
		);
	}
	inline android::icu::number::FormattedNumber LocalizedNumberFormatter::format(java::lang::Number arg0) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/Number;)Landroid/icu/number/FormattedNumber;",
			arg0.object()
		);
	}
	inline android::icu::number::FormattedNumber LocalizedNumberFormatter::format(jlong arg0) const
	{
		return callObjectMethod(
			"format",
			"(J)Landroid/icu/number/FormattedNumber;",
			arg0
		);
	}
	inline java::text::Format LocalizedNumberFormatter::toFormat() const
	{
		return callObjectMethod(
			"toFormat",
			"()Ljava/text/Format;"
		);
	}
} // namespace android::icu::number

// Base class headers
#include "./NumberFormatterSettings.hpp"

