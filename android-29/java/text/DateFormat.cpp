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
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"AM_PM_FIELD"
		);
	}
	jint DateFormat::DATE_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"DATE_FIELD"
		);
	}
	jint DateFormat::DAY_OF_WEEK_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"DAY_OF_WEEK_FIELD"
		);
	}
	jint DateFormat::DAY_OF_WEEK_IN_MONTH_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"DAY_OF_WEEK_IN_MONTH_FIELD"
		);
	}
	jint DateFormat::DAY_OF_YEAR_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"DAY_OF_YEAR_FIELD"
		);
	}
	jint DateFormat::DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"DEFAULT"
		);
	}
	jint DateFormat::ERA_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"ERA_FIELD"
		);
	}
	jint DateFormat::FULL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"FULL"
		);
	}
	jint DateFormat::HOUR0_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"HOUR0_FIELD"
		);
	}
	jint DateFormat::HOUR1_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"HOUR1_FIELD"
		);
	}
	jint DateFormat::HOUR_OF_DAY0_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"HOUR_OF_DAY0_FIELD"
		);
	}
	jint DateFormat::HOUR_OF_DAY1_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"HOUR_OF_DAY1_FIELD"
		);
	}
	jint DateFormat::LONG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"LONG"
		);
	}
	jint DateFormat::MEDIUM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"MEDIUM"
		);
	}
	jint DateFormat::MILLISECOND_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"MILLISECOND_FIELD"
		);
	}
	jint DateFormat::MINUTE_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"MINUTE_FIELD"
		);
	}
	jint DateFormat::MONTH_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"MONTH_FIELD"
		);
	}
	jint DateFormat::SECOND_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"SECOND_FIELD"
		);
	}
	jint DateFormat::SHORT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"SHORT"
		);
	}
	jint DateFormat::TIMEZONE_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"TIMEZONE_FIELD"
		);
	}
	jint DateFormat::WEEK_OF_MONTH_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"WEEK_OF_MONTH_FIELD"
		);
	}
	jint DateFormat::WEEK_OF_YEAR_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"WEEK_OF_YEAR_FIELD"
		);
	}
	jint DateFormat::YEAR_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"YEAR_FIELD"
		);
	}
	
	DateFormat::DateFormat(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jarray DateFormat::getAvailableLocales()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.DateFormat",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		).object<jarray>();
	}
	QAndroidJniObject DateFormat::getDateInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.DateFormat",
			"getDateInstance",
			"()Ljava/text/DateFormat;"
		);
	}
	QAndroidJniObject DateFormat::getDateInstance(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.DateFormat",
			"getDateInstance",
			"(I)Ljava/text/DateFormat;",
			arg0
		);
	}
	QAndroidJniObject DateFormat::getDateInstance(jint arg0, java::util::Locale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.DateFormat",
			"getDateInstance",
			"(ILjava/util/Locale;)Ljava/text/DateFormat;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getDateTimeInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.DateFormat",
			"getDateTimeInstance",
			"()Ljava/text/DateFormat;"
		);
	}
	QAndroidJniObject DateFormat::getDateTimeInstance(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.DateFormat",
			"getDateTimeInstance",
			"(II)Ljava/text/DateFormat;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject DateFormat::getDateTimeInstance(jint arg0, jint arg1, java::util::Locale arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.DateFormat",
			"getDateTimeInstance",
			"(IILjava/util/Locale;)Ljava/text/DateFormat;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.DateFormat",
			"getInstance",
			"()Ljava/text/DateFormat;"
		);
	}
	QAndroidJniObject DateFormat::getTimeInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.DateFormat",
			"getTimeInstance",
			"()Ljava/text/DateFormat;"
		);
	}
	QAndroidJniObject DateFormat::getTimeInstance(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.DateFormat",
			"getTimeInstance",
			"(I)Ljava/text/DateFormat;",
			arg0
		);
	}
	QAndroidJniObject DateFormat::getTimeInstance(jint arg0, java::util::Locale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.DateFormat",
			"getTimeInstance",
			"(ILjava/util/Locale;)Ljava/text/DateFormat;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jobject DateFormat::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean DateFormat::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring DateFormat::format(java::util::Date arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/util/Date;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject DateFormat::format(jobject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::format(java::util::Date arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/util/Date;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getCalendar()
	{
		return __thiz.callObjectMethod(
			"getCalendar",
			"()Ljava/util/Calendar;"
		);
	}
	QAndroidJniObject DateFormat::getNumberFormat()
	{
		return __thiz.callObjectMethod(
			"getNumberFormat",
			"()Ljava/text/NumberFormat;"
		);
	}
	QAndroidJniObject DateFormat::getTimeZone()
	{
		return __thiz.callObjectMethod(
			"getTimeZone",
			"()Ljava/util/TimeZone;"
		);
	}
	jint DateFormat::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean DateFormat::isLenient()
	{
		return __thiz.callMethod<jboolean>(
			"isLenient",
			"()Z"
		);
	}
	QAndroidJniObject DateFormat::parse(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;)Ljava/util/Date;",
			arg0
		);
	}
	QAndroidJniObject DateFormat::parse(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;)Ljava/util/Date;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject DateFormat::parse(jstring arg0, java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/util/Date;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::parse(const QString &arg0, java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/util/Date;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jobject DateFormat::parseObject(jstring arg0, java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject DateFormat::parseObject(const QString &arg0, java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jobject>();
	}
	void DateFormat::setCalendar(java::util::Calendar arg0)
	{
		__thiz.callMethod<void>(
			"setCalendar",
			"(Ljava/util/Calendar;)V",
			arg0.__jniObject().object()
		);
	}
	void DateFormat::setLenient(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setLenient",
			"(Z)V",
			arg0
		);
	}
	void DateFormat::setNumberFormat(java::text::NumberFormat arg0)
	{
		__thiz.callMethod<void>(
			"setNumberFormat",
			"(Ljava/text/NumberFormat;)V",
			arg0.__jniObject().object()
		);
	}
	void DateFormat::setTimeZone(java::util::TimeZone arg0)
	{
		__thiz.callMethod<void>(
			"setTimeZone",
			"(Ljava/util/TimeZone;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace java::text

