#include "./TimeZone.hpp"
#include "./ULocale.hpp"
#include "../../../java/util/Date.hpp"
#include "../../../java/util/Locale.hpp"
#include "./BuddhistCalendar.hpp"

namespace android::icu::util
{
	// Fields
	jint BuddhistCalendar::BE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.BuddhistCalendar",
			"BE"
		);
	}
	
	BuddhistCalendar::BuddhistCalendar(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BuddhistCalendar::BuddhistCalendar()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.BuddhistCalendar",
			"()V"
		);
	}
	BuddhistCalendar::BuddhistCalendar(android::icu::util::TimeZone arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.BuddhistCalendar",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.__jniObject().object()
		);
	}
	BuddhistCalendar::BuddhistCalendar(android::icu::util::ULocale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.BuddhistCalendar",
			"(Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object()
		);
	}
	BuddhistCalendar::BuddhistCalendar(java::util::Date arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.BuddhistCalendar",
			"(Ljava/util/Date;)V",
			arg0.__jniObject().object()
		);
	}
	BuddhistCalendar::BuddhistCalendar(java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.BuddhistCalendar",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	BuddhistCalendar::BuddhistCalendar(android::icu::util::TimeZone arg0, android::icu::util::ULocale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.BuddhistCalendar",
			"(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	BuddhistCalendar::BuddhistCalendar(android::icu::util::TimeZone arg0, java::util::Locale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.BuddhistCalendar",
			"(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	BuddhistCalendar::BuddhistCalendar(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.BuddhistCalendar",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	BuddhistCalendar::BuddhistCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.BuddhistCalendar",
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
	jstring BuddhistCalendar::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::util

