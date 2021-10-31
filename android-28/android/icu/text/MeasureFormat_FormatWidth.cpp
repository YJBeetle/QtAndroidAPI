#include "./MeasureFormat_FormatWidth.hpp"

namespace android::icu::text
{
	// Fields
	android::icu::text::MeasureFormat_FormatWidth MeasureFormat_FormatWidth::NARROW()
	{
		return getStaticObjectField(
			"android.icu.text.MeasureFormat$FormatWidth",
			"NARROW",
			"Landroid/icu/text/MeasureFormat$FormatWidth;"
		);
	}
	android::icu::text::MeasureFormat_FormatWidth MeasureFormat_FormatWidth::NUMERIC()
	{
		return getStaticObjectField(
			"android.icu.text.MeasureFormat$FormatWidth",
			"NUMERIC",
			"Landroid/icu/text/MeasureFormat$FormatWidth;"
		);
	}
	android::icu::text::MeasureFormat_FormatWidth MeasureFormat_FormatWidth::SHORT()
	{
		return getStaticObjectField(
			"android.icu.text.MeasureFormat$FormatWidth",
			"SHORT",
			"Landroid/icu/text/MeasureFormat$FormatWidth;"
		);
	}
	android::icu::text::MeasureFormat_FormatWidth MeasureFormat_FormatWidth::WIDE()
	{
		return getStaticObjectField(
			"android.icu.text.MeasureFormat$FormatWidth",
			"WIDE",
			"Landroid/icu/text/MeasureFormat$FormatWidth;"
		);
	}
	
	// QJniObject forward
	MeasureFormat_FormatWidth::MeasureFormat_FormatWidth(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::MeasureFormat_FormatWidth MeasureFormat_FormatWidth::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.MeasureFormat$FormatWidth",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/MeasureFormat$FormatWidth;",
			arg0
		);
	}
	jarray MeasureFormat_FormatWidth::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.MeasureFormat$FormatWidth",
			"values",
			"()[Landroid/icu/text/MeasureFormat$FormatWidth;"
		).object<jarray>();
	}
} // namespace android::icu::text

