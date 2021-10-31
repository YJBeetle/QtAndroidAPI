#include "./format/TextStyle.hpp"
#include "./temporal/ValueRange.hpp"
#include "../util/Locale.hpp"
#include "./Month.hpp"

namespace java::time
{
	// Fields
	java::time::Month Month::APRIL()
	{
		return getStaticObjectField(
			"java.time.Month",
			"APRIL",
			"Ljava/time/Month;"
		);
	}
	java::time::Month Month::AUGUST()
	{
		return getStaticObjectField(
			"java.time.Month",
			"AUGUST",
			"Ljava/time/Month;"
		);
	}
	java::time::Month Month::DECEMBER()
	{
		return getStaticObjectField(
			"java.time.Month",
			"DECEMBER",
			"Ljava/time/Month;"
		);
	}
	java::time::Month Month::FEBRUARY()
	{
		return getStaticObjectField(
			"java.time.Month",
			"FEBRUARY",
			"Ljava/time/Month;"
		);
	}
	java::time::Month Month::JANUARY()
	{
		return getStaticObjectField(
			"java.time.Month",
			"JANUARY",
			"Ljava/time/Month;"
		);
	}
	java::time::Month Month::JULY()
	{
		return getStaticObjectField(
			"java.time.Month",
			"JULY",
			"Ljava/time/Month;"
		);
	}
	java::time::Month Month::JUNE()
	{
		return getStaticObjectField(
			"java.time.Month",
			"JUNE",
			"Ljava/time/Month;"
		);
	}
	java::time::Month Month::MARCH()
	{
		return getStaticObjectField(
			"java.time.Month",
			"MARCH",
			"Ljava/time/Month;"
		);
	}
	java::time::Month Month::MAY()
	{
		return getStaticObjectField(
			"java.time.Month",
			"MAY",
			"Ljava/time/Month;"
		);
	}
	java::time::Month Month::NOVEMBER()
	{
		return getStaticObjectField(
			"java.time.Month",
			"NOVEMBER",
			"Ljava/time/Month;"
		);
	}
	java::time::Month Month::OCTOBER()
	{
		return getStaticObjectField(
			"java.time.Month",
			"OCTOBER",
			"Ljava/time/Month;"
		);
	}
	java::time::Month Month::SEPTEMBER()
	{
		return getStaticObjectField(
			"java.time.Month",
			"SEPTEMBER",
			"Ljava/time/Month;"
		);
	}
	
	// QAndroidJniObject forward
	Month::Month(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::time::Month Month::from(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.time.Month",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/Month;",
			arg0.object()
		);
	}
	java::time::Month Month::of(jint arg0)
	{
		return callStaticObjectMethod(
			"java.time.Month",
			"of",
			"(I)Ljava/time/Month;",
			arg0
		);
	}
	java::time::Month Month::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.time.Month",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/Month;",
			arg0
		);
	}
	jarray Month::values()
	{
		return callStaticObjectMethod(
			"java.time.Month",
			"values",
			"()[Ljava/time/Month;"
		).object<jarray>();
	}
	__JniBaseClass Month::adjustInto(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.object()
		);
	}
	jint Month::firstDayOfYear(jboolean arg0)
	{
		return callMethod<jint>(
			"firstDayOfYear",
			"(Z)I",
			arg0
		);
	}
	java::time::Month Month::firstMonthOfQuarter()
	{
		return callObjectMethod(
			"firstMonthOfQuarter",
			"()Ljava/time/Month;"
		);
	}
	jint Month::get(__JniBaseClass arg0)
	{
		return callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.object()
		);
	}
	jstring Month::getDisplayName(java::time::format::TextStyle arg0, java::util::Locale arg1)
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object(),
			arg1.object()
		).object<jstring>();
	}
	jlong Month::getLong(__JniBaseClass arg0)
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.object()
		);
	}
	jint Month::getValue()
	{
		return callMethod<jint>(
			"getValue",
			"()I"
		);
	}
	jboolean Month::isSupported(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.object()
		);
	}
	jint Month::length(jboolean arg0)
	{
		return callMethod<jint>(
			"length",
			"(Z)I",
			arg0
		);
	}
	jint Month::maxLength()
	{
		return callMethod<jint>(
			"maxLength",
			"()I"
		);
	}
	jint Month::minLength()
	{
		return callMethod<jint>(
			"minLength",
			"()I"
		);
	}
	java::time::Month Month::minus(jlong arg0)
	{
		return callObjectMethod(
			"minus",
			"(J)Ljava/time/Month;",
			arg0
		);
	}
	java::time::Month Month::plus(jlong arg0)
	{
		return callObjectMethod(
			"plus",
			"(J)Ljava/time/Month;",
			arg0
		);
	}
	jobject Month::query(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.object()
		).object<jobject>();
	}
	java::time::temporal::ValueRange Month::range(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
} // namespace java::time
