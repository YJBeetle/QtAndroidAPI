#include "../lang/StringBuffer.hpp"
#include "./FieldPosition.hpp"
#include "./NumberFormat.hpp"
#include "./ParsePosition.hpp"
#include "../util/Calendar.hpp"
#include "../util/Date.hpp"
#include "../util/Locale.hpp"
#include "../util/TimeZone.hpp"
#include "./DateFormat.hpp"

namespace java::text
{
	// Fields
	jint DateFormat::AM_PM_FIELD()
	{
		return getStaticField<jint>(
			"java.text.DateFormat",
			"AM_PM_FIELD"
		);
	}
	jint DateFormat::DATE_FIELD()
	{
		return getStaticField<jint>(
			"java.text.DateFormat",
			"DATE_FIELD"
		);
	}
	jint DateFormat::DAY_OF_WEEK_FIELD()
	{
		return getStaticField<jint>(
			"java.text.DateFormat",
			"DAY_OF_WEEK_FIELD"
		);
	}
	jint DateFormat::DAY_OF_WEEK_IN_MONTH_FIELD()
	{
		return getStaticField<jint>(
			"java.text.DateFormat",
			"DAY_OF_WEEK_IN_MONTH_FIELD"
		);
	}
	jint DateFormat::DAY_OF_YEAR_FIELD()
	{
		return getStaticField<jint>(
			"java.text.DateFormat",
			"DAY_OF_YEAR_FIELD"
		);
	}
	jint DateFormat::DEFAULT()
	{
		return getStaticField<jint>(
			"java.text.DateFormat",
			"DEFAULT"
		);
	}
	jint DateFormat::ERA_FIELD()
	{
		return getStaticField<jint>(
			"java.text.DateFormat",
			"ERA_FIELD"
		);
	}
	jint DateFormat::FULL()
	{
		return getStaticField<jint>(
			"java.text.DateFormat",
			"FULL"
		);
	}
	jint DateFormat::HOUR0_FIELD()
	{
		return getStaticField<jint>(
			"java.text.DateFormat",
			"HOUR0_FIELD"
		);
	}
	jint DateFormat::HOUR1_FIELD()
	{
		return getStaticField<jint>(
			"java.text.DateFormat",
			"HOUR1_FIELD"
		);
	}
	jint DateFormat::HOUR_OF_DAY0_FIELD()
	{
		return getStaticField<jint>(
			"java.text.DateFormat",
			"HOUR_OF_DAY0_FIELD"
		);
	}
	jint DateFormat::HOUR_OF_DAY1_FIELD()
	{
		return getStaticField<jint>(
			"java.text.DateFormat",
			"HOUR_OF_DAY1_FIELD"
		);
	}
	jint DateFormat::LONG()
	{
		return getStaticField<jint>(
			"java.text.DateFormat",
			"LONG"
		);
	}
	jint DateFormat::MEDIUM()
	{
		return getStaticField<jint>(
			"java.text.DateFormat",
			"MEDIUM"
		);
	}
	jint DateFormat::MILLISECOND_FIELD()
	{
		return getStaticField<jint>(
			"java.text.DateFormat",
			"MILLISECOND_FIELD"
		);
	}
	jint DateFormat::MINUTE_FIELD()
	{
		return getStaticField<jint>(
			"java.text.DateFormat",
			"MINUTE_FIELD"
		);
	}
	jint DateFormat::MONTH_FIELD()
	{
		return getStaticField<jint>(
			"java.text.DateFormat",
			"MONTH_FIELD"
		);
	}
	jint DateFormat::SECOND_FIELD()
	{
		return getStaticField<jint>(
			"java.text.DateFormat",
			"SECOND_FIELD"
		);
	}
	jint DateFormat::SHORT()
	{
		return getStaticField<jint>(
			"java.text.DateFormat",
			"SHORT"
		);
	}
	jint DateFormat::TIMEZONE_FIELD()
	{
		return getStaticField<jint>(
			"java.text.DateFormat",
			"TIMEZONE_FIELD"
		);
	}
	jint DateFormat::WEEK_OF_MONTH_FIELD()
	{
		return getStaticField<jint>(
			"java.text.DateFormat",
			"WEEK_OF_MONTH_FIELD"
		);
	}
	jint DateFormat::WEEK_OF_YEAR_FIELD()
	{
		return getStaticField<jint>(
			"java.text.DateFormat",
			"WEEK_OF_YEAR_FIELD"
		);
	}
	jint DateFormat::YEAR_FIELD()
	{
		return getStaticField<jint>(
			"java.text.DateFormat",
			"YEAR_FIELD"
		);
	}
	
	// QAndroidJniObject forward
	DateFormat::DateFormat(QAndroidJniObject obj) : java::text::Format(obj) {}
	
	// Constructors
	
