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
	class JapaneseDate : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit JapaneseDate(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		JapaneseDate(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::chrono::JapaneseDate from(__JniBaseClass arg0);
		static java::time::chrono::JapaneseDate now();
		static java::time::chrono::JapaneseDate now(java::time::Clock arg0);
		static java::time::chrono::JapaneseDate now(java::time::ZoneId arg0);
		static java::time::chrono::JapaneseDate of(jint arg0, jint arg1, jint arg2);
		static java::time::chrono::JapaneseDate of(java::time::chrono::JapaneseEra arg0, jint arg1, jint arg2, jint arg3);
		__JniBaseClass atTime(java::time::LocalTime arg0);
		jboolean equals(jobject arg0);
		java::time::chrono::JapaneseChronology getChronology();
		java::time::chrono::JapaneseEra getEra();
		jlong getLong(__JniBaseClass arg0);
		jint hashCode();
		jboolean isSupported(__JniBaseClass arg0);
		jint lengthOfMonth();
		jint lengthOfYear();
		java::time::chrono::JapaneseDate minus(__JniBaseClass arg0);
		java::time::chrono::JapaneseDate minus(jlong arg0, __JniBaseClass arg1);
		java::time::chrono::JapaneseDate plus(__JniBaseClass arg0);
		java::time::chrono::JapaneseDate plus(jlong arg0, __JniBaseClass arg1);
		java::time::temporal::ValueRange range(__JniBaseClass arg0);
		jlong toEpochDay();
		jstring toString();
		__JniBaseClass until(__JniBaseClass arg0);
		jlong until(__JniBaseClass arg0, __JniBaseClass arg1);
		java::time::chrono::JapaneseDate with(__JniBaseClass arg0);
		java::time::chrono::JapaneseDate with(__JniBaseClass arg0, jlong arg1);
	};
} // namespace java::time::chrono

