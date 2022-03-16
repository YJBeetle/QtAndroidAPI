#pragma once

#include "../../../JString.hpp"
#include "./DateTimePatternGenerator_PatternInfo.def.hpp"

namespace android::icu::text
{
	// Fields
	inline jint DateTimePatternGenerator_PatternInfo::BASE_CONFLICT()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator$PatternInfo",
			"BASE_CONFLICT"
		);
	}
	inline jint DateTimePatternGenerator_PatternInfo::CONFLICT()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator$PatternInfo",
			"CONFLICT"
		);
	}
	inline jint DateTimePatternGenerator_PatternInfo::OK()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator$PatternInfo",
			"OK"
		);
	}
	inline JString DateTimePatternGenerator_PatternInfo::conflictingPattern()
	{
		return getObjectField(
			"conflictingPattern",
			"Ljava/lang/String;"
		);
	}
	inline jint DateTimePatternGenerator_PatternInfo::status()
	{
		return getField<jint>(
			"status"
		);
	}
	
	// Constructors
	inline DateTimePatternGenerator_PatternInfo::DateTimePatternGenerator_PatternInfo()
		: JObject(
			"android.icu.text.DateTimePatternGenerator$PatternInfo",
			"()V"
		) {}
	
	// Methods
} // namespace android::icu::text

// Base class headers

