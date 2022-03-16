#pragma once

#include "./TimeZone.def.hpp"
#include "./ULocale.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Date.def.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./IndianCalendar.def.hpp"

namespace android::icu::util
{
	// Fields
	inline jint IndianCalendar::AGRAHAYANA()
	{
		return getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"AGRAHAYANA"
		);
	}
	inline jint IndianCalendar::ASADHA()
	{
		return getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"ASADHA"
		);
	}
	inline jint IndianCalendar::ASVINA()
	{
		return getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"ASVINA"
		);
	}
	inline jint IndianCalendar::BHADRA()
	{
		return getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"BHADRA"
		);
	}
	inline jint IndianCalendar::CHAITRA()
	{
		return getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"CHAITRA"
		);
	}
	inline jint IndianCalendar::IE()
	{
		return getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"IE"
		);
	}
	inline jint IndianCalendar::JYAISTHA()
	{
		return getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"JYAISTHA"
		);
	}
	inline jint IndianCalendar::KARTIKA()
	{
		return getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"KARTIKA"
		);
	}
	inline jint IndianCalendar::MAGHA()
	{
		return getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"MAGHA"
		);
	}
	inline jint IndianCalendar::PAUSA()
	{
		return getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"PAUSA"
		);
	}
	inline jint IndianCalendar::PHALGUNA()
	{
		return getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"PHALGUNA"
		);
	}
	inline jint IndianCalendar::SRAVANA()
	{
		return getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"SRAVANA"
		);
	}
	inline jint IndianCalendar::VAISAKHA()
	{
		return getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"VAISAKHA"
		);
	}
	
	// Constructors
	inline IndianCalendar::IndianCalendar()
		: android::icu::util::Calendar(
			"android.icu.util.IndianCalendar",
			"()V"
		) {}
	inline IndianCalendar::IndianCalendar(android::icu::util::TimeZone arg0)
		: android::icu::util::Calendar(
			"android.icu.util.IndianCalendar",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.object()
		) {}
	inline IndianCalendar::IndianCalendar(android::icu::util::ULocale arg0)
		: android::icu::util::Calendar(
			"android.icu.util.IndianCalendar",
			"(Landroid/icu/util/ULocale;)V",
			arg0.object()
		) {}
	inline IndianCalendar::IndianCalendar(java::util::Date arg0)
		: android::icu::util::Calendar(
			"android.icu.util.IndianCalendar",
			"(Ljava/util/Date;)V",
			arg0.object()
		) {}
	inline IndianCalendar::IndianCalendar(java::util::Locale arg0)
		: android::icu::util::Calendar(
			"android.icu.util.IndianCalendar",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	inline IndianCalendar::IndianCalendar(android::icu::util::TimeZone arg0, android::icu::util::ULocale arg1)
		: android::icu::util::Calendar(
			"android.icu.util.IndianCalendar",
			"(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline IndianCalendar::IndianCalendar(android::icu::util::TimeZone arg0, java::util::Locale arg1)
		: android::icu::util::Calendar(
			"android.icu.util.IndianCalendar",
			"(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline IndianCalendar::IndianCalendar(jint arg0, jint arg1, jint arg2)
		: android::icu::util::Calendar(
			"android.icu.util.IndianCalendar",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	inline IndianCalendar::IndianCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
		: android::icu::util::Calendar(
			"android.icu.util.IndianCalendar",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		) {}
	
	// Methods
	inline JString IndianCalendar::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::util

// Base class headers
#include "./Calendar.hpp"

