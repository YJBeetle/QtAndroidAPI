#pragma once

#include "../../__JniBaseClass.hpp"

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
	class OffsetDateTime;
}
namespace java::time
{
	class ZoneId;
}
namespace java::time
{
	class ZoneOffset;
}
namespace java::time
{
	class ZonedDateTime;
}
namespace java::time::temporal
{
	class ValueRange;
}

namespace java::time
{
	class Instant : public __JniBaseClass
	{
	public:
		// Fields
		static java::time::Instant EPOCH();
		static java::time::Instant MAX();
		static java::time::Instant MIN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Instant(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Instant(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::Instant from(__JniBaseClass arg0);
		static java::time::Instant now();
		static java::time::Instant now(java::time::Clock arg0);
		static java::time::Instant ofEpochMilli(jlong arg0);
		static java::time::Instant ofEpochSecond(jlong arg0);
		static java::time::Instant ofEpochSecond(jlong arg0, jlong arg1);
		static java::time::Instant parse(jstring arg0);
		__JniBaseClass adjustInto(__JniBaseClass arg0);
		java::time::OffsetDateTime atOffset(java::time::ZoneOffset arg0);
		java::time::ZonedDateTime atZone(java::time::ZoneId arg0);
		jint compareTo(jobject arg0);
		jint compareTo(java::time::Instant arg0);
		jboolean equals(jobject arg0);
		jint get(__JniBaseClass arg0);
		jlong getEpochSecond();
		jlong getLong(__JniBaseClass arg0);
		jint getNano();
		jint hashCode();
		jboolean isAfter(java::time::Instant arg0);
		jboolean isBefore(java::time::Instant arg0);
		jboolean isSupported(__JniBaseClass arg0);
		java::time::Instant minus(__JniBaseClass arg0);
		java::time::Instant minus(jlong arg0, __JniBaseClass arg1);
		java::time::Instant minusMillis(jlong arg0);
		java::time::Instant minusNanos(jlong arg0);
		java::time::Instant minusSeconds(jlong arg0);
		java::time::Instant plus(__JniBaseClass arg0);
		java::time::Instant plus(jlong arg0, __JniBaseClass arg1);
		java::time::Instant plusMillis(jlong arg0);
		java::time::Instant plusNanos(jlong arg0);
		java::time::Instant plusSeconds(jlong arg0);
		jobject query(__JniBaseClass arg0);
		java::time::temporal::ValueRange range(__JniBaseClass arg0);
		jlong toEpochMilli();
		jstring toString();
		java::time::Instant truncatedTo(__JniBaseClass arg0);
		jlong until(__JniBaseClass arg0, __JniBaseClass arg1);
		java::time::Instant with(__JniBaseClass arg0);
		java::time::Instant with(__JniBaseClass arg0, jlong arg1);
	};
} // namespace java::time

