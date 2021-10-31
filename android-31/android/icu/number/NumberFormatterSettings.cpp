#include "./IntegerWidth.hpp"
#include "./Notation.hpp"
#include "./NumberFormatter_DecimalSeparatorDisplay.hpp"
#include "./NumberFormatter_GroupingStrategy.hpp"
#include "./NumberFormatter_SignDisplay.hpp"
#include "./NumberFormatter_UnitWidth.hpp"
#include "./Precision.hpp"
#include "./Scale.hpp"
#include "../text/DecimalFormatSymbols.hpp"
#include "../text/NumberingSystem.hpp"
#include "../util/MeasureUnit.hpp"
#include "../../../java/math/RoundingMode.hpp"
#include "./NumberFormatterSettings.hpp"

namespace android::icu::number
{
	// Fields
	
	// QJniObject forward
	NumberFormatterSettings::NumberFormatterSettings(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::number::NumberFormatterSettings NumberFormatterSettings::decimal(android::icu::number::NumberFormatter_DecimalSeparatorDisplay arg0)
	{
		return callObjectMethod(
			"decimal",
			"(Landroid/icu/number/NumberFormatter$DecimalSeparatorDisplay;)Landroid/icu/number/NumberFormatterSettings;",
			arg0.object()
		);
	}
	jboolean NumberFormatterSettings::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::icu::number::NumberFormatterSettings NumberFormatterSettings::grouping(android::icu::number::NumberFormatter_GroupingStrategy arg0)
	{
		return callObjectMethod(
			"grouping",
			"(Landroid/icu/number/NumberFormatter$GroupingStrategy;)Landroid/icu/number/NumberFormatterSettings;",
			arg0.object()
		);
	}
	jint NumberFormatterSettings::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	android::icu::number::NumberFormatterSettings NumberFormatterSettings::integerWidth(android::icu::number::IntegerWidth arg0)
	{
		return callObjectMethod(
			"integerWidth",
			"(Landroid/icu/number/IntegerWidth;)Landroid/icu/number/NumberFormatterSettings;",
			arg0.object()
		);
	}
	android::icu::number::NumberFormatterSettings NumberFormatterSettings::notation(android::icu::number::Notation arg0)
	{
		return callObjectMethod(
			"notation",
			"(Landroid/icu/number/Notation;)Landroid/icu/number/NumberFormatterSettings;",
			arg0.object()
		);
	}
	android::icu::number::NumberFormatterSettings NumberFormatterSettings::perUnit(android::icu::util::MeasureUnit arg0)
	{
		return callObjectMethod(
			"perUnit",
			"(Landroid/icu/util/MeasureUnit;)Landroid/icu/number/NumberFormatterSettings;",
			arg0.object()
		);
	}
	android::icu::number::NumberFormatterSettings NumberFormatterSettings::precision(android::icu::number::Precision arg0)
	{
		return callObjectMethod(
			"precision",
			"(Landroid/icu/number/Precision;)Landroid/icu/number/NumberFormatterSettings;",
			arg0.object()
		);
	}
	android::icu::number::NumberFormatterSettings NumberFormatterSettings::roundingMode(java::math::RoundingMode arg0)
	{
		return callObjectMethod(
			"roundingMode",
			"(Ljava/math/RoundingMode;)Landroid/icu/number/NumberFormatterSettings;",
			arg0.object()
		);
	}
	android::icu::number::NumberFormatterSettings NumberFormatterSettings::scale(android::icu::number::Scale arg0)
	{
		return callObjectMethod(
			"scale",
			"(Landroid/icu/number/Scale;)Landroid/icu/number/NumberFormatterSettings;",
			arg0.object()
		);
	}
	android::icu::number::NumberFormatterSettings NumberFormatterSettings::sign(android::icu::number::NumberFormatter_SignDisplay arg0)
	{
		return callObjectMethod(
			"sign",
			"(Landroid/icu/number/NumberFormatter$SignDisplay;)Landroid/icu/number/NumberFormatterSettings;",
			arg0.object()
		);
	}
	android::icu::number::NumberFormatterSettings NumberFormatterSettings::symbols(android::icu::text::DecimalFormatSymbols arg0)
	{
		return callObjectMethod(
			"symbols",
			"(Landroid/icu/text/DecimalFormatSymbols;)Landroid/icu/number/NumberFormatterSettings;",
			arg0.object()
		);
	}
	android::icu::number::NumberFormatterSettings NumberFormatterSettings::symbols(android::icu::text::NumberingSystem arg0)
	{
		return callObjectMethod(
			"symbols",
			"(Landroid/icu/text/NumberingSystem;)Landroid/icu/number/NumberFormatterSettings;",
			arg0.object()
		);
	}
	android::icu::number::NumberFormatterSettings NumberFormatterSettings::unit(android::icu::util::MeasureUnit arg0)
	{
		return callObjectMethod(
			"unit",
			"(Landroid/icu/util/MeasureUnit;)Landroid/icu/number/NumberFormatterSettings;",
			arg0.object()
		);
	}
	android::icu::number::NumberFormatterSettings NumberFormatterSettings::unitWidth(android::icu::number::NumberFormatter_UnitWidth arg0)
	{
		return callObjectMethod(
			"unitWidth",
			"(Landroid/icu/number/NumberFormatter$UnitWidth;)Landroid/icu/number/NumberFormatterSettings;",
			arg0.object()
		);
	}
} // namespace android::icu::number

