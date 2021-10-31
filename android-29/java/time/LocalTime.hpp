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
	class Instant;
}
namespace java::time
{
	class LocalDate;
}
namespace java::time
{
	class LocalDateTime;
}
namespace java::time
{
	class OffsetTime;
}
namespace java::time
{
	class ZoneId;
}
namespace java::time
{
	class ZoneOffset;
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
	class LocalTime : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject MAX();
		static QAndroidJniObject MIDNIGHT();
		static QAndroidJniObject MIN();
		static QAndroidJniObject NOON();
		
		LocalTime(QAndroidJniObject obj);
		// Constructors
		LocalTime() = default;
		
		// Methods
		static QAndroidJniObject from(__JniBaseClass arg0);
		static QAndroidJniObject now();
		static QAndroidJniObject now(java::time::Clock arg0);
		static QAndroidJniObject now(java::time::ZoneId arg0);
		static QAndroidJniObject of(jint arg0, jint arg1);
		static QAndroidJniObject of(jint arg0, jint arg1, jint arg2);
		static QAndroidJniObject of(jint arg0, jint arg1, jint arg2, jint arg3);
		static QAndroidJniObject ofInstant(java::time::Instant arg0, java::time::ZoneId arg1);
		static QAndroidJniObject ofNanoOfDay(jlong arg0);
		static QAndroidJniObject ofSecondOfDay(jlong arg0);
		static QAndroidJniObject parse(jstring arg0);
		static QAndroidJniObject parse(jstring arg0, java::time::format::DateTimeFormatter arg1);
		QAndroidJniObject adjustInto(__JniBaseClass arg0);
		QAndroidJniObject atDate(java::time::LocalDate arg0);
		QAndroidJniObject atOffset(java::time::ZoneOffset arg0);
		jint compareTo(jobject arg0);
		jint compareTo(java::time::LocalTime arg0);
		jboolean equals(jobject arg0);
		jstring format(java::time::format::DateTimeFormatter arg0);
		jint get(__JniBaseClass arg0);
		jint getHour();
		jlong getLong(__JniBaseClass arg0);
		jint getMinute();
		jint getNano();
		jint getSecond();
		jint hashCode();
		jboolean isAfter(java::time::LocalTime arg0);
		jboolean isBefore(java::time::LocalTime arg0);
		jboolean isSupported(__JniBaseClass arg0);
		QAndroidJniObject minus(__JniBaseClass arg0);
		QAndroidJniObject minus(jlong arg0, __JniBaseClass arg1);
		QAndroidJniObject minusHours(jlong arg0);
		QAndroidJniObject minusMinutes(jlong arg0);
		QAndroidJniObject minusNanos(jlong arg0);
		QAndroidJniObject minusSeconds(jlong arg0);
		QAndroidJniObject plus(__JniBaseClass arg0);
		QAndroidJniObject plus(jlong arg0, __JniBaseClass arg1);
		QAndroidJniObject plusHours(jlong arg0);
		QAndroidJniObject plusMinutes(jlong arg0);
		QAndroidJniObject plusNanos(jlong arg0);
		QAndroidJniObject plusSeconds(jlong arg0);
		jobject query(__JniBaseClass arg0);
		QAndroidJniObject range(__JniBaseClass arg0);
		jlong toEpochSecond(java::time::LocalDate arg0, java::time::ZoneOffset arg1);
		jlong toNanoOfDay();
		jint toSecondOfDay();
		jstring toString();
		QAndroidJniObject truncatedTo(__JniBaseClass arg0);
		jlong until(__JniBaseClass arg0, __JniBaseClass arg1);
		QAndroidJniObject with(__JniBaseClass arg0);
		QAndroidJniObject with(__JniBaseClass arg0, jlong arg1);
		QAndroidJniObject withHour(jint arg0);
		QAndroidJniObject withMinute(jint arg0);
		QAndroidJniObject withNano(jint arg0);
		QAndroidJniObject withSecond(jint arg0);
	};
} // namespace java::time

