#pragma once

#include "./TimeZone.def.hpp"
#include "./ULocale.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Date.def.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./EthiopicCalendar.def.hpp"

namespace android::icu::util
{
	// Fields
	inline jint EthiopicCalendar::GENBOT()
	{
		return getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"GENBOT"
		);
	}
	inline jint EthiopicCalendar::HAMLE()
	{
		return getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"HAMLE"
		);
	}
	inline jint EthiopicCalendar::HEDAR()
	{
		return getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"HEDAR"
		);
	}
	inline jint EthiopicCalendar::MEGABIT()
	{
		return getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"MEGABIT"
		);
	}
	inline jint EthiopicCalendar::MESKEREM()
	{
		return getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"MESKEREM"
		);
	}
	inline jint EthiopicCalendar::MIAZIA()
	{
		return getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"MIAZIA"
		);
	}
	inline jint EthiopicCalendar::NEHASSE()
	{
		return getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"NEHASSE"
		);
	}
	inline jint EthiopicCalendar::PAGUMEN()
	{
		return getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"PAGUMEN"
		);
	}
	inline jint EthiopicCalendar::SENE()
	{
		return getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"SENE"
		);
	}
	inline jint EthiopicCalendar::TAHSAS()
	{
		return getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"TAHSAS"
		);
	}
	inline jint EthiopicCalendar::TEKEMT()
	{
		return getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"TEKEMT"
		);
	}
	inline jint EthiopicCalendar::TER()
	{
		return getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"TER"
		);
	}
	inline jint EthiopicCalendar::YEKATIT()
	{
		return getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"YEKATIT"
		);
	}
	
	// Constructors
	inline EthiopicCalendar::EthiopicCalendar()
		: android::icu::util::Calendar(
			"android.icu.util.EthiopicCalendar",
			"()V"
		) {}
	inline EthiopicCalendar::EthiopicCalendar(android::icu::util::TimeZone arg0)
		: android::icu::util::Calendar(
			"android.icu.util.EthiopicCalendar",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.object()
		) {}
	inline EthiopicCalendar::EthiopicCalendar(android::icu::util::ULocale arg0)
		: android::icu::util::Calendar(
			"android.icu.util.EthiopicCalendar",
			"(Landroid/icu/util/ULocale;)V",
			arg0.object()
		) {}
	inline EthiopicCalendar::EthiopicCalendar(java::util::Date arg0)
		: android::icu::util::Calendar(
			"android.icu.util.EthiopicCalendar",
			"(Ljava/util/Date;)V",
			arg0.object()
		) {}
	inline EthiopicCalendar::EthiopicCalendar(java::util::Locale arg0)
		: android::icu::util::Calendar(
			"android.icu.util.EthiopicCalendar",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	inline EthiopicCalendar::EthiopicCalendar(android::icu::util::TimeZone arg0, android::icu::util::ULocale arg1)
		: android::icu::util::Calendar(
			"android.icu.util.EthiopicCalendar",
			"(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline EthiopicCalendar::EthiopicCalendar(android::icu::util::TimeZone arg0, java::util::Locale arg1)
		: android::icu::util::Calendar(
			"android.icu.util.EthiopicCalendar",
			"(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline EthiopicCalendar::EthiopicCalendar(jint arg0, jint arg1, jint arg2)
		: android::icu::util::Calendar(
			"android.icu.util.EthiopicCalendar",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	inline EthiopicCalendar::EthiopicCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
		: android::icu::util::Calendar(
			"android.icu.util.EthiopicCalendar",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		) {}
	
	// Methods
	inline JString EthiopicCalendar::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean EthiopicCalendar::isAmeteAlemEra() const
	{
		return callMethod<jboolean>(
			"isAmeteAlemEra",
			"()Z"
		);
	}
	inline void EthiopicCalendar::setAmeteAlemEra(jboolean arg0) const
	{
		callMethod<void>(
			"setAmeteAlemEra",
			"(Z)V",
			arg0
		);
	}
} // namespace android::icu::util

// Base class headers
#include "./Calendar.hpp"

