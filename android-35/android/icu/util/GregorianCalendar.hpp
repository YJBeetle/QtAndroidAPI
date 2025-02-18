#pragma once

#include "./Calendar.def.hpp"
#include "./TimeZone.def.hpp"
#include "./ULocale.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Date.def.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./GregorianCalendar.def.hpp"

namespace android::icu::util
{
	// Fields
	inline jint GregorianCalendar::AD()
	{
		return getStaticField<jint>(
			"android.icu.util.GregorianCalendar",
			"AD"
		);
	}
	inline jint GregorianCalendar::BC()
	{
		return getStaticField<jint>(
			"android.icu.util.GregorianCalendar",
			"BC"
		);
	}
	
	// Constructors
	inline GregorianCalendar::GregorianCalendar()
		: android::icu::util::Calendar(
			"android.icu.util.GregorianCalendar",
			"()V"
		) {}
	inline GregorianCalendar::GregorianCalendar(android::icu::util::TimeZone arg0)
		: android::icu::util::Calendar(
			"android.icu.util.GregorianCalendar",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.object()
		) {}
	inline GregorianCalendar::GregorianCalendar(android::icu::util::ULocale arg0)
		: android::icu::util::Calendar(
			"android.icu.util.GregorianCalendar",
			"(Landroid/icu/util/ULocale;)V",
			arg0.object()
		) {}
	inline GregorianCalendar::GregorianCalendar(java::util::Locale arg0)
		: android::icu::util::Calendar(
			"android.icu.util.GregorianCalendar",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	inline GregorianCalendar::GregorianCalendar(android::icu::util::TimeZone arg0, android::icu::util::ULocale arg1)
		: android::icu::util::Calendar(
			"android.icu.util.GregorianCalendar",
			"(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline GregorianCalendar::GregorianCalendar(android::icu::util::TimeZone arg0, java::util::Locale arg1)
		: android::icu::util::Calendar(
			"android.icu.util.GregorianCalendar",
			"(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline GregorianCalendar::GregorianCalendar(jint arg0, jint arg1, jint arg2)
		: android::icu::util::Calendar(
			"android.icu.util.GregorianCalendar",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	inline GregorianCalendar::GregorianCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
		: android::icu::util::Calendar(
			"android.icu.util.GregorianCalendar",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	inline GregorianCalendar::GregorianCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
		: android::icu::util::Calendar(
			"android.icu.util.GregorianCalendar",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		) {}
	
	// Methods
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
	inline java::util::Date GregorianCalendar::getGregorianChange() const
	{
		return callObjectMethod(
			"getGregorianChange",
			"()Ljava/util/Date;"
		);
	}
	inline JString GregorianCalendar::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
	inline jint GregorianCalendar::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean GregorianCalendar::isEquivalentTo(android::icu::util::Calendar arg0) const
	{
		return callMethod<jboolean>(
			"isEquivalentTo",
			"(Landroid/icu/util/Calendar;)Z",
			arg0.object()
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
} // namespace android::icu::util

// Base class headers
#include "./Calendar.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::util;
#endif
