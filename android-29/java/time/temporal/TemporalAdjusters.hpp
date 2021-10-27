#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::time
{
	class DayOfWeek;
}

namespace java::time::temporal
{
	class TemporalAdjusters : public __JniBaseClass
	{
	public:
		// Fields
		
		TemporalAdjusters(QAndroidJniObject obj);
		// Constructors
		TemporalAdjusters() = default;
		
		// Methods
		static QAndroidJniObject dayOfWeekInMonth(jint arg0, java::time::DayOfWeek arg1);
		static QAndroidJniObject firstDayOfMonth();
		static QAndroidJniObject firstDayOfNextMonth();
		static QAndroidJniObject firstDayOfNextYear();
		static QAndroidJniObject firstDayOfYear();
		static QAndroidJniObject firstInMonth(java::time::DayOfWeek arg0);
		static QAndroidJniObject lastDayOfMonth();
		static QAndroidJniObject lastDayOfYear();
		static QAndroidJniObject lastInMonth(java::time::DayOfWeek arg0);
		static QAndroidJniObject next(java::time::DayOfWeek arg0);
		static QAndroidJniObject nextOrSame(java::time::DayOfWeek arg0);
		static QAndroidJniObject ofDateAdjuster(__JniBaseClass arg0);
		static QAndroidJniObject previous(java::time::DayOfWeek arg0);
		static QAndroidJniObject previousOrSame(java::time::DayOfWeek arg0);
	};
} // namespace java::time::temporal

