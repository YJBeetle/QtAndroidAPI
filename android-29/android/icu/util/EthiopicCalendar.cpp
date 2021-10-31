#include "./TimeZone.hpp"
#include "./ULocale.hpp"
#include "../../../java/util/Date.hpp"
#include "../../../java/util/Locale.hpp"
#include "./EthiopicCalendar.hpp"

namespace android::icu::util
{
	// Fields
	jint EthiopicCalendar::GENBOT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"GENBOT"
		);
	}
	jint EthiopicCalendar::HAMLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"HAMLE"
		);
	}
	jint EthiopicCalendar::HEDAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"HEDAR"
		);
	}
	jint EthiopicCalendar::MEGABIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"MEGABIT"
		);
	}
	jint EthiopicCalendar::MESKEREM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"MESKEREM"
		);
	}
	jint EthiopicCalendar::MIAZIA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"MIAZIA"
		);
	}
	jint EthiopicCalendar::NEHASSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"NEHASSE"
		);
	}
	jint EthiopicCalendar::PAGUMEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"PAGUMEN"
		);
	}
	jint EthiopicCalendar::SENE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"SENE"
		);
	}
	jint EthiopicCalendar::TAHSAS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"TAHSAS"
		);
	}
	jint EthiopicCalendar::TEKEMT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"TEKEMT"
		);
	}
	jint EthiopicCalendar::TER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"TER"
		);
	}
	jint EthiopicCalendar::YEKATIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"YEKATIT"
		);
	}
	
	EthiopicCalendar::EthiopicCalendar(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	EthiopicCalendar::EthiopicCalendar()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.EthiopicCalendar",
			"()V"
		);
	}
	EthiopicCalendar::EthiopicCalendar(android::icu::util::TimeZone arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.EthiopicCalendar",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.__jniObject().object()
		);
	}
	EthiopicCalendar::EthiopicCalendar(android::icu::util::ULocale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.EthiopicCalendar",
			"(Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object()
		);
	}
	EthiopicCalendar::EthiopicCalendar(java::util::Date arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.EthiopicCalendar",
			"(Ljava/util/Date;)V",
			arg0.__jniObject().object()
		);
	}
	EthiopicCalendar::EthiopicCalendar(java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.EthiopicCalendar",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	EthiopicCalendar::EthiopicCalendar(android::icu::util::TimeZone arg0, android::icu::util::ULocale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.EthiopicCalendar",
			"(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	EthiopicCalendar::EthiopicCalendar(android::icu::util::TimeZone arg0, java::util::Locale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.EthiopicCalendar",
			"(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	EthiopicCalendar::EthiopicCalendar(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.EthiopicCalendar",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	EthiopicCalendar::EthiopicCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.EthiopicCalendar",
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
	jstring EthiopicCalendar::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean EthiopicCalendar::isAmeteAlemEra()
	{
		return __thiz.callMethod<jboolean>(
			"isAmeteAlemEra",
			"()Z"
		);
	}
	void EthiopicCalendar::setAmeteAlemEra(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAmeteAlemEra",
			"(Z)V",
			arg0
		);
	}
} // namespace android::icu::util

