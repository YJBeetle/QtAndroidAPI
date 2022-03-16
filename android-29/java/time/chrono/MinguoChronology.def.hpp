#pragma once

#include "./AbstractChronology.def.hpp"

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
	class ZoneId;
}
namespace java::time::chrono
{
	class MinguoDate;
}
namespace java::time::chrono
{
	class MinguoEra;
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
	class MinguoChronology : public java::time::chrono::AbstractChronology
	{
	public:
		// Fields
		static java::time::chrono::MinguoChronology INSTANCE();
		
		// QJniObject forward
		template<typename ...Ts> explicit MinguoChronology(const char *className, const char *sig, Ts...agv) : java::time::chrono::AbstractChronology(className, sig, std::forward<Ts>(agv)...) {}
		MinguoChronology(QJniObject obj) : java::time::chrono::AbstractChronology(obj) {}
		
		// Constructors
		
		// Methods
		java::time::chrono::MinguoDate date(JObject arg0) const;
		java::time::chrono::MinguoDate date(jint arg0, jint arg1, jint arg2) const;
		java::time::chrono::MinguoDate date(JObject arg0, jint arg1, jint arg2, jint arg3) const;
		java::time::chrono::MinguoDate dateEpochDay(jlong arg0) const;
		java::time::chrono::MinguoDate dateNow() const;
		java::time::chrono::MinguoDate dateNow(java::time::Clock arg0) const;
		java::time::chrono::MinguoDate dateNow(java::time::ZoneId arg0) const;
		java::time::chrono::MinguoDate dateYearDay(jint arg0, jint arg1) const;
		java::time::chrono::MinguoDate dateYearDay(JObject arg0, jint arg1, jint arg2) const;
		java::time::chrono::MinguoEra eraOf(jint arg0) const;
		JObject eras() const;
		JString getCalendarType() const;
		JString getId() const;
		jboolean isLeapYear(jlong arg0) const;
		JObject localDateTime(JObject arg0) const;
		jint prolepticYear(JObject arg0, jint arg1) const;
		java::time::temporal::ValueRange range(java::time::temporal::ChronoField arg0) const;
		java::time::chrono::MinguoDate resolveDate(JObject arg0, java::time::format::ResolverStyle arg1) const;
		JObject zonedDateTime(JObject arg0) const;
		JObject zonedDateTime(java::time::Instant arg0, java::time::ZoneId arg1) const;
	};
} // namespace java::time::chrono

