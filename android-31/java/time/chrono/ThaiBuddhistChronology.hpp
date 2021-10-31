#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./AbstractChronology.hpp"

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
	class ZoneId;
}
namespace java::time::chrono
{
	class ThaiBuddhistDate;
}
namespace java::time::chrono
{
	class ThaiBuddhistEra;
}
namespace java::time::format
{
	class ResolverStyle;
}
namespace java::time::temporal
{
	class ChronoField;
}
namespace java::time::temporal
{
	class ValueRange;
}
namespace java::util
{
	class HashMap;
}

namespace java::time::chrono
{
	class ThaiBuddhistChronology : public java::time::chrono::AbstractChronology
	{
	public:
		// Fields
		static java::time::chrono::ThaiBuddhistChronology INSTANCE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ThaiBuddhistChronology(const char *className, const char *sig, Ts...agv) : java::time::chrono::AbstractChronology(className, sig, std::forward<Ts>(agv)...) {}
		ThaiBuddhistChronology(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		java::time::chrono::ThaiBuddhistDate date(__JniBaseClass arg0);
		java::time::chrono::ThaiBuddhistDate date(jint arg0, jint arg1, jint arg2);
		java::time::chrono::ThaiBuddhistDate date(__JniBaseClass arg0, jint arg1, jint arg2, jint arg3);
		java::time::chrono::ThaiBuddhistDate dateEpochDay(jlong arg0);
		java::time::chrono::ThaiBuddhistDate dateNow();
		java::time::chrono::ThaiBuddhistDate dateNow(java::time::Clock arg0);
		java::time::chrono::ThaiBuddhistDate dateNow(java::time::ZoneId arg0);
		java::time::chrono::ThaiBuddhistDate dateYearDay(jint arg0, jint arg1);
		java::time::chrono::ThaiBuddhistDate dateYearDay(__JniBaseClass arg0, jint arg1, jint arg2);
		java::time::chrono::ThaiBuddhistEra eraOf(jint arg0);
		__JniBaseClass eras();
		jstring getCalendarType();
		jstring getId();
		jboolean isLeapYear(jlong arg0);
		__JniBaseClass localDateTime(__JniBaseClass arg0);
		jint prolepticYear(__JniBaseClass arg0, jint arg1);
		java::time::temporal::ValueRange range(java::time::temporal::ChronoField arg0);
		java::time::chrono::ThaiBuddhistDate resolveDate(__JniBaseClass arg0, java::time::format::ResolverStyle arg1);
		__JniBaseClass zonedDateTime(__JniBaseClass arg0);
		__JniBaseClass zonedDateTime(java::time::Instant arg0, java::time::ZoneId arg1);
	};
} // namespace java::time::chrono

