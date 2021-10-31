#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class MonthDisplayHelper : public __JniBaseClass
	{
	public:
		// Fields
		
		MonthDisplayHelper(QAndroidJniObject obj);
		// Constructors
		MonthDisplayHelper(jint arg0, jint arg1);
		MonthDisplayHelper(jint arg0, jint arg1, jint arg2);
		MonthDisplayHelper() = default;
		
		// Methods
		jint getColumnOf(jint arg0);
		jint getDayAt(jint arg0, jint arg1);
		jintArray getDigitsForRow(jint arg0);
		jint getFirstDayOfMonth();
		jint getMonth();
		jint getNumberOfDaysInMonth();
		jint getOffset();
		jint getRowOf(jint arg0);
		jint getWeekStartDay();
		jint getYear();
		jboolean isWithinCurrentMonth(jint arg0, jint arg1);
		void nextMonth();
		void previousMonth();
	};
} // namespace android::util

