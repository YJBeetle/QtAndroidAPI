#include "./DateTimePatternGenerator_PatternInfo.hpp"

namespace android::icu::text
{
	// Fields
	jint DateTimePatternGenerator_PatternInfo::BASE_CONFLICT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator$PatternInfo",
			"BASE_CONFLICT"
		);
	}
	jint DateTimePatternGenerator_PatternInfo::CONFLICT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator$PatternInfo",
			"CONFLICT"
		);
	}
	jint DateTimePatternGenerator_PatternInfo::OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator$PatternInfo",
			"OK"
		);
	}
	jstring DateTimePatternGenerator_PatternInfo::conflictingPattern()
	{
		return __thiz.getObjectField(
			"conflictingPattern",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DateTimePatternGenerator_PatternInfo::status()
	{
		return __thiz.getField<jint>(
			"status"
		);
	}
	
	DateTimePatternGenerator_PatternInfo::DateTimePatternGenerator_PatternInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DateTimePatternGenerator_PatternInfo::DateTimePatternGenerator_PatternInfo()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DateTimePatternGenerator$PatternInfo",
			"()V"
		);
	}
	
	// Methods
} // namespace android::icu::text

