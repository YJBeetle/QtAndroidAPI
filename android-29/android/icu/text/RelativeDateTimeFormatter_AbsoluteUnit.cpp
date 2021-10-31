#include "./RelativeDateTimeFormatter_AbsoluteUnit.hpp"

namespace android::icu::text
{
	// Fields
	QAndroidJniObject RelativeDateTimeFormatter_AbsoluteUnit::DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"DAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_AbsoluteUnit::FRIDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"FRIDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_AbsoluteUnit::MONDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"MONDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_AbsoluteUnit::MONTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"MONTH",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_AbsoluteUnit::NOW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"NOW",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_AbsoluteUnit::SATURDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"SATURDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_AbsoluteUnit::SUNDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"SUNDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_AbsoluteUnit::THURSDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"THURSDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_AbsoluteUnit::TUESDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"TUESDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_AbsoluteUnit::WEDNESDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"WEDNESDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_AbsoluteUnit::WEEK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"WEEK",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_AbsoluteUnit::YEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"YEAR",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	
	// QAndroidJniObject forward
	RelativeDateTimeFormatter_AbsoluteUnit::RelativeDateTimeFormatter_AbsoluteUnit(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject RelativeDateTimeFormatter_AbsoluteUnit::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;",
			arg0
		);
	}
	jarray RelativeDateTimeFormatter_AbsoluteUnit::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"values",
			"()[Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		).object<jarray>();
	}
} // namespace android::icu::text

