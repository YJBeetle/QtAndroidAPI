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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit YearMonth(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		YearMonth(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::YearMonth from(__JniBaseClass arg0);
		static java::time::YearMonth now();
		static java::time::YearMonth now(java::time::Clock arg0);
		static java::time::YearMonth now(java::time::ZoneId arg0);
		static java::time::YearMonth of(jint arg0, jint arg1);
		static java::time::YearMonth of(jint arg0, java::time::Month arg1);
		static java::time::YearMonth parse(jstring arg0);
		static java::time::YearMonth parse(jstring arg0, java::time::format::DateTimeFormatter arg1);
		__JniBaseClass adjustInto(__JniBaseClass arg0);
		java::time::LocalDate atDay(jint arg0);
		java::time::LocalDate atEndOfMonth();
		jint compareTo(jobject arg0);
		jint compareTo(java::time::YearMonth arg0);
		jboolean equals(jobject arg0);
		jstring format(java::time::format::DateTimeFormatter arg0);
		jint get(__JniBaseClass arg0);
		jlong getLong(__JniBaseClass arg0);
		java::time::Month getMonth();
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
		java::time::YearMonth minus(__JniBaseClass arg0);
		java::time::YearMonth minus(jlong arg0, __JniBaseClass arg1);
		java::time::YearMonth minusMonths(jlong arg0);
		java::time::YearMonth minusYears(jlong arg0);
		java::time::YearMonth plus(__JniBaseClass arg0);
		java::time::YearMonth plus(jlong arg0, __JniBaseClass arg1);
		java::time::YearMonth plusMonths(jlong arg0);
		java::time::YearMonth plusYears(jlong arg0);
		jobject query(__JniBaseClass arg0);
		java::time::temporal::ValueRange range(__JniBaseClass arg0);
		jstring toString();
		jlong until(__JniBaseClass arg0, __JniBaseClass arg1);
		java::time::YearMonth with(__JniBaseClass arg0);
		java::time::YearMonth with(__JniBaseClass arg0, jlong arg1);
		java::time::YearMonth withMonth(jint arg0);
		java::time::YearMonth withYear(jint arg0);
	};
} // namespace java::time

