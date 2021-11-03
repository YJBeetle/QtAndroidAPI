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
	class LocalDate;
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
	class JapaneseChronology;
}
namespace java::time::chrono
{
	class JapaneseEra;
}
namespace java::time::temporal
{
	class ValueRange;
}

namespace java::time::chrono
{
	class JapaneseDate : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit JapaneseDate(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		JapaneseDate(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::chrono::JapaneseDate from(JObject arg0);
		static java::time::chrono::JapaneseDate now();
		static java::time::chrono::JapaneseDate now(java::time::Clock arg0);
		static java::time::chrono::JapaneseDate now(java::time::ZoneId arg0);
		static java::time::chrono::JapaneseDate of(jint arg0, jint arg1, jint arg2);
		static java::time::chrono::JapaneseDate of(java::time::chrono::JapaneseEra arg0, jint arg1, jint arg2, jint arg3);
		JObject atTime(java::time::LocalTime arg0);
		jboolean equals(JObject arg0);
		java::time::chrono::JapaneseChronology getChronology();
		java::time::chrono::JapaneseEra getEra();
		jlong getLong(JObject arg0);
		jint hashCode();
		jboolean isSupported(JObject arg0);
		jint lengthOfMonth();
		jint lengthOfYear();
		java::time::chrono::JapaneseDate minus(JObject arg0);
		java::time::chrono::JapaneseDate minus(jlong arg0, JObject arg1);
		java::time::chrono::JapaneseDate plus(JObject arg0);
		java::time::chrono::JapaneseDate plus(jlong arg0, JObject arg1);
		java::time::temporal::ValueRange range(JObject arg0);
		jlong toEpochDay();
		JString toString();
		JObject until(JObject arg0);
		jlong until(JObject arg0, JObject arg1);
		java::time::chrono::JapaneseDate with(JObject arg0);
		java::time::chrono::JapaneseDate with(JObject arg0, jlong arg1);
	};
} // namespace java::time::chrono

