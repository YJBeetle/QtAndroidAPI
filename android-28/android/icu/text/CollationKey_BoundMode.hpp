#pragma once

#include "./CollationKey_BoundMode.def.hpp"

namespace android::icu::text
{
	// Fields
	inline jint CollationKey_BoundMode::LOWER()
	{
		return getStaticField<jint>(
			"android.icu.text.CollationKey$BoundMode",
			"LOWER"
		);
	}
	inline jint CollationKey_BoundMode::UPPER()
	{
		return getStaticField<jint>(
			"android.icu.text.CollationKey$BoundMode",
			"UPPER"
		);
	}
	inline jint CollationKey_BoundMode::UPPER_LONG()
	{
		return getStaticField<jint>(
			"android.icu.text.CollationKey$BoundMode",
			"UPPER_LONG"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::icu::text

// Base class headers

