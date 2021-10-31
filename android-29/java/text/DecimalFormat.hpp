#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Format.hpp"
#include "./NumberFormat.hpp"

namespace java::io
{
	class ObjectInputStream;
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
	class RoundingMode;
}
namespace java::text
{
	class DecimalFormatSymbols;
}
namespace java::text
{
	class FieldPosition;
}
namespace java::text
{
	class Format_Field;
}
namespace java::text
{
	class ParsePosition;
}
namespace java::util
{
	class Currency;
}

namespace java::text
{
	class DecimalFormat : public java::text::NumberFormat
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DecimalFormat(const char *className, const char *sig, Ts...agv) : java::text::NumberFormat(className, sig, std::forward<Ts>(agv)...) {}
		DecimalFormat(QAndroidJniObject obj);
		
		// Constructors
		DecimalFormat();
		DecimalFormat(jstring arg0);
		DecimalFormat(jstring arg0, java::text::DecimalFormatSymbols arg1);
		
		// Methods
		void applyLocalizedPattern(jstring arg0);
		void applyPattern(jstring arg0);
		jobject clone();
		jboolean equals(jobject arg0);
		QAndroidJniObject format(jdouble arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		QAndroidJniObject format(jobject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		QAndroidJniObject format(jlong arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		QAndroidJniObject formatToCharacterIterator(jobject arg0);
		QAndroidJniObject getCurrency();
		QAndroidJniObject getDecimalFormatSymbols();
		jint getGroupingSize();
		jint getMaximumFractionDigits();
		jint getMaximumIntegerDigits();
		jint getMinimumFractionDigits();
		jint getMinimumIntegerDigits();
		jint getMultiplier();
		jstring getNegativePrefix();
		jstring getNegativeSuffix();
		jstring getPositivePrefix();
		jstring getPositiveSuffix();
		QAndroidJniObject getRoundingMode();
		jint hashCode();
		jboolean isDecimalSeparatorAlwaysShown();
		jboolean isParseBigDecimal();
		QAndroidJniObject parse(jstring arg0, java::text::ParsePosition arg1);
		void setCurrency(java::util::Currency arg0);
		void setDecimalFormatSymbols(java::text::DecimalFormatSymbols arg0);
		void setDecimalSeparatorAlwaysShown(jboolean arg0);
		void setGroupingSize(jint arg0);
		void setGroupingUsed(jboolean arg0);
		void setMaximumFractionDigits(jint arg0);
		void setMaximumIntegerDigits(jint arg0);
		void setMinimumFractionDigits(jint arg0);
		void setMinimumIntegerDigits(jint arg0);
		void setMultiplier(jint arg0);
		void setNegativePrefix(jstring arg0);
		void setNegativeSuffix(jstring arg0);
		void setParseBigDecimal(jboolean arg0);
		void setPositivePrefix(jstring arg0);
		void setPositiveSuffix(jstring arg0);
		void setRoundingMode(java::math::RoundingMode arg0);
		jstring toLocalizedPattern();
		jstring toPattern();
	};
} // namespace java::text

