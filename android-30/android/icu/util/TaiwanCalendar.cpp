#include "./TimeZone.hpp"
#include "./ULocale.hpp"
#include "../../../java/util/Date.hpp"
#include "../../../java/util/Locale.hpp"
#include "./TaiwanCalendar.hpp"

namespace android::icu::util
{
	// Fields
	jint TaiwanCalendar::BEFORE_MINGUO()
	{
		return getStaticField<jint>(
			"android.icu.util.TaiwanCalendar",
			"BEFORE_MINGUO"
		);
	}
	jint TaiwanCalendar::MINGUO()
	{
		return getStaticField<jint>(
			"android.icu.util.TaiwanCalendar",
			"MINGUO"
		);
	}
	
	// QJniObject forward
	TaiwanCalendar::TaiwanCalendar(QJniObject obj) : android::icu::util::GregorianCalendar(obj) {}
	
	// Constructors
	TaiwanCalendar::TaiwanCalendar()
		: android::icu::util::GregorianCalendar(
			"android.icu.util.TaiwanCalendar",
			"()V"
		) {}
	TaiwanCalendar::TaiwanCalendar(android::icu::util::TimeZone arg0)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.TaiwanCalendar",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.object()
		) {}
	TaiwanCalendar::TaiwanCalendar(android::icu::util::ULocale arg0)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.TaiwanCalendar",
			"(Landroid/icu/util/ULocale;)V",
			arg0.object()
		) {}
	TaiwanCalendar::TaiwanCalendar(java::util::Date arg0)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.TaiwanCalendar",
			"(Ljava/util/Date;)V",
			arg0.object()
		) {}
	TaiwanCalendar::TaiwanCalendar(java::util::Locale arg0)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.TaiwanCalendar",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	TaiwanCalendar::TaiwanCalendar(android::icu::util::TimeZone arg0, android::icu::util::ULocale arg1)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.TaiwanCalendar",
			"(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V",
			arg0.object(),
			arg1.object()
		) {}
	TaiwanCalendar::TaiwanCalendar(android::icu::util::TimeZone arg0, java::util::Locale arg1)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.TaiwanCalendar",
			"(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V",
			arg0.object(),
			arg1.object()
		) {}
	TaiwanCalendar::TaiwanCalendar(jint arg0, jint arg1, jint arg2)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.TaiwanCalendar",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	TaiwanCalendar::TaiwanCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
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
	jstring TaiwanCalendar::getType()
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::util

