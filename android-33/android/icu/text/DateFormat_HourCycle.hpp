#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./DateFormat_HourCycle.def.hpp"

namespace android::icu::text
{
	// Fields
	inline android::icu::text::DateFormat_HourCycle DateFormat_HourCycle::HOUR_CYCLE_11()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat$HourCycle",
			"HOUR_CYCLE_11",
			"Landroid/icu/text/DateFormat$HourCycle;"
		);
	}
	inline android::icu::text::DateFormat_HourCycle DateFormat_HourCycle::HOUR_CYCLE_12()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat$HourCycle",
			"HOUR_CYCLE_12",
			"Landroid/icu/text/DateFormat$HourCycle;"
		);
	}
	inline android::icu::text::DateFormat_HourCycle DateFormat_HourCycle::HOUR_CYCLE_23()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat$HourCycle",
			"HOUR_CYCLE_23",
			"Landroid/icu/text/DateFormat$HourCycle;"
		);
	}
	inline android::icu::text::DateFormat_HourCycle DateFormat_HourCycle::HOUR_CYCLE_24()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat$HourCycle",
			"HOUR_CYCLE_24",
			"Landroid/icu/text/DateFormat$HourCycle;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::text::DateFormat_HourCycle DateFormat_HourCycle::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat$HourCycle",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/DateFormat$HourCycle;",
			arg0.object<jstring>()
		);
	}
	inline JArray DateFormat_HourCycle::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat$HourCycle",
			"values",
			"()[Landroid/icu/text/DateFormat$HourCycle;"
		);
	}
} // namespace android::icu::text

// Base class headers
#include "../../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
