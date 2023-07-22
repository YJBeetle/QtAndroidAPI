#pragma once

#include "../../../JObject.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit HijrahDate(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		HijrahDate(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static java::time::chrono::HijrahDate from(JObject arg0);
		static java::time::chrono::HijrahDate now();
		static java::time::chrono::HijrahDate now(java::time::Clock arg0);
		static java::time::chrono::HijrahDate now(java::time::ZoneId arg0);
		static java::time::chrono::HijrahDate of(jint arg0, jint arg1, jint arg2);
		JObject atTime(java::time::LocalTime arg0) const;
		jboolean equals(JObject arg0) const;
		java::time::chrono::HijrahChronology getChronology() const;
		java::time::chrono::HijrahEra getEra() const;
		jlong getLong(JObject arg0) const;
		jint hashCode() const;
		jboolean isLeapYear() const;
		jint lengthOfMonth() const;
		jint lengthOfYear() const;
		java::time::chrono::HijrahDate minus(JObject arg0) const;
		java::time::chrono::HijrahDate minus(jlong arg0, JObject arg1) const;
		java::time::chrono::HijrahDate plus(JObject arg0) const;
		java::time::chrono::HijrahDate plus(jlong arg0, JObject arg1) const;
		java::time::temporal::ValueRange range(JObject arg0) const;
		jlong toEpochDay() const;
		JString toString() const;
		JObject until(JObject arg0) const;
		jlong until(JObject arg0, JObject arg1) const;
		java::time::chrono::HijrahDate with(JObject arg0) const;
		java::time::chrono::HijrahDate with(JObject arg0, jlong arg1) const;
		java::time::chrono::HijrahDate withVariant(java::time::chrono::HijrahChronology arg0) const;
	};
} // namespace java::time::chrono

