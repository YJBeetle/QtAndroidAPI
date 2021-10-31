#include "./TimeZone.hpp"
#include "./ULocale.hpp"
#include "../../../java/util/Date.hpp"
#include "../../../java/util/Locale.hpp"
#include "./HebrewCalendar.hpp"

namespace android::icu::util
{
	// Fields
	jint HebrewCalendar::ADAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"ADAR"
		);
	}
	jint HebrewCalendar::ADAR_1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"ADAR_1"
		);
	}
	jint HebrewCalendar::AV()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"AV"
		);
	}
	jint HebrewCalendar::ELUL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"ELUL"
		);
	}
	jint HebrewCalendar::HESHVAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"HESHVAN"
		);
	}
	jint HebrewCalendar::IYAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"IYAR"
		);
	}
	jint HebrewCalendar::KISLEV()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"KISLEV"
		);
	}
	jint HebrewCalendar::NISAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"NISAN"
		);
	}
	jint HebrewCalendar::SHEVAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"SHEVAT"
		);
	}
	jint HebrewCalendar::SIVAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"SIVAN"
		);
	}
	jint HebrewCalendar::TAMUZ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"TAMUZ"
		);
	}
	jint HebrewCalendar::TEVET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"TEVET"
		);
	}
	jint HebrewCalendar::TISHRI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"TISHRI"
		);
	}
	
	// QAndroidJniObject forward
	HebrewCalendar::HebrewCalendar(QAndroidJniObject obj) : android::icu::util::Calendar(obj) {}
	
	// Constructors
	HebrewCalendar::HebrewCalendar()
		: android::icu::util::Calendar(
			"android.icu.util.HebrewCalendar",
			"()V"
		) {}
	HebrewCalendar::HebrewCalendar(android::icu::util::TimeZone arg0)
		: android::icu::util::Calendar(
			"android.icu.util.HebrewCalendar",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.object()
		) {}
	HebrewCalendar::HebrewCalendar(android::icu::util::ULocale arg0)
		: android::icu::util::Calendar(
			"android.icu.util.HebrewCalendar",
			"(Landroid/icu/util/ULocale;)V",
			arg0.object()
		) {}
	HebrewCalendar::HebrewCalendar(java::util::Date arg0)
		: android::icu::util::Calendar(
			"android.icu.util.HebrewCalendar",
			"(Ljava/util/Date;)V",
			arg0.object()
		) {}
	HebrewCalendar::HebrewCalendar(java::util::Locale arg0)
		: android::icu::util::Calendar(
			"android.icu.util.HebrewCalendar",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	HebrewCalendar::HebrewCalendar(android::icu::util::TimeZone arg0, android::icu::util::ULocale arg1)
		: android::icu::util::Calendar(
			"android.icu.util.HebrewCalendar",
			"(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V",
			arg0.object(),
			arg1.object()
		) {}
	HebrewCalendar::HebrewCalendar(android::icu::util::TimeZone arg0, java::util::Locale arg1)
		: android::icu::util::Calendar(
			"android.icu.util.HebrewCalendar",
			"(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V",
			arg0.object(),
			arg1.object()
		) {}
	HebrewCalendar::HebrewCalendar(jint arg0, jint arg1, jint arg2)
		: android::icu::util::Calendar(
			"android.icu.util.HebrewCalendar",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	HebrewCalendar::HebrewCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
		: android::icu::util::Calendar(
			"android.icu.util.HebrewCalendar",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		) {}
	
	// Methods
	void HebrewCalendar::add(jint arg0, jint arg1)
	{
		callMethod<void>(
			"add",
			"(II)V",
			arg0,
			arg1
		);
	}
	jstring HebrewCalendar::getType()
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void HebrewCalendar::roll(jint arg0, jint arg1)
	{
		callMethod<void>(
			"roll",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace android::icu::util
