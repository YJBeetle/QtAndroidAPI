#include "../io/ObjectInputStream.hpp"
#include "../time/ZonedDateTime.hpp"
#include "./Date.hpp"
#include "./Locale.hpp"
#include "./TimeZone.hpp"
#include "./GregorianCalendar.hpp"

namespace java::util
{
	// Fields
	jint GregorianCalendar::AD()
	{
		return getStaticField<jint>(
			"java.util.GregorianCalendar",
			"AD"
		);
	}
	jint GregorianCalendar::BC()
	{
		return getStaticField<jint>(
			"java.util.GregorianCalendar",
			"BC"
		);
	}
	
	// QJniObject forward
	GregorianCalendar::GregorianCalendar(QJniObject obj) : java::util::Calendar(obj) {}
	
	// Constructors
	GregorianCalendar::GregorianCalendar()
		: java::util::Calendar(
			"java.util.GregorianCalendar",
			"()V"
		) {}
	GregorianCalendar::GregorianCalendar(java::util::Locale arg0)
		: java::util::Calendar(
			"java.util.GregorianCalendar",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	GregorianCalendar::GregorianCalendar(java::util::TimeZone arg0)
		: java::util::Calendar(
			"java.util.GregorianCalendar",
			"(Ljava/util/TimeZone;)V",
			arg0.object()
		) {}
	GregorianCalendar::GregorianCalendar(java::util::TimeZone arg0, java::util::Locale arg1)
		: java::util::Calendar(
			"java.util.GregorianCalendar",
			"(Ljava/util/TimeZone;Ljava/util/Locale;)V",
			arg0.object(),
			arg1.object()
		) {}
	GregorianCalendar::GregorianCalendar(jint arg0, jint arg1, jint arg2)
		: java::util::Calendar(
			"java.util.GregorianCalendar",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	GregorianCalendar::GregorianCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
		: java::util::Calendar(
			"java.util.GregorianCalendar",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	GregorianCalendar::GregorianCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
		: java::util::Calendar(
			"java.util.GregorianCalendar",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		) {}
	
	// Methods
	java::util::GregorianCalendar GregorianCalendar::from(java::time::ZonedDateTime arg0)
	{
		return callStaticObjectMethod(
			"java.util.GregorianCalendar",
			"from",
			"(Ljava/time/ZonedDateTime;)Ljava/util/GregorianCalendar;",
			arg0.object()
		);
	}
	void GregorianCalendar::add(jint arg0, jint arg1)
	{
		callMethod<void>(
			"add",
			"(II)V",
			arg0,
			arg1
		);
	}
	jobject GregorianCalendar::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean GregorianCalendar::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint GregorianCalendar::getActualMaximum(jint arg0)
	{
		return callMethod<jint>(
			"getActualMaximum",
			"(I)I",
			arg0
		);
	}
	jint GregorianCalendar::getActualMinimum(jint arg0)
	{
		return callMethod<jint>(
			"getActualMinimum",
			"(I)I",
			arg0
		);
	}
	jstring GregorianCalendar::getCalendarType()
	{
		return callObjectMethod(
			"getCalendarType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint GregorianCalendar::getGreatestMinimum(jint arg0)
	{
		return callMethod<jint>(
			"getGreatestMinimum",
			"(I)I",
			arg0
		);
	}
	java::util::Date GregorianCalendar::getGregorianChange()
	{
		return callObjectMethod(
			"getGregorianChange",
			"()Ljava/util/Date;"
		);
	}
	jint GregorianCalendar::getLeastMaximum(jint arg0)
	{
		return callMethod<jint>(
			"getLeastMaximum",
			"(I)I",
			arg0
		);
	}
	jint GregorianCalendar::getMaximum(jint arg0)
	{
		return callMethod<jint>(
			"getMaximum",
			"(I)I",
			arg0
		);
	}
	jint GregorianCalendar::getMinimum(jint arg0)
	{
		return callMethod<jint>(
			"getMinimum",
			"(I)I",
			arg0
		);
	}
	java::util::TimeZone GregorianCalendar::getTimeZone()
	{
		return callObjectMethod(
			"getTimeZone",
			"()Ljava/util/TimeZone;"
		);
	}
	jint GregorianCalendar::getWeekYear()
	{
		return callMethod<jint>(
			"getWeekYear",
			"()I"
		);
	}
	jint GregorianCalendar::getWeeksInWeekYear()
	{
		return callMethod<jint>(
			"getWeeksInWeekYear",
			"()I"
		);
	}
	jint GregorianCalendar::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean GregorianCalendar::isLeapYear(jint arg0)
	{
		return callMethod<jboolean>(
			"isLeapYear",
			"(I)Z",
			arg0
		);
	}
	jboolean GregorianCalendar::isWeekDateSupported()
	{
		return callMethod<jboolean>(
			"isWeekDateSupported",
			"()Z"
		);
	}
	void GregorianCalendar::roll(jint arg0, jboolean arg1)
	{
		callMethod<void>(
			"roll",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void GregorianCalendar::roll(jint arg0, jint arg1)
	{
		callMethod<void>(
			"roll",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GregorianCalendar::setGregorianChange(java::util::Date arg0)
	{
		callMethod<void>(
			"setGregorianChange",
			"(Ljava/util/Date;)V",
			arg0.object()
		);
	}
	void GregorianCalendar::setTimeZone(java::util::TimeZone arg0)
	{
		callMethod<void>(
			"setTimeZone",
			"(Ljava/util/TimeZone;)V",
			arg0.object()
		);
	}
	void GregorianCalendar::setWeekDate(jint arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"setWeekDate",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	java::time::ZonedDateTime GregorianCalendar::toZonedDateTime()
	{
		return callObjectMethod(
			"toZonedDateTime",
			"()Ljava/time/ZonedDateTime;"
		);
	}
} // namespace java::util

