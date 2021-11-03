#pragma once

#include "../../JObject.hpp"

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
		Year(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::Year from(JObject arg0);
		static jboolean isLeap(jlong arg0);
		static java::time::Year now();
		static java::time::Year now(java::time::Clock arg0);
		static java::time::Year now(java::time::ZoneId arg0);
		static java::time::Year of(jint arg0);
		static java::time::Year parse(jstring arg0);
		static java::time::Year parse(jstring arg0, java::time::format::DateTimeFormatter arg1);
		JObject adjustInto(JObject arg0);
		java::time::LocalDate atDay(jint arg0);
		java::time::YearMonth atMonth(jint arg0);
		java::time::YearMonth atMonth(java::time::Month arg0);
		java::time::LocalDate atMonthDay(java::time::MonthDay arg0);
		jint compareTo(jobject arg0);
		jint compareTo(java::time::Year arg0);
		jboolean equals(jobject arg0);
		jstring format(java::time::format::DateTimeFormatter arg0);
		jint get(JObject arg0);
		jlong getLong(JObject arg0);
		jint getValue();
		jint hashCode();
		jboolean isAfter(java::time::Year arg0);
		jboolean isBefore(java::time::Year arg0);
		jboolean isLeap();
		jboolean isSupported(JObject arg0);
		jboolean isValidMonthDay(java::time::MonthDay arg0);
		jint length();
		java::time::Year minus(JObject arg0);
		java::time::Year minus(jlong arg0, JObject arg1);
		java::time::Year minusYears(jlong arg0);
		java::time::Year plus(JObject arg0);
		java::time::Year plus(jlong arg0, JObject arg1);
		java::time::Year plusYears(jlong arg0);
		jobject query(JObject arg0);
		java::time::temporal::ValueRange range(JObject arg0);
		jstring toString();
		jlong until(JObject arg0, JObject arg1);
		java::time::Year with(JObject arg0);
		java::time::Year with(JObject arg0, jlong arg1);
	};
} // namespace java::time

