#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectInputStream;
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
	class DecimalFormatSymbols : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DecimalFormatSymbols(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DecimalFormatSymbols(QAndroidJniObject obj);
		
		// Constructors
		DecimalFormatSymbols();
		DecimalFormatSymbols(java::util::Locale arg0);
		
		// Methods
		static jarray getAvailableLocales();
		static java::text::DecimalFormatSymbols getInstance();
		static java::text::DecimalFormatSymbols getInstance(java::util::Locale arg0);
		jobject clone();
		jboolean equals(jobject arg0);
		java::util::Currency getCurrency();
		jstring getCurrencySymbol();
		jchar getDecimalSeparator();
		jchar getDigit();
		jstring getExponentSeparator();
		jchar getGroupingSeparator();
		jstring getInfinity();
		jstring getInternationalCurrencySymbol();
		jchar getMinusSign();
		jchar getMonetaryDecimalSeparator();
		jchar getMonetaryGroupingSeparator();
		jstring getNaN();
		jchar getPatternSeparator();
		jchar getPerMill();
		jchar getPercent();
		jchar getZeroDigit();
		jint hashCode();
		void setCurrency(java::util::Currency arg0);
		void setCurrencySymbol(jstring arg0);
		void setDecimalSeparator(jchar arg0);
		void setDigit(jchar arg0);
		void setExponentSeparator(jstring arg0);
		void setGroupingSeparator(jchar arg0);
		void setInfinity(jstring arg0);
		void setInternationalCurrencySymbol(jstring arg0);
		void setMinusSign(jchar arg0);
		void setMonetaryDecimalSeparator(jchar arg0);
		void setMonetaryGroupingSeparator(jchar arg0);
		void setNaN(jstring arg0);
		void setPatternSeparator(jchar arg0);
		void setPerMill(jchar arg0);
		void setPercent(jchar arg0);
		void setZeroDigit(jchar arg0);
	};
} // namespace java::text

