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
		static java::time::Period ZERO();
		
		// QJniObject forward
		template<typename ...Ts> explicit Period(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Period(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::Period between(java::time::LocalDate arg0, java::time::LocalDate arg1);
		static java::time::Period from(__JniBaseClass arg0);
		static java::time::Period of(jint arg0, jint arg1, jint arg2);
		static java::time::Period ofDays(jint arg0);
		static java::time::Period ofMonths(jint arg0);
		static java::time::Period ofWeeks(jint arg0);
		static java::time::Period ofYears(jint arg0);
		static java::time::Period parse(jstring arg0);
		__JniBaseClass addTo(__JniBaseClass arg0);
		jboolean equals(jobject arg0);
		jlong get(__JniBaseClass arg0);
		java::time::chrono::IsoChronology getChronology();
		jint getDays();
		jint getMonths();
		__JniBaseClass getUnits();
		jint getYears();
		jint hashCode();
		jboolean isNegative();
		jboolean isZero();
		java::time::Period minus(__JniBaseClass arg0);
		java::time::Period minusDays(jlong arg0);
		java::time::Period minusMonths(jlong arg0);
		java::time::Period minusYears(jlong arg0);
		java::time::Period multipliedBy(jint arg0);
		java::time::Period negated();
		java::time::Period normalized();
		java::time::Period plus(__JniBaseClass arg0);
		java::time::Period plusDays(jlong arg0);
		java::time::Period plusMonths(jlong arg0);
		java::time::Period plusYears(jlong arg0);
		__JniBaseClass subtractFrom(__JniBaseClass arg0);
		jstring toString();
		jlong toTotalMonths();
		java::time::Period withDays(jint arg0);
		java::time::Period withMonths(jint arg0);
		java::time::Period withYears(jint arg0);
	};
} // namespace java::time

