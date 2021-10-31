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
		static __JniBaseClass dayOfWeekInMonth(jint arg0, java::time::DayOfWeek arg1);
		static __JniBaseClass firstDayOfMonth();
		static __JniBaseClass firstDayOfNextMonth();
		static __JniBaseClass firstDayOfNextYear();
		static __JniBaseClass firstDayOfYear();
		static __JniBaseClass firstInMonth(java::time::DayOfWeek arg0);
		static __JniBaseClass lastDayOfMonth();
		static __JniBaseClass lastDayOfYear();
		static __JniBaseClass lastInMonth(java::time::DayOfWeek arg0);
		static __JniBaseClass next(java::time::DayOfWeek arg0);
		static __JniBaseClass nextOrSame(java::time::DayOfWeek arg0);
		static __JniBaseClass ofDateAdjuster(__JniBaseClass arg0);
		static __JniBaseClass previous(java::time::DayOfWeek arg0);
		static __JniBaseClass previousOrSame(java::time::DayOfWeek arg0);
	};
} // namespace java::time::temporal

