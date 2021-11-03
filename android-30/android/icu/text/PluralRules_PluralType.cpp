#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./PluralRules_PluralType.hpp"

namespace android::icu::text
{
	// Fields
	android::icu::text::PluralRules_PluralType PluralRules_PluralType::CARDINAL()
	{
		return getStaticObjectField(
			"android.icu.text.PluralRules$PluralType",
			"CARDINAL",
			"Landroid/icu/text/PluralRules$PluralType;"
		);
	}
	android::icu::text::PluralRules_PluralType PluralRules_PluralType::ORDINAL()
	{
		return getStaticObjectField(
			"android.icu.text.PluralRules$PluralType",
			"ORDINAL",
			"Landroid/icu/text/PluralRules$PluralType;"
		);
	}
	
	// QAndroidJniObject forward
	PluralRules_PluralType::PluralRules_PluralType(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::PluralRules_PluralType PluralRules_PluralType::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.PluralRules$PluralType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/PluralRules$PluralType;",
			arg0.object<jstring>()
		);
	}
	JArray PluralRules_PluralType::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.PluralRules$PluralType",
			"values",
			"()[Landroid/icu/text/PluralRules$PluralType;"
		);
	}
} // namespace android::icu::text

