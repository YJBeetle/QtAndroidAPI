#include "./TimeZone.hpp"
#include "./ULocale.hpp"
#include "../../../java/util/Date.hpp"
#include "../../../java/util/Locale.hpp"
#include "./IndianCalendar.hpp"

namespace android::icu::util
{
	// Fields
	jint IndianCalendar::AGRAHAYANA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"AGRAHAYANA"
		);
	}
	jint IndianCalendar::ASADHA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"ASADHA"
		);
	}
	jint IndianCalendar::ASVINA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"ASVINA"
		);
	}
	jint IndianCalendar::BHADRA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"BHADRA"
		);
	}
	jint IndianCalendar::CHAITRA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"CHAITRA"
		);
	}
	jint IndianCalendar::IE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"IE"
		);
	}
	jint IndianCalendar::JYAISTHA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"JYAISTHA"
		);
	}
	jint IndianCalendar::KARTIKA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"KARTIKA"
		);
	}
	jint IndianCalendar::MAGHA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"MAGHA"
		);
	}
	jint IndianCalendar::PAUSA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"PAUSA"
		);
	}
	jint IndianCalendar::PHALGUNA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"PHALGUNA"
		);
	}
	jint IndianCalendar::SRAVANA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"SRAVANA"
		);
	}
	jint IndianCalendar::VAISAKHA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"VAISAKHA"
		);
	}
	
	IndianCalendar::IndianCalendar(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IndianCalendar::IndianCalendar()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IndianCalendar",
			"()V"
		);
	}
	IndianCalendar::IndianCalendar(android::icu::util::TimeZone &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IndianCalendar",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.__jniObject().object()
		);
	}
	IndianCalendar::IndianCalendar(android::icu::util::ULocale &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IndianCalendar",
			"(Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object()
		);
	}
	IndianCalendar::IndianCalendar(java::util::Date &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IndianCalendar",
			"(Ljava/util/Date;)V",
			arg0.__jniObject().object()
		);
	}
	IndianCalendar::IndianCalendar(java::util::Locale &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IndianCalendar",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	IndianCalendar::IndianCalendar(android::icu::util::TimeZone &arg0, android::icu::util::ULocale &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IndianCalendar",
			"(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	IndianCalendar::IndianCalendar(android::icu::util::TimeZone &arg0, java::util::Locale &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IndianCalendar",
			"(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	IndianCalendar::IndianCalendar(jint &arg0, jint &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IndianCalendar",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	IndianCalendar::IndianCalendar(jint &arg0, jint &arg1, jint &arg2, jint &arg3, jint &arg4, jint &arg5)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IndianCalendar",
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
	jstring IndianCalendar::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::util

