#include "./UnicodeSetSpanner_TrimOption.hpp"

namespace android::icu::text
{
	// Fields
	android::icu::text::UnicodeSetSpanner_TrimOption UnicodeSetSpanner_TrimOption::BOTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.UnicodeSetSpanner$TrimOption",
			"BOTH",
			"Landroid/icu/text/UnicodeSetSpanner$TrimOption;"
		);
	}
	android::icu::text::UnicodeSetSpanner_TrimOption UnicodeSetSpanner_TrimOption::LEADING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.UnicodeSetSpanner$TrimOption",
			"LEADING",
			"Landroid/icu/text/UnicodeSetSpanner$TrimOption;"
		);
	}
	android::icu::text::UnicodeSetSpanner_TrimOption UnicodeSetSpanner_TrimOption::TRAILING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.UnicodeSetSpanner$TrimOption",
			"TRAILING",
			"Landroid/icu/text/UnicodeSetSpanner$TrimOption;"
		);
	}
	
	// QAndroidJniObject forward
	UnicodeSetSpanner_TrimOption::UnicodeSetSpanner_TrimOption(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::UnicodeSetSpanner_TrimOption UnicodeSetSpanner_TrimOption::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.UnicodeSetSpanner$TrimOption",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/UnicodeSetSpanner$TrimOption;",
			arg0
		);
	}
	jarray UnicodeSetSpanner_TrimOption::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.UnicodeSetSpanner$TrimOption",
			"values",
			"()[Landroid/icu/text/UnicodeSetSpanner$TrimOption;"
		).object<jarray>();
	}
} // namespace android::icu::text

