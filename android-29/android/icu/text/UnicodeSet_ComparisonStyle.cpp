#include "./UnicodeSet_ComparisonStyle.hpp"

namespace android::icu::text
{
	// Fields
	QAndroidJniObject UnicodeSet_ComparisonStyle::LEXICOGRAPHIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.UnicodeSet$ComparisonStyle",
			"LEXICOGRAPHIC",
			"Landroid/icu/text/UnicodeSet$ComparisonStyle;"
		);
	}
	QAndroidJniObject UnicodeSet_ComparisonStyle::LONGER_FIRST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.UnicodeSet$ComparisonStyle",
			"LONGER_FIRST",
			"Landroid/icu/text/UnicodeSet$ComparisonStyle;"
		);
	}
	QAndroidJniObject UnicodeSet_ComparisonStyle::SHORTER_FIRST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.UnicodeSet$ComparisonStyle",
			"SHORTER_FIRST",
			"Landroid/icu/text/UnicodeSet$ComparisonStyle;"
		);
	}
	
	UnicodeSet_ComparisonStyle::UnicodeSet_ComparisonStyle(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject UnicodeSet_ComparisonStyle::valueOf(jstring arg0)
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

