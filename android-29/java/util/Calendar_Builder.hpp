#pragma once

#include "../../JIntArray.hpp"
#include "../../JString.hpp"
#include "./Calendar.def.hpp"
#include "./Date.def.hpp"
#include "./Locale.def.hpp"
#include "./TimeZone.def.hpp"
#include "./Calendar_Builder.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline Calendar_Builder::Calendar_Builder()
		: JObject(
			"java.util.Calendar$Builder",
			"()V"
		) {}
	
	// Methods
	inline java::util::Calendar Calendar_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Ljava/util/Calendar;"
		);
	}
	inline java::util::Calendar_Builder Calendar_Builder::set(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"set",
			"(II)Ljava/util/Calendar$Builder;",
			arg0,
			arg1
		);
	}
	inline java::util::Calendar_Builder Calendar_Builder::setCalendarType(JString arg0) const
	{
		return callObjectMethod(
			"setCalendarType",
			"(Ljava/lang/String;)Ljava/util/Calendar$Builder;",
			arg0.object<jstring>()
		);
	}
	inline java::util::Calendar_Builder Calendar_Builder::setDate(jint arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"setDate",
			"(III)Ljava/util/Calendar$Builder;",
			arg0,
			arg1,
			arg2
		);
	}
	inline java::util::Calendar_Builder Calendar_Builder::setFields(JIntArray arg0) const
	{
		return callObjectMethod(
			"setFields",
			"([I)Ljava/util/Calendar$Builder;",
			arg0.object<jintArray>()
		);
	}
	inline java::util::Calendar_Builder Calendar_Builder::setInstant(java::util::Date arg0) const
	{
		return callObjectMethod(
			"setInstant",
			"(Ljava/util/Date;)Ljava/util/Calendar$Builder;",
			arg0.object()
		);
	}
	inline java::util::Calendar_Builder Calendar_Builder::setInstant(jlong arg0) const
	{
		return callObjectMethod(
			"setInstant",
			"(J)Ljava/util/Calendar$Builder;",
			arg0
		);
	}
	inline java::util::Calendar_Builder Calendar_Builder::setLenient(jboolean arg0) const
	{
		return callObjectMethod(
			"setLenient",
			"(Z)Ljava/util/Calendar$Builder;",
			arg0
		);
	}
	inline java::util::Calendar_Builder Calendar_Builder::setLocale(java::util::Locale arg0) const
	{
		return callObjectMethod(
			"setLocale",
			"(Ljava/util/Locale;)Ljava/util/Calendar$Builder;",
			arg0.object()
		);
	}
	inline java::util::Calendar_Builder Calendar_Builder::setTimeOfDay(jint arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"setTimeOfDay",
			"(III)Ljava/util/Calendar$Builder;",
			arg0,
			arg1,
			arg2
		);
	}
	inline java::util::Calendar_Builder Calendar_Builder::setTimeOfDay(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	inline java::util::Calendar_Builder Calendar_Builder::setTimeZone(java::util::TimeZone arg0) const
	{
		return callObjectMethod(
			"setTimeZone",
			"(Ljava/util/TimeZone;)Ljava/util/Calendar$Builder;",
			arg0.object()
		);
	}
	inline java::util::Calendar_Builder Calendar_Builder::setWeekDate(jint arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"setWeekDate",
			"(III)Ljava/util/Calendar$Builder;",
			arg0,
			arg1,
			arg2
		);
	}
	inline java::util::Calendar_Builder Calendar_Builder::setWeekDefinition(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setWeekDefinition",
			"(II)Ljava/util/Calendar$Builder;",
			arg0,
			arg1
		);
	}
} // namespace java::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
