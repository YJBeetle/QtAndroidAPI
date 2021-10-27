#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::time
{
	class Duration;
}
namespace java::time
{
	class Instant;
}
namespace java::time
{
	class LocalDateTime;
}
namespace java::time
{
	class ZoneOffset;
}

namespace java::time::zone
{
	class ZoneOffsetTransition : public __JniBaseClass
	{
	public:
		// Fields
		
		ZoneOffsetTransition(QAndroidJniObject obj);
		// Constructors
		ZoneOffsetTransition() = default;
		
		// Methods
		static QAndroidJniObject of(java::time::LocalDateTime arg0, java::time::ZoneOffset arg1, java::time::ZoneOffset arg2);
		jint compareTo(jobject arg0);
		jint compareTo(java::time::zone::ZoneOffsetTransition arg0);
		jboolean equals(jobject arg0);
		QAndroidJniObject getDateTimeAfter();
		QAndroidJniObject getDateTimeBefore();
		QAndroidJniObject getDuration();
		QAndroidJniObject getInstant();
		QAndroidJniObject getOffsetAfter();
		QAndroidJniObject getOffsetBefore();
		jint hashCode();
		jboolean isGap();
		jboolean isOverlap();
		jboolean isValidOffset(java::time::ZoneOffset arg0);
		jlong toEpochSecond();
		jstring toString();
	};
} // namespace java::time::zone

