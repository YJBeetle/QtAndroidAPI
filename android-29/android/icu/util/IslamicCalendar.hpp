#pragma once

#include "./IslamicCalendar_CalculationType.def.hpp"
#include "./TimeZone.def.hpp"
#include "./ULocale.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Date.def.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./IslamicCalendar.def.hpp"

namespace android::icu::util
{
	// Fields
	inline jint IslamicCalendar::DHU_AL_HIJJAH()
	{
		return getStaticField<jint>(
			"android.icu.util.IslamicCalendar",
			"DHU_AL_HIJJAH"
		);
	}
	inline jint IslamicCalendar::DHU_AL_QIDAH()
	{
		return getStaticField<jint>(
			"android.icu.util.IslamicCalendar",
			"DHU_AL_QIDAH"
		);
	}
	inline jint IslamicCalendar::JUMADA_1()
	{
		return getStaticField<jint>(
			"android.icu.util.IslamicCalendar",
			"JUMADA_1"
		);
	}
	inline jint IslamicCalendar::JUMADA_2()
	{
		return getStaticField<jint>(
			"android.icu.util.IslamicCalendar",
			"JUMADA_2"
		);
	}
	inline jint IslamicCalendar::MUHARRAM()
	{
		return getStaticField<jint>(
			"android.icu.util.IslamicCalendar",
			"MUHARRAM"
		);
	}
	inline jint IslamicCalendar::RABI_1()
	{
		return getStaticField<jint>(
			"android.icu.util.IslamicCalendar",
			"RABI_1"
		);
	}
	inline jint IslamicCalendar::RABI_2()
	{
		return getStaticField<jint>(
			"android.icu.util.IslamicCalendar",
			"RABI_2"
		);
	}
	inline jint IslamicCalendar::RAJAB()
	{
		return getStaticField<jint>(
			"android.icu.util.IslamicCalendar",
			"RAJAB"
		);
	}
	inline jint IslamicCalendar::RAMADAN()
	{
		return getStaticField<jint>(
			"android.icu.util.IslamicCalendar",
			"RAMADAN"
		);
	}
	inline jint IslamicCalendar::SAFAR()
	{
		return getStaticField<jint>(
			"android.icu.util.IslamicCalendar",
			"SAFAR"
		);
	}
	inline jint IslamicCalendar::SHABAN()
	{
		return getStaticField<jint>(
			"android.icu.util.IslamicCalendar",
			"SHABAN"
		);
	}
	inline jint IslamicCalendar::SHAWWAL()
	{
		return getStaticField<jint>(
			"android.icu.util.IslamicCalendar",
			"SHAWWAL"
		);
	}
	
	// Constructors
	inline IslamicCalendar::IslamicCalendar()
		: android::icu::util::Calendar(
			"android.icu.util.IslamicCalendar",
			"()V"
		) {}
	inline IslamicCalendar::IslamicCalendar(android::icu::util::TimeZone arg0)
		: android::icu::util::Calendar(
			"android.icu.util.IslamicCalendar",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.object()
		) {}
	inline IslamicCalendar::IslamicCalendar(android::icu::util::ULocale arg0)
		: android::icu::util::Calendar(
			"android.icu.util.IslamicCalendar",
			"(Landroid/icu/util/ULocale;)V",
			arg0.object()
		) {}
	inline IslamicCalendar::IslamicCalendar(java::util::Date arg0)
		: android::icu::util::Calendar(
			"android.icu.util.IslamicCalendar",
			"(Ljava/util/Date;)V",
			arg0.object()
		) {}
	inline IslamicCalendar::IslamicCalendar(java::util::Locale arg0)
		: android::icu::util::Calendar(
			"android.icu.util.IslamicCalendar",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	inline IslamicCalendar::IslamicCalendar(android::icu::util::TimeZone arg0, android::icu::util::ULocale arg1)
		: android::icu::util::Calendar(
			"android.icu.util.IslamicCalendar",
			"(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline IslamicCalendar::IslamicCalendar(android::icu::util::TimeZone arg0, java::util::Locale arg1)
		: android::icu::util::Calendar(
			"android.icu.util.IslamicCalendar",
			"(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline IslamicCalendar::IslamicCalendar(jint arg0, jint arg1, jint arg2)
		: android::icu::util::Calendar(
			"android.icu.util.IslamicCalendar",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	inline IslamicCalendar::IslamicCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
		: android::icu::util::Calendar(
			"android.icu.util.IslamicCalendar",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		) {}
	
	// Methods
	inline android::icu::util::IslamicCalendar_CalculationType IslamicCalendar::getCalculationType() const
	{
		return callObjectMethod(
			"getCalculationType",
			"()Landroid/icu/util/IslamicCalendar$CalculationType;"
		);
	}
	inline JString IslamicCalendar::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
	inline void IslamicCalendar::setCalculationType(android::icu::util::IslamicCalendar_CalculationType arg0) const
	{
		callMethod<void>(
			"setCalculationType",
			"(Landroid/icu/util/IslamicCalendar$CalculationType;)V",
			arg0.object()
		);
	}
} // namespace android::icu::util

// Base class headers
#include "./Calendar.hpp"

