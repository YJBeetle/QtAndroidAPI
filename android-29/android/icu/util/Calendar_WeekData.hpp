#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::util
{
	class Calendar_WeekData : public __JniBaseClass
	{
	public:
		// Fields
		jint firstDayOfWeek();
		jint minimalDaysInFirstWeek();
		jint weekendCease();
		jint weekendCeaseMillis();
		jint weekendOnset();
		jint weekendOnsetMillis();
		
		Calendar_WeekData(QAndroidJniObject obj);
		// Constructors
		Calendar_WeekData(jint &arg0, jint &arg1, jint &arg2, jint &arg3, jint &arg4, jint &arg5);
		Calendar_WeekData() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
	};
} // namespace android::icu::util

