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
	
	// QAndroidJniObject forward
	DecimalFormat::DecimalFormat(QAndroidJniObject obj) : android::icu::text::NumberFormat(obj) {}
	
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
	void DecimalFormat::applyLocalizedPattern(JString arg0) const
	{
		callMethod<void>(
			"applyLocalizedPattern",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DecimalFormat::applyPattern(JString arg0) const
	{
		callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	jboolean DecimalFormat::areSignificantDigitsUsed() const
	{
		return callMethod<jboolean>(
			"areSignificantDigitsUsed",
			"()Z"
		);
	}
	JObject DecimalFormat::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	jboolean DecimalFormat::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	java::lang::StringBuffer DecimalFormat::format(android::icu::math::BigDecimal arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const
	{
		return callObjectMethod(
			"format",
			"(Landroid/icu/math/BigDecimal;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	java::lang::StringBuffer DecimalFormat::format(android::icu::util::CurrencyAmount arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const
	{
		return callObjectMethod(
			"format",
			"(Landroid/icu/util/CurrencyAmount;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	java::lang::StringBuffer DecimalFormat::format(jdouble arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const
	{
		return callObjectMethod(
			"format",
			"(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	java::lang::StringBuffer DecimalFormat::format(java::math::BigDecimal arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/math/BigDecimal;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	java::lang::StringBuffer DecimalFormat::format(java::math::BigInteger arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/math/BigInteger;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	java::lang::StringBuffer DecimalFormat::format(jlong arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const
	{
		return callObjectMethod(
			"format",
			"(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	JObject DecimalFormat::formatToCharacterIterator(JObject arg0) const
	{
		return callObjectMethod(
			"formatToCharacterIterator",
			"(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;",
			arg0.object<jobject>()
		);
	}
	android::icu::util::Currency DecimalFormat::getCurrency() const
	{
		return callObjectMethod(
			"getCurrency",
			"()Landroid/icu/util/Currency;"
		);
	}
	android::icu::text::CurrencyPluralInfo DecimalFormat::getCurrencyPluralInfo() const
	{
		return callObjectMethod(
			"getCurrencyPluralInfo",
			"()Landroid/icu/text/CurrencyPluralInfo;"
		);
	}
	android::icu::util::Currency_CurrencyUsage DecimalFormat::getCurrencyUsage() const
	{
		return callObjectMethod(
			"getCurrencyUsage",
			"()Landroid/icu/util/Currency$CurrencyUsage;"
		);
	}
	android::icu::text::DecimalFormatSymbols DecimalFormat::getDecimalFormatSymbols() const
	{
		return callObjectMethod(
			"getDecimalFormatSymbols",
			"()Landroid/icu/text/DecimalFormatSymbols;"
		);
	}
	jint DecimalFormat::getFormatWidth() const
	{
		return callMethod<jint>(
			"getFormatWidth",
			"()I"
		);
	}
	jint DecimalFormat::getGroupingSize() const
	{
		return callMethod<jint>(
			"getGroupingSize",
			"()I"
		);
	}
	java::math::MathContext DecimalFormat::getMathContext() const
	{
		return callObjectMethod(
			"getMathContext",
			"()Ljava/math/MathContext;"
		);
	}
	android::icu::math::MathContext DecimalFormat::getMathContextICU() const
	{
		return callObjectMethod(
			"getMathContextICU",
			"()Landroid/icu/math/MathContext;"
		);
	}
	jint DecimalFormat::getMaximumFractionDigits() const
	{
		return callMethod<jint>(
			"getMaximumFractionDigits",
			"()I"
		);
	}
	jint DecimalFormat::getMaximumIntegerDigits() const
	{
		return callMethod<jint>(
			"getMaximumIntegerDigits",
			"()I"
		);
	}
	jint DecimalFormat::getMaximumSignificantDigits() const
	{
		return callMethod<jint>(
			"getMaximumSignificantDigits",
			"()I"
		);
	}
	jbyte DecimalFormat::getMinimumExponentDigits() const
	{
		return callMethod<jbyte>(
			"getMinimumExponentDigits",
			"()B"
		);
	}
	jint DecimalFormat::getMinimumFractionDigits() const
	{
		return callMethod<jint>(
			"getMinimumFractionDigits",
			"()I"
		);
	}
	jint DecimalFormat::getMinimumGroupingDigits() const
	{
		return callMethod<jint>(
			"getMinimumGroupingDigits",
			"()I"
		);
	}
	jint DecimalFormat::getMinimumIntegerDigits() const
	{
		return callMethod<jint>(
			"getMinimumIntegerDigits",
			"()I"
		);
	}
	jint DecimalFormat::getMinimumSignificantDigits() const
	{
		return callMethod<jint>(
			"getMinimumSignificantDigits",
			"()I"
		);
	}
	jint DecimalFormat::getMultiplier() const
	{
		return callMethod<jint>(
			"getMultiplier",
			"()I"
		);
	}
	JString DecimalFormat::getNegativePrefix() const
	{
		return callObjectMethod(
			"getNegativePrefix",
			"()Ljava/lang/String;"
		);
	}
	JString DecimalFormat::getNegativeSuffix() const
	{
		return callObjectMethod(
			"getNegativeSuffix",
			"()Ljava/lang/String;"
		);
	}
	jchar DecimalFormat::getPadCharacter() const
	{
		return callMethod<jchar>(
			"getPadCharacter",
			"()C"
		);
	}
	jint DecimalFormat::getPadPosition() const
	{
		return callMethod<jint>(
			"getPadPosition",
			"()I"
		);
	}
	jint DecimalFormat::getParseMaxDigits() const
	{
		return callMethod<jint>(
			"getParseMaxDigits",
			"()I"
		);
	}
	JString DecimalFormat::getPositivePrefix() const
	{
		return callObjectMethod(
			"getPositivePrefix",
			"()Ljava/lang/String;"
		);
	}
	JString DecimalFormat::getPositiveSuffix() const
	{
		return callObjectMethod(
			"getPositiveSuffix",
			"()Ljava/lang/String;"
		);
	}
	java::math::BigDecimal DecimalFormat::getRoundingIncrement() const
	{
		return callObjectMethod(
			"getRoundingIncrement",
			"()Ljava/math/BigDecimal;"
		);
	}
	jint DecimalFormat::getRoundingMode() const
	{
		return callMethod<jint>(
			"getRoundingMode",
			"()I"
		);
	}
	jint DecimalFormat::getSecondaryGroupingSize() const
	{
		return callMethod<jint>(
			"getSecondaryGroupingSize",
			"()I"
		);
	}
	jint DecimalFormat::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean DecimalFormat::isDecimalPatternMatchRequired() const
	{
		return callMethod<jboolean>(
			"isDecimalPatternMatchRequired",
			"()Z"
		);
	}
	jboolean DecimalFormat::isDecimalSeparatorAlwaysShown() const
	{
		return callMethod<jboolean>(
			"isDecimalSeparatorAlwaysShown",
			"()Z"
		);
	}
	jboolean DecimalFormat::isExponentSignAlwaysShown() const
	{
		return callMethod<jboolean>(
			"isExponentSignAlwaysShown",
			"()Z"
		);
	}
	jboolean DecimalFormat::isGroupingUsed() const
	{
		return callMethod<jboolean>(
			"isGroupingUsed",
			"()Z"
		);
	}
	jboolean DecimalFormat::isParseBigDecimal() const
	{
		return callMethod<jboolean>(
			"isParseBigDecimal",
			"()Z"
		);
	}
	jboolean DecimalFormat::isParseCaseSensitive() const
	{
		return callMethod<jboolean>(
			"isParseCaseSensitive",
			"()Z"
		);
	}
	jboolean DecimalFormat::isParseIntegerOnly() const
	{
		return callMethod<jboolean>(
			"isParseIntegerOnly",
			"()Z"
		);
	}
	jboolean DecimalFormat::isParseNoExponent() const
	{
		return callMethod<jboolean>(
			"isParseNoExponent",
			"()Z"
		);
	}
	jboolean DecimalFormat::isParseStrict() const
	{
		return callMethod<jboolean>(
			"isParseStrict",
			"()Z"
		);
	}
	jboolean DecimalFormat::isScientificNotation() const
	{
		return callMethod<jboolean>(
			"isScientificNotation",
			"()Z"
		);
	}
	jboolean DecimalFormat::isSignAlwaysShown() const
	{
		return callMethod<jboolean>(
			"isSignAlwaysShown",
			"()Z"
		);
	}
	java::lang::Number DecimalFormat::parse(JString arg0, java::text::ParsePosition arg1) const
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	android::icu::util::CurrencyAmount DecimalFormat::parseCurrency(JString arg0, java::text::ParsePosition arg1) const
	{
		return callObjectMethod(
			"parseCurrency",
			"(Ljava/lang/CharSequence;Ljava/text/ParsePosition;)Landroid/icu/util/CurrencyAmount;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void DecimalFormat::setCurrency(android::icu::util::Currency arg0) const
	{
		callMethod<void>(
			"setCurrency",
			"(Landroid/icu/util/Currency;)V",
			arg0.object()
		);
	}
	void DecimalFormat::setCurrencyPluralInfo(android::icu::text::CurrencyPluralInfo arg0) const
	{
		callMethod<void>(
			"setCurrencyPluralInfo",
			"(Landroid/icu/text/CurrencyPluralInfo;)V",
			arg0.object()
		);
	}
	void DecimalFormat::setCurrencyUsage(android::icu::util::Currency_CurrencyUsage arg0) const
	{
		callMethod<void>(
			"setCurrencyUsage",
			"(Landroid/icu/util/Currency$CurrencyUsage;)V",
			arg0.object()
		);
	}
	void DecimalFormat::setDecimalFormatSymbols(android::icu::text::DecimalFormatSymbols arg0) const
	{
		callMethod<void>(
			"setDecimalFormatSymbols",
			"(Landroid/icu/text/DecimalFormatSymbols;)V",
			arg0.object()
		);
	}
	void DecimalFormat::setDecimalPatternMatchRequired(jboolean arg0) const
	{
		callMethod<void>(
			"setDecimalPatternMatchRequired",
			"(Z)V",
			arg0
		);
	}
	void DecimalFormat::setDecimalSeparatorAlwaysShown(jboolean arg0) const
	{
		callMethod<void>(
			"setDecimalSeparatorAlwaysShown",
			"(Z)V",
			arg0
		);
	}
	void DecimalFormat::setExponentSignAlwaysShown(jboolean arg0) const
	{
		callMethod<void>(
			"setExponentSignAlwaysShown",
			"(Z)V",
			arg0
		);
	}
	void DecimalFormat::setFormatWidth(jint arg0) const
	{
		callMethod<void>(
			"setFormatWidth",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setGroupingSize(jint arg0) const
	{
		callMethod<void>(
			"setGroupingSize",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setGroupingUsed(jboolean arg0) const
	{
		callMethod<void>(
			"setGroupingUsed",
			"(Z)V",
			arg0
		);
	}
	void DecimalFormat::setMathContext(java::math::MathContext arg0) const
	{
		callMethod<void>(
			"setMathContext",
			"(Ljava/math/MathContext;)V",
			arg0.object()
		);
	}
	void DecimalFormat::setMathContextICU(android::icu::math::MathContext arg0) const
	{
		callMethod<void>(
			"setMathContextICU",
			"(Landroid/icu/math/MathContext;)V",
			arg0.object()
		);
	}
	void DecimalFormat::setMaximumFractionDigits(jint arg0) const
	{
		callMethod<void>(
			"setMaximumFractionDigits",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setMaximumIntegerDigits(jint arg0) const
	{
		callMethod<void>(
			"setMaximumIntegerDigits",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setMaximumSignificantDigits(jint arg0) const
	{
		callMethod<void>(
			"setMaximumSignificantDigits",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setMinimumExponentDigits(jbyte arg0) const
	{
		callMethod<void>(
			"setMinimumExponentDigits",
			"(B)V",
			arg0
		);
	}
	void DecimalFormat::setMinimumFractionDigits(jint arg0) const
	{
		callMethod<void>(
			"setMinimumFractionDigits",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setMinimumGroupingDigits(jint arg0) const
	{
		callMethod<void>(
			"setMinimumGroupingDigits",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setMinimumIntegerDigits(jint arg0) const
	{
		callMethod<void>(
			"setMinimumIntegerDigits",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setMinimumSignificantDigits(jint arg0) const
	{
		callMethod<void>(
			"setMinimumSignificantDigits",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setMultiplier(jint arg0) const
	{
		callMethod<void>(
			"setMultiplier",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setNegativePrefix(JString arg0) const
	{
		callMethod<void>(
			"setNegativePrefix",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DecimalFormat::setNegativeSuffix(JString arg0) const
	{
		callMethod<void>(
			"setNegativeSuffix",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DecimalFormat::setPadCharacter(jchar arg0) const
	{
		callMethod<void>(
			"setPadCharacter",
			"(C)V",
			arg0
		);
	}
	void DecimalFormat::setPadPosition(jint arg0) const
	{
		callMethod<void>(
			"setPadPosition",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setParseBigDecimal(jboolean arg0) const
	{
		callMethod<void>(
			"setParseBigDecimal",
			"(Z)V",
			arg0
		);
	}
	void DecimalFormat::setParseCaseSensitive(jboolean arg0) const
	{
		callMethod<void>(
			"setParseCaseSensitive",
			"(Z)V",
			arg0
		);
	}
	void DecimalFormat::setParseIntegerOnly(jboolean arg0) const
	{
		callMethod<void>(
			"setParseIntegerOnly",
			"(Z)V",
			arg0
		);
	}
	void DecimalFormat::setParseMaxDigits(jint arg0) const
	{
		callMethod<void>(
			"setParseMaxDigits",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setParseNoExponent(jboolean arg0) const
	{
		callMethod<void>(
			"setParseNoExponent",
			"(Z)V",
			arg0
		);
	}
	void DecimalFormat::setParseStrict(jboolean arg0) const
	{
		callMethod<void>(
			"setParseStrict",
			"(Z)V",
			arg0
		);
	}
	void DecimalFormat::setPositivePrefix(JString arg0) const
	{
		callMethod<void>(
			"setPositivePrefix",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DecimalFormat::setPositiveSuffix(JString arg0) const
	{
		callMethod<void>(
			"setPositiveSuffix",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DecimalFormat::setRoundingIncrement(android::icu::math::BigDecimal arg0) const
	{
		callMethod<void>(
			"setRoundingIncrement",
			"(Landroid/icu/math/BigDecimal;)V",
			arg0.object()
		);
	}
	void DecimalFormat::setRoundingIncrement(jdouble arg0) const
	{
		callMethod<void>(
			"setRoundingIncrement",
			"(D)V",
			arg0
		);
	}
	void DecimalFormat::setRoundingIncrement(java::math::BigDecimal arg0) const
	{
		callMethod<void>(
			"setRoundingIncrement",
			"(Ljava/math/BigDecimal;)V",
			arg0.object()
		);
	}
	void DecimalFormat::setRoundingMode(jint arg0) const
	{
		callMethod<void>(
			"setRoundingMode",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setScientificNotation(jboolean arg0) const
	{
		callMethod<void>(
			"setScientificNotation",
			"(Z)V",
			arg0
		);
	}
	void DecimalFormat::setSecondaryGroupingSize(jint arg0) const
	{
		callMethod<void>(
			"setSecondaryGroupingSize",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setSignAlwaysShown(jboolean arg0) const
	{
		callMethod<void>(
			"setSignAlwaysShown",
			"(Z)V",
			arg0
		);
	}
	void DecimalFormat::setSignificantDigitsUsed(jboolean arg0) const
	{
		callMethod<void>(
			"setSignificantDigitsUsed",
			"(Z)V",
			arg0
		);
	}
	JString DecimalFormat::toLocalizedPattern() const
	{
		return callObjectMethod(
			"toLocalizedPattern",
			"()Ljava/lang/String;"
		);
	}
	JString DecimalFormat::toPattern() const
	{
		return callObjectMethod(
			"toPattern",
			"()Ljava/lang/String;"
		);
	}
	JString DecimalFormat::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::text

