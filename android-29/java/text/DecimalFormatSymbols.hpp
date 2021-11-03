#pragma once

#include "../../JObject.hpp"

class JArray;
namespace java::io
{
	class ObjectInputStream;
}
class JObject;
class JString;
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
	class DecimalFormatSymbols : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DecimalFormatSymbols(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DecimalFormatSymbols(QAndroidJniObject obj);
		
		// Constructors
		DecimalFormatSymbols();
		DecimalFormatSymbols(java::util::Locale arg0);
		
		// Methods
		static JArray getAvailableLocales();
		static java::text::DecimalFormatSymbols getInstance();
		static java::text::DecimalFormatSymbols getInstance(java::util::Locale arg0);
		JObject clone();
		jboolean equals(JObject arg0);
		java::util::Currency getCurrency();
		JString getCurrencySymbol();
		jchar getDecimalSeparator();
		jchar getDigit();
		JString getExponentSeparator();
		jchar getGroupingSeparator();
		JString getInfinity();
		JString getInternationalCurrencySymbol();
		jchar getMinusSign();
		jchar getMonetaryDecimalSeparator();
		jchar getMonetaryGroupingSeparator();
		JString getNaN();
		jchar getPatternSeparator();
		jchar getPerMill();
		jchar getPercent();
		jchar getZeroDigit();
		jint hashCode();
		void setCurrency(java::util::Currency arg0);
		void setCurrencySymbol(JString arg0);
		void setDecimalSeparator(jchar arg0);
		void setDigit(jchar arg0);
		void setExponentSeparator(JString arg0);
		void setGroupingSeparator(jchar arg0);
		void setInfinity(JString arg0);
		void setInternationalCurrencySymbol(JString arg0);
		void setMinusSign(jchar arg0);
		void setMonetaryDecimalSeparator(jchar arg0);
		void setMonetaryGroupingSeparator(jchar arg0);
		void setNaN(JString arg0);
		void setPatternSeparator(jchar arg0);
		void setPerMill(jchar arg0);
		void setPercent(jchar arg0);
		void setZeroDigit(jchar arg0);
	};
} // namespace java::text

