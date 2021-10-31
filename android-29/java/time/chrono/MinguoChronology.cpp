#include "../../io/ObjectInputStream.hpp"
#include "../Clock.hpp"
#include "../Instant.hpp"
#include "../ZoneId.hpp"
#include "./MinguoDate.hpp"
#include "./MinguoEra.hpp"
#include "../format/ResolverStyle.hpp"
#include "../temporal/ChronoField.hpp"
#include "../temporal/ValueRange.hpp"
#include "./MinguoChronology.hpp"

namespace java::time::chrono
{
	// Fields
	QAndroidJniObject MinguoChronology::INSTANCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.chrono.MinguoChronology",
			"INSTANCE",
			"Ljava/time/chrono/MinguoChronology;"
		);
	}
	
	// QAndroidJniObject forward
	MinguoChronology::MinguoChronology(QAndroidJniObject obj) : java::time::chrono::AbstractChronology(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject MinguoChronology::date(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"date",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/MinguoDate;",
			arg0.object()
		);
	}
	QAndroidJniObject MinguoChronology::date(jint arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"date",
			"(III)Ljava/time/chrono/MinguoDate;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject MinguoChronology::date(__JniBaseClass arg0, jint arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"date",
			"(Ljava/time/chrono/Era;III)Ljava/time/chrono/MinguoDate;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject MinguoChronology::dateEpochDay(jlong arg0)
	{
		return callObjectMethod(
			"dateEpochDay",
			"(J)Ljava/time/chrono/MinguoDate;",
			arg0
		);
	}
	QAndroidJniObject MinguoChronology::dateNow()
	{
		return callObjectMethod(
			"dateNow",
			"()Ljava/time/chrono/MinguoDate;"
		);
	}
	QAndroidJniObject MinguoChronology::dateNow(java::time::Clock arg0)
	{
		return callObjectMethod(
			"dateNow",
			"(Ljava/time/Clock;)Ljava/time/chrono/MinguoDate;",
			arg0.object()
		);
	}
	QAndroidJniObject MinguoChronology::dateNow(java::time::ZoneId arg0)
	{
		return callObjectMethod(
			"dateNow",
			"(Ljava/time/ZoneId;)Ljava/time/chrono/MinguoDate;",
			arg0.object()
		);
	}
	QAndroidJniObject MinguoChronology::dateYearDay(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"dateYearDay",
			"(II)Ljava/time/chrono/MinguoDate;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject MinguoChronology::dateYearDay(__JniBaseClass arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"dateYearDay",
			"(Ljava/time/chrono/Era;II)Ljava/time/chrono/MinguoDate;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject MinguoChronology::eraOf(jint arg0)
	{
		return callObjectMethod(
			"eraOf",
			"(I)Ljava/time/chrono/MinguoEra;",
			arg0
		);
	}
	QAndroidJniObject MinguoChronology::eras()
	{
		return callObjectMethod(
			"eras",
			"()Ljava/util/List;"
		);
	}
	jstring MinguoChronology::getCalendarType()
	{
		return callObjectMethod(
			"getCalendarType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MinguoChronology::getId()
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean MinguoChronology::isLeapYear(jlong arg0)
	{
		return callMethod<jboolean>(
			"isLeapYear",
			"(J)Z",
			arg0
		);
	}
	QAndroidJniObject MinguoChronology::localDateTime(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"localDateTime",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ChronoLocalDateTime;",
			arg0.object()
		);
	}
	jint MinguoChronology::prolepticYear(__JniBaseClass arg0, jint arg1)
	{
		return callMethod<jint>(
			"prolepticYear",
			"(Ljava/time/chrono/Era;I)I",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject MinguoChronology::range(java::time::temporal::ChronoField arg0)
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/ChronoField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	QAndroidJniObject MinguoChronology::resolveDate(__JniBaseClass arg0, java::time::format::ResolverStyle arg1)
	{
		return callObjectMethod(
			"resolveDate",
			"(Ljava/util/Map;Ljava/time/format/ResolverStyle;)Ljava/time/chrono/MinguoDate;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject MinguoChronology::zonedDateTime(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"zonedDateTime",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ChronoZonedDateTime;",
			arg0.object()
		);
	}
	QAndroidJniObject MinguoChronology::zonedDateTime(java::time::Instant arg0, java::time::ZoneId arg1)
	{
		return callObjectMethod(
			"zonedDateTime",
			"(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/chrono/ChronoZonedDateTime;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::time::chrono

