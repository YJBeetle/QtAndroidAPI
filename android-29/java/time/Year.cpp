#include "../io/ObjectInputStream.hpp"
#include "./Clock.hpp"
#include "./LocalDate.hpp"
#include "./Month.hpp"
#include "./MonthDay.hpp"
#include "./YearMonth.hpp"
#include "./ZoneId.hpp"
#include "./format/DateTimeFormatter.hpp"
#include "./temporal/ValueRange.hpp"
#include "./Year.hpp"

namespace java::time
{
	// Fields
	jint Year::MAX_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.time.Year",
			"MAX_VALUE"
		);
	}
	jint Year::MIN_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.time.Year",
			"MIN_VALUE"
		);
	}
	
	// QAndroidJniObject forward
	Year::Year(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject Year::from(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Year",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/Year;",
			arg0.object()
		);
	}
	jboolean Year::isLeap(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.time.Year",
			"isLeap",
			"(J)Z",
			arg0
		);
	}
	QAndroidJniObject Year::now()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Year",
			"now",
			"()Ljava/time/Year;"
		);
	}
	QAndroidJniObject Year::now(java::time::Clock arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Year",
			"now",
			"(Ljava/time/Clock;)Ljava/time/Year;",
			arg0.object()
		);
	}
	QAndroidJniObject Year::now(java::time::ZoneId arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Year",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/Year;",
			arg0.object()
		);
	}
	QAndroidJniObject Year::of(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Year",
			"of",
			"(I)Ljava/time/Year;",
			arg0
		);
	}
	QAndroidJniObject Year::parse(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Year",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/Year;",
			arg0
		);
	}
	QAndroidJniObject Year::parse(jstring arg0, java::time::format::DateTimeFormatter arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Year",
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/Year;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject Year::adjustInto(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.object()
		);
	}
	QAndroidJniObject Year::atDay(jint arg0)
	{
		return callObjectMethod(
			"atDay",
			"(I)Ljava/time/LocalDate;",
			arg0
		);
	}
	QAndroidJniObject Year::atMonth(jint arg0)
	{
		return callObjectMethod(
			"atMonth",
			"(I)Ljava/time/YearMonth;",
			arg0
		);
	}
	QAndroidJniObject Year::atMonth(java::time::Month arg0)
	{
		return callObjectMethod(
			"atMonth",
			"(Ljava/time/Month;)Ljava/time/YearMonth;",
			arg0.object()
		);
	}
	QAndroidJniObject Year::atMonthDay(java::time::MonthDay arg0)
	{
		return callObjectMethod(
			"atMonthDay",
			"(Ljava/time/MonthDay;)Ljava/time/LocalDate;",
			arg0.object()
		);
	}
	jint Year::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint Year::compareTo(java::time::Year arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/time/Year;)I",
			arg0.object()
		);
	}
	jboolean Year::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring Year::format(java::time::format::DateTimeFormatter arg0)
	{
		return callObjectMethod(
			"format",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jint Year::get(__JniBaseClass arg0)
	{
		return callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.object()
		);
	}
	jlong Year::getLong(__JniBaseClass arg0)
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.object()
		);
	}
	jint Year::getValue()
	{
		return callMethod<jint>(
			"getValue",
			"()I"
		);
	}
	jint Year::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Year::isAfter(java::time::Year arg0)
	{
		return callMethod<jboolean>(
			"isAfter",
			"(Ljava/time/Year;)Z",
			arg0.object()
		);
	}
	jboolean Year::isBefore(java::time::Year arg0)
	{
		return callMethod<jboolean>(
			"isBefore",
			"(Ljava/time/Year;)Z",
			arg0.object()
		);
	}
	jboolean Year::isLeap()
	{
		return callMethod<jboolean>(
			"isLeap",
			"()Z"
		);
	}
	jboolean Year::isSupported(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.object()
		);
	}
	jboolean Year::isValidMonthDay(java::time::MonthDay arg0)
	{
		return callMethod<jboolean>(
			"isValidMonthDay",
			"(Ljava/time/MonthDay;)Z",
			arg0.object()
		);
	}
	jint Year::length()
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	QAndroidJniObject Year::minus(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/Year;",
			arg0.object()
		);
	}
	QAndroidJniObject Year::minus(jlong arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/Year;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject Year::minusYears(jlong arg0)
	{
		return callObjectMethod(
			"minusYears",
			"(J)Ljava/time/Year;",
			arg0
		);
	}
	QAndroidJniObject Year::plus(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/Year;",
			arg0.object()
		);
	}
	QAndroidJniObject Year::plus(jlong arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/Year;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject Year::plusYears(jlong arg0)
	{
		return callObjectMethod(
			"plusYears",
			"(J)Ljava/time/Year;",
			arg0
		);
	}
	jobject Year::query(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.object()
		).object<jobject>();
	}
	QAndroidJniObject Year::range(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	jstring Year::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong Year::until(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject Year::with(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/Year;",
			arg0.object()
		);
	}
	QAndroidJniObject Year::with(__JniBaseClass arg0, jlong arg1)
	{
		return callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/Year;",
			arg0.object(),
			arg1
		);
	}
} // namespace java::time

