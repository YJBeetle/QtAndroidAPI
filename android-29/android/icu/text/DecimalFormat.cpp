#include "../math/BigDecimal.hpp"
#include "../math/MathContext.hpp"
#include "./CurrencyPluralInfo.hpp"
#include "./DecimalFormatSymbols.hpp"
#include "../util/Currency.hpp"
#include "../util/Currency_CurrencyUsage.hpp"
#include "../util/CurrencyAmount.hpp"
#include "../../../JString.hpp"
#include "../../../java/lang/Number.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/lang/StringBuffer.hpp"
#include "../../../java/math/BigDecimal.hpp"
#include "../../../java/math/BigInteger.hpp"
#include "../../../java/math/MathContext.hpp"
#include "../../../java/text/FieldPosition.hpp"
#include "../../../java/text/ParsePosition.hpp"
#include "./DecimalFormat.hpp"

namespace android::icu::text
{
	// Fields
	jint DecimalFormat::PAD_AFTER_PREFIX()
	{
		return getStaticField<jint>(
			"android.icu.text.DecimalFormat",
			"PAD_AFTER_PREFIX"
		);
	}
	jint DecimalFormat::PAD_AFTER_SUFFIX()
	{
		return getStaticField<jint>(
			"android.icu.text.DecimalFormat",
			"PAD_AFTER_SUFFIX"
		);
	}
	jint DecimalFormat::PAD_BEFORE_PREFIX()
	{
		return getStaticField<jint>(
			"android.icu.text.DecimalFormat",
			"PAD_BEFORE_PREFIX"
		);
	}
	jint DecimalFormat::PAD_BEFORE_SUFFIX()
	{
		return getStaticField<jint>(
			"android.icu.text.DecimalFormat",
			"PAD_BEFORE_SUFFIX"
		);
	}
	
	// QJniObject forward
	DecimalFormat::DecimalFormat(QJniObject obj) : android::icu::text::NumberFormat(obj) {}
	
