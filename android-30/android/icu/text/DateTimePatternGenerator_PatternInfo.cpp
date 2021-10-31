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
	jstring DateTimePatternGenerator_PatternInfo::conflictingPattern()
	{
		return getObjectField(
			"conflictingPattern",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DateTimePatternGenerator_PatternInfo::status()
	{
		return getField<jint>(
			"status"
		);
	}
	
	// QAndroidJniObject forward
	DateTimePatternGenerator_PatternInfo::DateTimePatternGenerator_PatternInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DateTimePatternGenerator_PatternInfo::DateTimePatternGenerator_PatternInfo()
		: __JniBaseClass(
			"android.icu.text.DateTimePatternGenerator$PatternInfo",
			"()V"
		) {}
	
	// Methods
} // namespace android::icu::text

