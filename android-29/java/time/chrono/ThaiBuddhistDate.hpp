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
	class ThaiBuddhistDate : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ThaiBuddhistDate(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ThaiBuddhistDate(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::chrono::ThaiBuddhistDate from(__JniBaseClass arg0);
		static java::time::chrono::ThaiBuddhistDate now();
		static java::time::chrono::ThaiBuddhistDate now(java::time::Clock arg0);
		static java::time::chrono::ThaiBuddhistDate now(java::time::ZoneId arg0);
		static java::time::chrono::ThaiBuddhistDate of(jint arg0, jint arg1, jint arg2);
		__JniBaseClass atTime(java::time::LocalTime arg0);
		jboolean equals(jobject arg0);
		java::time::chrono::ThaiBuddhistChronology getChronology();
		java::time::chrono::ThaiBuddhistEra getEra();
		jlong getLong(__JniBaseClass arg0);
		jint hashCode();
		jint lengthOfMonth();
		java::time::chrono::ThaiBuddhistDate minus(__JniBaseClass arg0);
		java::time::chrono::ThaiBuddhistDate minus(jlong arg0, __JniBaseClass arg1);
		java::time::chrono::ThaiBuddhistDate plus(__JniBaseClass arg0);
		java::time::chrono::ThaiBuddhistDate plus(jlong arg0, __JniBaseClass arg1);
		java::time::temporal::ValueRange range(__JniBaseClass arg0);
		jlong toEpochDay();
		jstring toString();
		__JniBaseClass until(__JniBaseClass arg0);
		jlong until(__JniBaseClass arg0, __JniBaseClass arg1);
		java::time::chrono::ThaiBuddhistDate with(__JniBaseClass arg0);
		java::time::chrono::ThaiBuddhistDate with(__JniBaseClass arg0, jlong arg1);
	};
} // namespace java::time::chrono

