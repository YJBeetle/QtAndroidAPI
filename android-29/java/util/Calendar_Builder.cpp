#include "./Calendar.hpp"
#include "./Date.hpp"
#include "./Locale.hpp"
#include "./TimeZone.hpp"
#include "./Calendar_Builder.hpp"

namespace java::util
{
	// Fields
	
	Calendar_Builder::Calendar_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Calendar_Builder::Calendar_Builder()
	{
		__thiz = QAndroidJniObject(
			"java.util.Calendar$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject Calendar_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Ljava/util/Calendar;"
		);
	}
	QAndroidJniObject Calendar_Builder::set(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"set",
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
	QAndroidJniObject Calendar_Builder::setFields(jintArray arg0)
	{
		return __thiz.callObjectMethod(
			"setFields",
			"([I)Ljava/util/Calendar$Builder;",
			arg0
		);
	}
	QAndroidJniObject Calendar_Builder::setInstant(java::util::Date arg0)
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
	QAndroidJniObject Calendar_Builder::setLenient(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setLenient",
			"(Z)Ljava/util/Calendar$Builder;",
			arg0
		);
	}
	QAndroidJniObject Calendar_Builder::setLocale(java::util::Locale arg0)
	{
		return __thiz.callObjectMethod(
			"setLocale",
			"(Ljava/util/Locale;)Ljava/util/Calendar$Builder;",
			arg0.__jniObject().object()
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
	QAndroidJniObject Calendar_Builder::setTimeZone(java::util::TimeZone arg0)
	{
		return __thiz.callObjectMethod(
			"setTimeZone",
			"(Ljava/util/TimeZone;)Ljava/util/Calendar$Builder;",
			arg0.__jniObject().object()
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
	QAndroidJniObject Calendar_Builder::setWeekDefinition(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"setWeekDefinition",
			"(II)Ljava/util/Calendar$Builder;",
			arg0,
			arg1
		);
	}
} // namespace java::util

