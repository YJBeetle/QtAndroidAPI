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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit HijrahDate(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		HijrahDate(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject from(__JniBaseClass arg0);
		static QAndroidJniObject now();
		static QAndroidJniObject now(java::time::Clock arg0);
		static QAndroidJniObject now(java::time::ZoneId arg0);
		static QAndroidJniObject of(jint arg0, jint arg1, jint arg2);
		QAndroidJniObject atTime(java::time::LocalTime arg0);
		jboolean equals(jobject arg0);
		QAndroidJniObject getChronology();
		QAndroidJniObject getEra();
		jlong getLong(__JniBaseClass arg0);
		jint hashCode();
		jboolean isLeapYear();
		jint lengthOfMonth();
		jint lengthOfYear();
		QAndroidJniObject minus(__JniBaseClass arg0);
		QAndroidJniObject minus(jlong arg0, __JniBaseClass arg1);
		QAndroidJniObject plus(__JniBaseClass arg0);
		QAndroidJniObject plus(jlong arg0, __JniBaseClass arg1);
		QAndroidJniObject range(__JniBaseClass arg0);
		jlong toEpochDay();
		jstring toString();
		QAndroidJniObject until(__JniBaseClass arg0);
		jlong until(__JniBaseClass arg0, __JniBaseClass arg1);
		QAndroidJniObject with(__JniBaseClass arg0);
		QAndroidJniObject with(__JniBaseClass arg0, jlong arg1);
		QAndroidJniObject withVariant(java::time::chrono::HijrahChronology arg0);
	};
} // namespace java::time::chrono

