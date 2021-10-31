#include "./TimeZone.hpp"
#include "./ULocale.hpp"
#include "../../../java/util/Date.hpp"
#include "../../../java/util/Locale.hpp"
#include "./CopticCalendar.hpp"

namespace android::icu::util
{
	// Fields
	jint CopticCalendar::AMSHIR()
	{
		return getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"AMSHIR"
		);
	}
	jint CopticCalendar::BABA()
	{
		return getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"BABA"
		);
	}
	jint CopticCalendar::BARAMHAT()
	{
		return getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"BARAMHAT"
		);
	}
	jint CopticCalendar::BARAMOUDA()
	{
		return getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"BARAMOUDA"
		);
	}
	jint CopticCalendar::BASHANS()
	{
		return getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"BASHANS"
		);
	}
	jint CopticCalendar::EPEP()
	{
		return getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"EPEP"
		);
	}
	jint CopticCalendar::HATOR()
	{
		return getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"HATOR"
		);
	}
	jint CopticCalendar::KIAHK()
	{
		return getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"KIAHK"
		);
	}
	jint CopticCalendar::MESRA()
	{
		return getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"MESRA"
		);
	}
	jint CopticCalendar::NASIE()
	{
		return getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"NASIE"
		);
	}
	jint CopticCalendar::PAONA()
	{
		return getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"PAONA"
		);
	}
	jint CopticCalendar::TOBA()
	{
		return getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"TOBA"
		);
	}
	jint CopticCalendar::TOUT()
	{
		return getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"TOUT"
		);
	}
	
	// QAndroidJniObject forward
	CopticCalendar::CopticCalendar(QAndroidJniObject obj) : android::icu::util::Calendar(obj) {}
	
	// Constructors
	CopticCalendar::CopticCalendar()
		: android::icu::util::Calendar(
			"android.icu.util.CopticCalendar",
			"()V"
		) {}
	CopticCalendar::CopticCalendar(android::icu::util::TimeZone arg0)
		: android::icu::util::Calendar(
			"android.icu.util.CopticCalendar",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.object()
		) {}
	CopticCalendar::CopticCalendar(android::icu::util::ULocale arg0)
		: android::icu::util::Calendar(
			"android.icu.util.CopticCalendar",
			"(Landroid/icu/util/ULocale;)V",
			arg0.object()
		) {}
	CopticCalendar::CopticCalendar(java::util::Date arg0)
		: android::icu::util::Calendar(
			"android.icu.util.CopticCalendar",
			"(Ljava/util/Date;)V",
			arg0.object()
		) {}
	CopticCalendar::CopticCalendar(java::util::Locale arg0)
		: android::icu::util::Calendar(
			"android.icu.util.CopticCalendar",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	CopticCalendar::CopticCalendar(android::icu::util::TimeZone arg0, android::icu::util::ULocale arg1)
		: android::icu::util::Calendar(
			"android.icu.util.CopticCalendar",
			"(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V",
			arg0.object(),
			arg1.object()
		) {}
	CopticCalendar::CopticCalendar(android::icu::util::TimeZone arg0, java::util::Locale arg1)
		: android::icu::util::Calendar(
			"android.icu.util.CopticCalendar",
			"(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V",
			arg0.object(),
			arg1.object()
		) {}
	CopticCalendar::CopticCalendar(jint arg0, jint arg1, jint arg2)
		: android::icu::util::Calendar(
			"android.icu.util.CopticCalendar",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	CopticCalendar::CopticCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
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
	jstring CopticCalendar::getType()
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::util

