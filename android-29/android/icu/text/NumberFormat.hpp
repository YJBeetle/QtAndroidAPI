#pragma once

#include "./UFormat.hpp"

class JArray;
namespace android::icu::math
{
	class BigDecimal;
}
namespace android::icu::text
{
	class DisplayContext;
}
namespace android::icu::text
{
	class DisplayContext_Type;
}
namespace android::icu::util
{
	class Currency;
}
namespace android::icu::util
{
	class CurrencyAmount;
}
namespace android::icu::util
{
	class ULocale;
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
	class Locale;
}

namespace android::icu::text
{
	class NumberFormat : public android::icu::text::UFormat
	{
	public:
		// Fields
		static jint ACCOUNTINGCURRENCYSTYLE();
		static jint CASHCURRENCYSTYLE();
		static jint CURRENCYSTYLE();
		static jint FRACTION_FIELD();
		static jint INTEGERSTYLE();
		static jint INTEGER_FIELD();
		static jint ISOCURRENCYSTYLE();
		static jint NUMBERSTYLE();
		static jint PERCENTSTYLE();
		static jint PLURALCURRENCYSTYLE();
		static jint SCIENTIFICSTYLE();
		static jint STANDARDCURRENCYSTYLE();
		
		// QJniObject forward
		template<typename ...Ts> explicit NumberFormat(const char *className, const char *sig, Ts...agv) : android::icu::text::UFormat(className, sig, std::forward<Ts>(agv)...) {}
		NumberFormat(QJniObject obj);
		
		// Constructors
		NumberFormat();
		
		// Methods
		static JArray getAvailableLocales();
		static android::icu::text::NumberFormat getCurrencyInstance();
		static android::icu::text::NumberFormat getCurrencyInstance(android::icu::util::ULocale arg0);
		static android::icu::text::NumberFormat getCurrencyInstance(java::util::Locale arg0);
		static android::icu::text::NumberFormat getInstance();
		static android::icu::text::NumberFormat getInstance(android::icu::util::ULocale arg0);
		static android::icu::text::NumberFormat getInstance(jint arg0);
		static android::icu::text::NumberFormat getInstance(java::util::Locale arg0);
		static android::icu::text::NumberFormat getInstance(android::icu::util::ULocale arg0, jint arg1);
		static android::icu::text::NumberFormat getInstance(java::util::Locale arg0, jint arg1);
		static android::icu::text::NumberFormat getIntegerInstance();
		static android::icu::text::NumberFormat getIntegerInstance(android::icu::util::ULocale arg0);
		static android::icu::text::NumberFormat getIntegerInstance(java::util::Locale arg0);
		static android::icu::text::NumberFormat getNumberInstance();
		static android::icu::text::NumberFormat getNumberInstance(android::icu::util::ULocale arg0);
		static android::icu::text::NumberFormat getNumberInstance(java::util::Locale arg0);
		static android::icu::text::NumberFormat getPercentInstance();
		static android::icu::text::NumberFormat getPercentInstance(android::icu::util::ULocale arg0);
		static android::icu::text::NumberFormat getPercentInstance(java::util::Locale arg0);
		static android::icu::text::NumberFormat getScientificInstance();
		static android::icu::text::NumberFormat getScientificInstance(android::icu::util::ULocale arg0);
		static android::icu::text::NumberFormat getScientificInstance(java::util::Locale arg0);
		JObject clone() const;
		jboolean equals(JObject arg0) const;
		JString format(android::icu::math::BigDecimal arg0) const;
		JString format(android::icu::util::CurrencyAmount arg0) const;
		JString format(jdouble arg0) const;
		JString format(java::math::BigDecimal arg0) const;
		JString format(java::math::BigInteger arg0) const;
		JString format(jlong arg0) const;
		java::lang::StringBuffer format(android::icu::math::BigDecimal arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const;
		java::lang::StringBuffer format(android::icu::util::CurrencyAmount arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const;
		java::lang::StringBuffer format(jdouble arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const;
		java::lang::StringBuffer format(JObject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const;
		java::lang::StringBuffer format(java::math::BigDecimal arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const;
		java::lang::StringBuffer format(java::math::BigInteger arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const;
		java::lang::StringBuffer format(jlong arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const;
		android::icu::text::DisplayContext getContext(android::icu::text::DisplayContext_Type arg0) const;
		android::icu::util::Currency getCurrency() const;
		jint getMaximumFractionDigits() const;
		jint getMaximumIntegerDigits() const;
		jint getMinimumFractionDigits() const;
		jint getMinimumIntegerDigits() const;
		jint getRoundingMode() const;
		jint hashCode() const;
		jboolean isGroupingUsed() const;
		jboolean isParseIntegerOnly() const;
		jboolean isParseStrict() const;
		java::lang::Number parse(JString arg0) const;
		java::lang::Number parse(JString arg0, java::text::ParsePosition arg1) const;
		android::icu::util::CurrencyAmount parseCurrency(JString arg0, java::text::ParsePosition arg1) const;
		JObject parseObject(JString arg0, java::text::ParsePosition arg1) const;
		void setContext(android::icu::text::DisplayContext arg0) const;
		void setCurrency(android::icu::util::Currency arg0) const;
		void setGroupingUsed(jboolean arg0) const;
		void setMaximumFractionDigits(jint arg0) const;
		void setMaximumIntegerDigits(jint arg0) const;
		void setMinimumFractionDigits(jint arg0) const;
		void setMinimumIntegerDigits(jint arg0) const;
		void setParseIntegerOnly(jboolean arg0) const;
		void setParseStrict(jboolean arg0) const;
		void setRoundingMode(jint arg0) const;
	};
} // namespace android::icu::text

