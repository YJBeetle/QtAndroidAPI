#include "./PluralRules_PluralType.hpp"

namespace android::icu::text
{
	// Fields
	QAndroidJniObject PluralRules_PluralType::CARDINAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.PluralRules$PluralType",
			"CARDINAL",
			"Landroid/icu/text/PluralRules$PluralType;"
		);
	}
	QAndroidJniObject PluralRules_PluralType::ORDINAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.PluralRules$PluralType",
			"ORDINAL",
			"Landroid/icu/text/PluralRules$PluralType;"
		);
	}
	
	PluralRules_PluralType::PluralRules_PluralType(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject PluralRules_PluralType::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.PluralRules$PluralType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/PluralRules$PluralType;",
			arg0
		);
	}
	jarray PluralRules_PluralType::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.PluralRules$PluralType",
			"values",
			"()[Landroid/icu/text/PluralRules$PluralType;"
		).object<jarray>();
	}
} // namespace android::icu::text

