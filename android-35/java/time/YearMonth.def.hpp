#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class ObjectInputStream;
}
class JString;
class JObject;
class JString;
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
	class YearMonth : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit YearMonth(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		YearMonth(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static java::time::YearMonth from(JObject arg0);
		static java::time::YearMonth now();
		static java::time::YearMonth now(java::time::Clock arg0);
		static java::time::YearMonth now(java::time::ZoneId arg0);
		static java::time::YearMonth of(jint arg0, jint arg1);
		static java::time::YearMonth of(jint arg0, java::time::Month arg1);
		static java::time::YearMonth parse(JString arg0);
		static java::time::YearMonth parse(JString arg0, java::time::format::DateTimeFormatter arg1);
		JObject adjustInto(JObject arg0) const;
		java::time::LocalDate atDay(jint arg0) const;
		java::time::LocalDate atEndOfMonth() const;
		jint compareTo(JObject arg0) const;
		jint compareTo(java::time::YearMonth arg0) const;
		jboolean equals(JObject arg0) const;
		JString format(java::time::format::DateTimeFormatter arg0) const;
		jint get(JObject arg0) const;
		jlong getLong(JObject arg0) const;
		java::time::Month getMonth() const;
		jint getMonthValue() const;
		jint getYear() const;
		jint hashCode() const;
		jboolean isAfter(java::time::YearMonth arg0) const;
		jboolean isBefore(java::time::YearMonth arg0) const;
		jboolean isLeapYear() const;
		jboolean isSupported(JObject arg0) const;
		jboolean isValidDay(jint arg0) const;
		jint lengthOfMonth() const;
		jint lengthOfYear() const;
		java::time::YearMonth minus(JObject arg0) const;
		java::time::YearMonth minus(jlong arg0, JObject arg1) const;
		java::time::YearMonth minusMonths(jlong arg0) const;
		java::time::YearMonth minusYears(jlong arg0) const;
		java::time::YearMonth plus(JObject arg0) const;
		java::time::YearMonth plus(jlong arg0, JObject arg1) const;
		java::time::YearMonth plusMonths(jlong arg0) const;
		java::time::YearMonth plusYears(jlong arg0) const;
		JObject query(JObject arg0) const;
		java::time::temporal::ValueRange range(JObject arg0) const;
		JString toString() const;
		jlong until(JObject arg0, JObject arg1) const;
		java::time::YearMonth with(JObject arg0) const;
		java::time::YearMonth with(JObject arg0, jlong arg1) const;
		java::time::YearMonth withMonth(jint arg0) const;
		java::time::YearMonth withYear(jint arg0) const;
	};
} // namespace java::time

