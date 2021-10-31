#include "./TimeZone.hpp"
#include "./ULocale.hpp"
#include "../../../java/util/Date.hpp"
#include "../../../java/util/Locale.hpp"
#include "./JapaneseCalendar.hpp"

namespace android::icu::util
{
	// Fields
	jint JapaneseCalendar::CURRENT_ERA()
	{
		return getStaticField<jint>(
			"android.icu.util.JapaneseCalendar",
			"CURRENT_ERA"
		);
	}
	jint JapaneseCalendar::HEISEI()
	{
		return getStaticField<jint>(
			"android.icu.util.JapaneseCalendar",
			"HEISEI"
		);
	}
	jint JapaneseCalendar::MEIJI()
	{
		return getStaticField<jint>(
			"android.icu.util.JapaneseCalendar",
			"MEIJI"
		);
	}
	jint JapaneseCalendar::SHOWA()
	{
		return getStaticField<jint>(
			"android.icu.util.JapaneseCalendar",
			"SHOWA"
		);
	}
	jint JapaneseCalendar::TAISHO()
	{
		return getStaticField<jint>(
			"android.icu.util.JapaneseCalendar",
			"TAISHO"
		);
	}
	
	// QJniObject forward
	JapaneseCalendar::JapaneseCalendar(QJniObject obj) : android::icu::util::GregorianCalendar(obj) {}
	
	// Constructors
	JapaneseCalendar::JapaneseCalendar()
		: android::icu::util::GregorianCalendar(
			"android.icu.util.JapaneseCalendar",
			"()V"
		) {}
	JapaneseCalendar::JapaneseCalendar(android::icu::util::TimeZone arg0)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.JapaneseCalendar",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.object()
		) {}
	JapaneseCalendar::JapaneseCalendar(android::icu::util::ULocale arg0)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.JapaneseCalendar",
			"(Landroid/icu/util/ULocale;)V",
			arg0.object()
		) {}
	JapaneseCalendar::JapaneseCalendar(java::util::Date arg0)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.JapaneseCalendar",
			"(Ljava/util/Date;)V",
			arg0.object()
		) {}
	JapaneseCalendar::JapaneseCalendar(java::util::Locale arg0)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.JapaneseCalendar",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	JapaneseCalendar::JapaneseCalendar(android::icu::util::TimeZone arg0, android::icu::util::ULocale arg1)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.JapaneseCalendar",
			"(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V",
			arg0.object(),
			arg1.object()
		) {}
	JapaneseCalendar::JapaneseCalendar(android::icu::util::TimeZone arg0, java::util::Locale arg1)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.JapaneseCalendar",
			"(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V",
			arg0.object(),
			arg1.object()
		) {}
	JapaneseCalendar::JapaneseCalendar(jint arg0, jint arg1, jint arg2)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.JapaneseCalendar",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	JapaneseCalendar::JapaneseCalendar(jint arg0, jint arg1, jint arg2, jint arg3)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.JapaneseCalendar",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	JapaneseCalendar::JapaneseCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
		: android::icu::util::GregorianCalendar(
			"android.icu.util.JapaneseCalendar",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		) {}
	
	// Methods
	jint JapaneseCalendar::getActualMaximum(jint arg0)
	{
		return callMethod<jint>(
			"getActualMaximum",
			"(I)I",
			arg0
		);
	}
	jstring JapaneseCalendar::getType()
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::util

