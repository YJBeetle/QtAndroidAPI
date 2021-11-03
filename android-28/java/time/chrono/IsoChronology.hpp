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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IsoChronology(const char *className, const char *sig, Ts...agv) : java::time::chrono::AbstractChronology(className, sig, std::forward<Ts>(agv)...) {}
		IsoChronology(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		java::time::LocalDate date(JObject arg0) const;
		java::time::LocalDate date(jint arg0, jint arg1, jint arg2) const;
		java::time::LocalDate date(JObject arg0, jint arg1, jint arg2, jint arg3) const;
		java::time::LocalDate dateEpochDay(jlong arg0) const;
		java::time::LocalDate dateNow() const;
		java::time::LocalDate dateNow(java::time::Clock arg0) const;
		java::time::LocalDate dateNow(java::time::ZoneId arg0) const;
		java::time::LocalDate dateYearDay(jint arg0, jint arg1) const;
		java::time::LocalDate dateYearDay(JObject arg0, jint arg1, jint arg2) const;
		jlong epochSecond(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, java::time::ZoneOffset arg6) const;
		java::time::chrono::IsoEra eraOf(jint arg0) const;
		JObject eras() const;
		JString getCalendarType() const;
		JString getId() const;
		jboolean isLeapYear(jlong arg0) const;
		java::time::LocalDateTime localDateTime(JObject arg0) const;
		java::time::Period period(jint arg0, jint arg1, jint arg2) const;
		jint prolepticYear(JObject arg0, jint arg1) const;
		java::time::temporal::ValueRange range(java::time::temporal::ChronoField arg0) const;
		java::time::LocalDate resolveDate(JObject arg0, java::time::format::ResolverStyle arg1) const;
		java::time::ZonedDateTime zonedDateTime(JObject arg0) const;
		java::time::ZonedDateTime zonedDateTime(java::time::Instant arg0, java::time::ZoneId arg1) const;
	};
} // namespace java::time::chrono

