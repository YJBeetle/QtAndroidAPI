#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./TimeZone_SystemTimeZoneType.def.hpp"

namespace android::icu::util
{
	// Fields
	inline android::icu::util::TimeZone_SystemTimeZoneType TimeZone_SystemTimeZoneType::ANY()
	{
		return getStaticObjectField(
			"android.icu.util.TimeZone$SystemTimeZoneType",
			"ANY",
			"Landroid/icu/util/TimeZone$SystemTimeZoneType;"
		);
	}
	inline android::icu::util::TimeZone_SystemTimeZoneType TimeZone_SystemTimeZoneType::CANONICAL()
	{
		return getStaticObjectField(
			"android.icu.util.TimeZone$SystemTimeZoneType",
			"CANONICAL",
			"Landroid/icu/util/TimeZone$SystemTimeZoneType;"
		);
	}
	inline android::icu::util::TimeZone_SystemTimeZoneType TimeZone_SystemTimeZoneType::CANONICAL_LOCATION()
	{
		return getStaticObjectField(
			"android.icu.util.TimeZone$SystemTimeZoneType",
			"CANONICAL_LOCATION",
			"Landroid/icu/util/TimeZone$SystemTimeZoneType;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::util::TimeZone_SystemTimeZoneType TimeZone_SystemTimeZoneType::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone$SystemTimeZoneType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/util/TimeZone$SystemTimeZoneType;",
			arg0.object<jstring>()
		);
	}
	inline JArray TimeZone_SystemTimeZoneType::values()
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone$SystemTimeZoneType",
			"values",
			"()[Landroid/icu/util/TimeZone$SystemTimeZoneType;"
		);
	}
} // namespace android::icu::util

// Base class headers
#include "../../../java/lang/Enum.hpp"

