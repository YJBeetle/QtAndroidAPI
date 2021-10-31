#include "./TimeZoneFormat_Style.hpp"

namespace android::icu::text
{
	// Fields
	QAndroidJniObject TimeZoneFormat_Style::EXEMPLAR_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"EXEMPLAR_LOCATION",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	QAndroidJniObject TimeZoneFormat_Style::GENERIC_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"GENERIC_LOCATION",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	QAndroidJniObject TimeZoneFormat_Style::GENERIC_LONG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"GENERIC_LONG",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	QAndroidJniObject TimeZoneFormat_Style::GENERIC_SHORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"GENERIC_SHORT",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	QAndroidJniObject TimeZoneFormat_Style::ISO_BASIC_FIXED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"ISO_BASIC_FIXED",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	QAndroidJniObject TimeZoneFormat_Style::ISO_BASIC_FULL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"ISO_BASIC_FULL",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	QAndroidJniObject TimeZoneFormat_Style::ISO_BASIC_LOCAL_FIXED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"ISO_BASIC_LOCAL_FIXED",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	QAndroidJniObject TimeZoneFormat_Style::ISO_BASIC_LOCAL_FULL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"ISO_BASIC_LOCAL_FULL",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	QAndroidJniObject TimeZoneFormat_Style::ISO_BASIC_LOCAL_SHORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"ISO_BASIC_LOCAL_SHORT",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	QAndroidJniObject TimeZoneFormat_Style::ISO_BASIC_SHORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"ISO_BASIC_SHORT",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	QAndroidJniObject TimeZoneFormat_Style::ISO_EXTENDED_FIXED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"ISO_EXTENDED_FIXED",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	QAndroidJniObject TimeZoneFormat_Style::ISO_EXTENDED_FULL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"ISO_EXTENDED_FULL",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	QAndroidJniObject TimeZoneFormat_Style::ISO_EXTENDED_LOCAL_FIXED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"ISO_EXTENDED_LOCAL_FIXED",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	QAndroidJniObject TimeZoneFormat_Style::ISO_EXTENDED_LOCAL_FULL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"ISO_EXTENDED_LOCAL_FULL",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	QAndroidJniObject TimeZoneFormat_Style::LOCALIZED_GMT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"LOCALIZED_GMT",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	QAndroidJniObject TimeZoneFormat_Style::LOCALIZED_GMT_SHORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"LOCALIZED_GMT_SHORT",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	QAndroidJniObject TimeZoneFormat_Style::SPECIFIC_LONG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"SPECIFIC_LONG",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	QAndroidJniObject TimeZoneFormat_Style::SPECIFIC_SHORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"SPECIFIC_SHORT",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	QAndroidJniObject TimeZoneFormat_Style::ZONE_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"ZONE_ID",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	QAndroidJniObject TimeZoneFormat_Style::ZONE_ID_SHORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$Style",
			"ZONE_ID_SHORT",
			"Landroid/icu/text/TimeZoneFormat$Style;"
		);
	}
	
	// QAndroidJniObject forward
	TimeZoneFormat_Style::TimeZoneFormat_Style(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject TimeZoneFormat_Style::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.TimeZoneFormat$Style",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat$Style;",
			arg0
		);
	}
	jarray TimeZoneFormat_Style::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.TimeZoneFormat$Style",
			"values",
			"()[Landroid/icu/text/TimeZoneFormat$Style;"
		).object<jarray>();
	}
} // namespace android::icu::text

