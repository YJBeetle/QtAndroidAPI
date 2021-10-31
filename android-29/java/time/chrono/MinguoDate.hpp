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
	class MinguoDate : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MinguoDate(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MinguoDate(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::chrono::MinguoDate from(__JniBaseClass arg0);
		static java::time::chrono::MinguoDate now();
		static java::time::chrono::MinguoDate now(java::time::Clock arg0);
		static java::time::chrono::MinguoDate now(java::time::ZoneId arg0);
		static java::time::chrono::MinguoDate of(jint arg0, jint arg1, jint arg2);
		__JniBaseClass atTime(java::time::LocalTime arg0);
		jboolean equals(jobject arg0);
		java::time::chrono::MinguoChronology getChronology();
		java::time::chrono::MinguoEra getEra();
		jlong getLong(__JniBaseClass arg0);
		jint hashCode();
		jint lengthOfMonth();
		java::time::chrono::MinguoDate minus(__JniBaseClass arg0);
		java::time::chrono::MinguoDate minus(jlong arg0, __JniBaseClass arg1);
		java::time::chrono::MinguoDate plus(__JniBaseClass arg0);
		java::time::chrono::MinguoDate plus(jlong arg0, __JniBaseClass arg1);
		java::time::temporal::ValueRange range(__JniBaseClass arg0);
		jlong toEpochDay();
		jstring toString();
		__JniBaseClass until(__JniBaseClass arg0);
		jlong until(__JniBaseClass arg0, __JniBaseClass arg1);
		java::time::chrono::MinguoDate with(__JniBaseClass arg0);
		java::time::chrono::MinguoDate with(__JniBaseClass arg0, jlong arg1);
	};
} // namespace java::time::chrono

