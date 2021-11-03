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
	class ZoneId;
}
namespace java::time::chrono
{
	class JapaneseDate;
}
namespace java::time::chrono
{
	class JapaneseEra;
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
	class Locale;
}

namespace java::time::chrono
{
	class JapaneseChronology : public java::time::chrono::AbstractChronology
	{
	public:
		// Fields
		static java::time::chrono::JapaneseChronology INSTANCE();
		
		// QJniObject forward
		template<typename ...Ts> explicit JapaneseChronology(const char *className, const char *sig, Ts...agv) : java::time::chrono::AbstractChronology(className, sig, std::forward<Ts>(agv)...) {}
		JapaneseChronology(QJniObject obj);
		
		// Constructors
		
		// Methods
		java::time::chrono::JapaneseDate date(JObject arg0) const;
		java::time::chrono::JapaneseDate date(jint arg0, jint arg1, jint arg2) const;
		java::time::chrono::JapaneseDate date(JObject arg0, jint arg1, jint arg2, jint arg3) const;
		java::time::chrono::JapaneseDate dateEpochDay(jlong arg0) const;
		java::time::chrono::JapaneseDate dateNow() const;
		java::time::chrono::JapaneseDate dateNow(java::time::Clock arg0) const;
		java::time::chrono::JapaneseDate dateNow(java::time::ZoneId arg0) const;
		java::time::chrono::JapaneseDate dateYearDay(jint arg0, jint arg1) const;
		java::time::chrono::JapaneseDate dateYearDay(JObject arg0, jint arg1, jint arg2) const;
		java::time::chrono::JapaneseEra eraOf(jint arg0) const;
		JObject eras() const;
		JString getCalendarType() const;
		JString getId() const;
		jboolean isLeapYear(jlong arg0) const;
		JObject localDateTime(JObject arg0) const;
		jint prolepticYear(JObject arg0, jint arg1) const;
		java::time::temporal::ValueRange range(java::time::temporal::ChronoField arg0) const;
		java::time::chrono::JapaneseDate resolveDate(JObject arg0, java::time::format::ResolverStyle arg1) const;
		JObject zonedDateTime(JObject arg0) const;
		JObject zonedDateTime(java::time::Instant arg0, java::time::ZoneId arg1) const;
	};
} // namespace java::time::chrono

