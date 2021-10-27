#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/text/Format.hpp"
#include "./UFormat.hpp"
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
namespace java::lang
{
	class Number;
}
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
		
		DecimalFormat(QAndroidJniObject obj);
		// Constructors
		DecimalFormat();
		DecimalFormat(jstring &arg0);
		DecimalFormat(const QString &arg0);
		DecimalFormat(jstring &arg0, android::icu::text::DecimalFormatSymbols &arg1);
		DecimalFormat(const QString &arg0, android::icu::text::DecimalFormatSymbols &arg1);
		DecimalFormat(jstring &arg0, android::icu::text::DecimalFormatSymbols &arg1, android::icu::text::CurrencyPluralInfo &arg2, jint &arg3);
		DecimalFormat(const QString &arg0, android::icu::text::DecimalFormatSymbols &arg1, android::icu::text::CurrencyPluralInfo &arg2, jint &arg3);
		
		// Methods
		void applyLocalizedPattern(jstring arg0);
		void applyLocalizedPattern(const QString &arg0);
		void applyPattern(jstring arg0);
		void applyPattern(const QString &arg0);
		jboolean areSignificantDigitsUsed();
		jobject clone();
		jboolean equals(jobject arg0);
		QAndroidJniObject format(android::icu::math::BigDecimal arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		QAndroidJniObject format(android::icu::util::CurrencyAmount arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		QAndroidJniObject format(jdouble arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		QAndroidJniObject format(java::math::BigDecimal arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		QAndroidJniObject format(java::math::BigInteger arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		QAndroidJniObject format(jlong arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		QAndroidJniObject formatToCharacterIterator(jobject arg0);
		QAndroidJniObject getCurrency();
		QAndroidJniObject getCurrencyPluralInfo();
		QAndroidJniObject getCurrencyUsage();
		QAndroidJniObject getDecimalFormatSymbols();
		jint getFormatWidth();
		jint getGroupingSize();
		QAndroidJniObject getMathContext();
		QAndroidJniObject getMathContextICU();
		jint getMaximumFractionDigits();
		jint getMaximumIntegerDigits();
		jint getMaximumSignificantDigits();
		jbyte getMinimumExponentDigits();
		jint getMinimumFractionDigits();
		jint getMinimumIntegerDigits();
		jint getMinimumSignificantDigits();
		jint getMultiplier();
		jstring getNegativePrefix();
		jstring getNegativeSuffix();
		jchar getPadCharacter();
		jint getPadPosition();
		jint getParseMaxDigits();
		jstring getPositivePrefix();
		jstring getPositiveSuffix();
		QAndroidJniObject getRoundingIncrement();
		jint getRoundingMode();
		jint getSecondaryGroupingSize();
		jint hashCode();
		jboolean isDecimalPatternMatchRequired();
		jboolean isDecimalSeparatorAlwaysShown();
		jboolean isExponentSignAlwaysShown();
		jboolean isGroupingUsed();
		jboolean isParseBigDecimal();
		jboolean isParseIntegerOnly();
		jboolean isParseStrict();
		jboolean isScientificNotation();
		QAndroidJniObject parse(jstring arg0, java::text::ParsePosition arg1);
		QAndroidJniObject parse(const QString &arg0, java::text::ParsePosition arg1);
		QAndroidJniObject parseCurrency(jstring arg0, java::text::ParsePosition arg1);
		QAndroidJniObject parseCurrency(const QString &arg0, java::text::ParsePosition arg1);
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
		void setMinimumIntegerDigits(jint arg0);
		void setMinimumSignificantDigits(jint arg0);
		void setMultiplier(jint arg0);
		void setNegativePrefix(jstring arg0);
		void setNegativePrefix(const QString &arg0);
		void setNegativeSuffix(jstring arg0);
		void setNegativeSuffix(const QString &arg0);
		void setPadCharacter(jchar arg0);
		void setPadPosition(jint arg0);
		void setParseBigDecimal(jboolean arg0);
		void setParseIntegerOnly(jboolean arg0);
		void setParseMaxDigits(jint arg0);
		void setParseStrict(jboolean arg0);
		void setPositivePrefix(jstring arg0);
		void setPositivePrefix(const QString &arg0);
		void setPositiveSuffix(jstring arg0);
		void setPositiveSuffix(const QString &arg0);
		void setRoundingIncrement(android::icu::math::BigDecimal arg0);
		void setRoundingIncrement(jdouble arg0);
		void setRoundingIncrement(java::math::BigDecimal arg0);
		void setRoundingMode(jint arg0);
		void setScientificNotation(jboolean arg0);
		void setSecondaryGroupingSize(jint arg0);
		void setSignificantDigitsUsed(jboolean arg0);
		jstring toLocalizedPattern();
		jstring toPattern();
		jstring toString();
	};
} // namespace android::icu::text

