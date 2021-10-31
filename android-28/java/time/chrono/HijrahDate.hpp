#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class HijrahDate : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit HijrahDate(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		HijrahDate(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::chrono::HijrahDate from(__JniBaseClass arg0);
		static java::time::chrono::HijrahDate now();
		static java::time::chrono::HijrahDate now(java::time::Clock arg0);
		static java::time::chrono::HijrahDate now(java::time::ZoneId arg0);
		static java::time::chrono::HijrahDate of(jint arg0, jint arg1, jint arg2);
		__JniBaseClass atTime(java::time::LocalTime arg0);
		jboolean equals(jobject arg0);
		java::time::chrono::HijrahChronology getChronology();
		java::time::chrono::HijrahEra getEra();
		jlong getLong(__JniBaseClass arg0);
		jint hashCode();
		jboolean isLeapYear();
		jint lengthOfMonth();
		jint lengthOfYear();
		java::time::chrono::HijrahDate minus(__JniBaseClass arg0);
		java::time::chrono::HijrahDate minus(jlong arg0, __JniBaseClass arg1);
		java::time::chrono::HijrahDate plus(__JniBaseClass arg0);
		java::time::chrono::HijrahDate plus(jlong arg0, __JniBaseClass arg1);
		java::time::temporal::ValueRange range(__JniBaseClass arg0);
		jlong toEpochDay();
		jstring toString();
		__JniBaseClass until(__JniBaseClass arg0);
		jlong until(__JniBaseClass arg0, __JniBaseClass arg1);
		java::time::chrono::HijrahDate with(__JniBaseClass arg0);
		java::time::chrono::HijrahDate with(__JniBaseClass arg0, jlong arg1);
		java::time::chrono::HijrahDate withVariant(java::time::chrono::HijrahChronology arg0);
	};
} // namespace java::time::chrono

