#pragma once

#include "../../../JString.hpp"
#include "./UnicodeSet_EntryRange.def.hpp"

namespace android::icu::text
{
	// Fields
	inline jint UnicodeSet_EntryRange::codepoint()
	{
		return getField<jint>(
			"codepoint"
		);
	}
	inline jint UnicodeSet_EntryRange::codepointEnd()
	{
		return getField<jint>(
			"codepointEnd"
		);
	}
	
	// Constructors
	
	// Methods
	inline JString UnicodeSet_EntryRange::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::text

// Base class headers