	// Constructors
	DecimalFormat::DecimalFormat()
		: android::icu::text::NumberFormat(
			"android.icu.text.DecimalFormat",
			"()V"
		) {}
	DecimalFormat::DecimalFormat(JString arg0)
		: android::icu::text::NumberFormat(
			"android.icu.text.DecimalFormat",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	DecimalFormat::DecimalFormat(JString arg0, android::icu::text::DecimalFormatSymbols arg1)
		: android::icu::text::NumberFormat(
			"android.icu.text.DecimalFormat",
			"(Ljava/lang/String;Landroid/icu/text/DecimalFormatSymbols;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	DecimalFormat::DecimalFormat(JString arg0, android::icu::text::DecimalFormatSymbols arg1, android::icu::text::CurrencyPluralInfo arg2, jint arg3)
		: android::icu::text::NumberFormat(
			"android.icu.text.DecimalFormat",
			"(Ljava/lang/String;Landroid/icu/text/DecimalFormatSymbols;Landroid/icu/text/CurrencyPluralInfo;I)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3
		) {}
	
	// Methods
	void DecimalFormat::applyLocalizedPattern(JString arg0)
	{
		callMethod<void>(
			"applyLocalizedPattern",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DecimalFormat::applyPattern(JString arg0)
	{
		callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	jboolean DecimalFormat::areSignificantDigitsUsed()
	{
		return callMethod<jboolean>(
			"areSignificantDigitsUsed",
			"()Z"
		);
	}
	JObject DecimalFormat::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	jboolean DecimalFormat::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	java::lang::StringBuffer DecimalFormat::format(android::icu::math::BigDecimal arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return callObjectMethod(
			"format",
			"(Landroid/icu/math/BigDecimal;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	java::lang::StringBuffer DecimalFormat::format(android::icu::util::CurrencyAmount arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return callObjectMethod(
			"format",
			"(Landroid/icu/util/CurrencyAmount;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	java::lang::StringBuffer DecimalFormat::format(jdouble arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return callObjectMethod(
			"format",
			"(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	java::lang::StringBuffer DecimalFormat::format(java::math::BigDecimal arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return callObjectMethod(
			"format",
			"(Ljava/math/BigDecimal;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	java::lang::StringBuffer DecimalFormat::format(java::math::BigInteger arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return callObjectMethod(
			"format",
			"(Ljava/math/BigInteger;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	java::lang::StringBuffer DecimalFormat::format(jlong arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return callObjectMethod(
			"format",
			"(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	JObject DecimalFormat::formatToCharacterIterator(JObject arg0)
	{
		return callObjectMethod(
			"formatToCharacterIterator",
			"(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;",
			arg0.object<jobject>()
		);
	}
	android::icu::util::Currency DecimalFormat::getCurrency()
	{
		return callObjectMethod(
			"getCurrency",
			"()Landroid/icu/util/Currency;"
		);
	}
	android::icu::text::CurrencyPluralInfo DecimalFormat::getCurrencyPluralInfo()
	{
		return callObjectMethod(
			"getCurrencyPluralInfo",
			"()Landroid/icu/text/CurrencyPluralInfo;"
		);
	}
	android::icu::util::Currency_CurrencyUsage DecimalFormat::getCurrencyUsage()
	{
		return callObjectMethod(
			"getCurrencyUsage",
			"()Landroid/icu/util/Currency$CurrencyUsage;"
		);
	}
	android::icu::text::DecimalFormatSymbols DecimalFormat::getDecimalFormatSymbols()
	{
		return callObjectMethod(
			"getDecimalFormatSymbols",
			"()Landroid/icu/text/DecimalFormatSymbols;"
		);
	}
	jint DecimalFormat::getFormatWidth()
	{
		return callMethod<jint>(
			"getFormatWidth",
			"()I"
		);
	}
	jint DecimalFormat::getGroupingSize()
	{
		return callMethod<jint>(
			"getGroupingSize",
			"()I"
		);
	}
	java::math::MathContext DecimalFormat::getMathContext()
	{
		return callObjectMethod(
			"getMathContext",
			"()Ljava/math/MathContext;"
		);
	}
	android::icu::math::MathContext DecimalFormat::getMathContextICU()
	{
		return callObjectMethod(
			"getMathContextICU",
			"()Landroid/icu/math/MathContext;"
		);
	}
	jint DecimalFormat::getMaximumFractionDigits()
	{
		return callMethod<jint>(
			"getMaximumFractionDigits",
			"()I"
		);
	}
	jint DecimalFormat::getMaximumIntegerDigits()
	{
		return callMethod<jint>(
			"getMaximumIntegerDigits",
			"()I"
		);
	}
	jint DecimalFormat::getMaximumSignificantDigits()
	{
		return callMethod<jint>(
			"getMaximumSignificantDigits",
			"()I"
		);
	}
	jbyte DecimalFormat::getMinimumExponentDigits()
	{
		return callMethod<jbyte>(
			"getMinimumExponentDigits",
			"()B"
		);
	}
	jint DecimalFormat::getMinimumFractionDigits()
	{
		return callMethod<jint>(
			"getMinimumFractionDigits",
			"()I"
		);
	}
	jint DecimalFormat::getMinimumIntegerDigits()
	{
		return callMethod<jint>(
			"getMinimumIntegerDigits",
			"()I"
		);
	}
	jint DecimalFormat::getMinimumSignificantDigits()
	{
		return callMethod<jint>(
			"getMinimumSignificantDigits",
			"()I"
		);
	}
	jint DecimalFormat::getMultiplier()
	{
		return callMethod<jint>(
			"getMultiplier",
			"()I"
		);
	}
	JString DecimalFormat::getNegativePrefix()
	{
		return callObjectMethod(
			"getNegativePrefix",
			"()Ljava/lang/String;"
		);
	}
	JString DecimalFormat::getNegativeSuffix()
	{
		return callObjectMethod(
			"getNegativeSuffix",
			"()Ljava/lang/String;"
		);
	}
	jchar DecimalFormat::getPadCharacter()
	{
		return callMethod<jchar>(
			"getPadCharacter",
			"()C"
		);
	}
	jint DecimalFormat::getPadPosition()
	{
		return callMethod<jint>(
			"getPadPosition",
			"()I"
		);
	}
	jint DecimalFormat::getParseMaxDigits()
	{
		return callMethod<jint>(
			"getParseMaxDigits",
			"()I"
		);
	}
	JString DecimalFormat::getPositivePrefix()
	{
		return callObjectMethod(
			"getPositivePrefix",
			"()Ljava/lang/String;"
		);
	}
	JString DecimalFormat::getPositiveSuffix()
	{
		return callObjectMethod(
			"getPositiveSuffix",
			"()Ljava/lang/String;"
		);
	}
	java::math::BigDecimal DecimalFormat::getRoundingIncrement()
	{
		return callObjectMethod(
			"getRoundingIncrement",
			"()Ljava/math/BigDecimal;"
		);
	}
	jint DecimalFormat::getRoundingMode()
	{
		return callMethod<jint>(
			"getRoundingMode",
			"()I"
		);
	}
	jint DecimalFormat::getSecondaryGroupingSize()
	{
		return callMethod<jint>(
			"getSecondaryGroupingSize",
			"()I"
		);
	}
	jint DecimalFormat::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean DecimalFormat::isDecimalPatternMatchRequired()
	{
		return callMethod<jboolean>(
			"isDecimalPatternMatchRequired",
			"()Z"
		);
	}
	jboolean DecimalFormat::isDecimalSeparatorAlwaysShown()
	{
		return callMethod<jboolean>(
			"isDecimalSeparatorAlwaysShown",
			"()Z"
		);
	}
	jboolean DecimalFormat::isExponentSignAlwaysShown()
	{
		return callMethod<jboolean>(
			"isExponentSignAlwaysShown",
			"()Z"
		);
	}
	jboolean DecimalFormat::isGroupingUsed()
	{
		return callMethod<jboolean>(
			"isGroupingUsed",
			"()Z"
		);
	}
	jboolean DecimalFormat::isParseBigDecimal()
	{
		return callMethod<jboolean>(
			"isParseBigDecimal",
			"()Z"
		);
	}
	jboolean DecimalFormat::isParseIntegerOnly()
	{
		return callMethod<jboolean>(
			"isParseIntegerOnly",
			"()Z"
		);
	}
	jboolean DecimalFormat::isParseStrict()
	{
		return callMethod<jboolean>(
			"isParseStrict",
			"()Z"
		);
	}
	jboolean DecimalFormat::isScientificNotation()
	{
		return callMethod<jboolean>(
			"isScientificNotation",
			"()Z"
		);
	}
	java::lang::Number DecimalFormat::parse(JString arg0, java::text::ParsePosition arg1)
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	android::icu::util::CurrencyAmount DecimalFormat::parseCurrency(JString arg0, java::text::ParsePosition arg1)
	{
		return callObjectMethod(
			"parseCurrency",
			"(Ljava/lang/CharSequence;Ljava/text/ParsePosition;)Landroid/icu/util/CurrencyAmount;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void DecimalFormat::setCurrency(android::icu::util::Currency arg0)
	{
		callMethod<void>(
			"setCurrency",
			"(Landroid/icu/util/Currency;)V",
			arg0.object()
		);
	}
	void DecimalFormat::setCurrencyPluralInfo(android::icu::text::CurrencyPluralInfo arg0)
	{
		callMethod<void>(
			"setCurrencyPluralInfo",
			"(Landroid/icu/text/CurrencyPluralInfo;)V",
			arg0.object()
		);
	}
	void DecimalFormat::setCurrencyUsage(android::icu::util::Currency_CurrencyUsage arg0)
	{
		callMethod<void>(
			"setCurrencyUsage",
			"(Landroid/icu/util/Currency$CurrencyUsage;)V",
			arg0.object()
		);
	}
	void DecimalFormat::setDecimalFormatSymbols(android::icu::text::DecimalFormatSymbols arg0)
	{
		callMethod<void>(
			"setDecimalFormatSymbols",
			"(Landroid/icu/text/DecimalFormatSymbols;)V",
			arg0.object()
		);
	}
	void DecimalFormat::setDecimalPatternMatchRequired(jboolean arg0)
	{
		callMethod<void>(
			"setDecimalPatternMatchRequired",
			"(Z)V",
			arg0
		);
	}
	void DecimalFormat::setDecimalSeparatorAlwaysShown(jboolean arg0)
	{
		callMethod<void>(
			"setDecimalSeparatorAlwaysShown",
			"(Z)V",
			arg0
		);
	}
	void DecimalFormat::setExponentSignAlwaysShown(jboolean arg0)
	{
		callMethod<void>(
			"setExponentSignAlwaysShown",
			"(Z)V",
			arg0
		);
	}
	void DecimalFormat::setFormatWidth(jint arg0)
	{
		callMethod<void>(
			"setFormatWidth",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setGroupingSize(jint arg0)
	{
		callMethod<void>(
			"setGroupingSize",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setGroupingUsed(jboolean arg0)
	{
		callMethod<void>(
			"setGroupingUsed",
			"(Z)V",
			arg0
		);
	}
	void DecimalFormat::setMathContext(java::math::MathContext arg0)
	{
		callMethod<void>(
			"setMathContext",
			"(Ljava/math/MathContext;)V",
			arg0.object()
		);
	}
	void DecimalFormat::setMathContextICU(android::icu::math::MathContext arg0)
	{
		callMethod<void>(
			"setMathContextICU",
			"(Landroid/icu/math/MathContext;)V",
			arg0.object()
		);
	}
	void DecimalFormat::setMaximumFractionDigits(jint arg0)
	{
		callMethod<void>(
			"setMaximumFractionDigits",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setMaximumIntegerDigits(jint arg0)
	{
		callMethod<void>(
			"setMaximumIntegerDigits",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setMaximumSignificantDigits(jint arg0)
	{
		callMethod<void>(
			"setMaximumSignificantDigits",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setMinimumExponentDigits(jbyte arg0)
	{
		callMethod<void>(
			"setMinimumExponentDigits",
			"(B)V",
			arg0
		);
	}
	void DecimalFormat::setMinimumFractionDigits(jint arg0)
	{
		callMethod<void>(
			"setMinimumFractionDigits",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setMinimumIntegerDigits(jint arg0)
	{
		callMethod<void>(
			"setMinimumIntegerDigits",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setMinimumSignificantDigits(jint arg0)
	{
		callMethod<void>(
			"setMinimumSignificantDigits",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setMultiplier(jint arg0)
	{
		callMethod<void>(
			"setMultiplier",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setNegativePrefix(JString arg0)
	{
		callMethod<void>(
			"setNegativePrefix",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DecimalFormat::setNegativeSuffix(JString arg0)
	{
		callMethod<void>(
			"setNegativeSuffix",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DecimalFormat::setPadCharacter(jchar arg0)
	{
		callMethod<void>(
			"setPadCharacter",
			"(C)V",
			arg0
		);
	}
	void DecimalFormat::setPadPosition(jint arg0)
	{
		callMethod<void>(
			"setPadPosition",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setParseBigDecimal(jboolean arg0)
	{
		callMethod<void>(
			"setParseBigDecimal",
			"(Z)V",
			arg0
		);
	}
	void DecimalFormat::setParseIntegerOnly(jboolean arg0)
	{
		callMethod<void>(
			"setParseIntegerOnly",
			"(Z)V",
			arg0
		);
	}
	void DecimalFormat::setParseMaxDigits(jint arg0)
	{
		callMethod<void>(
			"setParseMaxDigits",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setParseStrict(jboolean arg0)
	{
		callMethod<void>(
			"setParseStrict",
			"(Z)V",
			arg0
		);
	}
	void DecimalFormat::setPositivePrefix(JString arg0)
	{
		callMethod<void>(
			"setPositivePrefix",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DecimalFormat::setPositiveSuffix(JString arg0)
	{
		callMethod<void>(
			"setPositiveSuffix",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DecimalFormat::setRoundingIncrement(android::icu::math::BigDecimal arg0)
	{
		callMethod<void>(
			"setRoundingIncrement",
			"(Landroid/icu/math/BigDecimal;)V",
			arg0.object()
		);
	}
	void DecimalFormat::setRoundingIncrement(jdouble arg0)
	{
		callMethod<void>(
			"setRoundingIncrement",
			"(D)V",
			arg0
		);
	}
	void DecimalFormat::setRoundingIncrement(java::math::BigDecimal arg0)
	{
		callMethod<void>(
			"setRoundingIncrement",
			"(Ljava/math/BigDecimal;)V",
			arg0.object()
		);
	}
	void DecimalFormat::setRoundingMode(jint arg0)
	{
		callMethod<void>(
			"setRoundingMode",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setScientificNotation(jboolean arg0)
	{
		callMethod<void>(
			"setScientificNotation",
			"(Z)V",
			arg0
		);
	}
	void DecimalFormat::setSecondaryGroupingSize(jint arg0)
	{
		callMethod<void>(
			"setSecondaryGroupingSize",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setSignificantDigitsUsed(jboolean arg0)
	{
		callMethod<void>(
			"setSignificantDigitsUsed",
			"(Z)V",
			arg0
		);
	}
	JString DecimalFormat::toLocalizedPattern()
	{
		return callObjectMethod(
			"toLocalizedPattern",
			"()Ljava/lang/String;"
		);
	}
	JString DecimalFormat::toPattern()
	{
		return callObjectMethod(
			"toPattern",
			"()Ljava/lang/String;"
		);
	}
	JString DecimalFormat::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::text

