#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::util
{
	class Calendar;
}
namespace java::util
{
	class Date;
}
namespace java::util
{
	class Locale;
}
namespace java::util
{
	class TimeZone;
}

namespace java::util
{
	class Calendar_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		Calendar_Builder(QAndroidJniObject obj);
		// Constructors
		Calendar_Builder();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject set(jint arg0, jint arg1);
		QAndroidJniObject setCalendarType(jstring arg0);
		QAndroidJniObject setDate(jint arg0, jint arg1, jint arg2);
		QAndroidJniObject setFields(jintArray arg0);
		QAndroidJniObject setInstant(java::util::Date arg0);
		QAndroidJniObject setInstant(jlong arg0);
		QAndroidJniObject setLenient(jboolean arg0);
		QAndroidJniObject setLocale(java::util::Locale arg0);
		QAndroidJniObject setTimeOfDay(jint arg0, jint arg1, jint arg2);
		QAndroidJniObject setTimeOfDay(jint arg0, jint arg1, jint arg2, jint arg3);
		QAndroidJniObject setTimeZone(java::util::TimeZone arg0);
		QAndroidJniObject setWeekDate(jint arg0, jint arg1, jint arg2);
		QAndroidJniObject setWeekDefinition(jint arg0, jint arg1);
	};
} // namespace java::util

