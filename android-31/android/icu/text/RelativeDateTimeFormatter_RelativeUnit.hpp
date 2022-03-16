#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./RelativeDateTimeFormatter_RelativeUnit.def.hpp"

namespace android::icu::text
{
	// Fields
	inline android::icu::text::RelativeDateTimeFormatter_RelativeUnit RelativeDateTimeFormatter_RelativeUnit::DAYS()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"DAYS",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;"
		);
	}
	inline android::icu::text::RelativeDateTimeFormatter_RelativeUnit RelativeDateTimeFormatter_RelativeUnit::HOURS()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"HOURS",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;"
		);
	}
	inline android::icu::text::RelativeDateTimeFormatter_RelativeUnit RelativeDateTimeFormatter_RelativeUnit::MINUTES()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"MINUTES",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;"
		);
	}
	inline android::icu::text::RelativeDateTimeFormatter_RelativeUnit RelativeDateTimeFormatter_RelativeUnit::MONTHS()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"MONTHS",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;"
		);
	}
	inline android::icu::text::RelativeDateTimeFormatter_RelativeUnit RelativeDateTimeFormatter_RelativeUnit::SECONDS()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"SECONDS",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;"
		);
	}
	inline android::icu::text::RelativeDateTimeFormatter_RelativeUnit RelativeDateTimeFormatter_RelativeUnit::WEEKS()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"WEEKS",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;"
		);
	}
	inline android::icu::text::RelativeDateTimeFormatter_RelativeUnit RelativeDateTimeFormatter_RelativeUnit::YEARS()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"YEARS",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::text::RelativeDateTimeFormatter_RelativeUnit RelativeDateTimeFormatter_RelativeUnit::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;",
			arg0.object<jstring>()
		);
	}
	inline JArray RelativeDateTimeFormatter_RelativeUnit::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$RelativeUnit",
			"values",
			"()[Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;"
		);
	}
} // namespace android::icu::text

// Base class headers
#include "../../../java/lang/Enum.hpp"

