#include "./IslamicCalendar_CalculationType.hpp"

namespace android::icu::util
{
	// Fields
	android::icu::util::IslamicCalendar_CalculationType IslamicCalendar_CalculationType::ISLAMIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.IslamicCalendar$CalculationType",
			"ISLAMIC",
			"Landroid/icu/util/IslamicCalendar$CalculationType;"
		);
	}
	android::icu::util::IslamicCalendar_CalculationType IslamicCalendar_CalculationType::ISLAMIC_CIVIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.IslamicCalendar$CalculationType",
			"ISLAMIC_CIVIL",
			"Landroid/icu/util/IslamicCalendar$CalculationType;"
		);
	}
	android::icu::util::IslamicCalendar_CalculationType IslamicCalendar_CalculationType::ISLAMIC_TBLA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.IslamicCalendar$CalculationType",
			"ISLAMIC_TBLA",
			"Landroid/icu/util/IslamicCalendar$CalculationType;"
		);
	}
	android::icu::util::IslamicCalendar_CalculationType IslamicCalendar_CalculationType::ISLAMIC_UMALQURA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.IslamicCalendar$CalculationType",
			"ISLAMIC_UMALQURA",
			"Landroid/icu/util/IslamicCalendar$CalculationType;"
		);
	}
	
	// QAndroidJniObject forward
	IslamicCalendar_CalculationType::IslamicCalendar_CalculationType(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::util::IslamicCalendar_CalculationType IslamicCalendar_CalculationType::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.IslamicCalendar$CalculationType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/util/IslamicCalendar$CalculationType;",
			arg0
		);
	}
	jarray IslamicCalendar_CalculationType::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.IslamicCalendar$CalculationType",
			"values",
			"()[Landroid/icu/util/IslamicCalendar$CalculationType;"
		).object<jarray>();
	}
} // namespace android::icu::util

