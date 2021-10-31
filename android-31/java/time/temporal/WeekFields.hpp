#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class WeekFields : public __JniBaseClass
	{
	public:
		// Fields
		static java::time::temporal::WeekFields ISO();
		static java::time::temporal::WeekFields SUNDAY_START();
		static __JniBaseClass WEEK_BASED_YEARS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WeekFields(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WeekFields(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::temporal::WeekFields of(java::util::Locale arg0);
		static java::time::temporal::WeekFields of(java::time::DayOfWeek arg0, jint arg1);
		__JniBaseClass dayOfWeek();
		jboolean equals(jobject arg0);
		java::time::DayOfWeek getFirstDayOfWeek();
		jint getMinimalDaysInFirstWeek();
		jint hashCode();
		jstring toString();
		__JniBaseClass weekBasedYear();
		__JniBaseClass weekOfMonth();
		__JniBaseClass weekOfWeekBasedYear();
		__JniBaseClass weekOfYear();
	};
} // namespace java::time::temporal

