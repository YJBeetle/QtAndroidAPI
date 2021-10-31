#include "./format/TextStyle.hpp"
#include "./temporal/ValueRange.hpp"
#include "../util/Locale.hpp"
#include "./Month.hpp"

namespace java::time
{
	// Fields
	QAndroidJniObject Month::APRIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.Month",
			"APRIL",
			"Ljava/time/Month;"
		);
	}
	QAndroidJniObject Month::AUGUST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.Month",
			"AUGUST",
			"Ljava/time/Month;"
		);
	}
	QAndroidJniObject Month::DECEMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.Month",
			"DECEMBER",
			"Ljava/time/Month;"
		);
	}
	QAndroidJniObject Month::FEBRUARY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.Month",
			"FEBRUARY",
			"Ljava/time/Month;"
		);
	}
	QAndroidJniObject Month::JANUARY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.Month",
			"JANUARY",
			"Ljava/time/Month;"
		);
	}
	QAndroidJniObject Month::JULY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.Month",
			"JULY",
			"Ljava/time/Month;"
		);
	}
	QAndroidJniObject Month::JUNE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.Month",
			"JUNE",
			"Ljava/time/Month;"
		);
	}
	QAndroidJniObject Month::MARCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.Month",
			"MARCH",
			"Ljava/time/Month;"
		);
	}
	QAndroidJniObject Month::MAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.Month",
			"MAY",
			"Ljava/time/Month;"
		);
	}
	QAndroidJniObject Month::NOVEMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.Month",
			"NOVEMBER",
			"Ljava/time/Month;"
		);
	}
	QAndroidJniObject Month::OCTOBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.Month",
			"OCTOBER",
			"Ljava/time/Month;"
		);
	}
	QAndroidJniObject Month::SEPTEMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.Month",
			"SEPTEMBER",
			"Ljava/time/Month;"
		);
	}
	
	Month::Month(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Month::from(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Month",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/Month;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Month::of(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Month",
			"of",
			"(I)Ljava/time/Month;",
			arg0
		);
	}
	QAndroidJniObject Month::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Month",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/Month;",
			arg0
		);
	}
	jarray Month::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.Month",
			"values",
			"()[Ljava/time/Month;"
		).object<jarray>();
	}
	QAndroidJniObject Month::adjustInto(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.__jniObject().object()
		);
	}
	jint Month::firstDayOfYear(jboolean arg0)
	{
		return __thiz.callMethod<jint>(
			"firstDayOfYear",
			"(Z)I",
			arg0
		);
	}
	QAndroidJniObject Month::firstMonthOfQuarter()
	{
		return __thiz.callObjectMethod(
			"firstMonthOfQuarter",
			"()Ljava/time/Month;"
		);
	}
	jint Month::get(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.__jniObject().object()
		);
	}
	jstring Month::getDisplayName(java::time::format::TextStyle arg0, java::util::Locale arg1)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jlong Month::getLong(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.__jniObject().object()
		);
	}
	jint Month::getValue()
	{
		return __thiz.callMethod<jint>(
			"getValue",
			"()I"
		);
	}
	jboolean Month::isSupported(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.__jniObject().object()
		);
	}
	jint Month::length(jboolean arg0)
	{
		return __thiz.callMethod<jint>(
			"length",
			"(Z)I",
			arg0
		);
	}
	jint Month::maxLength()
	{
		return __thiz.callMethod<jint>(
			"maxLength",
			"()I"
		);
	}
	jint Month::minLength()
	{
		return __thiz.callMethod<jint>(
			"minLength",
			"()I"
		);
	}
	QAndroidJniObject Month::minus(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minus",
			"(J)Ljava/time/Month;",
			arg0
		);
	}
	QAndroidJniObject Month::plus(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(J)Ljava/time/Month;",
			arg0
		);
	}
	jobject Month::query(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	QAndroidJniObject Month::range(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.__jniObject().object()
		);
	}
} // namespace java::time

