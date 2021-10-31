#include "./TimeZoneFormat_ParseOption.hpp"

namespace android::icu::text
{
	// Fields
	android::icu::text::TimeZoneFormat_ParseOption TimeZoneFormat_ParseOption::ALL_STYLES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$ParseOption",
			"ALL_STYLES",
			"Landroid/icu/text/TimeZoneFormat$ParseOption;"
		);
	}
	android::icu::text::TimeZoneFormat_ParseOption TimeZoneFormat_ParseOption::TZ_DATABASE_ABBREVIATIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$ParseOption",
			"TZ_DATABASE_ABBREVIATIONS",
			"Landroid/icu/text/TimeZoneFormat$ParseOption;"
		);
	}
	
	// QAndroidJniObject forward
	TimeZoneFormat_ParseOption::TimeZoneFormat_ParseOption(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::TimeZoneFormat_ParseOption TimeZoneFormat_ParseOption::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.TimeZoneFormat$ParseOption",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat$ParseOption;",
			arg0
		);
	}
	jarray TimeZoneFormat_ParseOption::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.TimeZoneFormat$ParseOption",
			"values",
			"()[Landroid/icu/text/TimeZoneFormat$ParseOption;"
		).object<jarray>();
	}
} // namespace android::icu::text

