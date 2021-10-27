#include "./RelativeDateTimeFormatter_Style.hpp"

namespace android::icu::text
{
	// Fields
	QAndroidJniObject RelativeDateTimeFormatter_Style::LONG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Style",
			"LONG",
			"Landroid/icu/text/RelativeDateTimeFormatter$Style;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_Style::NARROW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Style",
			"NARROW",
			"Landroid/icu/text/RelativeDateTimeFormatter$Style;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_Style::SHORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Style",
			"SHORT",
			"Landroid/icu/text/RelativeDateTimeFormatter$Style;"
		);
	}
	
	RelativeDateTimeFormatter_Style::RelativeDateTimeFormatter_Style(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject RelativeDateTimeFormatter_Style::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$Style",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/RelativeDateTimeFormatter$Style;",
			arg0
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_Style::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$Style",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/RelativeDateTimeFormatter$Style;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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

