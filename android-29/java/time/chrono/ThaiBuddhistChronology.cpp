#include "../../io/ObjectInputStream.hpp"
#include "../Clock.hpp"
#include "../Instant.hpp"
#include "../ZoneId.hpp"
#include "./ThaiBuddhistDate.hpp"
#include "./ThaiBuddhistEra.hpp"
#include "../format/ResolverStyle.hpp"
#include "../temporal/ChronoField.hpp"
#include "../temporal/ValueRange.hpp"
#include "../../util/HashMap.hpp"
#include "./ThaiBuddhistChronology.hpp"

namespace java::time::chrono
{
	// Fields
	QAndroidJniObject ThaiBuddhistChronology::INSTANCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.chrono.ThaiBuddhistChronology",
			"INSTANCE",
			"Ljava/time/chrono/ThaiBuddhistChronology;"
		);
	}
	
	// QAndroidJniObject forward
	ThaiBuddhistChronology::ThaiBuddhistChronology(QAndroidJniObject obj) : java::time::chrono::AbstractChronology(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject ThaiBuddhistChronology::date(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"date",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object()
		);
	}
	QAndroidJniObject ThaiBuddhistChronology::date(jint arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"date",
			"(III)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject ThaiBuddhistChronology::date(__JniBaseClass arg0, jint arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"date",
			"(Ljava/time/chrono/Era;III)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject ThaiBuddhistChronology::dateEpochDay(jlong arg0)
	{
		return callObjectMethod(
			"dateEpochDay",
			"(J)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0
		);
	}
	QAndroidJniObject ThaiBuddhistChronology::dateNow()
	{
		return callObjectMethod(
			"dateNow",
			"()Ljava/time/chrono/ThaiBuddhistDate;"
		);
	}
	QAndroidJniObject ThaiBuddhistChronology::dateNow(java::time::Clock arg0)
	{
		return callObjectMethod(
			"dateNow",
			"(Ljava/time/Clock;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object()
		);
	}
	QAndroidJniObject ThaiBuddhistChronology::dateNow(java::time::ZoneId arg0)
	{
		return callObjectMethod(
			"dateNow",
			"(Ljava/time/ZoneId;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object()
		);
	}
	QAndroidJniObject ThaiBuddhistChronology::dateYearDay(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"dateYearDay",
			"(II)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ThaiBuddhistChronology::dateYearDay(__JniBaseClass arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"dateYearDay",
			"(Ljava/time/chrono/Era;II)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject ThaiBuddhistChronology::eraOf(jint arg0)
	{
		return callObjectMethod(
			"eraOf",
			"(I)Ljava/time/chrono/ThaiBuddhistEra;",
			arg0
		);
	}
	QAndroidJniObject ThaiBuddhistChronology::eras()
	{
		return callObjectMethod(
			"eras",
			"()Ljava/util/List;"
		);
	}
	jstring ThaiBuddhistChronology::getCalendarType()
	{
		return callObjectMethod(
			"getCalendarType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ThaiBuddhistChronology::getId()
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean ThaiBuddhistChronology::isLeapYear(jlong arg0)
	{
		return callMethod<jboolean>(
			"isLeapYear",
			"(J)Z",
			arg0
		);
	}
	QAndroidJniObject ThaiBuddhistChronology::localDateTime(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"localDateTime",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ChronoLocalDateTime;",
			arg0.object()
		);
	}
	jint ThaiBuddhistChronology::prolepticYear(__JniBaseClass arg0, jint arg1)
	{
		return callMethod<jint>(
			"prolepticYear",
			"(Ljava/time/chrono/Era;I)I",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject ThaiBuddhistChronology::range(java::time::temporal::ChronoField arg0)
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/ChronoField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	QAndroidJniObject ThaiBuddhistChronology::resolveDate(__JniBaseClass arg0, java::time::format::ResolverStyle arg1)
	{
		return callObjectMethod(
			"resolveDate",
			"(Ljava/util/Map;Ljava/time/format/ResolverStyle;)Ljava/time/chrono/ThaiBuddhistDate;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject ThaiBuddhistChronology::zonedDateTime(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"zonedDateTime",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ChronoZonedDateTime;",
			arg0.object()
		);
	}
	QAndroidJniObject ThaiBuddhistChronology::zonedDateTime(java::time::Instant arg0, java::time::ZoneId arg1)
	{
		return callObjectMethod(
			"zonedDateTime",
			"(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/chrono/ChronoZonedDateTime;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::time::chrono

