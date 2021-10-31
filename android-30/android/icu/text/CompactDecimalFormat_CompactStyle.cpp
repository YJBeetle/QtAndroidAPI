#include "./CompactDecimalFormat_CompactStyle.hpp"

namespace android::icu::text
{
	// Fields
	android::icu::text::CompactDecimalFormat_CompactStyle CompactDecimalFormat_CompactStyle::LONG()
	{
		return getStaticObjectField(
			"android.icu.text.CompactDecimalFormat$CompactStyle",
			"LONG",
			"Landroid/icu/text/CompactDecimalFormat$CompactStyle;"
		);
	}
	android::icu::text::CompactDecimalFormat_CompactStyle CompactDecimalFormat_CompactStyle::SHORT()
	{
		return getStaticObjectField(
			"android.icu.text.CompactDecimalFormat$CompactStyle",
			"SHORT",
			"Landroid/icu/text/CompactDecimalFormat$CompactStyle;"
		);
	}
	
	// QAndroidJniObject forward
	CompactDecimalFormat_CompactStyle::CompactDecimalFormat_CompactStyle(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::CompactDecimalFormat_CompactStyle CompactDecimalFormat_CompactStyle::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.CompactDecimalFormat$CompactStyle",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/CompactDecimalFormat$CompactStyle;",
			arg0
		);
	}
	jarray CompactDecimalFormat_CompactStyle::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.CompactDecimalFormat$CompactStyle",
			"values",
			"()[Landroid/icu/text/CompactDecimalFormat$CompactStyle;"
		).object<jarray>();
	}
} // namespace android::icu::text

