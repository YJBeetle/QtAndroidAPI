#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./LocaleDisplayNames_DialectHandling.hpp"

namespace android::icu::text
{
	// Fields
	android::icu::text::LocaleDisplayNames_DialectHandling LocaleDisplayNames_DialectHandling::DIALECT_NAMES()
	{
		return getStaticObjectField(
			"android.icu.text.LocaleDisplayNames$DialectHandling",
			"DIALECT_NAMES",
			"Landroid/icu/text/LocaleDisplayNames$DialectHandling;"
		);
	}
	android::icu::text::LocaleDisplayNames_DialectHandling LocaleDisplayNames_DialectHandling::STANDARD_NAMES()
	{
		return getStaticObjectField(
			"android.icu.text.LocaleDisplayNames$DialectHandling",
			"STANDARD_NAMES",
			"Landroid/icu/text/LocaleDisplayNames$DialectHandling;"
		);
	}
	
	// Constructors
	
	// Methods
	android::icu::text::LocaleDisplayNames_DialectHandling LocaleDisplayNames_DialectHandling::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.LocaleDisplayNames$DialectHandling",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/LocaleDisplayNames$DialectHandling;",
			arg0.object<jstring>()
		);
	}
	JArray LocaleDisplayNames_DialectHandling::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.LocaleDisplayNames$DialectHandling",
			"values",
			"()[Landroid/icu/text/LocaleDisplayNames$DialectHandling;"
		);
	}
} // namespace android::icu::text

