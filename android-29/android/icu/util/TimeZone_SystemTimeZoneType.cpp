#include "./TimeZone_SystemTimeZoneType.hpp"

namespace android::icu::util
{
	// Fields
	QAndroidJniObject TimeZone_SystemTimeZoneType::ANY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.TimeZone$SystemTimeZoneType",
			"ANY",
			"Landroid/icu/util/TimeZone$SystemTimeZoneType;"
		);
	}
	QAndroidJniObject TimeZone_SystemTimeZoneType::CANONICAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.TimeZone$SystemTimeZoneType",
			"CANONICAL",
			"Landroid/icu/util/TimeZone$SystemTimeZoneType;"
		);
	}
	QAndroidJniObject TimeZone_SystemTimeZoneType::CANONICAL_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.TimeZone$SystemTimeZoneType",
			"CANONICAL_LOCATION",
			"Landroid/icu/util/TimeZone$SystemTimeZoneType;"
		);
	}
	
	TimeZone_SystemTimeZoneType::TimeZone_SystemTimeZoneType(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject TimeZone_SystemTimeZoneType::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone$SystemTimeZoneType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/util/TimeZone$SystemTimeZoneType;",
			arg0
		);
	}
	jarray TimeZone_SystemTimeZoneType::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeZone$SystemTimeZoneType",
			"values",
			"()[Landroid/icu/util/TimeZone$SystemTimeZoneType;"
		).object<jarray>();
	}
} // namespace android::icu::util

