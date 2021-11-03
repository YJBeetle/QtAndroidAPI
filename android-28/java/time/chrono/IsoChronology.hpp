#pragma once

#include "./AbstractChronology.hpp"

namespace java::io
{
	class ObjectInputStream;
}
class JObject;
class JString;
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
		static java::time::chrono::IsoChronology INSTANCE();
		
		// QJniObject forward
		template<typename ...Ts> explicit IsoChronology(const char *className, const char *sig, Ts...agv) : java::time::chrono::AbstractChronology(className, sig, std::forward<Ts>(agv)...) {}
		IsoChronology(QJniObject obj);
		
		// Constructors
		
		// Methods
		java::time::LocalDate date(JObject arg0);
		java::time::LocalDate date(jint arg0, jint arg1, jint arg2);
		java::time::LocalDate date(JObject arg0, jint arg1, jint arg2, jint arg3);
		java::time::LocalDate dateEpochDay(jlong arg0);
		java::time::LocalDate dateNow();
		java::time::LocalDate dateNow(java::time::Clock arg0);
		java::time::LocalDate dateNow(java::time::ZoneId arg0);
		java::time::LocalDate dateYearDay(jint arg0, jint arg1);
		java::time::LocalDate dateYearDay(JObject arg0, jint arg1, jint arg2);
		jlong epochSecond(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, java::time::ZoneOffset arg6);
		java::time::chrono::IsoEra eraOf(jint arg0);
		JObject eras();
		JString getCalendarType();
		JString getId();
		jboolean isLeapYear(jlong arg0);
		java::time::LocalDateTime localDateTime(JObject arg0);
		java::time::Period period(jint arg0, jint arg1, jint arg2);
		jint prolepticYear(JObject arg0, jint arg1);
		java::time::temporal::ValueRange range(java::time::temporal::ChronoField arg0);
		java::time::LocalDate resolveDate(JObject arg0, java::time::format::ResolverStyle arg1);
		java::time::ZonedDateTime zonedDateTime(JObject arg0);
		java::time::ZonedDateTime zonedDateTime(java::time::Instant arg0, java::time::ZoneId arg1);
	};
} // namespace java::time::chrono

