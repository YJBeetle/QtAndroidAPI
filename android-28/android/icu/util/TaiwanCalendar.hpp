#pragma once

#include "./TimeZone.def.hpp"
#include "./ULocale.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Date.def.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./TaiwanCalendar.def.hpp"

namespace android::icu::util
{
	// Fields
	inline jint TaiwanCalendar::BEFORE_MINGUO()
	{
		return getStaticField<jint>(
			"android.icu.util.TaiwanCalendar",
			"BEFORE_MINGUO"
		);
	}
	inline jint TaiwanCalendar::MINGUO()
	{
		return getStaticField<jint>(
			"android.icu.util.TaiwanCalendar",
			"MINGUO"
		);
	}
	
	// Constructors
	inline TaiwanCalendar::TaiwanCalendar()
		: android::icu::util::GregorianCalendar(
			"android.icu.util.TaiwanCalendar",
			"()V"
		) {}
	inline TaiwanCalendar::TaiwanCalendar(android::icu::util::TimeZone arg0)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.TaiwanCalendar",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.object()
		) {}
	inline TaiwanCalendar::TaiwanCalendar(android::icu::util::ULocale arg0)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.TaiwanCalendar",
			"(Landroid/icu/util/ULocale;)V",
			arg0.object()
		) {}
	inline TaiwanCalendar::TaiwanCalendar(java::util::Date arg0)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.TaiwanCalendar",
			"(Ljava/util/Date;)V",
			arg0.object()
		) {}
	inline TaiwanCalendar::TaiwanCalendar(java::util::Locale arg0)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.TaiwanCalendar",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	inline TaiwanCalendar::TaiwanCalendar(android::icu::util::TimeZone arg0, android::icu::util::ULocale arg1)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.TaiwanCalendar",
			"(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline TaiwanCalendar::TaiwanCalendar(android::icu::util::TimeZone arg0, java::util::Locale arg1)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.TaiwanCalendar",
			"(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline TaiwanCalendar::TaiwanCalendar(jint arg0, jint arg1, jint arg2)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.TaiwanCalendar",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	inline TaiwanCalendar::TaiwanCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.TaiwanCalendar",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		) {}
	
	// Methods
	inline JString TaiwanCalendar::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::util

// Base class headers
#include "./Calendar.hpp"
#include "./GregorianCalendar.hpp"

