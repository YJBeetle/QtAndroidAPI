#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./RelativeDateTimeFormatter_RelativeDateTimeUnit.hpp"

namespace android::icu::text
{
	// Fields
	android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit RelativeDateTimeFormatter_RelativeDateTimeUnit::DAY()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"DAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit RelativeDateTimeFormatter_RelativeDateTimeUnit::FRIDAY()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"FRIDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit RelativeDateTimeFormatter_RelativeDateTimeUnit::HOUR()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"HOUR",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit RelativeDateTimeFormatter_RelativeDateTimeUnit::MINUTE()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"MINUTE",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit RelativeDateTimeFormatter_RelativeDateTimeUnit::MONDAY()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"MONDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit RelativeDateTimeFormatter_RelativeDateTimeUnit::MONTH()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"MONTH",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit RelativeDateTimeFormatter_RelativeDateTimeUnit::QUARTER()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"QUARTER",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit RelativeDateTimeFormatter_RelativeDateTimeUnit::SATURDAY()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"SATURDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit RelativeDateTimeFormatter_RelativeDateTimeUnit::SECOND()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"SECOND",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit RelativeDateTimeFormatter_RelativeDateTimeUnit::SUNDAY()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"SUNDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit RelativeDateTimeFormatter_RelativeDateTimeUnit::THURSDAY()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"THURSDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit RelativeDateTimeFormatter_RelativeDateTimeUnit::TUESDAY()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"TUESDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit RelativeDateTimeFormatter_RelativeDateTimeUnit::WEDNESDAY()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"WEDNESDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit RelativeDateTimeFormatter_RelativeDateTimeUnit::WEEK()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"WEEK",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit RelativeDateTimeFormatter_RelativeDateTimeUnit::YEAR()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"YEAR",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;"
		);
	}
	
	// QAndroidJniObject forward
	RelativeDateTimeFormatter_RelativeDateTimeUnit::RelativeDateTimeFormatter_RelativeDateTimeUnit(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit RelativeDateTimeFormatter_RelativeDateTimeUnit::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;",
			arg0.object<jstring>()
		);
	}
	JArray RelativeDateTimeFormatter_RelativeDateTimeUnit::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"values",
			"()[Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;"
		);
	}
} // namespace android::icu::text

