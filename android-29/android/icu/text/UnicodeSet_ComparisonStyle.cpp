#include "./UnicodeSet_ComparisonStyle.hpp"

namespace android::icu::text
{
	// Fields
	android::icu::text::UnicodeSet_ComparisonStyle UnicodeSet_ComparisonStyle::LEXICOGRAPHIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.UnicodeSet$ComparisonStyle",
			"LEXICOGRAPHIC",
			"Landroid/icu/text/UnicodeSet$ComparisonStyle;"
		);
	}
	android::icu::text::UnicodeSet_ComparisonStyle UnicodeSet_ComparisonStyle::LONGER_FIRST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.UnicodeSet$ComparisonStyle",
			"LONGER_FIRST",
			"Landroid/icu/text/UnicodeSet$ComparisonStyle;"
		);
	}
	android::icu::text::UnicodeSet_ComparisonStyle UnicodeSet_ComparisonStyle::SHORTER_FIRST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.UnicodeSet$ComparisonStyle",
			"SHORTER_FIRST",
			"Landroid/icu/text/UnicodeSet$ComparisonStyle;"
		);
	}
	
	// QAndroidJniObject forward
	UnicodeSet_ComparisonStyle::UnicodeSet_ComparisonStyle(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::UnicodeSet_ComparisonStyle UnicodeSet_ComparisonStyle::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.UnicodeSet$ComparisonStyle",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/UnicodeSet$ComparisonStyle;",
			arg0
		);
	}
	jarray UnicodeSet_ComparisonStyle::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.UnicodeSet$ComparisonStyle",
			"values",
			"()[Landroid/icu/text/UnicodeSet$ComparisonStyle;"
		).object<jarray>();
	}
} // namespace android::icu::text

