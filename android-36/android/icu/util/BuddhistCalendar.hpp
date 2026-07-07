#pragma once

#include "./TimeZone.def.hpp"
#include "./ULocale.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Date.def.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./BuddhistCalendar.def.hpp"

namespace android::icu::util
{
	// Fields
	inline jint BuddhistCalendar::BE()
	{
		return getStaticField<jint>(
			"android.icu.util.BuddhistCalendar",
			"BE"
		);
	}
	
	// Constructors
	inline BuddhistCalendar::BuddhistCalendar()
		: android::icu::util::GregorianCalendar(
			"android.icu.util.BuddhistCalendar",
			"()V"
		) {}
	inline BuddhistCalendar::BuddhistCalendar(android::icu::util::TimeZone arg0)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.BuddhistCalendar",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.object()
		) {}
	inline BuddhistCalendar::BuddhistCalendar(android::icu::util::ULocale arg0)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.BuddhistCalendar",
			"(Landroid/icu/util/ULocale;)V",
			arg0.object()
		) {}
	inline BuddhistCalendar::BuddhistCalendar(java::util::Date arg0)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.BuddhistCalendar",
			"(Ljava/util/Date;)V",
			arg0.object()
		) {}
	inline BuddhistCalendar::BuddhistCalendar(java::util::Locale arg0)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.BuddhistCalendar",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	inline BuddhistCalendar::BuddhistCalendar(android::icu::util::TimeZone arg0, android::icu::util::ULocale arg1)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.BuddhistCalendar",
			"(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline BuddhistCalendar::BuddhistCalendar(android::icu::util::TimeZone arg0, java::util::Locale arg1)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.BuddhistCalendar",
			"(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline BuddhistCalendar::BuddhistCalendar(jint arg0, jint arg1, jint arg2)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.BuddhistCalendar",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	inline BuddhistCalendar::BuddhistCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.BuddhistCalendar",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		) {}
	
	// Methods
	inline JString BuddhistCalendar::getType() const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::util;
#endif
