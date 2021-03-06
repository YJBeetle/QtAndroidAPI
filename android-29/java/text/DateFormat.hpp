#pragma once

#ifndef JAVA_TEXT_DATEFORMAT
#define JAVA_TEXT_DATEFORMAT

#include "../../__JniBaseClass.hpp"
#include "Format.hpp"

namespace __jni_impl::java::util
{
	class Calendar;
}
namespace __jni_impl::java::text
{
	class NumberFormat;
}
namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::java::lang
{
	class StringBuffer;
}
namespace __jni_impl::java::text
{
	class FieldPosition;
}
namespace __jni_impl::java::util
{
	class Date;
}
namespace __jni_impl::java::text
{
	class ParsePosition;
}
namespace __jni_impl::java::util
{
	class TimeZone;
}

namespace __jni_impl::java::text
{
	class DateFormat : public __jni_impl::java::text::Format
	{
	public:
		// Fields
		static jint ERA_FIELD();
		static jint YEAR_FIELD();
		static jint MONTH_FIELD();
		static jint DATE_FIELD();
		static jint HOUR_OF_DAY1_FIELD();
		static jint HOUR_OF_DAY0_FIELD();
		static jint MINUTE_FIELD();
		static jint SECOND_FIELD();
		static jint MILLISECOND_FIELD();
		static jint DAY_OF_WEEK_FIELD();
		static jint DAY_OF_YEAR_FIELD();
		static jint DAY_OF_WEEK_IN_MONTH_FIELD();
		static jint WEEK_OF_YEAR_FIELD();
		static jint WEEK_OF_MONTH_FIELD();
		static jint AM_PM_FIELD();
		static jint HOUR1_FIELD();
		static jint HOUR0_FIELD();
		static jint TIMEZONE_FIELD();
		static jint FULL();
		static jint LONG();
		static jint MEDIUM();
		static jint SHORT();
		static jint DEFAULT();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jobject clone();
		QAndroidJniObject format(jobject arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		jstring format(__jni_impl::java::util::Date arg0);
		QAndroidJniObject format(__jni_impl::java::util::Date arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		static QAndroidJniObject getInstance();
		QAndroidJniObject parse(jstring arg0);
		QAndroidJniObject parse(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
		static jarray getAvailableLocales();
		static QAndroidJniObject getDateTimeInstance(jint arg0, jint arg1);
		static QAndroidJniObject getDateTimeInstance(jint arg0, jint arg1, __jni_impl::java::util::Locale arg2);
		static QAndroidJniObject getDateTimeInstance();
		void setTimeZone(__jni_impl::java::util::TimeZone arg0);
		QAndroidJniObject getTimeZone();
		void setLenient(jboolean arg0);
		jboolean isLenient();
		static QAndroidJniObject getDateInstance(jint arg0);
		static QAndroidJniObject getDateInstance(jint arg0, __jni_impl::java::util::Locale arg1);
		static QAndroidJniObject getDateInstance();
		static QAndroidJniObject getTimeInstance(jint arg0, __jni_impl::java::util::Locale arg1);
		static QAndroidJniObject getTimeInstance(jint arg0);
		static QAndroidJniObject getTimeInstance();
		jobject parseObject(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
		void setCalendar(__jni_impl::java::util::Calendar arg0);
		QAndroidJniObject getCalendar();
		void setNumberFormat(__jni_impl::java::text::NumberFormat arg0);
		QAndroidJniObject getNumberFormat();
	};
} // namespace __jni_impl::java::text

#include "../util/Calendar.hpp"
#include "NumberFormat.hpp"
#include "../util/Locale.hpp"
#include "../lang/StringBuffer.hpp"
#include "FieldPosition.hpp"
#include "../util/Date.hpp"
#include "ParsePosition.hpp"
#include "../util/TimeZone.hpp"

namespace __jni_impl::java::text
{
	// Fields
	jint DateFormat::ERA_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"ERA_FIELD"
		);
	}
	jint DateFormat::YEAR_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"YEAR_FIELD"
		);
	}
	jint DateFormat::MONTH_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"MONTH_FIELD"
		);
	}
	jint DateFormat::DATE_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"DATE_FIELD"
		);
	}
	jint DateFormat::HOUR_OF_DAY1_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"HOUR_OF_DAY1_FIELD"
		);
	}
	jint DateFormat::HOUR_OF_DAY0_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"HOUR_OF_DAY0_FIELD"
		);
	}
	jint DateFormat::MINUTE_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"MINUTE_FIELD"
		);
	}
	jint DateFormat::SECOND_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"SECOND_FIELD"
		);
	}
	jint DateFormat::MILLISECOND_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"MILLISECOND_FIELD"
		);
	}
	jint DateFormat::DAY_OF_WEEK_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"DAY_OF_WEEK_FIELD"
		);
	}
	jint DateFormat::DAY_OF_YEAR_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"DAY_OF_YEAR_FIELD"
		);
	}
	jint DateFormat::DAY_OF_WEEK_IN_MONTH_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"DAY_OF_WEEK_IN_MONTH_FIELD"
		);
	}
	jint DateFormat::WEEK_OF_YEAR_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"WEEK_OF_YEAR_FIELD"
		);
	}
	jint DateFormat::WEEK_OF_MONTH_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"WEEK_OF_MONTH_FIELD"
		);
	}
	jint DateFormat::AM_PM_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"AM_PM_FIELD"
		);
	}
	jint DateFormat::HOUR1_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"HOUR1_FIELD"
		);
	}
	jint DateFormat::HOUR0_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"HOUR0_FIELD"
		);
	}
	jint DateFormat::TIMEZONE_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"TIMEZONE_FIELD"
		);
	}
	jint DateFormat::FULL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"FULL"
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
	jint DateFormat::SHORT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"SHORT"
		);
	}
	jint DateFormat::DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.DateFormat",
			"DEFAULT"
		);
	}
	
	// Constructors
	void DateFormat::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.text.DateFormat",
			"(V)V");
	}
	
	// Methods
	jboolean DateFormat::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint DateFormat::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jobject DateFormat::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject DateFormat::format(jobject arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jstring DateFormat::format(__jni_impl::java::util::Date arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/util/Date;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject DateFormat::format(__jni_impl::java::util::Date arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/util/Date;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
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
	QAndroidJniObject DateFormat::parse(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;)Ljava/util/Date;",
			arg0
		);
	}
	QAndroidJniObject DateFormat::parse(jstring arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/util/Date;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jarray DateFormat::getAvailableLocales()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.DateFormat",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		).object<jarray>();
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
	QAndroidJniObject DateFormat::getDateTimeInstance(jint arg0, jint arg1, __jni_impl::java::util::Locale arg2)
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
	QAndroidJniObject DateFormat::getDateTimeInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.DateFormat",
			"getDateTimeInstance",
			"()Ljava/text/DateFormat;"
		);
	}
	void DateFormat::setTimeZone(__jni_impl::java::util::TimeZone arg0)
	{
		__thiz.callMethod<void>(
			"setTimeZone",
			"(Ljava/util/TimeZone;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getTimeZone()
	{
		return __thiz.callObjectMethod(
			"getTimeZone",
			"()Ljava/util/TimeZone;"
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
	jboolean DateFormat::isLenient()
	{
		return __thiz.callMethod<jboolean>(
			"isLenient",
			"()Z"
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
	QAndroidJniObject DateFormat::getDateInstance(jint arg0, __jni_impl::java::util::Locale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.DateFormat",
			"getDateInstance",
			"(ILjava/util/Locale;)Ljava/text/DateFormat;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getDateInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.DateFormat",
			"getDateInstance",
			"()Ljava/text/DateFormat;"
		);
	}
	QAndroidJniObject DateFormat::getTimeInstance(jint arg0, __jni_impl::java::util::Locale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.DateFormat",
			"getTimeInstance",
			"(ILjava/util/Locale;)Ljava/text/DateFormat;",
			arg0,
			arg1.__jniObject().object()
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
	QAndroidJniObject DateFormat::getTimeInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.DateFormat",
			"getTimeInstance",
			"()Ljava/text/DateFormat;"
		);
	}
	jobject DateFormat::parseObject(jstring arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	void DateFormat::setCalendar(__jni_impl::java::util::Calendar arg0)
	{
		__thiz.callMethod<void>(
			"setCalendar",
			"(Ljava/util/Calendar;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getCalendar()
	{
		return __thiz.callObjectMethod(
			"getCalendar",
			"()Ljava/util/Calendar;"
		);
	}
	void DateFormat::setNumberFormat(__jni_impl::java::text::NumberFormat arg0)
	{
		__thiz.callMethod<void>(
			"setNumberFormat",
			"(Ljava/text/NumberFormat;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DateFormat::getNumberFormat()
	{
		return __thiz.callObjectMethod(
			"getNumberFormat",
			"()Ljava/text/NumberFormat;"
		);
	}
} // namespace __jni_impl::java::text

namespace java::text
{
	class DateFormat : public __jni_impl::java::text::DateFormat
	{
	public:
		DateFormat(QAndroidJniObject obj) { __thiz = obj; }
		DateFormat()
		{
			__constructor();
		}
	};
} // namespace java::text

#endif // JAVA_TEXT_DATEFORMAT

