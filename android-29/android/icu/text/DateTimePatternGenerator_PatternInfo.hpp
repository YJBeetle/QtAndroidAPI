#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::text
{
	class DateTimePatternGenerator_PatternInfo : public __JniBaseClass
	{
	public:
		// Fields
		static jint BASE_CONFLICT();
		static jint CONFLICT();
		static jint OK();
		jstring conflictingPattern();
		jint status();
		
		DateTimePatternGenerator_PatternInfo(QAndroidJniObject obj);
		// Constructors
		DateTimePatternGenerator_PatternInfo();
		
		// Methods
	};
} // namespace android::icu::text

