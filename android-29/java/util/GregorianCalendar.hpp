#pragma once

#include "../../__JniBaseClass.hpp"
#include "Calendar.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::time
{
	class ZonedDateTime;
}
namespace __jni_impl::java::util
{
	class Date;
}
namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::java::util
{
	class TimeZone;
}

namespace __jni_impl::java::util
{
	class GregorianCalendar : public __jni_impl::java::util::Calendar
	{
	public:
		// Fields
		static jint AD();
		static jint BC();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::java::util::Locale arg0);
		void __constructor(__jni_impl::java::util::TimeZone arg0);
		void __constructor(__jni_impl::java::util::TimeZone arg0, __jni_impl::java::util::Locale arg1);
		void __constructor(jint arg0, jint arg1, jint arg2);
		void __constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void __constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		
		// Methods
		static QAndroidJniObject from(__jni_impl::java::time::ZonedDateTime arg0);
		void add(jint arg0, jint arg1);
		jobject clone();
		jboolean equals(jobject arg0);
		jint getActualMaximum(jint arg0);
		jint getActualMinimum(jint arg0);
		jstring getCalendarType();
		jint getGreatestMinimum(jint arg0);
		QAndroidJniObject getGregorianChange();
		jint getLeastMaximum(jint arg0);
		jint getMaximum(jint arg0);
		jint getMinimum(jint arg0);
		QAndroidJniObject getTimeZone();
		jint getWeekYear();
		jint getWeeksInWeekYear();
		jint hashCode();
		jboolean isLeapYear(jint arg0);
		jboolean isWeekDateSupported();
		void roll(jint arg0, jboolean arg1);
		void roll(jint arg0, jint arg1);
		void setGregorianChange(__jni_impl::java::util::Date arg0);
		void setTimeZone(__jni_impl::java::util::TimeZone arg0);
		void setWeekDate(jint arg0, jint arg1, jint arg2);
		QAndroidJniObject toZonedDateTime();
	};
} // namespace __jni_impl::java::util

#include "../io/ObjectInputStream.hpp"
#include "../time/ZonedDateTime.hpp"
#include "Date.hpp"
#include "Locale.hpp"
#include "TimeZone.hpp"

namespace __jni_impl::java::util
{
	// Fields
	jint GregorianCalendar::AD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.GregorianCalendar",
			"AD"
		);
	}
	jint GregorianCalendar::BC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.GregorianCalendar",
			"BC"
		);
	}
	
	// Constructors
	void GregorianCalendar::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.GregorianCalendar",
			"()V"
		);
	}
	void GregorianCalendar::__constructor(__jni_impl::java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.GregorianCalendar",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	void GregorianCalendar::__constructor(__jni_impl::java::util::TimeZone arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.GregorianCalendar",
			"(Ljava/util/TimeZone;)V",
			arg0.__jniObject().object()
		);
	}
	void GregorianCalendar::__constructor(__jni_impl::java::util::TimeZone arg0, __jni_impl::java::util::Locale arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.GregorianCalendar",
			"(Ljava/util/TimeZone;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void GregorianCalendar::__constructor(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.GregorianCalendar",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
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
			arg4
		);
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
			arg5
		);
	}
	
	// Methods
	QAndroidJniObject GregorianCalendar::from(__jni_impl::java::time::ZonedDateTime arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.GregorianCalendar",
			"from",
			"(Ljava/time/ZonedDateTime;)Ljava/util/GregorianCalendar;",
			arg0.__jniObject().object()
		);
	}
	void GregorianCalendar::add(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"add",
			"(II)V",
			arg0,
			arg1
		);
	}
	jobject GregorianCalendar::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean GregorianCalendar::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
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
	jint GregorianCalendar::getActualMinimum(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getActualMinimum",
			"(I)I",
			arg0
		);
	}
	jstring GregorianCalendar::getCalendarType()
	{
		return __thiz.callObjectMethod(
			"getCalendarType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint GregorianCalendar::getGreatestMinimum(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getGreatestMinimum",
			"(I)I",
			arg0
		);
	}
	QAndroidJniObject GregorianCalendar::getGregorianChange()
	{
		return __thiz.callObjectMethod(
			"getGregorianChange",
			"()Ljava/util/Date;"
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
	jint GregorianCalendar::getMaximum(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getMaximum",
			"(I)I",
			arg0
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
	QAndroidJniObject GregorianCalendar::getTimeZone()
	{
		return __thiz.callObjectMethod(
			"getTimeZone",
			"()Ljava/util/TimeZone;"
		);
	}
	jint GregorianCalendar::getWeekYear()
	{
		return __thiz.callMethod<jint>(
			"getWeekYear",
			"()I"
		);
	}
	jint GregorianCalendar::getWeeksInWeekYear()
	{
		return __thiz.callMethod<jint>(
			"getWeeksInWeekYear",
			"()I"
		);
	}
	jint GregorianCalendar::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
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
	jboolean GregorianCalendar::isWeekDateSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isWeekDateSupported",
			"()Z"
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
	void GregorianCalendar::setGregorianChange(__jni_impl::java::util::Date arg0)
	{
		__thiz.callMethod<void>(
			"setGregorianChange",
			"(Ljava/util/Date;)V",
			arg0.__jniObject().object()
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
	QAndroidJniObject GregorianCalendar::toZonedDateTime()
	{
		return __thiz.callObjectMethod(
			"toZonedDateTime",
			"()Ljava/time/ZonedDateTime;"
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class GregorianCalendar : public __jni_impl::java::util::GregorianCalendar
	{
	public:
		GregorianCalendar(QAndroidJniObject obj) { __thiz = obj; }
		GregorianCalendar()
		{
			__constructor();
		}
		GregorianCalendar(__jni_impl::java::util::Locale arg0)
		{
			__constructor(
				arg0);
		}
		GregorianCalendar(__jni_impl::java::util::TimeZone arg0)
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
	};
} // namespace java::util

