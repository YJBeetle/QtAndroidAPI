#pragma once

#include "../../JObject.hpp"


namespace android::util
{
	class MonthDisplayHelper : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MonthDisplayHelper(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MonthDisplayHelper(QAndroidJniObject obj);
		
		// Constructors
		MonthDisplayHelper(jint arg0, jint arg1);
		MonthDisplayHelper(jint arg0, jint arg1, jint arg2);
		
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

