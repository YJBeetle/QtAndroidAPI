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
	class MonthDay;
}
namespace java::time
{
	class YearMonth;
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
	class Year : public __JniBaseClass
	{
	public:
		// Fields
		static jint MAX_VALUE();
		static jint MIN_VALUE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Year(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Year(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject from(__JniBaseClass arg0);
		static jboolean isLeap(jlong arg0);
		static QAndroidJniObject now();
		static QAndroidJniObject now(java::time::Clock arg0);
		static QAndroidJniObject now(java::time::ZoneId arg0);
		static QAndroidJniObject of(jint arg0);
		static QAndroidJniObject parse(jstring arg0);
		static QAndroidJniObject parse(jstring arg0, java::time::format::DateTimeFormatter arg1);
		QAndroidJniObject adjustInto(__JniBaseClass arg0);
		QAndroidJniObject atDay(jint arg0);
		QAndroidJniObject atMonth(jint arg0);
		QAndroidJniObject atMonth(java::time::Month arg0);
		QAndroidJniObject atMonthDay(java::time::MonthDay arg0);
		jint compareTo(jobject arg0);
		jint compareTo(java::time::Year arg0);
		jboolean equals(jobject arg0);
		jstring format(java::time::format::DateTimeFormatter arg0);
		jint get(__JniBaseClass arg0);
		jlong getLong(__JniBaseClass arg0);
		jint getValue();
		jint hashCode();
		jboolean isAfter(java::time::Year arg0);
		jboolean isBefore(java::time::Year arg0);
		jboolean isLeap();
		jboolean isSupported(__JniBaseClass arg0);
		jboolean isValidMonthDay(java::time::MonthDay arg0);
		jint length();
		QAndroidJniObject minus(__JniBaseClass arg0);
		QAndroidJniObject minus(jlong arg0, __JniBaseClass arg1);
		QAndroidJniObject minusYears(jlong arg0);
		QAndroidJniObject plus(__JniBaseClass arg0);
		QAndroidJniObject plus(jlong arg0, __JniBaseClass arg1);
		QAndroidJniObject plusYears(jlong arg0);
		jobject query(__JniBaseClass arg0);
		QAndroidJniObject range(__JniBaseClass arg0);
		jstring toString();
		jlong until(__JniBaseClass arg0, __JniBaseClass arg1);
		QAndroidJniObject with(__JniBaseClass arg0);
		QAndroidJniObject with(__JniBaseClass arg0, jlong arg1);
	};
} // namespace java::time