	// Methods
	jarray DateFormat::getAvailableLocales()
	{
		return callStaticObjectMethod(
			"java.text.DateFormat",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		).object<jarray>();
	}
	java::text::DateFormat DateFormat::getDateInstance()
	{
		return callStaticObjectMethod(
			"java.text.DateFormat",
			"getDateInstance",
			"()Ljava/text/DateFormat;"
		);
	}
	java::text::DateFormat DateFormat::getDateInstance(jint arg0)
	{
		return callStaticObjectMethod(
			"java.text.DateFormat",
			"getDateInstance",
			"(I)Ljava/text/DateFormat;",
			arg0
		);
	}
	java::text::DateFormat DateFormat::getDateInstance(jint arg0, java::util::Locale arg1)
	{
		return callStaticObjectMethod(
			"java.text.DateFormat",
			"getDateInstance",
			"(ILjava/util/Locale;)Ljava/text/DateFormat;",
			arg0,
			arg1.object()
		);
	}
	java::text::DateFormat DateFormat::getDateTimeInstance()
	{
		return callStaticObjectMethod(
			"java.text.DateFormat",
			"getDateTimeInstance",
			"()Ljava/text/DateFormat;"
		);
	}
	java::text::DateFormat DateFormat::getDateTimeInstance(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.text.DateFormat",
			"getDateTimeInstance",
			"(II)Ljava/text/DateFormat;",
			arg0,
			arg1
		);
	}
	java::text::DateFormat DateFormat::getDateTimeInstance(jint arg0, jint arg1, java::util::Locale arg2)
	{
		return callStaticObjectMethod(
			"java.text.DateFormat",
			"getDateTimeInstance",
			"(IILjava/util/Locale;)Ljava/text/DateFormat;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	java::text::DateFormat DateFormat::getInstance()
	{
		return callStaticObjectMethod(
			"java.text.DateFormat",
			"getInstance",
			"()Ljava/text/DateFormat;"
		);
	}
	java::text::DateFormat DateFormat::getTimeInstance()
	{
		return callStaticObjectMethod(
			"java.text.DateFormat",
			"getTimeInstance",
			"()Ljava/text/DateFormat;"
		);
	}
	java::text::DateFormat DateFormat::getTimeInstance(jint arg0)
	{
		return callStaticObjectMethod(
			"java.text.DateFormat",
			"getTimeInstance",
			"(I)Ljava/text/DateFormat;",
			arg0
		);
	}
	java::text::DateFormat DateFormat::getTimeInstance(jint arg0, java::util::Locale arg1)
	{
		return callStaticObjectMethod(
			"java.text.DateFormat",
			"getTimeInstance",
			"(ILjava/util/Locale;)Ljava/text/DateFormat;",
			arg0,
			arg1.object()
		);
	}
	jobject DateFormat::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean DateFormat::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring DateFormat::format(java::util::Date arg0)
	{
		return callObjectMethod(
			"format",
			"(Ljava/util/Date;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	java::lang::StringBuffer DateFormat::format(jobject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	java::lang::StringBuffer DateFormat::format(java::util::Date arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return callObjectMethod(
			"format",
			"(Ljava/util/Date;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	java::util::Calendar DateFormat::getCalendar()
	{
		return callObjectMethod(
			"getCalendar",
			"()Ljava/util/Calendar;"
		);
	}
	java::text::NumberFormat DateFormat::getNumberFormat()
	{
		return callObjectMethod(
			"getNumberFormat",
			"()Ljava/text/NumberFormat;"
		);
	}
	java::util::TimeZone DateFormat::getTimeZone()
	{
		return callObjectMethod(
			"getTimeZone",
			"()Ljava/util/TimeZone;"
		);
	}
	jint DateFormat::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean DateFormat::isLenient()
	{
		return callMethod<jboolean>(
			"isLenient",
			"()Z"
		);
	}
	java::util::Date DateFormat::parse(jstring arg0)
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;)Ljava/util/Date;",
			arg0
		);
	}
	java::util::Date DateFormat::parse(jstring arg0, java::text::ParsePosition arg1)
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/util/Date;",
			arg0,
			arg1.object()
		);
	}
	jobject DateFormat::parseObject(jstring arg0, java::text::ParsePosition arg1)
	{
		return callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	void DateFormat::setCalendar(java::util::Calendar arg0)
	{
		callMethod<void>(
			"setCalendar",
			"(Ljava/util/Calendar;)V",
			arg0.object()
		);
	}
	void DateFormat::setLenient(jboolean arg0)
	{
		callMethod<void>(
			"setLenient",
			"(Z)V",
			arg0
		);
	}
	void DateFormat::setNumberFormat(java::text::NumberFormat arg0)
	{
		callMethod<void>(
			"setNumberFormat",
			"(Ljava/text/NumberFormat;)V",
			arg0.object()
		);
	}
	void DateFormat::setTimeZone(java::util::TimeZone arg0)
	{
		callMethod<void>(
			"setTimeZone",
			"(Ljava/util/TimeZone;)V",
			arg0.object()
		);
	}
} // namespace java::text

