#pragma once

#include "./NumberFormat.def.hpp"

namespace android::icu::math
{
	class BigDecimal;
}
namespace android::icu::math
{
	class MathContext;
}
namespace android::icu::text
{
	class CurrencyPluralInfo;
}
namespace android::icu::text
{
	class DecimalFormatSymbols;
}
namespace android::icu::util
{
	class Currency;
}
namespace android::icu::util
{
	class Currency_CurrencyUsage;
}
namespace android::icu::util
{
	class CurrencyAmount;
}
class JString;
namespace java::lang
{
	class Number;
}
class JObject;
class JString;
namespace java::lang
{
	class StringBuffer;
}
namespace java::math
{
	class BigDecimal;
}
namespace java::math
{
	class BigInteger;
}
namespace java::math
{
	class MathContext;
}
namespace java::text
{
	class FieldPosition;
}
namespace java::text
{
	class ParsePosition;
}

namespace android::icu::text
{
	class DecimalFormat : public android::icu::text::NumberFormat
	{
	public:
		// Fields
		static jint PAD_AFTER_PREFIX();
		static jint PAD_AFTER_SUFFIX();
		static jint PAD_BEFORE_PREFIX();
		static jint PAD_BEFORE_SUFFIX();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DecimalFormat(const char *className, const char *sig, Ts...agv) : android::icu::text::NumberFormat(className, sig, std::forward<Ts>(agv)...) {}
		DecimalFormat(QAndroidJniObject obj) : android::icu::text::NumberFormat(obj) {}
		
		// Constructors
		DecimalFormat();
		DecimalFormat(JString arg0);
		DecimalFormat(JString arg0, android::icu::text::DecimalFormatSymbols arg1);
		DecimalFormat(JString arg0, android::icu::text::DecimalFormatSymbols arg1, android::icu::text::CurrencyPluralInfo arg2, jint arg3);
		
		// Methods
		void applyLocalizedPattern(JString arg0) const;
		void applyPattern(JString arg0) const;
		jboolean areSignificantDigitsUsed() const;
		JObject clone() const;
		jboolean equals(JObject arg0) const;
		java::lang::StringBuffer format(android::icu::math::BigDecimal arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const;
		java::lang::StringBuffer format(android::icu::util::CurrencyAmount arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const;
		java::lang::StringBuffer format(jdouble arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const;
		java::lang::StringBuffer format(java::math::BigDecimal arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const;
		java::lang::StringBuffer format(java::math::BigInteger arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const;
		java::lang::StringBuffer format(jlong arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const;
		JObject formatToCharacterIterator(JObject arg0) const;
		android::icu::util::Currency getCurrency() const;
		android::icu::text::CurrencyPluralInfo getCurrencyPluralInfo() const;
		android::icu::util::Currency_CurrencyUsage getCurrencyUsage() const;
		android::icu::text::DecimalFormatSymbols getDecimalFormatSymbols() const;
		jint getFormatWidth() const;
		jint getGroupingSize() const;
		java::math::MathContext getMathContext() const;
		android::icu::math::MathContext getMathContextICU() const;
		jint getMaximumFractionDigits() const;
		jint getMaximumIntegerDigits() const;
		jint getMaximumSignificantDigits() const;
		jbyte getMinimumExponentDigits() const;
		jint getMinimumFractionDigits() const;
		jint getMinimumIntegerDigits() const;
		jint getMinimumSignificantDigits() const;
		jint getMultiplier() const;
		JString getNegativePrefix() const;
		JString getNegativeSuffix() const;
		jchar getPadCharacter() const;
		jint getPadPosition() const;
		jint getParseMaxDigits() const;
		JString getPositivePrefix() const;
		JString getPositiveSuffix() const;
		java::math::BigDecimal getRoundingIncrement() const;
		jint getRoundingMode() const;
		jint getSecondaryGroupingSize() const;
		jint hashCode() const;
		jboolean isDecimalPatternMatchRequired() const;
		jboolean isDecimalSeparatorAlwaysShown() const;
		jboolean isExponentSignAlwaysShown() const;
		jboolean isGroupingUsed() const;
		jboolean isParseBigDecimal() const;
		jboolean isParseIntegerOnly() const;
		jboolean isParseStrict() const;
		jboolean isScientificNotation() const;
		java::lang::Number parse(JString arg0, java::text::ParsePosition arg1) const;
		android::icu::util::CurrencyAmount parseCurrency(JString arg0, java::text::ParsePosition arg1) const;
		void setCurrency(android::icu::util::Currency arg0) const;
		void setCurrencyPluralInfo(android::icu::text::CurrencyPluralInfo arg0) const;
		void setCurrencyUsage(android::icu::util::Currency_CurrencyUsage arg0) const;
		void setDecimalFormatSymbols(android::icu::text::DecimalFormatSymbols arg0) const;
		void setDecimalPatternMatchRequired(jboolean arg0) const;
		void setDecimalSeparatorAlwaysShown(jboolean arg0) const;
		void setExponentSignAlwaysShown(jboolean arg0) const;
		void setFormatWidth(jint arg0) const;
		void setGroupingSize(jint arg0) const;
		void setGroupingUsed(jboolean arg0) const;
		void setMathContext(java::math::MathContext arg0) const;
		void setMathContextICU(android::icu::math::MathContext arg0) const;
		void setMaximumFractionDigits(jint arg0) const;
		void setMaximumIntegerDigits(jint arg0) const;
		void setMaximumSignificantDigits(jint arg0) const;
		void setMinimumExponentDigits(jbyte arg0) const;
		void setMinimumFractionDigits(jint arg0) const;
		void setMinimumIntegerDigits(jint arg0) const;
		void setMinimumSignificantDigits(jint arg0) const;
		void setMultiplier(jint arg0) const;
		void setNegativePrefix(JString arg0) const;
		void setNegativeSuffix(JString arg0) const;
		void setPadCharacter(jchar arg0) const;
		void setPadPosition(jint arg0) const;
		void setParseBigDecimal(jboolean arg0) const;
		void setParseIntegerOnly(jboolean arg0) const;
		void setParseMaxDigits(jint arg0) const;
		void setParseStrict(jboolean arg0) const;
		void setPositivePrefix(JString arg0) const;
		void setPositiveSuffix(JString arg0) const;
		void setRoundingIncrement(android::icu::math::BigDecimal arg0) const;
		void setRoundingIncrement(jdouble arg0) const;
		void setRoundingIncrement(java::math::BigDecimal arg0) const;
		void setRoundingMode(jint arg0) const;
		void setScientificNotation(jboolean arg0) const;
		void setSecondaryGroupingSize(jint arg0) const;
		void setSignificantDigitsUsed(jboolean arg0) const;
		JString toLocalizedPattern() const;
		JString toPattern() const;
		JString toString() const;
	};
} // namespace android::icu::text

