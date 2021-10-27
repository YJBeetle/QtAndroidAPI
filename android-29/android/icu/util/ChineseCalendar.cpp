#include "../text/DateFormat.hpp"
#include "./TimeZone.hpp"
#include "./ULocale.hpp"
#include "../../../java/util/Date.hpp"
#include "../../../java/util/Locale.hpp"
#include "./ChineseCalendar.hpp"

namespace android::icu::util
{
	// Fields
	
	ChineseCalendar::ChineseCalendar(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ChineseCalendar::ChineseCalendar()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ChineseCalendar",
			"()V"
		);
	}
	ChineseCalendar::ChineseCalendar(android::icu::util::TimeZone &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ChineseCalendar",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.__jniObject().object()
		);
	}
	ChineseCalendar::ChineseCalendar(android::icu::util::ULocale &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ChineseCalendar",
			"(Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object()
		);
	}
	ChineseCalendar::ChineseCalendar(java::util::Date &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ChineseCalendar",
			"(Ljava/util/Date;)V",
			arg0.__jniObject().object()
		);
	}
	ChineseCalendar::ChineseCalendar(java::util::Locale &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ChineseCalendar",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	ChineseCalendar::ChineseCalendar(android::icu::util::TimeZone &arg0, android::icu::util::ULocale &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ChineseCalendar",
			"(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	ChineseCalendar::ChineseCalendar(android::icu::util::TimeZone &arg0, java::util::Locale &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ChineseCalendar",
			"(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	ChineseCalendar::ChineseCalendar(jint &arg0, jint &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ChineseCalendar",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	ChineseCalendar::ChineseCalendar(jint &arg0, jint &arg1, jint &arg2, jint &arg3, jint &arg4)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ChineseCalendar",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	ChineseCalendar::ChineseCalendar(jint &arg0, jint &arg1, jint &arg2, jint &arg3, jint &arg4, jint &arg5, jint &arg6)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ChineseCalendar",
			"(IIIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	ChineseCalendar::ChineseCalendar(jint &arg0, jint &arg1, jint &arg2, jint &arg3, jint &arg4, jint &arg5, jint &arg6, jint &arg7)
	{
		__thiz = QAndroidJniObject(
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
		);
	}
	
	// Methods
	void ChineseCalendar::add(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"add",
			"(II)V",
			arg0,
			arg1
		);
	}
	jstring ChineseCalendar::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ChineseCalendar::roll(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"roll",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace android::icu::util

