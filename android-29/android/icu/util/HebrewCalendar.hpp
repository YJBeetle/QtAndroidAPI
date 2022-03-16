#pragma once

#include "./TimeZone.def.hpp"
#include "./ULocale.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Date.def.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./HebrewCalendar.def.hpp"

namespace android::icu::util
{
	// Fields
	inline jint HebrewCalendar::ADAR()
	{
		return getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"ADAR"
		);
	}
	inline jint HebrewCalendar::ADAR_1()
	{
		return getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"ADAR_1"
		);
	}
	inline jint HebrewCalendar::AV()
	{
		return getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"AV"
		);
	}
	inline jint HebrewCalendar::ELUL()
	{
		return getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"ELUL"
		);
	}
	inline jint HebrewCalendar::HESHVAN()
	{
		return getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"HESHVAN"
		);
	}
	inline jint HebrewCalendar::IYAR()
	{
		return getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"IYAR"
		);
	}
	inline jint HebrewCalendar::KISLEV()
	{
		return getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"KISLEV"
		);
	}
	inline jint HebrewCalendar::NISAN()
	{
		return getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"NISAN"
		);
	}
	inline jint HebrewCalendar::SHEVAT()
	{
		return getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"SHEVAT"
		);
	}
	inline jint HebrewCalendar::SIVAN()
	{
		return getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"SIVAN"
		);
	}
	inline jint HebrewCalendar::TAMUZ()
	{
		return getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"TAMUZ"
		);
	}
	inline jint HebrewCalendar::TEVET()
	{
		return getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"TEVET"
		);
	}
	inline jint HebrewCalendar::TISHRI()
	{
		return getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"TISHRI"
		);
	}
	
	// Constructors
	inline HebrewCalendar::HebrewCalendar()
		: android::icu::util::Calendar(
			"android.icu.util.HebrewCalendar",
			"()V"
		) {}
	inline HebrewCalendar::HebrewCalendar(android::icu::util::TimeZone arg0)
		: android::icu::util::Calendar(
			"android.icu.util.HebrewCalendar",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.object()
		) {}
	inline HebrewCalendar::HebrewCalendar(android::icu::util::ULocale arg0)
		: android::icu::util::Calendar(
			"android.icu.util.HebrewCalendar",
			"(Landroid/icu/util/ULocale;)V",
			arg0.object()
		) {}
	inline HebrewCalendar::HebrewCalendar(java::util::Date arg0)
		: android::icu::util::Calendar(
			"android.icu.util.HebrewCalendar",
			"(Ljava/util/Date;)V",
			arg0.object()
		) {}
	inline HebrewCalendar::HebrewCalendar(java::util::Locale arg0)
		: android::icu::util::Calendar(
			"android.icu.util.HebrewCalendar",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	inline HebrewCalendar::HebrewCalendar(android::icu::util::TimeZone arg0, android::icu::util::ULocale arg1)
		: android::icu::util::Calendar(
			"android.icu.util.HebrewCalendar",
			"(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline HebrewCalendar::HebrewCalendar(android::icu::util::TimeZone arg0, java::util::Locale arg1)
		: android::icu::util::Calendar(
			"android.icu.util.HebrewCalendar",
			"(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline HebrewCalendar::HebrewCalendar(jint arg0, jint arg1, jint arg2)
		: android::icu::util::Calendar(
			"android.icu.util.HebrewCalendar",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	inline HebrewCalendar::HebrewCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
		: android::icu::util::Calendar(
			"android.icu.util.HebrewCalendar",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		) {}
	
	// Methods
	inline void HebrewCalendar::add(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"add",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline JString HebrewCalendar::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
	inline void HebrewCalendar::roll(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"roll",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace android::icu::util

// Base class headers
#include "./Calendar.hpp"

