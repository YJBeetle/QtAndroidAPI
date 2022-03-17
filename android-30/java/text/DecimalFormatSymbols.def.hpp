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
		DecimalFormatSymbols(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		DecimalFormatSymbols();
		DecimalFormatSymbols(java::util::Locale arg0);
		
		// Methods
		static JArray getAvailableLocales();
		static java::text::DecimalFormatSymbols getInstance();
		static java::text::DecimalFormatSymbols getInstance(java::util::Locale arg0);
		JObject clone() const;
		jboolean equals(JObject arg0) const;
		java::util::Currency getCurrency() const;
		JString getCurrencySymbol() const;
		jchar getDecimalSeparator() const;
		jchar getDigit() const;
		JString getExponentSeparator() const;
		jchar getGroupingSeparator() const;
		JString getInfinity() const;
		JString getInternationalCurrencySymbol() const;
		jchar getMinusSign() const;
		jchar getMonetaryDecimalSeparator() const;
		jchar getMonetaryGroupingSeparator() const;
		JString getNaN() const;
		jchar getPatternSeparator() const;
		jchar getPerMill() const;
		jchar getPercent() const;
		jchar getZeroDigit() const;
		jint hashCode() const;
		void setCurrency(java::util::Currency arg0) const;
		void setCurrencySymbol(JString arg0) const;
		void setDecimalSeparator(jchar arg0) const;
		void setDigit(jchar arg0) const;
		void setExponentSeparator(JString arg0) const;
		void setGroupingSeparator(jchar arg0) const;
		void setInfinity(JString arg0) const;
		void setInternationalCurrencySymbol(JString arg0) const;
		void setMinusSign(jchar arg0) const;
		void setMonetaryDecimalSeparator(jchar arg0) const;
		void setMonetaryGroupingSeparator(jchar arg0) const;
		void setNaN(JString arg0) const;
		void setPatternSeparator(jchar arg0) const;
		void setPerMill(jchar arg0) const;
		void setPercent(jchar arg0) const;
		void setZeroDigit(jchar arg0) const;
	};
} // namespace java::text

