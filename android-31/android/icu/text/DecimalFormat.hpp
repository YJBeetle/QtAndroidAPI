#pragma once

#include "./NumberFormat.hpp"

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
		DecimalFormat(QAndroidJniObject obj);
		
		// Constructors
		DecimalFormat();
		DecimalFormat(JString arg0);
		DecimalFormat(JString arg0, android::icu::text::DecimalFormatSymbols arg1);
		DecimalFormat(JString arg0, android::icu::text::DecimalFormatSymbols arg1, android::icu::text::CurrencyPluralInfo arg2, jint arg3);
		
		// Methods
		void applyLocalizedPattern(JString arg0);
		void applyPattern(JString arg0);
		jboolean areSignificantDigitsUsed();
		JObject clone();
		jboolean equals(JObject arg0);
		java::lang::StringBuffer format(android::icu::math::BigDecimal arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		java::lang::StringBuffer format(android::icu::util::CurrencyAmount arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		java::lang::StringBuffer format(jdouble arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		java::lang::StringBuffer format(java::math::BigDecimal arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		java::lang::StringBuffer format(java::math::BigInteger arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		java::lang::StringBuffer format(jlong arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		JObject formatToCharacterIterator(JObject arg0);
		android::icu::util::Currency getCurrency();
		android::icu::text::CurrencyPluralInfo getCurrencyPluralInfo();
		android::icu::util::Currency_CurrencyUsage getCurrencyUsage();
		android::icu::text::DecimalFormatSymbols getDecimalFormatSymbols();
		jint getFormatWidth();
		jint getGroupingSize();
		java::math::MathContext getMathContext();
		android::icu::math::MathContext getMathContextICU();
		jint getMaximumFractionDigits();
		jint getMaximumIntegerDigits();
		jint getMaximumSignificantDigits();
		jbyte getMinimumExponentDigits();
		jint getMinimumFractionDigits();
		jint getMinimumGroupingDigits();
		jint getMinimumIntegerDigits();
		jint getMinimumSignificantDigits();
		jint getMultiplier();
		JString getNegativePrefix();
		JString getNegativeSuffix();
		jchar getPadCharacter();
		jint getPadPosition();
		jint getParseMaxDigits();
		JString getPositivePrefix();
		JString getPositiveSuffix();
		java::math::BigDecimal getRoundingIncrement();
		jint getRoundingMode();
		jint getSecondaryGroupingSize();
		jint hashCode();
		jboolean isDecimalPatternMatchRequired();
		jboolean isDecimalSeparatorAlwaysShown();
		jboolean isExponentSignAlwaysShown();
		jboolean isGroupingUsed();
		jboolean isParseBigDecimal();
		jboolean isParseCaseSensitive();
		jboolean isParseIntegerOnly();
		jboolean isParseNoExponent();
		jboolean isParseStrict();
		jboolean isScientificNotation();
		jboolean isSignAlwaysShown();
		java::lang::Number parse(JString arg0, java::text::ParsePosition arg1);
		android::icu::util::CurrencyAmount parseCurrency(JString arg0, java::text::ParsePosition arg1);
		void setCurrency(android::icu::util::Currency arg0);
		void setCurrencyPluralInfo(android::icu::text::CurrencyPluralInfo arg0);
		void setCurrencyUsage(android::icu::util::Currency_CurrencyUsage arg0);
		void setDecimalFormatSymbols(android::icu::text::DecimalFormatSymbols arg0);
		void setDecimalPatternMatchRequired(jboolean arg0);
		void setDecimalSeparatorAlwaysShown(jboolean arg0);
		void setExponentSignAlwaysShown(jboolean arg0);
		void setFormatWidth(jint arg0);
		void setGroupingSize(jint arg0);
		void setGroupingUsed(jboolean arg0);
		void setMathContext(java::math::MathContext arg0);
		void setMathContextICU(android::icu::math::MathContext arg0);
		void setMaximumFractionDigits(jint arg0);
		void setMaximumIntegerDigits(jint arg0);
		void setMaximumSignificantDigits(jint arg0);
		void setMinimumExponentDigits(jbyte arg0);
		void setMinimumFractionDigits(jint arg0);
		void setMinimumGroupingDigits(jint arg0);
		void setMinimumIntegerDigits(jint arg0);
		void setMinimumSignificantDigits(jint arg0);
		void setMultiplier(jint arg0);
		void setNegativePrefix(JString arg0);
		void setNegativeSuffix(JString arg0);
		void setPadCharacter(jchar arg0);
		void setPadPosition(jint arg0);
		void setParseBigDecimal(jboolean arg0);
		void setParseCaseSensitive(jboolean arg0);
		void setParseIntegerOnly(jboolean arg0);
		void setParseMaxDigits(jint arg0);
		void setParseNoExponent(jboolean arg0);
		void setParseStrict(jboolean arg0);
		void setPositivePrefix(JString arg0);
		void setPositiveSuffix(JString arg0);
		void setRoundingIncrement(android::icu::math::BigDecimal arg0);
		void setRoundingIncrement(jdouble arg0);
		void setRoundingIncrement(java::math::BigDecimal arg0);
		void setRoundingMode(jint arg0);
		void setScientificNotation(jboolean arg0);
		void setSecondaryGroupingSize(jint arg0);
		void setSignAlwaysShown(jboolean arg0);
		void setSignificantDigitsUsed(jboolean arg0);
		JString toLocalizedPattern();
		JString toPattern();
		JString toString();
	};
} // namespace android::icu::text

