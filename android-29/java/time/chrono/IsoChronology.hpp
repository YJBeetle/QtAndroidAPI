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
	class LocalDate;
}
namespace java::time
{
	class LocalDateTime;
}
namespace java::time
{
	class Period;
}
namespace java::time
{
	class ZoneId;
}
namespace java::time
{
	class ZoneOffset;
}
namespace java::time
{
	class ZonedDateTime;
}
namespace java::time::chrono
{
	class IsoEra;
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

namespace java::time::chrono
{
	class IsoChronology : public java::time::chrono::AbstractChronology
	{
	public:
		// Fields
		static QAndroidJniObject INSTANCE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IsoChronology(const char *className, const char *sig, Ts...agv) : java::time::chrono::AbstractChronology(className, sig, std::forward<Ts>(agv)...) {}
		IsoChronology(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		QAndroidJniObject date(__JniBaseClass arg0);
		QAndroidJniObject date(jint arg0, jint arg1, jint arg2);
		QAndroidJniObject date(__JniBaseClass arg0, jint arg1, jint arg2, jint arg3);
		QAndroidJniObject dateEpochDay(jlong arg0);
		QAndroidJniObject dateNow();
		QAndroidJniObject dateNow(java::time::Clock arg0);
		QAndroidJniObject dateNow(java::time::ZoneId arg0);
		QAndroidJniObject dateYearDay(jint arg0, jint arg1);
		QAndroidJniObject dateYearDay(__JniBaseClass arg0, jint arg1, jint arg2);
		jlong epochSecond(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, java::time::ZoneOffset arg6);
		QAndroidJniObject eraOf(jint arg0);
		QAndroidJniObject eras();
		jstring getCalendarType();
		jstring getId();
		jboolean isLeapYear(jlong arg0);
		QAndroidJniObject localDateTime(__JniBaseClass arg0);
		QAndroidJniObject period(jint arg0, jint arg1, jint arg2);
		jint prolepticYear(__JniBaseClass arg0, jint arg1);
		QAndroidJniObject range(java::time::temporal::ChronoField arg0);
		QAndroidJniObject resolveDate(__JniBaseClass arg0, java::time::format::ResolverStyle arg1);
		QAndroidJniObject zonedDateTime(__JniBaseClass arg0);
		QAndroidJniObject zonedDateTime(java::time::Instant arg0, java::time::ZoneId arg1);
	};
} // namespace java::time::chrono

