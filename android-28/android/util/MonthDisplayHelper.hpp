#pragma once

#include "../../JObject.hpp"

class JIntArray;

namespace android::util
{
	class MonthDisplayHelper : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MonthDisplayHelper(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MonthDisplayHelper(QJniObject obj);
		
		// Constructors
		MonthDisplayHelper(jint arg0, jint arg1);
		MonthDisplayHelper(jint arg0, jint arg1, jint arg2);
		
		// Methods
		jint getColumnOf(jint arg0) const;
		jint getDayAt(jint arg0, jint arg1) const;
		JIntArray getDigitsForRow(jint arg0) const;
		jint getFirstDayOfMonth() const;
		jint getMonth() const;
		jint getNumberOfDaysInMonth() const;
		jint getOffset() const;
		jint getRowOf(jint arg0) const;
		jint getWeekStartDay() const;
		jint getYear() const;
		jboolean isWithinCurrentMonth(jint arg0, jint arg1) const;
		void nextMonth() const;
		void previousMonth() const;
	};
} // namespace android::util

