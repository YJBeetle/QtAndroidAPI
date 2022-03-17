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
	class MinguoChronology;
}
namespace java::time::chrono
{
	class MinguoEra;
}
namespace java::time::temporal
{
	class ValueRange;
}

namespace java::time::chrono
{
	class MinguoDate : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MinguoDate(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MinguoDate(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static java::time::chrono::MinguoDate from(JObject arg0);
		static java::time::chrono::MinguoDate now();
		static java::time::chrono::MinguoDate now(java::time::Clock arg0);
		static java::time::chrono::MinguoDate now(java::time::ZoneId arg0);
		static java::time::chrono::MinguoDate of(jint arg0, jint arg1, jint arg2);
		JObject atTime(java::time::LocalTime arg0) const;
		jboolean equals(JObject arg0) const;
		java::time::chrono::MinguoChronology getChronology() const;
		java::time::chrono::MinguoEra getEra() const;
		jlong getLong(JObject arg0) const;
		jint hashCode() const;
		jint lengthOfMonth() const;
		java::time::chrono::MinguoDate minus(JObject arg0) const;
		java::time::chrono::MinguoDate minus(jlong arg0, JObject arg1) const;
		java::time::chrono::MinguoDate plus(JObject arg0) const;
		java::time::chrono::MinguoDate plus(jlong arg0, JObject arg1) const;
		java::time::temporal::ValueRange range(JObject arg0) const;
		jlong toEpochDay() const;
		JString toString() const;
		JObject until(JObject arg0) const;
		jlong until(JObject arg0, JObject arg1) const;
		java::time::chrono::MinguoDate with(JObject arg0) const;
		java::time::chrono::MinguoDate with(JObject arg0, jlong arg1) const;
	};
} // namespace java::time::chrono

