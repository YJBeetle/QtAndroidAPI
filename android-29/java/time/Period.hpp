#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::time
{
	class LocalDate;
}
namespace java::time::chrono
{
	class IsoChronology;
}
namespace java::util::regex
{
	class Pattern;
}

namespace java::time
{
	class Period : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ZERO();
		
		Period(QAndroidJniObject obj);
		// Constructors
		Period() = default;
		
		// Methods
		static QAndroidJniObject between(java::time::LocalDate arg0, java::time::LocalDate arg1);
		static QAndroidJniObject from(__JniBaseClass arg0);
		static QAndroidJniObject of(jint arg0, jint arg1, jint arg2);
		static QAndroidJniObject ofDays(jint arg0);
		static QAndroidJniObject ofMonths(jint arg0);
		static QAndroidJniObject ofWeeks(jint arg0);
		static QAndroidJniObject ofYears(jint arg0);
		static QAndroidJniObject parse(jstring arg0);
		static QAndroidJniObject parse(const QString &arg0);
		QAndroidJniObject addTo(__JniBaseClass arg0);
		jboolean equals(jobject arg0);
		jlong get(__JniBaseClass arg0);
		QAndroidJniObject getChronology();
		jint getDays();
		jint getMonths();
		QAndroidJniObject getUnits();
		jint getYears();
		jint hashCode();
		jboolean isNegative();
		jboolean isZero();
		QAndroidJniObject minus(__JniBaseClass arg0);
		QAndroidJniObject minusDays(jlong arg0);
		QAndroidJniObject minusMonths(jlong arg0);
		QAndroidJniObject minusYears(jlong arg0);
		QAndroidJniObject multipliedBy(jint arg0);
		QAndroidJniObject negated();
		QAndroidJniObject normalized();
		QAndroidJniObject plus(__JniBaseClass arg0);
		QAndroidJniObject plusDays(jlong arg0);
		QAndroidJniObject plusMonths(jlong arg0);
		QAndroidJniObject plusYears(jlong arg0);
		QAndroidJniObject subtractFrom(__JniBaseClass arg0);
		jstring toString();
		jlong toTotalMonths();
		QAndroidJniObject withDays(jint arg0);
		QAndroidJniObject withMonths(jint arg0);
		QAndroidJniObject withYears(jint arg0);
	};
} // namespace java::time

