#include "./Calendar.hpp"
#include "./TimeZone.hpp"
#include "./ULocale.hpp"
#include "../../../java/util/Date.hpp"
#include "../../../java/util/Locale.hpp"
#include "./GregorianCalendar.hpp"

namespace android::icu::util
{
	// Fields
	jint GregorianCalendar::AD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.GregorianCalendar",
			"AD"
		);
	}
	jint GregorianCalendar::BC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.GregorianCalendar",
			"BC"
		);
	}
	
	GregorianCalendar::GregorianCalendar(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	GregorianCalendar::GregorianCalendar()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.GregorianCalendar",
			"()V"
		);
	}
	GregorianCalendar::GregorianCalendar(android::icu::util::TimeZone &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.GregorianCalendar",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.__jniObject().object()
		);
	}
	GregorianCalendar::GregorianCalendar(android::icu::util::ULocale &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.GregorianCalendar",
			"(Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object()
		);
	}
	GregorianCalendar::GregorianCalendar(java::util::Locale &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.GregorianCalendar",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	GregorianCalendar::GregorianCalendar(android::icu::util::TimeZone &arg0, android::icu::util::ULocale &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.GregorianCalendar",
			"(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	GregorianCalendar::GregorianCalendar(android::icu::util::TimeZone &arg0, java::util::Locale &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.GregorianCalendar",
			"(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	GregorianCalendar::GregorianCalendar(jint &arg0, jint &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.GregorianCalendar",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	GregorianCalendar::GregorianCalendar(jint &arg0, jint &arg1, jint &arg2, jint &arg3, jint &arg4)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.GregorianCalendar",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	GregorianCalendar::GregorianCalendar(jint &arg0, jint &arg1, jint &arg2, jint &arg3, jint &arg4, jint &arg5)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.GregorianCalendar",
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
	jint GregorianCalendar::getActualMaximum(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getActualMaximum",
			"(I)I",
			arg0
		);
	}
	jint GregorianCalendar::getActualMinimum(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getActualMinimum",
			"(I)I",
			arg0
		);
	}
	QAndroidJniObject GregorianCalendar::getGregorianChange()
	{
		return __thiz.callObjectMethod(
			"getGregorianChange",
			"()Ljava/util/Date;"
		);
	}
	jstring GregorianCalendar::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint GregorianCalendar::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean GregorianCalendar::isEquivalentTo(android::icu::util::Calendar arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isEquivalentTo",
			"(Landroid/icu/util/Calendar;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean GregorianCalendar::isLeapYear(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isLeapYear",
			"(I)Z",
			arg0
		);
	}
	void GregorianCalendar::roll(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"roll",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GregorianCalendar::setGregorianChange(java::util::Date arg0)
	{
		__thiz.callMethod<void>(
			"setGregorianChange",
			"(Ljava/util/Date;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::icu::util

