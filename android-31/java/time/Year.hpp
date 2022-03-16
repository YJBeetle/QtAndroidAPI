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
	class MonthDay;
}
namespace java::time
{
	class YearMonth;
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
	class Year : public JObject
	{
	public:
		// Fields
		static jint MAX_VALUE();
		static jint MIN_VALUE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Year(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Year(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static java::time::Year from(JObject arg0);
		static jboolean isLeap(jlong arg0);
		static java::time::Year now();
		static java::time::Year now(java::time::Clock arg0);
		static java::time::Year now(java::time::ZoneId arg0);
		static java::time::Year of(jint arg0);
		static java::time::Year parse(JString arg0);
		static java::time::Year parse(JString arg0, java::time::format::DateTimeFormatter arg1);
		JObject adjustInto(JObject arg0) const;
		java::time::LocalDate atDay(jint arg0) const;
		java::time::YearMonth atMonth(jint arg0) const;
		java::time::YearMonth atMonth(java::time::Month arg0) const;
		java::time::LocalDate atMonthDay(java::time::MonthDay arg0) const;
		jint compareTo(JObject arg0) const;
		jint compareTo(java::time::Year arg0) const;
		jboolean equals(JObject arg0) const;
		JString format(java::time::format::DateTimeFormatter arg0) const;
		jint get(JObject arg0) const;
		jlong getLong(JObject arg0) const;
		jint getValue() const;
		jint hashCode() const;
		jboolean isAfter(java::time::Year arg0) const;
		jboolean isBefore(java::time::Year arg0) const;
		jboolean isLeap() const;
		jboolean isSupported(JObject arg0) const;
		jboolean isValidMonthDay(java::time::MonthDay arg0) const;
		jint length() const;
		java::time::Year minus(JObject arg0) const;
		java::time::Year minus(jlong arg0, JObject arg1) const;
		java::time::Year minusYears(jlong arg0) const;
		java::time::Year plus(JObject arg0) const;
		java::time::Year plus(jlong arg0, JObject arg1) const;
		java::time::Year plusYears(jlong arg0) const;
		JObject query(JObject arg0) const;
		java::time::temporal::ValueRange range(JObject arg0) const;
		JString toString() const;
		jlong until(JObject arg0, JObject arg1) const;
		java::time::Year with(JObject arg0) const;
		java::time::Year with(JObject arg0, jlong arg1) const;
	};
} // namespace java::time

