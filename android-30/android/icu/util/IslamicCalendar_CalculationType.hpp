#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./IslamicCalendar_CalculationType.def.hpp"

namespace android::icu::util
{
	// Fields
	inline android::icu::util::IslamicCalendar_CalculationType IslamicCalendar_CalculationType::ISLAMIC()
	{
		return getStaticObjectField(
			"android.icu.util.IslamicCalendar$CalculationType",
			"ISLAMIC",
			"Landroid/icu/util/IslamicCalendar$CalculationType;"
		);
	}
	inline android::icu::util::IslamicCalendar_CalculationType IslamicCalendar_CalculationType::ISLAMIC_CIVIL()
	{
		return getStaticObjectField(
			"android.icu.util.IslamicCalendar$CalculationType",
			"ISLAMIC_CIVIL",
			"Landroid/icu/util/IslamicCalendar$CalculationType;"
		);
	}
	inline android::icu::util::IslamicCalendar_CalculationType IslamicCalendar_CalculationType::ISLAMIC_TBLA()
	{
		return getStaticObjectField(
			"android.icu.util.IslamicCalendar$CalculationType",
			"ISLAMIC_TBLA",
			"Landroid/icu/util/IslamicCalendar$CalculationType;"
		);
	}
	inline android::icu::util::IslamicCalendar_CalculationType IslamicCalendar_CalculationType::ISLAMIC_UMALQURA()
	{
		return getStaticObjectField(
			"android.icu.util.IslamicCalendar$CalculationType",
			"ISLAMIC_UMALQURA",
			"Landroid/icu/util/IslamicCalendar$CalculationType;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::util::IslamicCalendar_CalculationType IslamicCalendar_CalculationType::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.IslamicCalendar$CalculationType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/util/IslamicCalendar$CalculationType;",
			arg0.object<jstring>()
		);
	}
	inline JArray IslamicCalendar_CalculationType::values()
	{
		return callStaticObjectMethod(
			"android.icu.util.IslamicCalendar$CalculationType",
			"values",
			"()[Landroid/icu/util/IslamicCalendar$CalculationType;"
		);
	}
} // namespace android::icu::util

// Base class headers
#include "../../../java/lang/Enum.hpp"

