#pragma once

#include "../../../JObject.hpp"

namespace java::time
{
	class DayOfWeek;
}

namespace java::time::temporal
{
	class TemporalAdjusters : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TemporalAdjusters(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TemporalAdjusters(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static JObject dayOfWeekInMonth(jint arg0, java::time::DayOfWeek arg1);
		static JObject firstDayOfMonth();
		static JObject firstDayOfNextMonth();
		static JObject firstDayOfNextYear();
		static JObject firstDayOfYear();
		static JObject firstInMonth(java::time::DayOfWeek arg0);
		static JObject lastDayOfMonth();
		static JObject lastDayOfYear();
		static JObject lastInMonth(java::time::DayOfWeek arg0);
		static JObject next(java::time::DayOfWeek arg0);
		static JObject nextOrSame(java::time::DayOfWeek arg0);
		static JObject ofDateAdjuster(JObject arg0);
		static JObject previous(java::time::DayOfWeek arg0);
		static JObject previousOrSame(java::time::DayOfWeek arg0);
	};
} // namespace java::time::temporal

