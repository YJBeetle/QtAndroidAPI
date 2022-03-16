#pragma once

#include "../../../JObject.hpp"

class JCharArray;
class JArray;
class JArray;
namespace android::icu::text
{
	class NumberingSystem;
}
namespace android::icu::util
{
	class Currency;
}
namespace android::icu::util
{
	class ULocale;
}
class JObject;
class JString;
namespace java::util
{
	class Locale;
}

namespace android::icu::text
{
	class DecimalFormatSymbols : public JObject
	{
	public:
		// Fields
		static jint CURRENCY_SPC_CURRENCY_MATCH();
		static jint CURRENCY_SPC_INSERT();
		static jint CURRENCY_SPC_SURROUNDING_MATCH();
		
		// QJniObject forward
		template<typename ...Ts> explicit DecimalFormatSymbols(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DecimalFormatSymbols(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		DecimalFormatSymbols();
		DecimalFormatSymbols(android::icu::util::ULocale arg0);
		DecimalFormatSymbols(java::util::Locale arg0);
		
		// Methods
		static android::icu::text::DecimalFormatSymbols forNumberingSystem(android::icu::util::ULocale arg0, android::icu::text::NumberingSystem arg1);
		static android::icu::text::DecimalFormatSymbols forNumberingSystem(java::util::Locale arg0, android::icu::text::NumberingSystem arg1);
		static JArray getAvailableLocales();
		static android::icu::text::DecimalFormatSymbols getInstance();
		static android::icu::text::DecimalFormatSymbols getInstance(android::icu::util::ULocale arg0);
		static android::icu::text::DecimalFormatSymbols getInstance(java::util::Locale arg0);
		JObject clone() const;
		jboolean equals(JObject arg0) const;
		android::icu::util::Currency getCurrency() const;
		JString getCurrencySymbol() const;
		jchar getDecimalSeparator() const;
		JString getDecimalSeparatorString() const;
		jchar getDigit() const;
		JArray getDigitStrings() const;
		JCharArray getDigits() const;
		JString getExponentMultiplicationSign() const;
		JString getExponentSeparator() const;
		jchar getGroupingSeparator() const;
		JString getGroupingSeparatorString() const;
		JString getInfinity() const;
		JString getInternationalCurrencySymbol() const;
		java::util::Locale getLocale() const;
		jchar getMinusSign() const;
		JString getMinusSignString() const;
		jchar getMonetaryDecimalSeparator() const;
		JString getMonetaryDecimalSeparatorString() const;
		jchar getMonetaryGroupingSeparator() const;
		JString getMonetaryGroupingSeparatorString() const;
		JString getNaN() const;
		jchar getPadEscape() const;
		JString getPatternForCurrencySpacing(jint arg0, jboolean arg1) const;
		jchar getPatternSeparator() const;
		jchar getPerMill() const;
		JString getPerMillString() const;
		jchar getPercent() const;
		JString getPercentString() const;
		jchar getPlusSign() const;
		JString getPlusSignString() const;
		jchar getSignificantDigit() const;
		android::icu::util::ULocale getULocale() const;
		jchar getZeroDigit() const;
		jint hashCode() const;
		void setCurrency(android::icu::util::Currency arg0) const;
		void setCurrencySymbol(JString arg0) const;
		void setDecimalSeparator(jchar arg0) const;
		void setDecimalSeparatorString(JString arg0) const;
		void setDigit(jchar arg0) const;
		void setDigitStrings(JArray arg0) const;
		void setExponentMultiplicationSign(JString arg0) const;
		void setExponentSeparator(JString arg0) const;
		void setGroupingSeparator(jchar arg0) const;
		void setGroupingSeparatorString(JString arg0) const;
		void setInfinity(JString arg0) const;
		void setInternationalCurrencySymbol(JString arg0) const;
		void setMinusSign(jchar arg0) const;
		void setMinusSignString(JString arg0) const;
		void setMonetaryDecimalSeparator(jchar arg0) const;
		void setMonetaryDecimalSeparatorString(JString arg0) const;
		void setMonetaryGroupingSeparator(jchar arg0) const;
		void setMonetaryGroupingSeparatorString(JString arg0) const;
		void setNaN(JString arg0) const;
		void setPadEscape(jchar arg0) const;
		void setPatternForCurrencySpacing(jint arg0, jboolean arg1, JString arg2) const;
		void setPatternSeparator(jchar arg0) const;
		void setPerMill(jchar arg0) const;
		void setPerMillString(JString arg0) const;
		void setPercent(jchar arg0) const;
		void setPercentString(JString arg0) const;
		void setPlusSign(jchar arg0) const;
		void setPlusSignString(JString arg0) const;
		void setSignificantDigit(jchar arg0) const;
		void setZeroDigit(jchar arg0) const;
	};
} // namespace android::icu::text

