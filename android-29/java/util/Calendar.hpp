#pragma once

#ifndef JAVA_UTIL_CALENDAR
#define JAVA_UTIL_CALENDAR

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class TimeZone;
}
namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}
namespace __jni_impl::java::time
{
	class Instant;
}
namespace __jni_impl::java::util
{
	class Date;
}
namespace __jni_impl::java::lang
{
	class StringBuilder;
}
namespace __jni_impl::java::text
{
	class DateFormatSymbols;
}

namespace __jni_impl::java::util
{
	class Calendar : public __JniBaseClass
	{
	public:
		// Fields
		static jint ERA();
		static jint YEAR();
		static jint MONTH();
		static jint WEEK_OF_YEAR();
		static jint WEEK_OF_MONTH();
		static jint DATE();
		static jint DAY_OF_MONTH();
		static jint DAY_OF_YEAR();
		static jint DAY_OF_WEEK();
		static jint DAY_OF_WEEK_IN_MONTH();
		static jint AM_PM();
		static jint HOUR();
		static jint HOUR_OF_DAY();
		static jint MINUTE();
		static jint SECOND();
		static jint MILLISECOND();
		static jint ZONE_OFFSET();
		static jint DST_OFFSET();
		static jint FIELD_COUNT();
		static jint SUNDAY();
		static jint MONDAY();
		static jint TUESDAY();
		static jint WEDNESDAY();
		static jint THURSDAY();
		static jint FRIDAY();
		static jint SATURDAY();
		static jint JANUARY();
		static jint FEBRUARY();
		static jint MARCH();
		static jint APRIL();
		static jint MAY();
		static jint JUNE();
		static jint JULY();
		static jint AUGUST();
		static jint SEPTEMBER();
		static jint OCTOBER();
		static jint NOVEMBER();
		static jint DECEMBER();
		static jint UNDECIMBER();
		static jint AM();
		static jint PM();
		static jint ALL_STYLES();
		static jint SHORT();
		static jint LONG();
		static jint NARROW_FORMAT();
		static jint NARROW_STANDALONE();
		static jint SHORT_FORMAT();
		static jint LONG_FORMAT();
		static jint SHORT_STANDALONE();
		static jint LONG_STANDALONE();
		
		// Constructors
		void __constructor();
		
