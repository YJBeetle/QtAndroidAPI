#pragma once

#include "./CompactNotation.def.hpp"
#include "./ScientificNotation.def.hpp"
#include "./SimpleNotation.def.hpp"
#include "./Notation.def.hpp"

namespace android::icu::number
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::icu::number::CompactNotation Notation::compactLong()
	{
		return callStaticObjectMethod(
			"android.icu.number.Notation",
			"compactLong",
			"()Landroid/icu/number/CompactNotation;"
		);
	}
	inline android::icu::number::CompactNotation Notation::compactShort()
	{
		return callStaticObjectMethod(
			"android.icu.number.Notation",
			"compactShort",
			"()Landroid/icu/number/CompactNotation;"
		);
	}
	inline android::icu::number::ScientificNotation Notation::engineering()
	{
		return callStaticObjectMethod(
			"android.icu.number.Notation",
			"engineering",
			"()Landroid/icu/number/ScientificNotation;"
		);
	}
	inline android::icu::number::ScientificNotation Notation::scientific()
	{
		return callStaticObjectMethod(
			"android.icu.number.Notation",
			"scientific",
			"()Landroid/icu/number/ScientificNotation;"
		);
	}
	inline android::icu::number::SimpleNotation Notation::simple()
	{
		return callStaticObjectMethod(
			"android.icu.number.Notation",
			"simple",
			"()Landroid/icu/number/SimpleNotation;"
		);
	}
} // namespace android::icu::number

// Base class headers

