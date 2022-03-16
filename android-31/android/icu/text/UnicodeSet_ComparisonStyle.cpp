#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./UnicodeSet_ComparisonStyle.hpp"

namespace android::icu::text
{
	// Fields
	android::icu::text::UnicodeSet_ComparisonStyle UnicodeSet_ComparisonStyle::LEXICOGRAPHIC()
	{
		return getStaticObjectField(
			"android.icu.text.UnicodeSet$ComparisonStyle",
			"LEXICOGRAPHIC",
			"Landroid/icu/text/UnicodeSet$ComparisonStyle;"
		);
	}
	android::icu::text::UnicodeSet_ComparisonStyle UnicodeSet_ComparisonStyle::LONGER_FIRST()
	{
		return getStaticObjectField(
			"android.icu.text.UnicodeSet$ComparisonStyle",
			"LONGER_FIRST",
			"Landroid/icu/text/UnicodeSet$ComparisonStyle;"
		);
	}
	android::icu::text::UnicodeSet_ComparisonStyle UnicodeSet_ComparisonStyle::SHORTER_FIRST()
	{
		return getStaticObjectField(
			"android.icu.text.UnicodeSet$ComparisonStyle",
			"SHORTER_FIRST",
			"Landroid/icu/text/UnicodeSet$ComparisonStyle;"
		);
	}
	
	// Constructors
	
	// Methods
	android::icu::text::UnicodeSet_ComparisonStyle UnicodeSet_ComparisonStyle::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.UnicodeSet$ComparisonStyle",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/UnicodeSet$ComparisonStyle;",
			arg0.object<jstring>()
		);
	}
	JArray UnicodeSet_ComparisonStyle::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.UnicodeSet$ComparisonStyle",
			"values",
			"()[Landroid/icu/text/UnicodeSet$ComparisonStyle;"
		);
	}
} // namespace android::icu::text

