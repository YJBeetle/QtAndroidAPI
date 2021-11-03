#pragma once

#include "./NumberFormat.hpp"

class JCharArray;
class JArray;
class JBooleanArray;
namespace java::io
{
	class ObjectInputStream;
}
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
		
		// QJniObject forward
		template<typename ...Ts> explicit DecimalFormat(const char *className, const char *sig, Ts...agv) : java::text::NumberFormat(className, sig, std::forward<Ts>(agv)...) {}
		DecimalFormat(QJniObject obj);
		
		// Constructors
		DecimalFormat();
		DecimalFormat(JString arg0);
		DecimalFormat(JString arg0, java::text::DecimalFormatSymbols arg1);
		
		// Methods
		void applyLocalizedPattern(JString arg0);
		void applyPattern(JString arg0);
		JObject clone();
		jboolean equals(JObject arg0);
		java::lang::StringBuffer format(jdouble arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		java::lang::StringBuffer format(JObject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		java::lang::StringBuffer format(jlong arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		JObject formatToCharacterIterator(JObject arg0);
		java::util::Currency getCurrency();
		java::text::DecimalFormatSymbols getDecimalFormatSymbols();
		jint getGroupingSize();
		jint getMaximumFractionDigits();
		jint getMaximumIntegerDigits();
		jint getMinimumFractionDigits();
		jint getMinimumIntegerDigits();
		jint getMultiplier();
		JString getNegativePrefix();
		JString getNegativeSuffix();
		JString getPositivePrefix();
		JString getPositiveSuffix();
		java::math::RoundingMode getRoundingMode();
		jint hashCode();
		jboolean isDecimalSeparatorAlwaysShown();
		jboolean isParseBigDecimal();
		java::lang::Number parse(JString arg0, java::text::ParsePosition arg1);
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
		void setNegativePrefix(JString arg0);
		void setNegativeSuffix(JString arg0);
		void setParseBigDecimal(jboolean arg0);
		void setPositivePrefix(JString arg0);
		void setPositiveSuffix(JString arg0);
		void setRoundingMode(java::math::RoundingMode arg0);
		JString toLocalizedPattern();
		JString toPattern();
	};
} // namespace java::text

