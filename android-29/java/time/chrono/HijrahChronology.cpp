#include "../../io/InputStream.hpp"
#include "../../io/ObjectInputStream.hpp"
#include "../../lang/Void.hpp"
#include "../Clock.hpp"
#include "../Instant.hpp"
#include "../ZoneId.hpp"
#include "./HijrahDate.hpp"
#include "./HijrahEra.hpp"
#include "../format/ResolverStyle.hpp"
#include "../temporal/ChronoField.hpp"
#include "../temporal/ValueRange.hpp"
#include "../../util/Properties.hpp"
#include "./HijrahChronology.hpp"

namespace java::time::chrono
{
	// Fields
	QAndroidJniObject HijrahChronology::INSTANCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.chrono.HijrahChronology",
			"INSTANCE",
			"Ljava/time/chrono/HijrahChronology;"
		);
	}
	
	// QAndroidJniObject forward
	HijrahChronology::HijrahChronology(QAndroidJniObject obj) : java::time::chrono::AbstractChronology(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject HijrahChronology::date(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"date",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/HijrahDate;",
			arg0.object()
		);
	}
	QAndroidJniObject HijrahChronology::date(jint arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"date",
			"(III)Ljava/time/chrono/HijrahDate;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject HijrahChronology::date(__JniBaseClass arg0, jint arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"date",
			"(Ljava/time/chrono/Era;III)Ljava/time/chrono/HijrahDate;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject HijrahChronology::dateEpochDay(jlong arg0)
	{
		return callObjectMethod(
			"dateEpochDay",
			"(J)Ljava/time/chrono/HijrahDate;",
			arg0
		);
	}
	QAndroidJniObject HijrahChronology::dateNow()
	{
		return callObjectMethod(
			"dateNow",
			"()Ljava/time/chrono/HijrahDate;"
		);
	}
	QAndroidJniObject HijrahChronology::dateNow(java::time::Clock arg0)
	{
		return callObjectMethod(
			"dateNow",
			"(Ljava/time/Clock;)Ljava/time/chrono/HijrahDate;",
			arg0.object()
		);
	}
	QAndroidJniObject HijrahChronology::dateNow(java::time::ZoneId arg0)
	{
		return callObjectMethod(
			"dateNow",
			"(Ljava/time/ZoneId;)Ljava/time/chrono/HijrahDate;",
			arg0.object()
		);
	}
	QAndroidJniObject HijrahChronology::dateYearDay(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"dateYearDay",
			"(II)Ljava/time/chrono/HijrahDate;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject HijrahChronology::dateYearDay(__JniBaseClass arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"dateYearDay",
			"(Ljava/time/chrono/Era;II)Ljava/time/chrono/HijrahDate;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject HijrahChronology::eraOf(jint arg0)
	{
		return callObjectMethod(
			"eraOf",
			"(I)Ljava/time/chrono/HijrahEra;",
			arg0
		);
	}
	QAndroidJniObject HijrahChronology::eras()
	{
		return callObjectMethod(
			"eras",
			"()Ljava/util/List;"
		);
	}
	jstring HijrahChronology::getCalendarType()
	{
		return callObjectMethod(
			"getCalendarType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring HijrahChronology::getId()
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean HijrahChronology::isLeapYear(jlong arg0)
	{
		return callMethod<jboolean>(
			"isLeapYear",
			"(J)Z",
			arg0
		);
	}
	QAndroidJniObject HijrahChronology::localDateTime(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"localDateTime",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ChronoLocalDateTime;",
			arg0.object()
		);
	}
	jint HijrahChronology::prolepticYear(__JniBaseClass arg0, jint arg1)
	{
		return callMethod<jint>(
			"prolepticYear",
			"(Ljava/time/chrono/Era;I)I",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject HijrahChronology::range(java::time::temporal::ChronoField arg0)
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/ChronoField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	QAndroidJniObject HijrahChronology::resolveDate(__JniBaseClass arg0, java::time::format::ResolverStyle arg1)
	{
		return callObjectMethod(
			"resolveDate",
			"(Ljava/util/Map;Ljava/time/format/ResolverStyle;)Ljava/time/chrono/HijrahDate;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject HijrahChronology::zonedDateTime(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"zonedDateTime",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ChronoZonedDateTime;",
			arg0.object()
		);
	}
	QAndroidJniObject HijrahChronology::zonedDateTime(java::time::Instant arg0, java::time::ZoneId arg1)
	{
		return callObjectMethod(
			"zonedDateTime",
			"(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/chrono/ChronoZonedDateTime;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::time::chrono

