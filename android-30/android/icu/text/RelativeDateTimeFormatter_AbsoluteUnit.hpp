#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./RelativeDateTimeFormatter_AbsoluteUnit.def.hpp"

namespace android::icu::text
{
	// Fields
	inline android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit RelativeDateTimeFormatter_AbsoluteUnit::DAY()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"DAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	inline android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit RelativeDateTimeFormatter_AbsoluteUnit::FRIDAY()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"FRIDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	inline android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit RelativeDateTimeFormatter_AbsoluteUnit::MONDAY()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"MONDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	inline android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit RelativeDateTimeFormatter_AbsoluteUnit::MONTH()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"MONTH",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	inline android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit RelativeDateTimeFormatter_AbsoluteUnit::NOW()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"NOW",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	inline android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit RelativeDateTimeFormatter_AbsoluteUnit::SATURDAY()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"SATURDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	inline android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit RelativeDateTimeFormatter_AbsoluteUnit::SUNDAY()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"SUNDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	inline android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit RelativeDateTimeFormatter_AbsoluteUnit::THURSDAY()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"THURSDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	inline android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit RelativeDateTimeFormatter_AbsoluteUnit::TUESDAY()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"TUESDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	inline android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit RelativeDateTimeFormatter_AbsoluteUnit::WEDNESDAY()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"WEDNESDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	inline android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit RelativeDateTimeFormatter_AbsoluteUnit::WEEK()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"WEEK",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	inline android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit RelativeDateTimeFormatter_AbsoluteUnit::YEAR()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"YEAR",
			"Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit RelativeDateTimeFormatter_AbsoluteUnit::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;",
			arg0.object<jstring>()
		);
	}
	inline JArray RelativeDateTimeFormatter_AbsoluteUnit::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$AbsoluteUnit",
			"values",
			"()[Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;"
		);
	}
} // namespace android::icu::text

// Base class headers
#include "../../../java/lang/Enum.hpp"

