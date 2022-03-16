#pragma once

#include "./BreakIterator.def.hpp"
#include "./DisplayContext.def.hpp"
#include "./NumberFormat.def.hpp"
#include "./PluralRules.def.hpp"
#include "./RelativeDateTimeFormatter_AbsoluteUnit.def.hpp"
#include "./RelativeDateTimeFormatter_Direction.def.hpp"
#include "./RelativeDateTimeFormatter_RelativeDateTimeUnit.def.hpp"
#include "./RelativeDateTimeFormatter_RelativeUnit.def.hpp"
#include "./RelativeDateTimeFormatter_Style.def.hpp"
#include "../util/ULocale.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/EnumMap.def.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./RelativeDateTimeFormatter.def.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::icu::text::RelativeDateTimeFormatter RelativeDateTimeFormatter::getInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter",
			"getInstance",
			"()Landroid/icu/text/RelativeDateTimeFormatter;"
		);
	}
	inline android::icu::text::RelativeDateTimeFormatter RelativeDateTimeFormatter::getInstance(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/RelativeDateTimeFormatter;",
			arg0.object()
		);
	}
	inline android::icu::text::RelativeDateTimeFormatter RelativeDateTimeFormatter::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/RelativeDateTimeFormatter;",
			arg0.object()
		);
	}
	inline android::icu::text::RelativeDateTimeFormatter RelativeDateTimeFormatter::getInstance(android::icu::util::ULocale arg0, android::icu::text::NumberFormat arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter",
			"getInstance",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/NumberFormat;)Landroid/icu/text/RelativeDateTimeFormatter;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::icu::text::RelativeDateTimeFormatter RelativeDateTimeFormatter::getInstance(java::util::Locale arg0, android::icu::text::NumberFormat arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter",
			"getInstance",
			"(Ljava/util/Locale;Landroid/icu/text/NumberFormat;)Landroid/icu/text/RelativeDateTimeFormatter;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::icu::text::RelativeDateTimeFormatter RelativeDateTimeFormatter::getInstance(android::icu::util::ULocale arg0, android::icu::text::NumberFormat arg1, android::icu::text::RelativeDateTimeFormatter_Style arg2, android::icu::text::DisplayContext arg3)
	{
		return callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter",
			"getInstance",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/NumberFormat;Landroid/icu/text/RelativeDateTimeFormatter$Style;Landroid/icu/text/DisplayContext;)Landroid/icu/text/RelativeDateTimeFormatter;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline JString RelativeDateTimeFormatter::combineDateAndTime(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"combineDateAndTime",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JString RelativeDateTimeFormatter::format(android::icu::text::RelativeDateTimeFormatter_Direction arg0, android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit arg1) const
	{
		return callObjectMethod(
			"format",
			"(Landroid/icu/text/RelativeDateTimeFormatter$Direction;Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;)Ljava/lang/String;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JString RelativeDateTimeFormatter::format(jdouble arg0, android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit arg1) const
	{
		return callObjectMethod(
			"format",
			"(DLandroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;)Ljava/lang/String;",
			arg0,
			arg1.object()
		);
	}
	inline JString RelativeDateTimeFormatter::format(jdouble arg0, android::icu::text::RelativeDateTimeFormatter_Direction arg1, android::icu::text::RelativeDateTimeFormatter_RelativeUnit arg2) const
	{
		return callObjectMethod(
			"format",
			"(DLandroid/icu/text/RelativeDateTimeFormatter$Direction;Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;)Ljava/lang/String;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline JString RelativeDateTimeFormatter::formatNumeric(jdouble arg0, android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit arg1) const
	{
		return callObjectMethod(
			"formatNumeric",
			"(DLandroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;)Ljava/lang/String;",
			arg0,
			arg1.object()
		);
	}
	inline android::icu::text::DisplayContext RelativeDateTimeFormatter::getCapitalizationContext() const
	{
		return callObjectMethod(
			"getCapitalizationContext",
			"()Landroid/icu/text/DisplayContext;"
		);
	}
	inline android::icu::text::RelativeDateTimeFormatter_Style RelativeDateTimeFormatter::getFormatStyle() const
	{
		return callObjectMethod(
			"getFormatStyle",
			"()Landroid/icu/text/RelativeDateTimeFormatter$Style;"
		);
	}
	inline android::icu::text::NumberFormat RelativeDateTimeFormatter::getNumberFormat() const
	{
		return callObjectMethod(
			"getNumberFormat",
			"()Landroid/icu/text/NumberFormat;"
		);
	}
} // namespace android::icu::text

// Base class headers

