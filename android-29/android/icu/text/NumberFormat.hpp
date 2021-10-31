#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/text/Format.hpp"
#include "./UFormat.hpp"

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
namespace java::lang
{
	class Number;
}
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NumberFormat(const char *className, const char *sig, Ts...agv) : android::icu::text::UFormat(className, sig, std::forward<Ts>(agv)...) {}
		NumberFormat(QAndroidJniObject obj);
		
		// Constructors
		NumberFormat();
		
		// Methods
		static jarray getAvailableLocales();
		static QAndroidJniObject getCurrencyInstance();
		static QAndroidJniObject getCurrencyInstance(android::icu::util::ULocale arg0);
		static QAndroidJniObject getCurrencyInstance(java::util::Locale arg0);
		static QAndroidJniObject getInstance();
		static QAndroidJniObject getInstance(android::icu::util::ULocale arg0);
		static QAndroidJniObject getInstance(jint arg0);
		static QAndroidJniObject getInstance(java::util::Locale arg0);
		static QAndroidJniObject getInstance(android::icu::util::ULocale arg0, jint arg1);
		static QAndroidJniObject getInstance(java::util::Locale arg0, jint arg1);
		static QAndroidJniObject getIntegerInstance();
		static QAndroidJniObject getIntegerInstance(android::icu::util::ULocale arg0);
		static QAndroidJniObject getIntegerInstance(java::util::Locale arg0);
		static QAndroidJniObject getNumberInstance();
		static QAndroidJniObject getNumberInstance(android::icu::util::ULocale arg0);
		static QAndroidJniObject getNumberInstance(java::util::Locale arg0);
		static QAndroidJniObject getPercentInstance();
		static QAndroidJniObject getPercentInstance(android::icu::util::ULocale arg0);
		static QAndroidJniObject getPercentInstance(java::util::Locale arg0);
		static QAndroidJniObject getScientificInstance();
		static QAndroidJniObject getScientificInstance(android::icu::util::ULocale arg0);
		static QAndroidJniObject getScientificInstance(java::util::Locale arg0);
		jobject clone();
		jboolean equals(jobject arg0);
		jstring format(android::icu::math::BigDecimal arg0);
		jstring format(android::icu::util::CurrencyAmount arg0);
		jstring format(jdouble arg0);
		jstring format(java::math::BigDecimal arg0);
		jstring format(java::math::BigInteger arg0);
		jstring format(jlong arg0);
		QAndroidJniObject format(android::icu::math::BigDecimal arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		QAndroidJniObject format(android::icu::util::CurrencyAmount arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		QAndroidJniObject format(jdouble arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		QAndroidJniObject format(jobject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		QAndroidJniObject format(java::math::BigDecimal arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		QAndroidJniObject format(java::math::BigInteger arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		QAndroidJniObject format(jlong arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		QAndroidJniObject getContext(android::icu::text::DisplayContext_Type arg0);
		QAndroidJniObject getCurrency();
		jint getMaximumFractionDigits();
		jint getMaximumIntegerDigits();
		jint getMinimumFractionDigits();
		jint getMinimumIntegerDigits();
		jint getRoundingMode();
		jint hashCode();
		jboolean isGroupingUsed();
		jboolean isParseIntegerOnly();
		jboolean isParseStrict();
		QAndroidJniObject parse(jstring arg0);
		QAndroidJniObject parse(jstring arg0, java::text::ParsePosition arg1);
		QAndroidJniObject parseCurrency(jstring arg0, java::text::ParsePosition arg1);
		jobject parseObject(jstring arg0, java::text::ParsePosition arg1);
		void setContext(android::icu::text::DisplayContext arg0);
		void setCurrency(android::icu::util::Currency arg0);
		void setGroupingUsed(jboolean arg0);
		void setMaximumFractionDigits(jint arg0);
		void setMaximumIntegerDigits(jint arg0);
		void setMinimumFractionDigits(jint arg0);
		void setMinimumIntegerDigits(jint arg0);
		void setParseIntegerOnly(jboolean arg0);
		void setParseStrict(jboolean arg0);
		void setRoundingMode(jint arg0);
	};
} // namespace android::icu::text

