#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::time
{
	class Clock;
}
namespace java::time
{
	class LocalDate;
}
namespace java::time
{
	class Month;
}
namespace java::time
{
	class ZoneId;
}
namespace java::time::format
{
	class DateTimeFormatter;
}
namespace java::time::temporal
{
	class ValueRange;
}

namespace java::time
{
	class MonthDay : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MonthDay(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MonthDay(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject from(__JniBaseClass arg0);
		static QAndroidJniObject now();
		static QAndroidJniObject now(java::time::Clock arg0);
		static QAndroidJniObject now(java::time::ZoneId arg0);
		static QAndroidJniObject of(jint arg0, jint arg1);
		static QAndroidJniObject of(java::time::Month arg0, jint arg1);
		static QAndroidJniObject parse(jstring arg0);
		static QAndroidJniObject parse(jstring arg0, java::time::format::DateTimeFormatter arg1);
		QAndroidJniObject adjustInto(__JniBaseClass arg0);
		QAndroidJniObject atYear(jint arg0);
		jint compareTo(jobject arg0);
		jint compareTo(java::time::MonthDay arg0);
		jboolean equals(jobject arg0);
		jstring format(java::time::format::DateTimeFormatter arg0);
		jint get(__JniBaseClass arg0);
		jint getDayOfMonth();
		jlong getLong(__JniBaseClass arg0);
		QAndroidJniObject getMonth();
		jint getMonthValue();
		jint hashCode();
		jboolean isAfter(java::time::MonthDay arg0);
		jboolean isBefore(java::time::MonthDay arg0);
		jboolean isSupported(__JniBaseClass arg0);
		jboolean isValidYear(jint arg0);
		jobject query(__JniBaseClass arg0);
		QAndroidJniObject range(__JniBaseClass arg0);
		jstring toString();
		QAndroidJniObject with(java::time::Month arg0);
		QAndroidJniObject withDayOfMonth(jint arg0);
		QAndroidJniObject withMonth(jint arg0);
	};
} // namespace java::time

