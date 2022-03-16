#include "./TimeZone.hpp"
#include "./ULocale.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Date.hpp"
#include "../../../java/util/Locale.hpp"
#include "./IndianCalendar.hpp"

namespace android::icu::util
{
	// Fields
	jint IndianCalendar::AGRAHAYANA()
	{
		return getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"AGRAHAYANA"
		);
	}
	jint IndianCalendar::ASADHA()
	{
		return getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"ASADHA"
		);
	}
	jint IndianCalendar::ASVINA()
	{
		return getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"ASVINA"
		);
	}
	jint IndianCalendar::BHADRA()
	{
		return getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"BHADRA"
		);
	}
	jint IndianCalendar::CHAITRA()
	{
		return getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"CHAITRA"
		);
	}
	jint IndianCalendar::IE()
	{
		return getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"IE"
		);
	}
	jint IndianCalendar::JYAISTHA()
	{
		return getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"JYAISTHA"
		);
	}
	jint IndianCalendar::KARTIKA()
	{
		return getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"KARTIKA"
		);
	}
	jint IndianCalendar::MAGHA()
	{
		return getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"MAGHA"
		);
	}
	jint IndianCalendar::PAUSA()
	{
		return getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"PAUSA"
		);
	}
	jint IndianCalendar::PHALGUNA()
	{
		return getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"PHALGUNA"
		);
	}
	jint IndianCalendar::SRAVANA()
	{
		return getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"SRAVANA"
		);
	}
	jint IndianCalendar::VAISAKHA()
	{
		return getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"VAISAKHA"
		);
	}
	
	// Constructors
	IndianCalendar::IndianCalendar()
		: android::icu::util::Calendar(
			"android.icu.util.IndianCalendar",
			"()V"
		) {}
	IndianCalendar::IndianCalendar(android::icu::util::TimeZone arg0)
		: android::icu::util::Calendar(
			"android.icu.util.IndianCalendar",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.object()
		) {}
	IndianCalendar::IndianCalendar(android::icu::util::ULocale arg0)
		: android::icu::util::Calendar(
			"android.icu.util.IndianCalendar",
			"(Landroid/icu/util/ULocale;)V",
			arg0.object()
		) {}
	IndianCalendar::IndianCalendar(java::util::Date arg0)
		: android::icu::util::Calendar(
			"android.icu.util.IndianCalendar",
			"(Ljava/util/Date;)V",
			arg0.object()
		) {}
	IndianCalendar::IndianCalendar(java::util::Locale arg0)
		: android::icu::util::Calendar(
			"android.icu.util.IndianCalendar",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	IndianCalendar::IndianCalendar(android::icu::util::TimeZone arg0, android::icu::util::ULocale arg1)
		: android::icu::util::Calendar(
			"android.icu.util.IndianCalendar",
			"(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V",
			arg0.object(),
			arg1.object()
		) {}
	IndianCalendar::IndianCalendar(android::icu::util::TimeZone arg0, java::util::Locale arg1)
		: android::icu::util::Calendar(
			"android.icu.util.IndianCalendar",
			"(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V",
			arg0.object(),
			arg1.object()
		) {}
	IndianCalendar::IndianCalendar(jint arg0, jint arg1, jint arg2)
		: android::icu::util::Calendar(
			"android.icu.util.IndianCalendar",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	IndianCalendar::IndianCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
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
	JString IndianCalendar::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::util

