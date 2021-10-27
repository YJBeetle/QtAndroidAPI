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
	class YearMonth : public __JniBaseClass
	{
	public:
		// Fields
		
		YearMonth(QAndroidJniObject obj);
		// Constructors
		YearMonth() = default;
		
		// Methods
		static QAndroidJniObject from(__JniBaseClass arg0);
		static QAndroidJniObject now();
		static QAndroidJniObject now(java::time::Clock arg0);
		static QAndroidJniObject now(java::time::ZoneId arg0);
		static QAndroidJniObject of(jint arg0, jint arg1);
		static QAndroidJniObject of(jint arg0, java::time::Month arg1);
		static QAndroidJniObject parse(jstring arg0);
		static QAndroidJniObject parse(const QString &arg0);
		static QAndroidJniObject parse(jstring arg0, java::time::format::DateTimeFormatter arg1);
		static QAndroidJniObject parse(const QString &arg0, java::time::format::DateTimeFormatter arg1);
		QAndroidJniObject adjustInto(__JniBaseClass arg0);
		QAndroidJniObject atDay(jint arg0);
		QAndroidJniObject atEndOfMonth();
		jint compareTo(jobject arg0);
		jint compareTo(java::time::YearMonth arg0);
		jboolean equals(jobject arg0);
		jstring format(java::time::format::DateTimeFormatter arg0);
		jint get(__JniBaseClass arg0);
		jlong getLong(__JniBaseClass arg0);
		QAndroidJniObject getMonth();
		jint getMonthValue();
		jint getYear();
		jint hashCode();
		jboolean isAfter(java::time::YearMonth arg0);
		jboolean isBefore(java::time::YearMonth arg0);
		jboolean isLeapYear();
		jboolean isSupported(__JniBaseClass arg0);
		jboolean isValidDay(jint arg0);
		jint lengthOfMonth();
		jint lengthOfYear();
		QAndroidJniObject minus(__JniBaseClass arg0);
		QAndroidJniObject minus(jlong arg0, __JniBaseClass arg1);
		QAndroidJniObject minusMonths(jlong arg0);
		QAndroidJniObject minusYears(jlong arg0);
		QAndroidJniObject plus(__JniBaseClass arg0);
		QAndroidJniObject plus(jlong arg0, __JniBaseClass arg1);
		QAndroidJniObject plusMonths(jlong arg0);
		QAndroidJniObject plusYears(jlong arg0);
		jobject query(__JniBaseClass arg0);
		QAndroidJniObject range(__JniBaseClass arg0);
		jstring toString();
		jlong until(__JniBaseClass arg0, __JniBaseClass arg1);
		QAndroidJniObject with(__JniBaseClass arg0);
		QAndroidJniObject with(__JniBaseClass arg0, jlong arg1);
		QAndroidJniObject withMonth(jint arg0);
		QAndroidJniObject withYear(jint arg0);
	};
} // namespace java::time

