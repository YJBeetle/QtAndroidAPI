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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DecimalFormatSymbols(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DecimalFormatSymbols(QAndroidJniObject obj);
		
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
		JObject clone();
		jboolean equals(JObject arg0);
		android::icu::util::Currency getCurrency();
		JString getCurrencySymbol();
		jchar getDecimalSeparator();
		JString getDecimalSeparatorString();
		jchar getDigit();
		JArray getDigitStrings();
		JCharArray getDigits();
		JString getExponentMultiplicationSign();
		JString getExponentSeparator();
		jchar getGroupingSeparator();
		JString getGroupingSeparatorString();
		JString getInfinity();
		JString getInternationalCurrencySymbol();
		java::util::Locale getLocale();
		jchar getMinusSign();
		JString getMinusSignString();
		jchar getMonetaryDecimalSeparator();
		JString getMonetaryDecimalSeparatorString();
		jchar getMonetaryGroupingSeparator();
		JString getMonetaryGroupingSeparatorString();
		JString getNaN();
		jchar getPadEscape();
		JString getPatternForCurrencySpacing(jint arg0, jboolean arg1);
		jchar getPatternSeparator();
		jchar getPerMill();
		JString getPerMillString();
		jchar getPercent();
		JString getPercentString();
		jchar getPlusSign();
		JString getPlusSignString();
		jchar getSignificantDigit();
		android::icu::util::ULocale getULocale();
		jchar getZeroDigit();
		jint hashCode();
		void setCurrency(android::icu::util::Currency arg0);
		void setCurrencySymbol(JString arg0);
		void setDecimalSeparator(jchar arg0);
		void setDecimalSeparatorString(JString arg0);
		void setDigit(jchar arg0);
		void setDigitStrings(JArray arg0);
		void setExponentMultiplicationSign(JString arg0);
		void setExponentSeparator(JString arg0);
		void setGroupingSeparator(jchar arg0);
		void setGroupingSeparatorString(JString arg0);
		void setInfinity(JString arg0);
		void setInternationalCurrencySymbol(JString arg0);
		void setMinusSign(jchar arg0);
		void setMinusSignString(JString arg0);
		void setMonetaryDecimalSeparator(jchar arg0);
		void setMonetaryDecimalSeparatorString(JString arg0);
		void setMonetaryGroupingSeparator(jchar arg0);
		void setMonetaryGroupingSeparatorString(JString arg0);
		void setNaN(JString arg0);
		void setPadEscape(jchar arg0);
		void setPatternForCurrencySpacing(jint arg0, jboolean arg1, JString arg2);
		void setPatternSeparator(jchar arg0);
		void setPerMill(jchar arg0);
		void setPerMillString(JString arg0);
		void setPercent(jchar arg0);
		void setPercentString(JString arg0);
		void setPlusSign(jchar arg0);
		void setPlusSignString(JString arg0);
		void setSignificantDigit(jchar arg0);
		void setZeroDigit(jchar arg0);
	};
} // namespace android::icu::text

