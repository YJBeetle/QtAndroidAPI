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
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.TaiwanCalendar",
			"BEFORE_MINGUO"
		);
	}
	jint TaiwanCalendar::MINGUO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.TaiwanCalendar",
			"MINGUO"
		);
	}
	
	TaiwanCalendar::TaiwanCalendar(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TaiwanCalendar::TaiwanCalendar()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.TaiwanCalendar",
			"()V"
		);
	}
	TaiwanCalendar::TaiwanCalendar(android::icu::util::TimeZone arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.TaiwanCalendar",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.__jniObject().object()
		);
	}
	TaiwanCalendar::TaiwanCalendar(android::icu::util::ULocale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.TaiwanCalendar",
			"(Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object()
		);
	}
	TaiwanCalendar::TaiwanCalendar(java::util::Date arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.TaiwanCalendar",
			"(Ljava/util/Date;)V",
			arg0.__jniObject().object()
		);
	}
	TaiwanCalendar::TaiwanCalendar(java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.TaiwanCalendar",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	TaiwanCalendar::TaiwanCalendar(android::icu::util::TimeZone arg0, android::icu::util::ULocale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.TaiwanCalendar",
			"(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	TaiwanCalendar::TaiwanCalendar(android::icu::util::TimeZone arg0, java::util::Locale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.TaiwanCalendar",
			"(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	TaiwanCalendar::TaiwanCalendar(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.TaiwanCalendar",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	TaiwanCalendar::TaiwanCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.TaiwanCalendar",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	
	// Methods
	jstring TaiwanCalendar::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::util

