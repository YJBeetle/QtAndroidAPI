#pragma once

#ifndef JAVA_UTIL_GREGORIANCALENDAR
#define JAVA_UTIL_GREGORIANCALENDAR

#include "../../__JniBaseClass.hpp"
#include "Calendar.hpp"

namespace __jni_impl::java::util
{
	class TimeZone;
}
namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::java::time
{
	class ZonedDateTime;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::util
{
	class Date;
}

namespace __jni_impl::java::util
{
	class GregorianCalendar : public __jni_impl::java::util::Calendar
	{
	public:
		// Fields
		static jint BC();
		static jint AD();
		
		// Constructors
		void __constructor(jint arg0, jint arg1, jint arg2);
		void __constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void __constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		void __constructor();
		void __constructor(__jni_impl::java::util::TimeZone arg0);
		void __constructor(__jni_impl::java::util::Locale arg0);
		void __constructor(__jni_impl::java::util::TimeZone arg0, __jni_impl::java::util::Locale arg1);
		
		// Methods
		void add(jint arg0, jint arg1);
		jboolean equals(jobject arg0);
		jint hashCode();
		jobject clone();
		static QAndroidJniObject from(__jni_impl::java::time::ZonedDateTime arg0);
		jstring getCalendarType();
		jboolean isWeekDateSupported();
		jint getWeekYear();
		jint getLeastMaximum(jint arg0);
		void setTimeZone(__jni_impl::java::util::TimeZone arg0);
		QAndroidJniObject getTimeZone();
		void roll(jint arg0, jboolean arg1);
		void roll(jint arg0, jint arg1);
		jint getGreatestMinimum(jint arg0);
		void setWeekDate(jint arg0, jint arg1, jint arg2);
		jint getWeeksInWeekYear();
		jint getActualMinimum(jint arg0);
		jint getActualMaximum(jint arg0);
		void setGregorianChange(__jni_impl::java::util::Date arg0);
		QAndroidJniObject getGregorianChange();
		QAndroidJniObject toZonedDateTime();
		jint getMinimum(jint arg0);
		jint getMaximum(jint arg0);
		jboolean isLeapYear(jint arg0);
	};
} // namespace __jni_impl::java::util

#include "TimeZone.hpp"
#include "Locale.hpp"
#include "../time/ZonedDateTime.hpp"
#include "../io/ObjectInputStream.hpp"
#include "Date.hpp"

namespace __jni_impl::java::util
{
	// Fields
	jint GregorianCalendar::BC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.GregorianCalendar",
			"BC"
		);
	}
	jint GregorianCalendar::AD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.GregorianCalendar",
			"AD"
		);
	}
	
	// Constructors
	void GregorianCalendar::__constructor(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.GregorianCalendar",
			"(III)V",
			arg0,
			arg1,
			arg2);
	}
	void GregorianCalendar::__constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz = QAndroidJniObject(
			"java.util.GregorianCalendar",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	void GregorianCalendar::__constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		__thiz = QAndroidJniObject(
			"java.util.GregorianCalendar",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5);
	}
	void GregorianCalendar::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.GregorianCalendar",
			"()V");
	}
	void GregorianCalendar::__constructor(__jni_impl::java::util::TimeZone arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.GregorianCalendar",
			"(Ljava/util/TimeZone;)V",
			arg0.__jniObject().object());
	}
	void GregorianCalendar::__constructor(__jni_impl::java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.GregorianCalendar",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object());
	}
	void GregorianCalendar::__constructor(__jni_impl::java::util::TimeZone arg0, __jni_impl::java::util::Locale arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.GregorianCalendar",
			"(Ljava/util/TimeZone;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	void GregorianCalendar::add(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"add",
			"(II)V",
			arg0,
			arg1
		);
	}
	jboolean GregorianCalendar::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint GregorianCalendar::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jobject GregorianCalendar::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject GregorianCalendar::from(__jni_impl::java::time::ZonedDateTime arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.GregorianCalendar",
			"from",
			"(Ljava/time/ZonedDateTime;)Ljava/util/GregorianCalendar;",
			arg0.__jniObject().object()
		);
	}
	jstring GregorianCalendar::getCalendarType()
	{
		return __thiz.callObjectMethod(
			"getCalendarType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean GregorianCalendar::isWeekDateSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isWeekDateSupported",
			"()Z"
		);
	}
	jint GregorianCalendar::getWeekYear()
	{
		return __thiz.callMethod<jint>(
			"getWeekYear",
			"()I"
		);
	}
	jint GregorianCalendar::getLeastMaximum(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLeastMaximum",
			"(I)I",
			arg0
		);
	}
	void GregorianCalendar::setTimeZone(__jni_impl::java::util::TimeZone arg0)
	{
		__thiz.callMethod<void>(
			"setTimeZone",
			"(Ljava/util/TimeZone;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject GregorianCalendar::getTimeZone()
	{
		return __thiz.callObjectMethod(
			"getTimeZone",
			"()Ljava/util/TimeZone;"
		);
	}
	void GregorianCalendar::roll(jint arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"roll",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void GregorianCalendar::roll(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"roll",
			"(II)V",
			arg0,
			arg1
		);
	}
	jint GregorianCalendar::getGreatestMinimum(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getGreatestMinimum",
			"(I)I",
			arg0
		);
	}
	void GregorianCalendar::setWeekDate(jint arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"setWeekDate",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	jint GregorianCalendar::getWeeksInWeekYear()
	{
		return __thiz.callMethod<jint>(
			"getWeeksInWeekYear",
			"()I"
		);
	}
	jint GregorianCalendar::getActualMinimum(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getActualMinimum",
			"(I)I",
			arg0
		);
	}
	jint GregorianCalendar::getActualMaximum(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getActualMaximum",
			"(I)I",
			arg0
		);
	}
	void GregorianCalendar::setGregorianChange(__jni_impl::java::util::Date arg0)
	{
		__thiz.callMethod<void>(
			"setGregorianChange",
			"(Ljava/util/Date;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject GregorianCalendar::getGregorianChange()
	{
		return __thiz.callObjectMethod(
			"getGregorianChange",
			"()Ljava/util/Date;"
		);
	}
	QAndroidJniObject GregorianCalendar::toZonedDateTime()
	{
		return __thiz.callObjectMethod(
			"toZonedDateTime",
			"()Ljava/time/ZonedDateTime;"
		);
	}
	jint GregorianCalendar::getMinimum(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getMinimum",
			"(I)I",
			arg0
		);
	}
	jint GregorianCalendar::getMaximum(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getMaximum",
			"(I)I",
			arg0
		);
	}
	jboolean GregorianCalendar::isLeapYear(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isLeapYear",
			"(I)Z",
			arg0
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class GregorianCalendar : public __jni_impl::java::util::GregorianCalendar
	{
	public:
		GregorianCalendar(QAndroidJniObject obj) { __thiz = obj; }
		GregorianCalendar(jint arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		GregorianCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
		GregorianCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5);
		}
		GregorianCalendar()
		{
			__constructor();
		}
		GregorianCalendar(__jni_impl::java::util::TimeZone arg0)
		{
			__constructor(
				arg0);
		}
		GregorianCalendar(__jni_impl::java::util::Locale arg0)
		{
			__constructor(
				arg0);
		}
		GregorianCalendar(__jni_impl::java::util::TimeZone arg0, __jni_impl::java::util::Locale arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_GREGORIANCALENDAR

