#pragma once

#include "./TimeZone.def.hpp"
#include "./ULocale.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Date.def.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./CopticCalendar.def.hpp"

namespace android::icu::util
{
	// Fields
	inline jint CopticCalendar::AMSHIR()
	{
		return getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"AMSHIR"
		);
	}
	inline jint CopticCalendar::BABA()
	{
		return getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"BABA"
		);
	}
	inline jint CopticCalendar::BARAMHAT()
	{
		return getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"BARAMHAT"
		);
	}
	inline jint CopticCalendar::BARAMOUDA()
	{
		return getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"BARAMOUDA"
		);
	}
	inline jint CopticCalendar::BASHANS()
	{
		return getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"BASHANS"
		);
	}
	inline jint CopticCalendar::EPEP()
	{
		return getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"EPEP"
		);
	}
	inline jint CopticCalendar::HATOR()
	{
		return getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"HATOR"
		);
	}
	inline jint CopticCalendar::KIAHK()
	{
		return getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"KIAHK"
		);
	}
	inline jint CopticCalendar::MESRA()
	{
		return getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"MESRA"
		);
	}
	inline jint CopticCalendar::NASIE()
	{
		return getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"NASIE"
		);
	}
	inline jint CopticCalendar::PAONA()
	{
		return getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"PAONA"
		);
	}
	inline jint CopticCalendar::TOBA()
	{
		return getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"TOBA"
		);
	}
	inline jint CopticCalendar::TOUT()
	{
		return getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"TOUT"
		);
	}
	
	// Constructors
	inline CopticCalendar::CopticCalendar()
		: android::icu::util::Calendar(
			"android.icu.util.CopticCalendar",
			"()V"
		) {}
	inline CopticCalendar::CopticCalendar(android::icu::util::TimeZone arg0)
		: android::icu::util::Calendar(
			"android.icu.util.CopticCalendar",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.object()
		) {}
	inline CopticCalendar::CopticCalendar(android::icu::util::ULocale arg0)
		: android::icu::util::Calendar(
			"android.icu.util.CopticCalendar",
			"(Landroid/icu/util/ULocale;)V",
			arg0.object()
		) {}
	inline CopticCalendar::CopticCalendar(java::util::Date arg0)
		: android::icu::util::Calendar(
			"android.icu.util.CopticCalendar",
			"(Ljava/util/Date;)V",
			arg0.object()
		) {}
	inline CopticCalendar::CopticCalendar(java::util::Locale arg0)
		: android::icu::util::Calendar(
			"android.icu.util.CopticCalendar",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	inline CopticCalendar::CopticCalendar(android::icu::util::TimeZone arg0, android::icu::util::ULocale arg1)
		: android::icu::util::Calendar(
			"android.icu.util.CopticCalendar",
			"(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline CopticCalendar::CopticCalendar(android::icu::util::TimeZone arg0, java::util::Locale arg1)
		: android::icu::util::Calendar(
			"android.icu.util.CopticCalendar",
			"(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline CopticCalendar::CopticCalendar(jint arg0, jint arg1, jint arg2)
		: android::icu::util::Calendar(
			"android.icu.util.CopticCalendar",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	inline CopticCalendar::CopticCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
		: android::icu::util::Calendar(
			"android.icu.util.CopticCalendar",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		) {}
	
	// Methods
	inline JString CopticCalendar::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::util

// Base class headers
#include "./Calendar.hpp"

