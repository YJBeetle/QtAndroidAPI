#pragma once

#include "./Format.hpp"

class JArray;
namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
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
	class RoundingMode;
}
namespace java::text
{
	class FieldPosition;
}
namespace java::text
{
	class ParsePosition;
}
namespace java::util
{
	class Currency;
}
namespace java::util
{
	class Locale;
}

namespace java::text
{
	class NumberFormat : public java::text::Format
	{
	public:
		// Fields
		static jint FRACTION_FIELD();
		static jint INTEGER_FIELD();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NumberFormat(const char *className, const char *sig, Ts...agv) : java::text::Format(className, sig, std::forward<Ts>(agv)...) {}
		NumberFormat(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static JArray getAvailableLocales();
		static java::text::NumberFormat getCompactNumberInstance();
		static java::text::NumberFormat getCompactNumberInstance(java::util::Locale arg0, JObject arg1);
		static java::text::NumberFormat getCurrencyInstance();
		static java::text::NumberFormat getCurrencyInstance(java::util::Locale arg0);
		static java::text::NumberFormat getInstance();
		static java::text::NumberFormat getInstance(java::util::Locale arg0);
		static java::text::NumberFormat getIntegerInstance();
		static java::text::NumberFormat getIntegerInstance(java::util::Locale arg0);
		static java::text::NumberFormat getNumberInstance();
		static java::text::NumberFormat getNumberInstance(java::util::Locale arg0);
		static java::text::NumberFormat getPercentInstance();
		static java::text::NumberFormat getPercentInstance(java::util::Locale arg0);
		JObject clone() const;
		jboolean equals(JObject arg0) const;
		JString format(jdouble arg0) const;
		JString format(jlong arg0) const;
		java::lang::StringBuffer format(jdouble arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const;
		java::lang::StringBuffer format(JObject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const;
		java::lang::StringBuffer format(jlong arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const;
		java::util::Currency getCurrency() const;
		jint getMaximumFractionDigits() const;
		jint getMaximumIntegerDigits() const;
		jint getMinimumFractionDigits() const;
		jint getMinimumIntegerDigits() const;
		java::math::RoundingMode getRoundingMode() const;
		jint hashCode() const;
		jboolean isGroupingUsed() const;
		jboolean isParseIntegerOnly() const;
		java::lang::Number parse(JString arg0) const;
		java::lang::Number parse(JString arg0, java::text::ParsePosition arg1) const;
		JObject parseObject(JString arg0, java::text::ParsePosition arg1) const;
		void setCurrency(java::util::Currency arg0) const;
		void setGroupingUsed(jboolean arg0) const;
		void setMaximumFractionDigits(jint arg0) const;
		void setMaximumIntegerDigits(jint arg0) const;
		void setMinimumFractionDigits(jint arg0) const;
		void setMinimumIntegerDigits(jint arg0) const;
		void setParseIntegerOnly(jboolean arg0) const;
		void setRoundingMode(java::math::RoundingMode arg0) const;
	};
} // namespace java::text

