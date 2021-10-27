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
		static QAndroidJniObject EPOCH();
		static QAndroidJniObject MAX();
		static QAndroidJniObject MIN();
		
		Instant(QAndroidJniObject obj);
		// Constructors
		Instant() = default;
		
		// Methods
		static QAndroidJniObject from(__JniBaseClass arg0);
		static QAndroidJniObject now();
		static QAndroidJniObject now(java::time::Clock arg0);
		static QAndroidJniObject ofEpochMilli(jlong arg0);
		static QAndroidJniObject ofEpochSecond(jlong arg0);
		static QAndroidJniObject ofEpochSecond(jlong arg0, jlong arg1);
		static QAndroidJniObject parse(jstring arg0);
		static QAndroidJniObject parse(const QString &arg0);
		QAndroidJniObject adjustInto(__JniBaseClass arg0);
		QAndroidJniObject atOffset(java::time::ZoneOffset arg0);
		QAndroidJniObject atZone(java::time::ZoneId arg0);
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
		QAndroidJniObject minus(__JniBaseClass arg0);
		QAndroidJniObject minus(jlong arg0, __JniBaseClass arg1);
		QAndroidJniObject minusMillis(jlong arg0);
		QAndroidJniObject minusNanos(jlong arg0);
		QAndroidJniObject minusSeconds(jlong arg0);
		QAndroidJniObject plus(__JniBaseClass arg0);
		QAndroidJniObject plus(jlong arg0, __JniBaseClass arg1);
		QAndroidJniObject plusMillis(jlong arg0);
		QAndroidJniObject plusNanos(jlong arg0);
		QAndroidJniObject plusSeconds(jlong arg0);
		jobject query(__JniBaseClass arg0);
		QAndroidJniObject range(__JniBaseClass arg0);
		jlong toEpochMilli();
		jstring toString();
		QAndroidJniObject truncatedTo(__JniBaseClass arg0);
		jlong until(__JniBaseClass arg0, __JniBaseClass arg1);
		QAndroidJniObject with(__JniBaseClass arg0);
		QAndroidJniObject with(__JniBaseClass arg0, jlong arg1);
	};
} // namespace java::time

