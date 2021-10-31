#include "./TimeZoneFormat_TimeType.hpp"

namespace android::icu::text
{
	// Fields
	android::icu::text::TimeZoneFormat_TimeType TimeZoneFormat_TimeType::DAYLIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$TimeType",
			"DAYLIGHT",
			"Landroid/icu/text/TimeZoneFormat$TimeType;"
		);
	}
	android::icu::text::TimeZoneFormat_TimeType TimeZoneFormat_TimeType::STANDARD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$TimeType",
			"STANDARD",
			"Landroid/icu/text/TimeZoneFormat$TimeType;"
		);
	}
	android::icu::text::TimeZoneFormat_TimeType TimeZoneFormat_TimeType::UNKNOWN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$TimeType",
			"UNKNOWN",
			"Landroid/icu/text/TimeZoneFormat$TimeType;"
		);
	}
	
	// QAndroidJniObject forward
	TimeZoneFormat_TimeType::TimeZoneFormat_TimeType(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::TimeZoneFormat_TimeType TimeZoneFormat_TimeType::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.TimeZoneFormat$TimeType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat$TimeType;",
			arg0
		);
	}
	jarray TimeZoneFormat_TimeType::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.TimeZoneFormat$TimeType",
			"values",
			"()[Landroid/icu/text/TimeZoneFormat$TimeType;"
		).object<jarray>();
	}
} // namespace android::icu::text

