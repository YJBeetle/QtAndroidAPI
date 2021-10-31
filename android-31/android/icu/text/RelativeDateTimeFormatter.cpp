#include "./DisplayContext.hpp"
#include "./NumberFormat.hpp"
#include "./RelativeDateTimeFormatter_AbsoluteUnit.hpp"
#include "./RelativeDateTimeFormatter_Direction.hpp"
#include "./RelativeDateTimeFormatter_FormattedRelativeDateTime.hpp"
#include "./RelativeDateTimeFormatter_RelativeDateTimeUnit.hpp"
#include "./RelativeDateTimeFormatter_RelativeUnit.hpp"
#include "./RelativeDateTimeFormatter_Style.hpp"
#include "../util/ULocale.hpp"
#include "../../../java/util/Locale.hpp"
#include "./RelativeDateTimeFormatter.hpp"

namespace android::icu::text
{
	// Fields
	
	// QAndroidJniObject forward
	RelativeDateTimeFormatter::RelativeDateTimeFormatter(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::RelativeDateTimeFormatter RelativeDateTimeFormatter::getInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter",
			"getInstance",
			"()Landroid/icu/text/RelativeDateTimeFormatter;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter RelativeDateTimeFormatter::getInstance(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/RelativeDateTimeFormatter;",
			arg0.object()
		);
	}
	android::icu::text::RelativeDateTimeFormatter RelativeDateTimeFormatter::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/RelativeDateTimeFormatter;",
			arg0.object()
		);
	}
	android::icu::text::RelativeDateTimeFormatter RelativeDateTimeFormatter::getInstance(android::icu::util::ULocale arg0, android::icu::text::NumberFormat arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter",
			"getInstance",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/NumberFormat;)Landroid/icu/text/RelativeDateTimeFormatter;",
			arg0.object(),
			arg1.object()
		);
	}
	android::icu::text::RelativeDateTimeFormatter RelativeDateTimeFormatter::getInstance(java::util::Locale arg0, android::icu::text::NumberFormat arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter",
			"getInstance",
			"(Ljava/util/Locale;Landroid/icu/text/NumberFormat;)Landroid/icu/text/RelativeDateTimeFormatter;",
			arg0.object(),
			arg1.object()
		);
	}
	android::icu::text::RelativeDateTimeFormatter RelativeDateTimeFormatter::getInstance(android::icu::util::ULocale arg0, android::icu::text::NumberFormat arg1, android::icu::text::RelativeDateTimeFormatter_Style arg2, android::icu::text::DisplayContext arg3)
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
	jstring RelativeDateTimeFormatter::combineDateAndTime(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"combineDateAndTime",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring RelativeDateTimeFormatter::format(android::icu::text::RelativeDateTimeFormatter_Direction arg0, android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit arg1)
	{
		return callObjectMethod(
			"format",
			"(Landroid/icu/text/RelativeDateTimeFormatter$Direction;Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;)Ljava/lang/String;",
			arg0.object(),
			arg1.object()
		).object<jstring>();
	}
	jstring RelativeDateTimeFormatter::format(jdouble arg0, android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit arg1)
	{
		return callObjectMethod(
			"format",
			"(DLandroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;)Ljava/lang/String;",
			arg0,
			arg1.object()
		).object<jstring>();
	}
	jstring RelativeDateTimeFormatter::format(jdouble arg0, android::icu::text::RelativeDateTimeFormatter_Direction arg1, android::icu::text::RelativeDateTimeFormatter_RelativeUnit arg2)
	{
		return callObjectMethod(
			"format",
			"(DLandroid/icu/text/RelativeDateTimeFormatter$Direction;Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;)Ljava/lang/String;",
			arg0,
			arg1.object(),
			arg2.object()
		).object<jstring>();
	}
	jstring RelativeDateTimeFormatter::formatNumeric(jdouble arg0, android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit arg1)
	{
		return callObjectMethod(
			"formatNumeric",
			"(DLandroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;)Ljava/lang/String;",
			arg0,
			arg1.object()
		).object<jstring>();
	}
	android::icu::text::RelativeDateTimeFormatter_FormattedRelativeDateTime RelativeDateTimeFormatter::formatNumericToValue(jdouble arg0, android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit arg1)
	{
		return callObjectMethod(
			"formatNumericToValue",
			"(DLandroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;)Landroid/icu/text/RelativeDateTimeFormatter$FormattedRelativeDateTime;",
			arg0,
			arg1.object()
		);
	}
	android::icu::text::RelativeDateTimeFormatter_FormattedRelativeDateTime RelativeDateTimeFormatter::formatToValue(android::icu::text::RelativeDateTimeFormatter_Direction arg0, android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit arg1)
	{
		return callObjectMethod(
			"formatToValue",
			"(Landroid/icu/text/RelativeDateTimeFormatter$Direction;Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;)Landroid/icu/text/RelativeDateTimeFormatter$FormattedRelativeDateTime;",
			arg0.object(),
			arg1.object()
		);
	}
	android::icu::text::RelativeDateTimeFormatter_FormattedRelativeDateTime RelativeDateTimeFormatter::formatToValue(jdouble arg0, android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit arg1)
	{
		return callObjectMethod(
			"formatToValue",
			"(DLandroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;)Landroid/icu/text/RelativeDateTimeFormatter$FormattedRelativeDateTime;",
			arg0,
			arg1.object()
		);
	}
	android::icu::text::RelativeDateTimeFormatter_FormattedRelativeDateTime RelativeDateTimeFormatter::formatToValue(jdouble arg0, android::icu::text::RelativeDateTimeFormatter_Direction arg1, android::icu::text::RelativeDateTimeFormatter_RelativeUnit arg2)
	{
		return callObjectMethod(
			"formatToValue",
			"(DLandroid/icu/text/RelativeDateTimeFormatter$Direction;Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;)Landroid/icu/text/RelativeDateTimeFormatter$FormattedRelativeDateTime;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	android::icu::text::DisplayContext RelativeDateTimeFormatter::getCapitalizationContext()
	{
		return callObjectMethod(
			"getCapitalizationContext",
			"()Landroid/icu/text/DisplayContext;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_Style RelativeDateTimeFormatter::getFormatStyle()
	{
		return callObjectMethod(
			"getFormatStyle",
			"()Landroid/icu/text/RelativeDateTimeFormatter$Style;"
		);
	}
	android::icu::text::NumberFormat RelativeDateTimeFormatter::getNumberFormat()
	{
		return callObjectMethod(
			"getNumberFormat",
			"()Landroid/icu/text/NumberFormat;"
		);
	}
} // namespace android::icu::text
