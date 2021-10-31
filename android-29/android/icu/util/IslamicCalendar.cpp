#include "./IslamicCalendar_CalculationType.hpp"
#include "./TimeZone.hpp"
#include "./ULocale.hpp"
#include "../../../java/util/Date.hpp"
#include "../../../java/util/Locale.hpp"
#include "./IslamicCalendar.hpp"

namespace android::icu::util
{
	// Fields
	jint IslamicCalendar::DHU_AL_HIJJAH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IslamicCalendar",
			"DHU_AL_HIJJAH"
		);
	}
	jint IslamicCalendar::DHU_AL_QIDAH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IslamicCalendar",
			"DHU_AL_QIDAH"
		);
	}
	jint IslamicCalendar::JUMADA_1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IslamicCalendar",
			"JUMADA_1"
		);
	}
	jint IslamicCalendar::JUMADA_2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IslamicCalendar",
			"JUMADA_2"
		);
	}
	jint IslamicCalendar::MUHARRAM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IslamicCalendar",
			"MUHARRAM"
		);
	}
	jint IslamicCalendar::RABI_1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IslamicCalendar",
			"RABI_1"
		);
	}
	jint IslamicCalendar::RABI_2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IslamicCalendar",
			"RABI_2"
		);
	}
	jint IslamicCalendar::RAJAB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IslamicCalendar",
			"RAJAB"
		);
	}
	jint IslamicCalendar::RAMADAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IslamicCalendar",
			"RAMADAN"
		);
	}
	jint IslamicCalendar::SAFAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IslamicCalendar",
			"SAFAR"
		);
	}
	jint IslamicCalendar::SHABAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IslamicCalendar",
			"SHABAN"
		);
	}
	jint IslamicCalendar::SHAWWAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IslamicCalendar",
			"SHAWWAL"
		);
	}
	
	IslamicCalendar::IslamicCalendar(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IslamicCalendar::IslamicCalendar()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IslamicCalendar",
			"()V"
		);
	}
	IslamicCalendar::IslamicCalendar(android::icu::util::TimeZone arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IslamicCalendar",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.__jniObject().object()
		);
	}
	IslamicCalendar::IslamicCalendar(android::icu::util::ULocale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IslamicCalendar",
			"(Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object()
		);
	}
	IslamicCalendar::IslamicCalendar(java::util::Date arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IslamicCalendar",
			"(Ljava/util/Date;)V",
			arg0.__jniObject().object()
		);
	}
	IslamicCalendar::IslamicCalendar(java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IslamicCalendar",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	IslamicCalendar::IslamicCalendar(android::icu::util::TimeZone arg0, android::icu::util::ULocale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IslamicCalendar",
			"(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	IslamicCalendar::IslamicCalendar(android::icu::util::TimeZone arg0, java::util::Locale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IslamicCalendar",
			"(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	IslamicCalendar::IslamicCalendar(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IslamicCalendar",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	IslamicCalendar::IslamicCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IslamicCalendar",
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
	QAndroidJniObject IslamicCalendar::getCalculationType()
	{
		return __thiz.callObjectMethod(
			"getCalculationType",
			"()Landroid/icu/util/IslamicCalendar$CalculationType;"
		);
	}
	jstring IslamicCalendar::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void IslamicCalendar::setCalculationType(android::icu::util::IslamicCalendar_CalculationType arg0)
	{
		__thiz.callMethod<void>(
			"setCalculationType",
			"(Landroid/icu/util/IslamicCalendar$CalculationType;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::icu::util

