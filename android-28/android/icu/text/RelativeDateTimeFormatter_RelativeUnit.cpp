#include "./RelativeDateTimeFormatter_RelativeUnit.hpp"

namespace android::icu::text
{
	// Fields
	android::icu::text::RelativeDateTimeFormatter_RelativeUnit RelativeDateTimeFormatter_RelativeUnit::DAYS()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"DAYS",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_RelativeUnit RelativeDateTimeFormatter_RelativeUnit::HOURS()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"HOURS",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_RelativeUnit RelativeDateTimeFormatter_RelativeUnit::MINUTES()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"MINUTES",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_RelativeUnit RelativeDateTimeFormatter_RelativeUnit::MONTHS()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"MONTHS",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_RelativeUnit RelativeDateTimeFormatter_RelativeUnit::QUARTERS()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"QUARTERS",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_RelativeUnit RelativeDateTimeFormatter_RelativeUnit::SECONDS()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"SECONDS",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_RelativeUnit RelativeDateTimeFormatter_RelativeUnit::WEEKS()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"WEEKS",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_RelativeUnit RelativeDateTimeFormatter_RelativeUnit::YEARS()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"YEARS",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;"
		);
	}
	
	// QJniObject forward
	RelativeDateTimeFormatter_RelativeUnit::RelativeDateTimeFormatter_RelativeUnit(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::RelativeDateTimeFormatter_RelativeUnit RelativeDateTimeFormatter_RelativeUnit::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;",
			arg0
		);
	}
	jarray RelativeDateTimeFormatter_RelativeUnit::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"values",
			"()[Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;"
		).object<jarray>();
	}
} // namespace android::icu::text

