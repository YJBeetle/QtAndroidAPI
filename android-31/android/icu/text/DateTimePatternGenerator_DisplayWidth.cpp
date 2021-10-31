#include "./DateTimePatternGenerator_DisplayWidth.hpp"

namespace android::icu::text
{
	// Fields
	android::icu::text::DateTimePatternGenerator_DisplayWidth DateTimePatternGenerator_DisplayWidth::ABBREVIATED()
	{
		return getStaticObjectField(
			"android.icu.text.DateTimePatternGenerator$DisplayWidth",
			"ABBREVIATED",
			"Landroid/icu/text/DateTimePatternGenerator$DisplayWidth;"
		);
	}
	android::icu::text::DateTimePatternGenerator_DisplayWidth DateTimePatternGenerator_DisplayWidth::NARROW()
	{
		return getStaticObjectField(
			"android.icu.text.DateTimePatternGenerator$DisplayWidth",
			"NARROW",
			"Landroid/icu/text/DateTimePatternGenerator$DisplayWidth;"
		);
	}
	android::icu::text::DateTimePatternGenerator_DisplayWidth DateTimePatternGenerator_DisplayWidth::WIDE()
	{
		return getStaticObjectField(
			"android.icu.text.DateTimePatternGenerator$DisplayWidth",
			"WIDE",
			"Landroid/icu/text/DateTimePatternGenerator$DisplayWidth;"
		);
	}
	
	// QAndroidJniObject forward
	DateTimePatternGenerator_DisplayWidth::DateTimePatternGenerator_DisplayWidth(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::DateTimePatternGenerator_DisplayWidth DateTimePatternGenerator_DisplayWidth::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateTimePatternGenerator$DisplayWidth",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/DateTimePatternGenerator$DisplayWidth;",
			arg0
		);
	}
	jarray DateTimePatternGenerator_DisplayWidth::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.DateTimePatternGenerator$DisplayWidth",
			"values",
			"()[Landroid/icu/text/DateTimePatternGenerator$DisplayWidth;"
		).object<jarray>();
	}
} // namespace android::icu::text

