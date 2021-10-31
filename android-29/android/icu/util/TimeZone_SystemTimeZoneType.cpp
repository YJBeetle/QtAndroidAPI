#include "./TimeZone_SystemTimeZoneType.hpp"

namespace android::icu::util
{
	// Fields
	android::icu::util::TimeZone_SystemTimeZoneType TimeZone_SystemTimeZoneType::ANY()
	{
		return getStaticObjectField(
			"android.icu.util.TimeZone$SystemTimeZoneType",
			"ANY",
			"Landroid/icu/util/TimeZone$SystemTimeZoneType;"
		);
	}
	android::icu::util::TimeZone_SystemTimeZoneType TimeZone_SystemTimeZoneType::CANONICAL()
	{
		return getStaticObjectField(
			"android.icu.util.TimeZone$SystemTimeZoneType",
			"CANONICAL",
			"Landroid/icu/util/TimeZone$SystemTimeZoneType;"
		);
	}
	android::icu::util::TimeZone_SystemTimeZoneType TimeZone_SystemTimeZoneType::CANONICAL_LOCATION()
	{
		return getStaticObjectField(
			"android.icu.util.TimeZone$SystemTimeZoneType",
			"CANONICAL_LOCATION",
			"Landroid/icu/util/TimeZone$SystemTimeZoneType;"
		);
	}
	
	// QAndroidJniObject forward
	TimeZone_SystemTimeZoneType::TimeZone_SystemTimeZoneType(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::util::TimeZone_SystemTimeZoneType TimeZone_SystemTimeZoneType::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone$SystemTimeZoneType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/util/TimeZone$SystemTimeZoneType;",
			arg0
		);
	}
	jarray TimeZone_SystemTimeZoneType::values()
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeZone$SystemTimeZoneType",
			"values",
			"()[Landroid/icu/util/TimeZone$SystemTimeZoneType;"
		).object<jarray>();
	}
} // namespace android::icu::util

