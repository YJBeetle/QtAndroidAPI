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
		static java::time::LocalTime MAX();
		static java::time::LocalTime MIDNIGHT();
		static java::time::LocalTime MIN();
		static java::time::LocalTime NOON();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LocalTime(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LocalTime(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::LocalTime from(__JniBaseClass arg0);
		static java::time::LocalTime now();
		static java::time::LocalTime now(java::time::Clock arg0);
		static java::time::LocalTime now(java::time::ZoneId arg0);
		static java::time::LocalTime of(jint arg0, jint arg1);
		static java::time::LocalTime of(jint arg0, jint arg1, jint arg2);
		static java::time::LocalTime of(jint arg0, jint arg1, jint arg2, jint arg3);
		static java::time::LocalTime ofInstant(java::time::Instant arg0, java::time::ZoneId arg1);
		static java::time::LocalTime ofNanoOfDay(jlong arg0);
		static java::time::LocalTime ofSecondOfDay(jlong arg0);
		static java::time::LocalTime parse(jstring arg0);
		static java::time::LocalTime parse(jstring arg0, java::time::format::DateTimeFormatter arg1);
		__JniBaseClass adjustInto(__JniBaseClass arg0);
		java::time::LocalDateTime atDate(java::time::LocalDate arg0);
		java::time::OffsetTime atOffset(java::time::ZoneOffset arg0);
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
		java::time::LocalTime minus(__JniBaseClass arg0);
		java::time::LocalTime minus(jlong arg0, __JniBaseClass arg1);
		java::time::LocalTime minusHours(jlong arg0);
		java::time::LocalTime minusMinutes(jlong arg0);
		java::time::LocalTime minusNanos(jlong arg0);
		java::time::LocalTime minusSeconds(jlong arg0);
		java::time::LocalTime plus(__JniBaseClass arg0);
		java::time::LocalTime plus(jlong arg0, __JniBaseClass arg1);
		java::time::LocalTime plusHours(jlong arg0);
		java::time::LocalTime plusMinutes(jlong arg0);
		java::time::LocalTime plusNanos(jlong arg0);
		java::time::LocalTime plusSeconds(jlong arg0);
		jobject query(__JniBaseClass arg0);
		java::time::temporal::ValueRange range(__JniBaseClass arg0);
		jlong toEpochSecond(java::time::LocalDate arg0, java::time::ZoneOffset arg1);
		jlong toNanoOfDay();
		jint toSecondOfDay();
		jstring toString();
		java::time::LocalTime truncatedTo(__JniBaseClass arg0);
		jlong until(__JniBaseClass arg0, __JniBaseClass arg1);
		java::time::LocalTime with(__JniBaseClass arg0);
		java::time::LocalTime with(__JniBaseClass arg0, jlong arg1);
		java::time::LocalTime withHour(jint arg0);
		java::time::LocalTime withMinute(jint arg0);
		java::time::LocalTime withNano(jint arg0);
		java::time::LocalTime withSecond(jint arg0);
	};
} // namespace java::time

