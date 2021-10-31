#include "./RelativeDateTimeFormatter_RelativeUnit.hpp"

namespace android::icu::text
{
	// Fields
	QAndroidJniObject RelativeDateTimeFormatter_RelativeUnit::DAYS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"DAYS",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeUnit::HOURS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"HOURS",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeUnit::MINUTES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"MINUTES",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeUnit::MONTHS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"MONTHS",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeUnit::SECONDS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"SECONDS",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeUnit::WEEKS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"WEEKS",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeUnit::YEARS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"YEARS",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;"
		);
	}
	
	// QAndroidJniObject forward
	RelativeDateTimeFormatter_RelativeUnit::RelativeDateTimeFormatter_RelativeUnit(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject RelativeDateTimeFormatter_RelativeUnit::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;",
			arg0
		);
	}
	jarray RelativeDateTimeFormatter_RelativeUnit::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"values",
			"()[Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;"
		).object<jarray>();
	}
} // namespace android::icu::text

