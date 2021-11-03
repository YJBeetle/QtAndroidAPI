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
		void applyLocalizedPattern(JString arg0) const;
		void applyPattern(JString arg0) const;
		JObject clone() const;
		jboolean equals(JObject arg0) const;
		java::lang::StringBuffer format(jdouble arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const;
		java::lang::StringBuffer format(JObject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const;
		java::lang::StringBuffer format(jlong arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const;
		JObject formatToCharacterIterator(JObject arg0) const;
		java::util::Currency getCurrency() const;
		java::text::DecimalFormatSymbols getDecimalFormatSymbols() const;
		jint getGroupingSize() const;
		jint getMaximumFractionDigits() const;
		jint getMaximumIntegerDigits() const;
		jint getMinimumFractionDigits() const;
		jint getMinimumIntegerDigits() const;
		jint getMultiplier() const;
		JString getNegativePrefix() const;
		JString getNegativeSuffix() const;
		JString getPositivePrefix() const;
		JString getPositiveSuffix() const;
		java::math::RoundingMode getRoundingMode() const;
		jint hashCode() const;
		jboolean isDecimalSeparatorAlwaysShown() const;
		jboolean isParseBigDecimal() const;
		java::lang::Number parse(JString arg0, java::text::ParsePosition arg1) const;
		void setCurrency(java::util::Currency arg0) const;
		void setDecimalFormatSymbols(java::text::DecimalFormatSymbols arg0) const;
		void setDecimalSeparatorAlwaysShown(jboolean arg0) const;
		void setGroupingSize(jint arg0) const;
		void setGroupingUsed(jboolean arg0) const;
		void setMaximumFractionDigits(jint arg0) const;
		void setMaximumIntegerDigits(jint arg0) const;
		void setMinimumFractionDigits(jint arg0) const;
		void setMinimumIntegerDigits(jint arg0) const;
		void setMultiplier(jint arg0) const;
		void setNegativePrefix(JString arg0) const;
		void setNegativeSuffix(JString arg0) const;
		void setParseBigDecimal(jboolean arg0) const;
		void setPositivePrefix(JString arg0) const;
		void setPositiveSuffix(JString arg0) const;
		void setRoundingMode(java::math::RoundingMode arg0) const;
		JString toLocalizedPattern() const;
		JString toPattern() const;
	};
} // namespace java::text

