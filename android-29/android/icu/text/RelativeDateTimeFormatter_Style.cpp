#include "./RelativeDateTimeFormatter_Style.hpp"

namespace android::icu::text
{
	// Fields
	android::icu::text::RelativeDateTimeFormatter_Style RelativeDateTimeFormatter_Style::LONG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Style",
			"LONG",
			"Landroid/icu/text/RelativeDateTimeFormatter$Style;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_Style RelativeDateTimeFormatter_Style::NARROW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Style",
			"NARROW",
			"Landroid/icu/text/RelativeDateTimeFormatter$Style;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_Style RelativeDateTimeFormatter_Style::SHORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Style",
			"SHORT",
			"Landroid/icu/text/RelativeDateTimeFormatter$Style;"
		);
	}
	
	// QAndroidJniObject forward
	RelativeDateTimeFormatter_Style::RelativeDateTimeFormatter_Style(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::RelativeDateTimeFormatter_Style RelativeDateTimeFormatter_Style::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$Style",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/RelativeDateTimeFormatter$Style;",
			arg0
		);
	}
	jarray RelativeDateTimeFormatter_Style::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$Style",
			"values",
			"()[Landroid/icu/text/RelativeDateTimeFormatter$Style;"
		).object<jarray>();
	}
} // namespace android::icu::text

