#include "./Calendar.hpp"
#include "./Date.hpp"
#include "./Locale.hpp"
#include "./TimeZone.hpp"
#include "./Calendar_Builder.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	Calendar_Builder::Calendar_Builder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Calendar_Builder::Calendar_Builder()
		: __JniBaseClass(
			"java.util.Calendar$Builder",
			"()V"
		) {}
	
	// Methods
	java::util::Calendar Calendar_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Ljava/util/Calendar;"
		);
	}
	java::util::Calendar_Builder Calendar_Builder::set(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"set",
			"(II)Ljava/util/Calendar$Builder;",
			arg0,
			arg1
		);
	}
	java::util::Calendar_Builder Calendar_Builder::setCalendarType(jstring arg0)
	{
		return callObjectMethod(
			"setCalendarType",
			"(Ljava/lang/String;)Ljava/util/Calendar$Builder;",
			arg0
		);
	}
	java::util::Calendar_Builder Calendar_Builder::setDate(jint arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"setDate",
			"(III)Ljava/util/Calendar$Builder;",
			arg0,
			arg1,
			arg2
		);
	}
	java::util::Calendar_Builder Calendar_Builder::setFields(jintArray arg0)
	{
		return callObjectMethod(
			"setFields",
			"([I)Ljava/util/Calendar$Builder;",
			arg0
		);
	}
	java::util::Calendar_Builder Calendar_Builder::setInstant(java::util::Date arg0)
	{
		return callObjectMethod(
			"setInstant",
			"(Ljava/util/Date;)Ljava/util/Calendar$Builder;",
			arg0.object()
		);
	}
	java::util::Calendar_Builder Calendar_Builder::setInstant(jlong arg0)
	{
		return callObjectMethod(
			"setInstant",
			"(J)Ljava/util/Calendar$Builder;",
			arg0
		);
	}
	java::util::Calendar_Builder Calendar_Builder::setLenient(jboolean arg0)
	{
		return callObjectMethod(
			"setLenient",
			"(Z)Ljava/util/Calendar$Builder;",
			arg0
		);
	}
	java::util::Calendar_Builder Calendar_Builder::setLocale(java::util::Locale arg0)
	{
		return callObjectMethod(
			"setLocale",
			"(Ljava/util/Locale;)Ljava/util/Calendar$Builder;",
			arg0.object()
		);
	}
	java::util::Calendar_Builder Calendar_Builder::setTimeOfDay(jint arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"setTimeOfDay",
			"(III)Ljava/util/Calendar$Builder;",
			arg0,
			arg1,
			arg2
		);
	}
	java::util::Calendar_Builder Calendar_Builder::setTimeOfDay(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"setTimeOfDay",
			"(IIII)Ljava/util/Calendar$Builder;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	java::util::Calendar_Builder Calendar_Builder::setTimeZone(java::util::TimeZone arg0)
	{
		return callObjectMethod(
			"setTimeZone",
			"(Ljava/util/TimeZone;)Ljava/util/Calendar$Builder;",
			arg0.object()
		);
	}
	java::util::Calendar_Builder Calendar_Builder::setWeekDate(jint arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"setWeekDate",
			"(III)Ljava/util/Calendar$Builder;",
			arg0,
			arg1,
			arg2
		);
	}
	java::util::Calendar_Builder Calendar_Builder::setWeekDefinition(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"setWeekDefinition",
			"(II)Ljava/util/Calendar$Builder;",
			arg0,
			arg1
		);
	}
} // namespace java::util

