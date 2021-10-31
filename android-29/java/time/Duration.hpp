#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::math
{
	class BigDecimal;
}
namespace java::math
{
	class BigInteger;
}

namespace java::time
{
	class Duration : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ZERO();
		
		Duration(QAndroidJniObject obj);
		// Constructors
		Duration() = default;
		
		// Methods
		static QAndroidJniObject between(__JniBaseClass arg0, __JniBaseClass arg1);
		static QAndroidJniObject from(__JniBaseClass arg0);
		static QAndroidJniObject of(jlong arg0, __JniBaseClass arg1);
		static QAndroidJniObject ofDays(jlong arg0);
		static QAndroidJniObject ofHours(jlong arg0);
		static QAndroidJniObject ofMillis(jlong arg0);
		static QAndroidJniObject ofMinutes(jlong arg0);
		static QAndroidJniObject ofNanos(jlong arg0);
		static QAndroidJniObject ofSeconds(jlong arg0);
		static QAndroidJniObject ofSeconds(jlong arg0, jlong arg1);
		static QAndroidJniObject parse(jstring arg0);
		QAndroidJniObject abs();
		QAndroidJniObject addTo(__JniBaseClass arg0);
		jint compareTo(jobject arg0);
		jint compareTo(java::time::Duration arg0);
		QAndroidJniObject dividedBy(jlong arg0);
		jlong dividedBy(java::time::Duration arg0);
		jboolean equals(jobject arg0);
		jlong get(__JniBaseClass arg0);
		jint getNano();
		jlong getSeconds();
		QAndroidJniObject getUnits();
		jint hashCode();
		jboolean isNegative();
		jboolean isZero();
		QAndroidJniObject minus(java::time::Duration arg0);
		QAndroidJniObject minus(jlong arg0, __JniBaseClass arg1);
		QAndroidJniObject minusDays(jlong arg0);
		QAndroidJniObject minusHours(jlong arg0);
		QAndroidJniObject minusMillis(jlong arg0);
		QAndroidJniObject minusMinutes(jlong arg0);
		QAndroidJniObject minusNanos(jlong arg0);
		QAndroidJniObject minusSeconds(jlong arg0);
		QAndroidJniObject multipliedBy(jlong arg0);
		QAndroidJniObject negated();
		QAndroidJniObject plus(java::time::Duration arg0);
		QAndroidJniObject plus(jlong arg0, __JniBaseClass arg1);
		QAndroidJniObject plusDays(jlong arg0);
		QAndroidJniObject plusHours(jlong arg0);
		QAndroidJniObject plusMillis(jlong arg0);
		QAndroidJniObject plusMinutes(jlong arg0);
		QAndroidJniObject plusNanos(jlong arg0);
		QAndroidJniObject plusSeconds(jlong arg0);
		QAndroidJniObject subtractFrom(__JniBaseClass arg0);
		jlong toDays();
		jlong toDaysPart();
		jlong toHours();
		jint toHoursPart();
		jlong toMillis();
		jint toMillisPart();
		jlong toMinutes();
		jint toMinutesPart();
		jlong toNanos();
		jint toNanosPart();
		jlong toSeconds();
		jint toSecondsPart();
		jstring toString();
		QAndroidJniObject truncatedTo(__JniBaseClass arg0);
		QAndroidJniObject withNanos(jint arg0);
		QAndroidJniObject withSeconds(jlong arg0);
	};
} // namespace java::time

