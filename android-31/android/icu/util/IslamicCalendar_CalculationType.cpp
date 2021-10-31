#include "./IslamicCalendar_CalculationType.hpp"

namespace android::icu::util
{
	// Fields
	android::icu::util::IslamicCalendar_CalculationType IslamicCalendar_CalculationType::ISLAMIC()
	{
		return getStaticObjectField(
			"android.icu.util.IslamicCalendar$CalculationType",
			"ISLAMIC",
			"Landroid/icu/util/IslamicCalendar$CalculationType;"
		);
	}
	android::icu::util::IslamicCalendar_CalculationType IslamicCalendar_CalculationType::ISLAMIC_CIVIL()
	{
		return getStaticObjectField(
			"android.icu.util.IslamicCalendar$CalculationType",
			"ISLAMIC_CIVIL",
			"Landroid/icu/util/IslamicCalendar$CalculationType;"
		);
	}
	android::icu::util::IslamicCalendar_CalculationType IslamicCalendar_CalculationType::ISLAMIC_TBLA()
	{
		return getStaticObjectField(
			"android.icu.util.IslamicCalendar$CalculationType",
			"ISLAMIC_TBLA",
			"Landroid/icu/util/IslamicCalendar$CalculationType;"
		);
	}
	android::icu::util::IslamicCalendar_CalculationType IslamicCalendar_CalculationType::ISLAMIC_UMALQURA()
	{
		return getStaticObjectField(
			"android.icu.util.IslamicCalendar$CalculationType",
			"ISLAMIC_UMALQURA",
			"Landroid/icu/util/IslamicCalendar$CalculationType;"
		);
	}
	
	// QJniObject forward
	IslamicCalendar_CalculationType::IslamicCalendar_CalculationType(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::util::IslamicCalendar_CalculationType IslamicCalendar_CalculationType::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.IslamicCalendar$CalculationType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/util/IslamicCalendar$CalculationType;",
			arg0
		);
	}
	jarray IslamicCalendar_CalculationType::values()
	{
		return callStaticObjectMethod(
			"android.icu.util.IslamicCalendar$CalculationType",
			"values",
			"()[Landroid/icu/util/IslamicCalendar$CalculationType;"
		).object<jarray>();
	}
} // namespace android::icu::util

