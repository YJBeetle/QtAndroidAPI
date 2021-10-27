#include "./RelativeDateTimeFormatter_Direction.hpp"

namespace android::icu::text
{
	// Fields
	QAndroidJniObject RelativeDateTimeFormatter_Direction::LAST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Direction",
			"LAST",
			"Landroid/icu/text/RelativeDateTimeFormatter$Direction;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_Direction::LAST_2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Direction",
			"LAST_2",
			"Landroid/icu/text/RelativeDateTimeFormatter$Direction;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_Direction::NEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Direction",
			"NEXT",
			"Landroid/icu/text/RelativeDateTimeFormatter$Direction;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_Direction::NEXT_2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Direction",
			"NEXT_2",
			"Landroid/icu/text/RelativeDateTimeFormatter$Direction;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_Direction::PLAIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Direction",
			"PLAIN",
			"Landroid/icu/text/RelativeDateTimeFormatter$Direction;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_Direction::THIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Direction",
			"THIS",
			"Landroid/icu/text/RelativeDateTimeFormatter$Direction;"
		);
	}
	
	RelativeDateTimeFormatter_Direction::RelativeDateTimeFormatter_Direction(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject RelativeDateTimeFormatter_Direction::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$Direction",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/RelativeDateTimeFormatter$Direction;",
			arg0
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_Direction::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$Direction",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/RelativeDateTimeFormatter$Direction;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray RelativeDateTimeFormatter_Direction::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$Direction",
			"values",
			"()[Landroid/icu/text/RelativeDateTimeFormatter$Direction;"
		).object<jarray>();
	}
} // namespace android::icu::text

