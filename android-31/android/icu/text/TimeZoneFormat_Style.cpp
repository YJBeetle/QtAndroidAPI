#include "./TimeZoneFormat_Style.hpp"

namespace android::icu::text
{
	// Fields
	android::icu::text::TimeZoneFormat_Style TimeZoneFormat_Style::EXEMPLAR_LOCATION()
	{
		return getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"EXEMPLAR_LOCATION",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	android::icu::text::TimeZoneFormat_Style TimeZoneFormat_Style::GENERIC_LOCATION()
	{
		return getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"GENERIC_LOCATION",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	android::icu::text::TimeZoneFormat_Style TimeZoneFormat_Style::GENERIC_LONG()
	{
		return getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"GENERIC_LONG",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	android::icu::text::TimeZoneFormat_Style TimeZoneFormat_Style::GENERIC_SHORT()
	{
		return getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"GENERIC_SHORT",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	android::icu::text::TimeZoneFormat_Style TimeZoneFormat_Style::ISO_BASIC_FIXED()
	{
		return getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"ISO_BASIC_FIXED",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	android::icu::text::TimeZoneFormat_Style TimeZoneFormat_Style::ISO_BASIC_FULL()
	{
		return getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"ISO_BASIC_FULL",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	android::icu::text::TimeZoneFormat_Style TimeZoneFormat_Style::ISO_BASIC_LOCAL_FIXED()
	{
		return getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"ISO_BASIC_LOCAL_FIXED",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	android::icu::text::TimeZoneFormat_Style TimeZoneFormat_Style::ISO_BASIC_LOCAL_FULL()
	{
		return getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"ISO_BASIC_LOCAL_FULL",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	android::icu::text::TimeZoneFormat_Style TimeZoneFormat_Style::ISO_BASIC_LOCAL_SHORT()
	{
		return getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"ISO_BASIC_LOCAL_SHORT",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	android::icu::text::TimeZoneFormat_Style TimeZoneFormat_Style::ISO_BASIC_SHORT()
	{
		return getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"ISO_BASIC_SHORT",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	android::icu::text::TimeZoneFormat_Style TimeZoneFormat_Style::ISO_EXTENDED_FIXED()
	{
		return getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"ISO_EXTENDED_FIXED",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	android::icu::text::TimeZoneFormat_Style TimeZoneFormat_Style::ISO_EXTENDED_FULL()
	{
		return getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"ISO_EXTENDED_FULL",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	android::icu::text::TimeZoneFormat_Style TimeZoneFormat_Style::ISO_EXTENDED_LOCAL_FIXED()
	{
		return getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"ISO_EXTENDED_LOCAL_FIXED",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	android::icu::text::TimeZoneFormat_Style TimeZoneFormat_Style::ISO_EXTENDED_LOCAL_FULL()
	{
		return getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"ISO_EXTENDED_LOCAL_FULL",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	android::icu::text::TimeZoneFormat_Style TimeZoneFormat_Style::LOCALIZED_GMT()
	{
		return getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"LOCALIZED_GMT",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	android::icu::text::TimeZoneFormat_Style TimeZoneFormat_Style::LOCALIZED_GMT_SHORT()
	{
		return getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"LOCALIZED_GMT_SHORT",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	android::icu::text::TimeZoneFormat_Style TimeZoneFormat_Style::SPECIFIC_LONG()
	{
		return getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"SPECIFIC_LONG",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	android::icu::text::TimeZoneFormat_Style TimeZoneFormat_Style::SPECIFIC_SHORT()
	{
		return getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"SPECIFIC_SHORT",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	android::icu::text::TimeZoneFormat_Style TimeZoneFormat_Style::ZONE_ID()
	{
		return getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"ZONE_ID",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	android::icu::text::TimeZoneFormat_Style TimeZoneFormat_Style::ZONE_ID_SHORT()
	{
		return getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"ZONE_ID_SHORT",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	
	// QAndroidJniObject forward
	TimeZoneFormat_Style::TimeZoneFormat_Style(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::TimeZoneFormat_Style TimeZoneFormat_Style::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.TimeZoneFormat$Style",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat$Style;",
			arg0
		);
	}
	jarray TimeZoneFormat_Style::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.TimeZoneFormat$Style",
			"values",
			"()[Landroid/icu/text/TimeZoneFormat$Style;"
		).object<jarray>();
	}
} // namespace android::icu::text

