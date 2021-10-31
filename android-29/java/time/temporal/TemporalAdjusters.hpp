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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TemporalAdjusters(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TemporalAdjusters(QAndroidJniObject obj);
		
		// Constructors
		
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

