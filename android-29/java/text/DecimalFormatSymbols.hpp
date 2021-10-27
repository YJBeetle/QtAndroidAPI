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
		
		DecimalFormatSymbols(QAndroidJniObject obj);
		// Constructors
		DecimalFormatSymbols();
		DecimalFormatSymbols(java::util::Locale &arg0);
		
		// Methods
		static jarray getAvailableLocales();
		static QAndroidJniObject getInstance();
		static QAndroidJniObject getInstance(java::util::Locale arg0);
		jobject clone();
		jboolean equals(jobject arg0);
		QAndroidJniObject getCurrency();
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
		void setCurrencySymbol(const QString &arg0);
		void setDecimalSeparator(jchar arg0);
		void setDigit(jchar arg0);
		void setExponentSeparator(jstring arg0);
		void setExponentSeparator(const QString &arg0);
		void setGroupingSeparator(jchar arg0);
		void setInfinity(jstring arg0);
		void setInfinity(const QString &arg0);
		void setInternationalCurrencySymbol(jstring arg0);
		void setInternationalCurrencySymbol(const QString &arg0);
		void setMinusSign(jchar arg0);
		void setMonetaryDecimalSeparator(jchar arg0);
		void setMonetaryGroupingSeparator(jchar arg0);
		void setNaN(jstring arg0);
		void setNaN(const QString &arg0);
		void setPatternSeparator(jchar arg0);
		void setPerMill(jchar arg0);
		void setPercent(jchar arg0);
		void setZeroDigit(jchar arg0);
	};
} // namespace java::text

