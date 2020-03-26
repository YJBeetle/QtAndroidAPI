#pragma once

#ifndef JAVA_UTIL_CALENDAR_BUILDER
#define JAVA_UTIL_CALENDAR_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class TimeZone;
}
namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::java::util
{
	class Calendar;
}
namespace __jni_impl::java::util
{
	class Date;
}

namespace __jni_impl::java::util
{
	class Calendar_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject set(jint arg0, jint arg1);
		QAndroidJniObject build();
		QAndroidJniObject setLocale(__jni_impl::java::util::Locale arg0);
		QAndroidJniObject setTimeZone(__jni_impl::java::util::TimeZone arg0);
		QAndroidJniObject setLenient(jboolean arg0);
		QAndroidJniObject setWeekDate(jint arg0, jint arg1, jint arg2);
		QAndroidJniObject setDate(jint arg0, jint arg1, jint arg2);
		QAndroidJniObject setInstant(__jni_impl::java::util::Date arg0);
		QAndroidJniObject setInstant(jlong arg0);
		QAndroidJniObject setFields(jintArray arg0);
		QAndroidJniObject setTimeOfDay(jint arg0, jint arg1, jint arg2);
		QAndroidJniObject setTimeOfDay(jint arg0, jint arg1, jint arg2, jint arg3);
		QAndroidJniObject setWeekDefinition(jint arg0, jint arg1);
		QAndroidJniObject setCalendarType(jstring arg0);
	};
} // namespace __jni_impl::java::util

#include "TimeZone.hpp"
#include "Locale.hpp"
#include "Calendar.hpp"
#include "Date.hpp"

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void Calendar_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.Calendar$Builder",
			"()V");
	}
	
	// Methods
	QAndroidJniObject Calendar_Builder::set(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"set",
			"(II)Ljava/util/Calendar$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Calendar_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Ljava/util/Calendar;"
		);
	}
	QAndroidJniObject Calendar_Builder::setLocale(__jni_impl::java::util::Locale arg0)
	{
		return __thiz.callObjectMethod(
			"setLocale",
			"(Ljava/util/Locale;)Ljava/util/Calendar$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Calendar_Builder::setTimeZone(__jni_impl::java::util::TimeZone arg0)
	{
		return __thiz.callObjectMethod(
			"setTimeZone",
			"(Ljava/util/TimeZone;)Ljava/util/Calendar$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Calendar_Builder::setLenient(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setLenient",
			"(Z)Ljava/util/Calendar$Builder;",
			arg0
		);
	}
	QAndroidJniObject Calendar_Builder::setWeekDate(jint arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"setWeekDate",
			"(III)Ljava/util/Calendar$Builder;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject Calendar_Builder::setDate(jint arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"setDate",
			"(III)Ljava/util/Calendar$Builder;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject Calendar_Builder::setInstant(__jni_impl::java::util::Date arg0)
	{
		return __thiz.callObjectMethod(
			"setInstant",
			"(Ljava/util/Date;)Ljava/util/Calendar$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Calendar_Builder::setInstant(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setInstant",
			"(J)Ljava/util/Calendar$Builder;",
			arg0
		);
	}
	QAndroidJniObject Calendar_Builder::setFields(jintArray arg0)
	{
		return __thiz.callObjectMethod(
			"setFields",
			"([I)Ljava/util/Calendar$Builder;",
			arg0
		);
	}
	QAndroidJniObject Calendar_Builder::setTimeOfDay(jint arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"setTimeOfDay",
			"(III)Ljava/util/Calendar$Builder;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject Calendar_Builder::setTimeOfDay(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"setTimeOfDay",
			"(IIII)Ljava/util/Calendar$Builder;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject Calendar_Builder::setWeekDefinition(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"setWeekDefinition",
			"(II)Ljava/util/Calendar$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Calendar_Builder::setCalendarType(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setCalendarType",
			"(Ljava/lang/String;)Ljava/util/Calendar$Builder;",
			arg0
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class Calendar_Builder : public __jni_impl::java::util::Calendar_Builder
	{
	public:
		Calendar_Builder(QAndroidJniObject obj) { __thiz = obj; }
		Calendar_Builder()
		{
			__constructor();
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_CALENDAR_BUILDER

