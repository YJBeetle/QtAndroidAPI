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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit JapaneseDate(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		JapaneseDate(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static java::time::chrono::JapaneseDate from(JObject arg0);
		static java::time::chrono::JapaneseDate now();
		static java::time::chrono::JapaneseDate now(java::time::Clock arg0);
		static java::time::chrono::JapaneseDate now(java::time::ZoneId arg0);
		static java::time::chrono::JapaneseDate of(jint arg0, jint arg1, jint arg2);
		static java::time::chrono::JapaneseDate of(java::time::chrono::JapaneseEra arg0, jint arg1, jint arg2, jint arg3);
		JObject atTime(java::time::LocalTime arg0) const;
		jboolean equals(JObject arg0) const;
		java::time::chrono::JapaneseChronology getChronology() const;
		java::time::chrono::JapaneseEra getEra() const;
		jlong getLong(JObject arg0) const;
		jint hashCode() const;
		jboolean isSupported(JObject arg0) const;
		jint lengthOfMonth() const;
		jint lengthOfYear() const;
		java::time::chrono::JapaneseDate minus(JObject arg0) const;
		java::time::chrono::JapaneseDate minus(jlong arg0, JObject arg1) const;
		java::time::chrono::JapaneseDate plus(JObject arg0) const;
		java::time::chrono::JapaneseDate plus(jlong arg0, JObject arg1) const;
		java::time::temporal::ValueRange range(JObject arg0) const;
		jlong toEpochDay() const;
		JString toString() const;
		JObject until(JObject arg0) const;
		jlong until(JObject arg0, JObject arg1) const;
		java::time::chrono::JapaneseDate with(JObject arg0) const;
		java::time::chrono::JapaneseDate with(JObject arg0, jlong arg1) const;
	};
} // namespace java::time::chrono

