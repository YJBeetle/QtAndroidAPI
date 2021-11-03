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
	class MonthDay : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MonthDay(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MonthDay(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::MonthDay from(JObject arg0);
		static java::time::MonthDay now();
		static java::time::MonthDay now(java::time::Clock arg0);
		static java::time::MonthDay now(java::time::ZoneId arg0);
		static java::time::MonthDay of(jint arg0, jint arg1);
		static java::time::MonthDay of(java::time::Month arg0, jint arg1);
		static java::time::MonthDay parse(JString arg0);
		static java::time::MonthDay parse(JString arg0, java::time::format::DateTimeFormatter arg1);
		JObject adjustInto(JObject arg0) const;
		java::time::LocalDate atYear(jint arg0) const;
		jint compareTo(JObject arg0) const;
		jint compareTo(java::time::MonthDay arg0) const;
		jboolean equals(JObject arg0) const;
		JString format(java::time::format::DateTimeFormatter arg0) const;
		jint get(JObject arg0) const;
		jint getDayOfMonth() const;
		jlong getLong(JObject arg0) const;
		java::time::Month getMonth() const;
		jint getMonthValue() const;
		jint hashCode() const;
		jboolean isAfter(java::time::MonthDay arg0) const;
		jboolean isBefore(java::time::MonthDay arg0) const;
		jboolean isSupported(JObject arg0) const;
		jboolean isValidYear(jint arg0) const;
		JObject query(JObject arg0) const;
		java::time::temporal::ValueRange range(JObject arg0) const;
		JString toString() const;
		java::time::MonthDay with(java::time::Month arg0) const;
		java::time::MonthDay withDayOfMonth(jint arg0) const;
		java::time::MonthDay withMonth(jint arg0) const;
	};
} // namespace java::time

