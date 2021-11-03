#pragma once

#include "../../../JObject.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::time
{
	class DayOfWeek;
}
namespace java::util
{
	class Locale;
}

namespace java::time::temporal
{
	class WeekFields : public JObject
	{
	public:
		// Fields
		static java::time::temporal::WeekFields ISO();
		static java::time::temporal::WeekFields SUNDAY_START();
		static JObject WEEK_BASED_YEARS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WeekFields(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WeekFields(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::temporal::WeekFields of(java::util::Locale arg0);
		static java::time::temporal::WeekFields of(java::time::DayOfWeek arg0, jint arg1);
		JObject dayOfWeek();
		jboolean equals(jobject arg0);
		java::time::DayOfWeek getFirstDayOfWeek();
		jint getMinimalDaysInFirstWeek();
		jint hashCode();
		jstring toString();
		JObject weekBasedYear();
		JObject weekOfMonth();
		JObject weekOfWeekBasedYear();
		JObject weekOfYear();
	};
} // namespace java::time::temporal