		// Methods
		void add(jint arg0, jint arg1);
		jint get(jint arg0);
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jobject clone();
		jint compareTo(__jni_impl::java::util::Calendar arg0);
		jint compareTo(jobject arg0);
		void clear();
		void clear(jint arg0);
		static QAndroidJniObject getInstance();
		static QAndroidJniObject getInstance(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getInstance(__jni_impl::java::util::TimeZone arg0);
		static QAndroidJniObject getInstance(__jni_impl::java::util::TimeZone arg0, __jni_impl::java::util::Locale arg1);
		void set(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		void set(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void set(jint arg0, jint arg1, jint arg2);
		void set(jint arg0, jint arg1);
		jboolean isSet(jint arg0);
		jboolean before(jobject arg0);
		jboolean after(jobject arg0);
		static jarray getAvailableLocales();
		QAndroidJniObject toInstant();
		QAndroidJniObject getTime();
		void setTime(__jni_impl::java::util::Date arg0);
		jstring getCalendarType();
		jstring getDisplayName(jint arg0, jint arg1, __jni_impl::java::util::Locale arg2);
		void setTimeInMillis(jlong arg0);
		jboolean isWeekDateSupported();
		jint getWeekYear();
		jint getLeastMaximum(jint arg0);
		QAndroidJniObject getDisplayNames(jint arg0, jint arg1, __jni_impl::java::util::Locale arg2);
		jlong getTimeInMillis();
		void setTimeZone(__jni_impl::java::util::TimeZone arg0);
		QAndroidJniObject getTimeZone();
		void setLenient(jboolean arg0);
		jboolean isLenient();
		jint getFirstDayOfWeek();
		jint getMinimalDaysInFirstWeek();
		void roll(jint arg0, jboolean arg1);
		void roll(jint arg0, jint arg1);
		jint getGreatestMinimum(jint arg0);
		static QAndroidJniObject getAvailableCalendarTypes();
		void setFirstDayOfWeek(jint arg0);
		void setMinimalDaysInFirstWeek(jint arg0);
		void setWeekDate(jint arg0, jint arg1, jint arg2);
		jint getWeeksInWeekYear();
		jint getActualMinimum(jint arg0);
		jint getActualMaximum(jint arg0);
		jint getMinimum(jint arg0);
		jint getMaximum(jint arg0);
	};
} // namespace __jni_impl::java::util

#include "TimeZone.hpp"
#include "Locale.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../time/Instant.hpp"
#include "Date.hpp"
#include "../lang/StringBuilder.hpp"
#include "../text/DateFormatSymbols.hpp"

namespace __jni_impl::java::util
{
	// Fields
	jint Calendar::ERA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"ERA"
		);
	}
	jint Calendar::YEAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"YEAR"
		);
	}
	jint Calendar::MONTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"MONTH"
		);
	}
	jint Calendar::WEEK_OF_YEAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"WEEK_OF_YEAR"
		);
	}
	jint Calendar::WEEK_OF_MONTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"WEEK_OF_MONTH"
		);
	}
	jint Calendar::DATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"DATE"
		);
	}
	jint Calendar::DAY_OF_MONTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"DAY_OF_MONTH"
		);
	}
	jint Calendar::DAY_OF_YEAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"DAY_OF_YEAR"
		);
	}
	jint Calendar::DAY_OF_WEEK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"DAY_OF_WEEK"
		);
	}
	jint Calendar::DAY_OF_WEEK_IN_MONTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"DAY_OF_WEEK_IN_MONTH"
		);
	}
	jint Calendar::AM_PM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"AM_PM"
		);
	}
	jint Calendar::HOUR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"HOUR"
		);
	}
	jint Calendar::HOUR_OF_DAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"HOUR_OF_DAY"
		);
	}
	jint Calendar::MINUTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"MINUTE"
		);
	}
	jint Calendar::SECOND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"SECOND"
		);
	}
	jint Calendar::MILLISECOND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"MILLISECOND"
		);
	}
	jint Calendar::ZONE_OFFSET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"ZONE_OFFSET"
		);
	}
	jint Calendar::DST_OFFSET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"DST_OFFSET"
		);
	}
	jint Calendar::FIELD_COUNT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"FIELD_COUNT"
		);
	}
	jint Calendar::SUNDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"SUNDAY"
		);
	}
	jint Calendar::MONDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"MONDAY"
		);
	}
	jint Calendar::TUESDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"TUESDAY"
		);
	}
	jint Calendar::WEDNESDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"WEDNESDAY"
		);
	}
	jint Calendar::THURSDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"THURSDAY"
		);
	}
	jint Calendar::FRIDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"FRIDAY"
		);
	}
	jint Calendar::SATURDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"SATURDAY"
		);
	}
	jint Calendar::JANUARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"JANUARY"
		);
	}
	jint Calendar::FEBRUARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"FEBRUARY"
		);
	}
	jint Calendar::MARCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"MARCH"
		);
	}
	jint Calendar::APRIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"APRIL"
		);
	}
	jint Calendar::MAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"MAY"
		);
	}
	jint Calendar::JUNE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"JUNE"
		);
	}
	jint Calendar::JULY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"JULY"
		);
	}
	jint Calendar::AUGUST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"AUGUST"
		);
	}
	jint Calendar::SEPTEMBER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"SEPTEMBER"
		);
	}
	jint Calendar::OCTOBER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"OCTOBER"
		);
	}
	jint Calendar::NOVEMBER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"NOVEMBER"
		);
	}
	jint Calendar::DECEMBER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"DECEMBER"
		);
	}
	jint Calendar::UNDECIMBER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"UNDECIMBER"
		);
	}
	jint Calendar::AM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"AM"
		);
	}
	jint Calendar::PM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"PM"
		);
	}
	jint Calendar::ALL_STYLES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"ALL_STYLES"
		);
	}
	jint Calendar::SHORT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"SHORT"
		);
	}
	jint Calendar::LONG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"LONG"
		);
	}
	jint Calendar::NARROW_FORMAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"NARROW_FORMAT"
		);
	}
	jint Calendar::NARROW_STANDALONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"NARROW_STANDALONE"
		);
	}
	jint Calendar::SHORT_FORMAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"SHORT_FORMAT"
		);
	}
	jint Calendar::LONG_FORMAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"LONG_FORMAT"
		);
	}
	jint Calendar::SHORT_STANDALONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"SHORT_STANDALONE"
		);
	}
	jint Calendar::LONG_STANDALONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.Calendar",
			"LONG_STANDALONE"
		);
	}
	
	// Constructors
	void Calendar::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.Calendar",
			"(V)V");
	}
	
	// Methods
	void Calendar::add(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"add",
			"(II)V",
			arg0,
			arg1
		);
	}
	jint Calendar::get(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"get",
			"(I)I",
			arg0
		);
	}
	jboolean Calendar::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring Calendar::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Calendar::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jobject Calendar::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint Calendar::compareTo(__jni_impl::java::util::Calendar arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/util/Calendar;)I",
			arg0.__jniObject().object()
		);
	}
	jint Calendar::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	void Calendar::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	void Calendar::clear(jint arg0)
	{
		__thiz.callMethod<void>(
			"clear",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject Calendar::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Calendar",
			"getInstance",
			"()Ljava/util/Calendar;"
		);
	}
	QAndroidJniObject Calendar::getInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Calendar",
			"getInstance",
			"(Ljava/util/Locale;)Ljava/util/Calendar;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Calendar::getInstance(__jni_impl::java::util::TimeZone arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Calendar",
			"getInstance",
			"(Ljava/util/TimeZone;)Ljava/util/Calendar;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Calendar::getInstance(__jni_impl::java::util::TimeZone arg0, __jni_impl::java::util::Locale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Calendar",
			"getInstance",
			"(Ljava/util/TimeZone;Ljava/util/Locale;)Ljava/util/Calendar;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Calendar::set(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		__thiz.callMethod<void>(
			"set",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void Calendar::set(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz.callMethod<void>(
			"set",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void Calendar::set(jint arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"set",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Calendar::set(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"set",
			"(II)V",
			arg0,
			arg1
		);
	}
	jboolean Calendar::isSet(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isSet",
			"(I)Z",
			arg0
		);
	}
	jboolean Calendar::before(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"before",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean Calendar::after(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"after",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jarray Calendar::getAvailableLocales()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Calendar",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		).object<jarray>();
	}
	QAndroidJniObject Calendar::toInstant()
	{
		return __thiz.callObjectMethod(
			"toInstant",
			"()Ljava/time/Instant;"
		);
	}
	QAndroidJniObject Calendar::getTime()
	{
		return __thiz.callObjectMethod(
			"getTime",
			"()Ljava/util/Date;"
		);
	}
	void Calendar::setTime(__jni_impl::java::util::Date arg0)
	{
		__thiz.callMethod<void>(
			"setTime",
			"(Ljava/util/Date;)V",
			arg0.__jniObject().object()
		);
	}
	jstring Calendar::getCalendarType()
	{
		return __thiz.callObjectMethod(
			"getCalendarType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Calendar::getDisplayName(jint arg0, jint arg1, __jni_impl::java::util::Locale arg2)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(IILjava/util/Locale;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		).object<jstring>();
	}
	void Calendar::setTimeInMillis(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setTimeInMillis",
			"(J)V",
			arg0
		);
	}
	jboolean Calendar::isWeekDateSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isWeekDateSupported",
			"()Z"
		);
	}
	jint Calendar::getWeekYear()
	{
		return __thiz.callMethod<jint>(
			"getWeekYear",
			"()I"
		);
	}
	jint Calendar::getLeastMaximum(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLeastMaximum",
			"(I)I",
			arg0
		);
	}
	QAndroidJniObject Calendar::getDisplayNames(jint arg0, jint arg1, __jni_impl::java::util::Locale arg2)
	{
		return __thiz.callObjectMethod(
			"getDisplayNames",
			"(IILjava/util/Locale;)Ljava/util/Map;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jlong Calendar::getTimeInMillis()
	{
		return __thiz.callMethod<jlong>(
			"getTimeInMillis",
			"()J"
		);
	}
	void Calendar::setTimeZone(__jni_impl::java::util::TimeZone arg0)
	{
		__thiz.callMethod<void>(
			"setTimeZone",
			"(Ljava/util/TimeZone;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Calendar::getTimeZone()
	{
		return __thiz.callObjectMethod(
			"getTimeZone",
			"()Ljava/util/TimeZone;"
		);
	}
	void Calendar::setLenient(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setLenient",
			"(Z)V",
			arg0
		);
	}
	jboolean Calendar::isLenient()
	{
		return __thiz.callMethod<jboolean>(
			"isLenient",
			"()Z"
		);
	}
	jint Calendar::getFirstDayOfWeek()
	{
		return __thiz.callMethod<jint>(
			"getFirstDayOfWeek",
			"()I"
		);
	}
	jint Calendar::getMinimalDaysInFirstWeek()
	{
		return __thiz.callMethod<jint>(
			"getMinimalDaysInFirstWeek",
			"()I"
		);
	}
	void Calendar::roll(jint arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"roll",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void Calendar::roll(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"roll",
			"(II)V",
			arg0,
			arg1
		);
	}
	jint Calendar::getGreatestMinimum(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getGreatestMinimum",
			"(I)I",
			arg0
		);
	}
	QAndroidJniObject Calendar::getAvailableCalendarTypes()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Calendar",
			"getAvailableCalendarTypes",
			"()Ljava/util/Set;"
		);
	}
	void Calendar::setFirstDayOfWeek(jint arg0)
	{
		__thiz.callMethod<void>(
			"setFirstDayOfWeek",
			"(I)V",
			arg0
		);
	}
	void Calendar::setMinimalDaysInFirstWeek(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMinimalDaysInFirstWeek",
			"(I)V",
			arg0
		);
	}
	void Calendar::setWeekDate(jint arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"setWeekDate",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	jint Calendar::getWeeksInWeekYear()
	{
		return __thiz.callMethod<jint>(
			"getWeeksInWeekYear",
			"()I"
		);
	}
	jint Calendar::getActualMinimum(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getActualMinimum",
			"(I)I",
			arg0
		);
	}
	jint Calendar::getActualMaximum(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getActualMaximum",
			"(I)I",
			arg0
		);
	}
	jint Calendar::getMinimum(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getMinimum",
			"(I)I",
			arg0
		);
	}
	jint Calendar::getMaximum(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getMaximum",
			"(I)I",
			arg0
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class Calendar : public __jni_impl::java::util::Calendar
	{
	public:
		Calendar(QAndroidJniObject obj) { __thiz = obj; }
		Calendar()
		{
			__constructor();
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_CALENDAR

