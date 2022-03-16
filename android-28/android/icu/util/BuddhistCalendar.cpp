#include "./TimeZone.hpp"
#include "./ULocale.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Date.hpp"
#include "../../../java/util/Locale.hpp"
#include "./BuddhistCalendar.hpp"

namespace android::icu::util
{
	// Fields
	jint BuddhistCalendar::BE()
	{
		return getStaticField<jint>(
			"android.icu.util.BuddhistCalendar",
			"BE"
		);
	}
	
	// Constructors
	BuddhistCalendar::BuddhistCalendar()
		: android::icu::util::GregorianCalendar(
			"android.icu.util.BuddhistCalendar",
			"()V"
		) {}
	BuddhistCalendar::BuddhistCalendar(android::icu::util::TimeZone arg0)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.BuddhistCalendar",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.object()
		) {}
	BuddhistCalendar::BuddhistCalendar(android::icu::util::ULocale arg0)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.BuddhistCalendar",
			"(Landroid/icu/util/ULocale;)V",
			arg0.object()
		) {}
	BuddhistCalendar::BuddhistCalendar(java::util::Date arg0)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.BuddhistCalendar",
			"(Ljava/util/Date;)V",
			arg0.object()
		) {}
	BuddhistCalendar::BuddhistCalendar(java::util::Locale arg0)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.BuddhistCalendar",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	BuddhistCalendar::BuddhistCalendar(android::icu::util::TimeZone arg0, android::icu::util::ULocale arg1)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.BuddhistCalendar",
			"(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V",
			arg0.object(),
			arg1.object()
		) {}
	BuddhistCalendar::BuddhistCalendar(android::icu::util::TimeZone arg0, java::util::Locale arg1)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.BuddhistCalendar",
			"(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V",
			arg0.object(),
			arg1.object()
		) {}
	BuddhistCalendar::BuddhistCalendar(jint arg0, jint arg1, jint arg2)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.BuddhistCalendar",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	BuddhistCalendar::BuddhistCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
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
	JString BuddhistCalendar::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::util

