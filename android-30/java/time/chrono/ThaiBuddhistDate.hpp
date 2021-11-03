#pragma once

#include "../../../JObject.hpp"

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
	class LocalTime;
}
namespace java::time
{
	class ZoneId;
}
namespace java::time::chrono
{
	class ThaiBuddhistChronology;
}
namespace java::time::chrono
{
	class ThaiBuddhistEra;
}
namespace java::time::temporal
{
	class ValueRange;
}

namespace java::time::chrono
{
	class ThaiBuddhistDate : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ThaiBuddhistDate(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ThaiBuddhistDate(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::chrono::ThaiBuddhistDate from(JObject arg0);
		static java::time::chrono::ThaiBuddhistDate now();
		static java::time::chrono::ThaiBuddhistDate now(java::time::Clock arg0);
		static java::time::chrono::ThaiBuddhistDate now(java::time::ZoneId arg0);
		static java::time::chrono::ThaiBuddhistDate of(jint arg0, jint arg1, jint arg2);
		JObject atTime(java::time::LocalTime arg0);
		jboolean equals(jobject arg0);
		java::time::chrono::ThaiBuddhistChronology getChronology();
		java::time::chrono::ThaiBuddhistEra getEra();
		jlong getLong(JObject arg0);
		jint hashCode();
		jint lengthOfMonth();
		java::time::chrono::ThaiBuddhistDate minus(JObject arg0);
		java::time::chrono::ThaiBuddhistDate minus(jlong arg0, JObject arg1);
		java::time::chrono::ThaiBuddhistDate plus(JObject arg0);
		java::time::chrono::ThaiBuddhistDate plus(jlong arg0, JObject arg1);
		java::time::temporal::ValueRange range(JObject arg0);
		jlong toEpochDay();
		jstring toString();
		JObject until(JObject arg0);
		jlong until(JObject arg0, JObject arg1);
		java::time::chrono::ThaiBuddhistDate with(JObject arg0);
		java::time::chrono::ThaiBuddhistDate with(JObject arg0, jlong arg1);
	};
} // namespace java::time::chrono

