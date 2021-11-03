#include "../../../JString.hpp"
#include "./DateTimePatternGenerator_PatternInfo.hpp"

namespace android::icu::text
{
	// Fields
	jint DateTimePatternGenerator_PatternInfo::BASE_CONFLICT()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator$PatternInfo",
			"BASE_CONFLICT"
		);
	}
	jint DateTimePatternGenerator_PatternInfo::CONFLICT()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator$PatternInfo",
			"CONFLICT"
		);
	}
	jint DateTimePatternGenerator_PatternInfo::OK()
	{
		return getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator$PatternInfo",
			"OK"
		);
	}
	JString DateTimePatternGenerator_PatternInfo::conflictingPattern()
	{
		return getObjectField(
			"conflictingPattern",
			"Ljava/lang/String;"
		);
	}
	jint DateTimePatternGenerator_PatternInfo::status()
	{
		return getField<jint>(
			"status"
		);
	}
	
	// QJniObject forward
	DateTimePatternGenerator_PatternInfo::DateTimePatternGenerator_PatternInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DateTimePatternGenerator_PatternInfo::DateTimePatternGenerator_PatternInfo()
		: JObject(
			"android.icu.text.DateTimePatternGenerator$PatternInfo",
			"()V"
		) {}
	
	// Methods
} // namespace android::icu::text

