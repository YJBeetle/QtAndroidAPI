#pragma once

#include "../../../__JniBaseClass.hpp"

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
namespace java::util
{
	class Locale;
}

namespace android::icu::text
{
	class DecimalFormatSymbols : public __JniBaseClass
	{
	public:
		// Fields
		static jint CURRENCY_SPC_CURRENCY_MATCH();
		static jint CURRENCY_SPC_INSERT();
		static jint CURRENCY_SPC_SURROUNDING_MATCH();
		
		DecimalFormatSymbols(QAndroidJniObject obj);
		// Constructors
		DecimalFormatSymbols();
		DecimalFormatSymbols(android::icu::util::ULocale &arg0);
		DecimalFormatSymbols(java::util::Locale &arg0);
		
		// Methods
		static QAndroidJniObject forNumberingSystem(android::icu::util::ULocale arg0, android::icu::text::NumberingSystem arg1);
		static QAndroidJniObject forNumberingSystem(java::util::Locale arg0, android::icu::text::NumberingSystem arg1);
		static jarray getAvailableLocales();
		static QAndroidJniObject getInstance();
		static QAndroidJniObject getInstance(android::icu::util::ULocale arg0);
		static QAndroidJniObject getInstance(java::util::Locale arg0);
		jobject clone();
		jboolean equals(jobject arg0);
		QAndroidJniObject getCurrency();
		jstring getCurrencySymbol();
		jchar getDecimalSeparator();
		jstring getDecimalSeparatorString();
		jchar getDigit();
		jarray getDigitStrings();
		jcharArray getDigits();
		jstring getExponentMultiplicationSign();
		jstring getExponentSeparator();
		jchar getGroupingSeparator();
		jstring getGroupingSeparatorString();
		jstring getInfinity();
		jstring getInternationalCurrencySymbol();
		QAndroidJniObject getLocale();
		jchar getMinusSign();
		jstring getMinusSignString();
		jchar getMonetaryDecimalSeparator();
		jstring getMonetaryDecimalSeparatorString();
		jchar getMonetaryGroupingSeparator();
		jstring getMonetaryGroupingSeparatorString();
		jstring getNaN();
		jchar getPadEscape();
		jstring getPatternForCurrencySpacing(jint arg0, jboolean arg1);
		jchar getPatternSeparator();
		jchar getPerMill();
		jstring getPerMillString();
		jchar getPercent();
		jstring getPercentString();
		jchar getPlusSign();
		jstring getPlusSignString();
		jchar getSignificantDigit();
		QAndroidJniObject getULocale();
		jchar getZeroDigit();
		jint hashCode();
		void setCurrency(android::icu::util::Currency arg0);
		void setCurrencySymbol(jstring arg0);
		void setCurrencySymbol(const QString &arg0);
		void setDecimalSeparator(jchar arg0);
		void setDecimalSeparatorString(jstring arg0);
		void setDecimalSeparatorString(const QString &arg0);
		void setDigit(jchar arg0);
		void setDigitStrings(jarray arg0);
		void setExponentMultiplicationSign(jstring arg0);
		void setExponentMultiplicationSign(const QString &arg0);
		void setExponentSeparator(jstring arg0);
		void setExponentSeparator(const QString &arg0);
		void setGroupingSeparator(jchar arg0);
		void setGroupingSeparatorString(jstring arg0);
		void setGroupingSeparatorString(const QString &arg0);
		void setInfinity(jstring arg0);
		void setInfinity(const QString &arg0);
		void setInternationalCurrencySymbol(jstring arg0);
		void setInternationalCurrencySymbol(const QString &arg0);
		void setMinusSign(jchar arg0);
		void setMinusSignString(jstring arg0);
		void setMinusSignString(const QString &arg0);
		void setMonetaryDecimalSeparator(jchar arg0);
		void setMonetaryDecimalSeparatorString(jstring arg0);
		void setMonetaryDecimalSeparatorString(const QString &arg0);
		void setMonetaryGroupingSeparator(jchar arg0);
		void setMonetaryGroupingSeparatorString(jstring arg0);
		void setMonetaryGroupingSeparatorString(const QString &arg0);
		void setNaN(jstring arg0);
		void setNaN(const QString &arg0);
		void setPadEscape(jchar arg0);
		void setPatternForCurrencySpacing(jint arg0, jboolean arg1, jstring arg2);
		void setPatternForCurrencySpacing(jint arg0, jboolean arg1, const QString &arg2);
		void setPatternSeparator(jchar arg0);
		void setPerMill(jchar arg0);
		void setPerMillString(jstring arg0);
		void setPerMillString(const QString &arg0);
		void setPercent(jchar arg0);
		void setPercentString(jstring arg0);
		void setPercentString(const QString &arg0);
		void setPlusSign(jchar arg0);
		void setPlusSignString(jstring arg0);
		void setPlusSignString(const QString &arg0);
		void setSignificantDigit(jchar arg0);
		void setZeroDigit(jchar arg0);
	};
} // namespace android::icu::text

