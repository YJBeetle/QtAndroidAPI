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
		JObject adjustInto(JObject arg0);
		java::time::LocalDate atYear(jint arg0);
		jint compareTo(JObject arg0);
		jint compareTo(java::time::MonthDay arg0);
		jboolean equals(JObject arg0);
		JString format(java::time::format::DateTimeFormatter arg0);
		jint get(JObject arg0);
		jint getDayOfMonth();
		jlong getLong(JObject arg0);
		java::time::Month getMonth();
		jint getMonthValue();
		jint hashCode();
		jboolean isAfter(java::time::MonthDay arg0);
		jboolean isBefore(java::time::MonthDay arg0);
		jboolean isSupported(JObject arg0);
		jboolean isValidYear(jint arg0);
		JObject query(JObject arg0);
		java::time::temporal::ValueRange range(JObject arg0);
		JString toString();
		java::time::MonthDay with(java::time::Month arg0);
		java::time::MonthDay withDayOfMonth(jint arg0);
		java::time::MonthDay withMonth(jint arg0);
	};
} // namespace java::time

