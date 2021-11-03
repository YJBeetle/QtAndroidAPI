#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./RelativeDateTimeFormatter_AbsoluteUnit.hpp"

namespace android::icu::text
{
	// Fields
	android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit RelativeDateTimeFormatter_AbsoluteUnit::DAY()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"DAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit RelativeDateTimeFormatter_AbsoluteUnit::FRIDAY()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"FRIDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit RelativeDateTimeFormatter_AbsoluteUnit::HOUR()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"HOUR",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit RelativeDateTimeFormatter_AbsoluteUnit::MINUTE()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"MINUTE",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit RelativeDateTimeFormatter_AbsoluteUnit::MONDAY()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"MONDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit RelativeDateTimeFormatter_AbsoluteUnit::MONTH()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"MONTH",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit RelativeDateTimeFormatter_AbsoluteUnit::NOW()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"NOW",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit RelativeDateTimeFormatter_AbsoluteUnit::QUARTER()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"QUARTER",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit RelativeDateTimeFormatter_AbsoluteUnit::SATURDAY()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"SATURDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit RelativeDateTimeFormatter_AbsoluteUnit::SUNDAY()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"SUNDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit RelativeDateTimeFormatter_AbsoluteUnit::THURSDAY()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"THURSDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit RelativeDateTimeFormatter_AbsoluteUnit::TUESDAY()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"TUESDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit RelativeDateTimeFormatter_AbsoluteUnit::WEDNESDAY()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"WEDNESDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit RelativeDateTimeFormatter_AbsoluteUnit::WEEK()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"WEEK",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit RelativeDateTimeFormatter_AbsoluteUnit::YEAR()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"YEAR",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	
	// QAndroidJniObject forward
	RelativeDateTimeFormatter_AbsoluteUnit::RelativeDateTimeFormatter_AbsoluteUnit(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit RelativeDateTimeFormatter_AbsoluteUnit::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;",
			arg0.object<jstring>()
		);
	}
	JArray RelativeDateTimeFormatter_AbsoluteUnit::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"values",
			"()[Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
} // namespace android::icu::text

