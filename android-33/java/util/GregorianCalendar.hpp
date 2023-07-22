#pragma once

#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../io/ObjectInputStream.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../time/ZonedDateTime.def.hpp"
#include "./Date.def.hpp"
#include "./Locale.def.hpp"
#include "./TimeZone.def.hpp"
#include "./GregorianCalendar.def.hpp"

namespace java::util
{
	// Fields
	inline jint GregorianCalendar::AD()
	{
		return getStaticField<jint>(
			"java.util.GregorianCalendar",
			"AD"
		);
	}
	inline jint GregorianCalendar::BC()
	{
		return getStaticField<jint>(
			"java.util.GregorianCalendar",
			"BC"
		);
	}
	
	// Constructors
	inline GregorianCalendar::GregorianCalendar()
		: java::util::Calendar(
			"java.util.GregorianCalendar",
			"()V"
		) {}
	inline GregorianCalendar::GregorianCalendar(java::util::Locale arg0)
		: java::util::Calendar(
			"java.util.GregorianCalendar",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	inline GregorianCalendar::GregorianCalendar(java::util::TimeZone arg0)
		: java::util::Calendar(
			"java.util.GregorianCalendar",
			"(Ljava/util/TimeZone;)V",
			arg0.object()
		) {}
	inline GregorianCalendar::GregorianCalendar(java::util::TimeZone arg0, java::util::Locale arg1)
		: java::util::Calendar(
			"java.util.GregorianCalendar",
			"(Ljava/util/TimeZone;Ljava/util/Locale;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline GregorianCalendar::GregorianCalendar(jint arg0, jint arg1, jint arg2)
		: java::util::Calendar(
			"java.util.GregorianCalendar",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	inline GregorianCalendar::GregorianCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
		: java::util::Calendar(
			"java.util.GregorianCalendar",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	inline GregorianCalendar::GregorianCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
		: java::util::Calendar(
			"java.util.GregorianCalendar",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		) {}
	
	// Methods
	inline java::util::GregorianCalendar GregorianCalendar::from(java::time::ZonedDateTime arg0)
	{
		return callStaticObjectMethod(
			"java.util.GregorianCalendar",
			"from",
			"(Ljava/time/ZonedDateTime;)Ljava/util/GregorianCalendar;",
			arg0.object()
		);
	}
	inline void GregorianCalendar::add(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"add",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline JObject GregorianCalendar::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline jboolean GregorianCalendar::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint GregorianCalendar::getActualMaximum(jint arg0) const
	{
		return callMethod<jint>(
			"getActualMaximum",
			"(I)I",
			arg0
		);
	}
	inline jint GregorianCalendar::getActualMinimum(jint arg0) const
	{
		return callMethod<jint>(
			"getActualMinimum",
			"(I)I",
			arg0
		);
	}
	inline JString GregorianCalendar::getCalendarType() const
	{
		return callObjectMethod(
			"getCalendarType",
			"()Ljava/lang/String;"
		);
	}
	inline jint GregorianCalendar::getGreatestMinimum(jint arg0) const
	{
		return callMethod<jint>(
			"getGreatestMinimum",
			"(I)I",
			arg0
		);
	}
	inline java::util::Date GregorianCalendar::getGregorianChange() const
	{
		return callObjectMethod(
			"getGregorianChange",
			"()Ljava/util/Date;"
		);
	}
	inline jint GregorianCalendar::getLeastMaximum(jint arg0) const
	{
		return callMethod<jint>(
			"getLeastMaximum",
			"(I)I",
			arg0
		);
	}
	inline jint GregorianCalendar::getMaximum(jint arg0) const
	{
		return callMethod<jint>(
			"getMaximum",
			"(I)I",
			arg0
		);
	}
	inline jint GregorianCalendar::getMinimum(jint arg0) const
	{
		return callMethod<jint>(
			"getMinimum",
			"(I)I",
			arg0
		);
	}
	inline java::util::TimeZone GregorianCalendar::getTimeZone() const
	{
		return callObjectMethod(
			"getTimeZone",
			"()Ljava/util/TimeZone;"
		);
	}
	inline jint GregorianCalendar::getWeekYear() const
	{
		return callMethod<jint>(
			"getWeekYear",
			"()I"
		);
	}
	inline jint GregorianCalendar::getWeeksInWeekYear() const
	{
		return callMethod<jint>(
			"getWeeksInWeekYear",
			"()I"
		);
	}
	inline jint GregorianCalendar::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean GregorianCalendar::isLeapYear(jint arg0) const
	{
		return callMethod<jboolean>(
			"isLeapYear",
			"(I)Z",
			arg0
		);
	}
	inline jboolean GregorianCalendar::isWeekDateSupported() const
	{
		return callMethod<jboolean>(
			"isWeekDateSupported",
			"()Z"
		);
	}
	inline void GregorianCalendar::roll(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"roll",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	inline void GregorianCalendar::roll(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"roll",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void GregorianCalendar::setGregorianChange(java::util::Date arg0) const
	{
		callMethod<void>(
			"setGregorianChange",
			"(Ljava/util/Date;)V",
			arg0.object()
		);
	}
	inline void GregorianCalendar::setTimeZone(java::util::TimeZone arg0) const
	{
		callMethod<void>(
			"setTimeZone",
			"(Ljava/util/TimeZone;)V",
			arg0.object()
		);
	}
	inline void GregorianCalendar::setWeekDate(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setWeekDate",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline java::time::ZonedDateTime GregorianCalendar::toZonedDateTime() const
	{
		return callObjectMethod(
			"toZonedDateTime",
			"()Ljava/time/ZonedDateTime;"
		);
	}
} // namespace java::util

// Base class headers
#include "./Calendar.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
