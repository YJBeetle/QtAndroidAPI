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
		JObject clone();
		jboolean equals(JObject arg0);
		JString format(jdouble arg0);
		JString format(jlong arg0);
		java::lang::StringBuffer format(jdouble arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		java::lang::StringBuffer format(JObject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		java::lang::StringBuffer format(jlong arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		java::util::Currency getCurrency();
		jint getMaximumFractionDigits();
		jint getMaximumIntegerDigits();
		jint getMinimumFractionDigits();
		jint getMinimumIntegerDigits();
		java::math::RoundingMode getRoundingMode();
		jint hashCode();
		jboolean isGroupingUsed();
		jboolean isParseIntegerOnly();
		java::lang::Number parse(JString arg0);
		java::lang::Number parse(JString arg0, java::text::ParsePosition arg1);
		JObject parseObject(JString arg0, java::text::ParsePosition arg1);
		void setCurrency(java::util::Currency arg0);
		void setGroupingUsed(jboolean arg0);
		void setMaximumFractionDigits(jint arg0);
		void setMaximumIntegerDigits(jint arg0);
		void setMinimumFractionDigits(jint arg0);
		void setMinimumIntegerDigits(jint arg0);
		void setParseIntegerOnly(jboolean arg0);
		void setRoundingMode(java::math::RoundingMode arg0);
	};
} // namespace java::text

