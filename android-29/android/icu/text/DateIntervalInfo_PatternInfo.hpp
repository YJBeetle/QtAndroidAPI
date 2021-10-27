#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::text
{
	class DateIntervalInfo_PatternInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		DateIntervalInfo_PatternInfo(QAndroidJniObject obj);
		// Constructors
		DateIntervalInfo_PatternInfo(jstring &arg0, jstring &arg1, jboolean &arg2);
		DateIntervalInfo_PatternInfo(const QString &arg0, const QString &arg1, jboolean &arg2);
		DateIntervalInfo_PatternInfo() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jboolean firstDateInPtnIsLaterDate();
		jstring getFirstPart();
		jstring getSecondPart();
		jint hashCode();
		jstring toString();
	};
} // namespace android::icu::text

