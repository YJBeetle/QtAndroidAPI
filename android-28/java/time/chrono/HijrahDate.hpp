#pragma once


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
	class LocalTime;
}
namespace java::time
{
	class ZoneId;
}
namespace java::time::chrono
{
	class HijrahChronology;
}
namespace java::time::chrono
{
	class HijrahEra;
}
namespace java::time::temporal
{
	class ValueRange;
}

namespace java::time::chrono
{
	class HijrahDate : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit HijrahDate(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		HijrahDate(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::chrono::HijrahDate from(JObject arg0);
		static java::time::chrono::HijrahDate now();
		static java::time::chrono::HijrahDate now(java::time::Clock arg0);
		static java::time::chrono::HijrahDate now(java::time::ZoneId arg0);
		static java::time::chrono::HijrahDate of(jint arg0, jint arg1, jint arg2);
		JObject atTime(java::time::LocalTime arg0);
		jboolean equals(JObject arg0);
		java::time::chrono::HijrahChronology getChronology();
		java::time::chrono::HijrahEra getEra();
		jlong getLong(JObject arg0);
		jint hashCode();
		jboolean isLeapYear();
		jint lengthOfMonth();
		jint lengthOfYear();
		java::time::chrono::HijrahDate minus(JObject arg0);
		java::time::chrono::HijrahDate minus(jlong arg0, JObject arg1);
		java::time::chrono::HijrahDate plus(JObject arg0);
		java::time::chrono::HijrahDate plus(jlong arg0, JObject arg1);
		java::time::temporal::ValueRange range(JObject arg0);
		jlong toEpochDay();
		JString toString();
		JObject until(JObject arg0);
		jlong until(JObject arg0, JObject arg1);
		java::time::chrono::HijrahDate with(JObject arg0);
		java::time::chrono::HijrahDate with(JObject arg0, jlong arg1);
		java::time::chrono::HijrahDate withVariant(java::time::chrono::HijrahChronology arg0);
	};
} // namespace java::time::chrono

