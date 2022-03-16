#include "../../../JArray.hpp"
#include "../text/DateFormat.hpp"
#include "./TimeZone.hpp"
#include "./ULocale.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Date.hpp"
#include "../../../java/util/Locale.hpp"
#include "./ChineseCalendar.hpp"

namespace android::icu::util
{
	// Fields
	
	// Constructors
	ChineseCalendar::ChineseCalendar()
		: android::icu::util::Calendar(
			"android.icu.util.ChineseCalendar",
			"()V"
		) {}
	ChineseCalendar::ChineseCalendar(android::icu::util::TimeZone arg0)
		: android::icu::util::Calendar(
			"android.icu.util.ChineseCalendar",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.object()
		) {}
	ChineseCalendar::ChineseCalendar(android::icu::util::ULocale arg0)
		: android::icu::util::Calendar(
			"android.icu.util.ChineseCalendar",
			"(Landroid/icu/util/ULocale;)V",
			arg0.object()
		) {}
	ChineseCalendar::ChineseCalendar(java::util::Date arg0)
		: android::icu::util::Calendar(
			"android.icu.util.ChineseCalendar",
			"(Ljava/util/Date;)V",
			arg0.object()
		) {}
	ChineseCalendar::ChineseCalendar(java::util::Locale arg0)
		: android::icu::util::Calendar(
			"android.icu.util.ChineseCalendar",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	ChineseCalendar::ChineseCalendar(android::icu::util::TimeZone arg0, android::icu::util::ULocale arg1)
		: android::icu::util::Calendar(
			"android.icu.util.ChineseCalendar",
			"(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V",
			arg0.object(),
			arg1.object()
		) {}
	ChineseCalendar::ChineseCalendar(android::icu::util::TimeZone arg0, java::util::Locale arg1)
		: android::icu::util::Calendar(
			"android.icu.util.ChineseCalendar",
			"(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V",
			arg0.object(),
			arg1.object()
		) {}
	ChineseCalendar::ChineseCalendar(jint arg0, jint arg1, jint arg2, jint arg3)
		: android::icu::util::Calendar(
			"android.icu.util.ChineseCalendar",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	ChineseCalendar::ChineseCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
		: android::icu::util::Calendar(
			"android.icu.util.ChineseCalendar",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	ChineseCalendar::ChineseCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6)
		: android::icu::util::Calendar(
			"android.icu.util.ChineseCalendar",
			"(IIIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		) {}
	ChineseCalendar::ChineseCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7)
		: android::icu::util::Calendar(
			"android.icu.util.ChineseCalendar",
			"(IIIIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7
		) {}
	
	// Methods
	void ChineseCalendar::add(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"add",
			"(II)V",
			arg0,
			arg1
		);
	}
	JString ChineseCalendar::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
	void ChineseCalendar::roll(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"roll",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace android::icu::util

