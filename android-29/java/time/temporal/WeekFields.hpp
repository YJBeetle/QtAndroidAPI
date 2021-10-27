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
		static QAndroidJniObject ISO();
		static QAndroidJniObject SUNDAY_START();
		static QAndroidJniObject WEEK_BASED_YEARS();
		
		WeekFields(QAndroidJniObject obj);
		// Constructors
		WeekFields() = default;
		
		// Methods
		static QAndroidJniObject of(java::util::Locale arg0);
		static QAndroidJniObject of(java::time::DayOfWeek arg0, jint arg1);
		QAndroidJniObject dayOfWeek();
		jboolean equals(jobject arg0);
		QAndroidJniObject getFirstDayOfWeek();
		jint getMinimalDaysInFirstWeek();
		jint hashCode();
		jstring toString();
		QAndroidJniObject weekBasedYear();
		QAndroidJniObject weekOfMonth();
		QAndroidJniObject weekOfWeekBasedYear();
		QAndroidJniObject weekOfYear();
	};
} // namespace java::time::temporal

