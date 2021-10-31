#include "../../io/ObjectInputStream.hpp"
#include "../Clock.hpp"
#include "../Instant.hpp"
#include "../LocalDate.hpp"
#include "../LocalDateTime.hpp"
#include "../Period.hpp"
#include "../ZoneId.hpp"
#include "../ZoneOffset.hpp"
#include "../ZonedDateTime.hpp"
#include "./IsoEra.hpp"
#include "../format/ResolverStyle.hpp"
#include "../temporal/ChronoField.hpp"
#include "../temporal/ValueRange.hpp"
#include "./IsoChronology.hpp"

namespace java::time::chrono
{
	// Fields
	QAndroidJniObject IsoChronology::INSTANCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.chrono.IsoChronology",
			"INSTANCE",
			"Ljava/time/chrono/IsoChronology;"
		);
	}
	
	// QAndroidJniObject forward
	IsoChronology::IsoChronology(QAndroidJniObject obj) : java::time::chrono::AbstractChronology(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject IsoChronology::date(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"date",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/LocalDate;",
			arg0.object()
		);
	}
	QAndroidJniObject IsoChronology::date(jint arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"date",
			"(III)Ljava/time/LocalDate;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject IsoChronology::date(__JniBaseClass arg0, jint arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"date",
			"(Ljava/time/chrono/Era;III)Ljava/time/LocalDate;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject IsoChronology::dateEpochDay(jlong arg0)
	{
		return callObjectMethod(
			"dateEpochDay",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	QAndroidJniObject IsoChronology::dateNow()
	{
		return callObjectMethod(
			"dateNow",
			"()Ljava/time/LocalDate;"
		);
	}
	QAndroidJniObject IsoChronology::dateNow(java::time::Clock arg0)
	{
		return callObjectMethod(
			"dateNow",
			"(Ljava/time/Clock;)Ljava/time/LocalDate;",
			arg0.object()
		);
	}
	QAndroidJniObject IsoChronology::dateNow(java::time::ZoneId arg0)
	{
		return callObjectMethod(
			"dateNow",
			"(Ljava/time/ZoneId;)Ljava/time/LocalDate;",
			arg0.object()
		);
	}
	QAndroidJniObject IsoChronology::dateYearDay(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"dateYearDay",
			"(II)Ljava/time/LocalDate;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject IsoChronology::dateYearDay(__JniBaseClass arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"dateYearDay",
			"(Ljava/time/chrono/Era;II)Ljava/time/LocalDate;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	jlong IsoChronology::epochSecond(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, java::time::ZoneOffset arg6)
	{
		return callMethod<jlong>(
			"epochSecond",
			"(IIIIIILjava/time/ZoneOffset;)J",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.object()
		);
	}
	QAndroidJniObject IsoChronology::eraOf(jint arg0)
	{
		return callObjectMethod(
			"eraOf",
			"(I)Ljava/time/chrono/IsoEra;",
			arg0
		);
	}
	QAndroidJniObject IsoChronology::eras()
	{
		return callObjectMethod(
			"eras",
			"()Ljava/util/List;"
		);
	}
	jstring IsoChronology::getCalendarType()
	{
		return callObjectMethod(
			"getCalendarType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring IsoChronology::getId()
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean IsoChronology::isLeapYear(jlong arg0)
	{
		return callMethod<jboolean>(
			"isLeapYear",
			"(J)Z",
			arg0
		);
	}
	QAndroidJniObject IsoChronology::localDateTime(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"localDateTime",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/LocalDateTime;",
			arg0.object()
		);
	}
	QAndroidJniObject IsoChronology::period(jint arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"period",
			"(III)Ljava/time/Period;",
			arg0,
			arg1,
			arg2
		);
	}
	jint IsoChronology::prolepticYear(__JniBaseClass arg0, jint arg1)
	{
		return callMethod<jint>(
			"prolepticYear",
			"(Ljava/time/chrono/Era;I)I",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject IsoChronology::range(java::time::temporal::ChronoField arg0)
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/ChronoField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	QAndroidJniObject IsoChronology::resolveDate(__JniBaseClass arg0, java::time::format::ResolverStyle arg1)
	{
		return callObjectMethod(
			"resolveDate",
			"(Ljava/util/Map;Ljava/time/format/ResolverStyle;)Ljava/time/LocalDate;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject IsoChronology::zonedDateTime(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"zonedDateTime",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/ZonedDateTime;",
			arg0.object()
		);
	}
	QAndroidJniObject IsoChronology::zonedDateTime(java::time::Instant arg0, java::time::ZoneId arg1)
	{
		return callObjectMethod(
			"zonedDateTime",
			"(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::time::chrono

