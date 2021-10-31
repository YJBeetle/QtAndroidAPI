#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::text
{
	class PluralRules;
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
	class CurrencyPluralInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		CurrencyPluralInfo(QAndroidJniObject obj);
		// Constructors
		CurrencyPluralInfo();
		CurrencyPluralInfo(android::icu::util::ULocale arg0);
		CurrencyPluralInfo(java::util::Locale arg0);
		
		// Methods
		static QAndroidJniObject getInstance();
		static QAndroidJniObject getInstance(android::icu::util::ULocale arg0);
		static QAndroidJniObject getInstance(java::util::Locale arg0);
		jobject clone();
		jboolean equals(jobject arg0);
		jstring getCurrencyPluralPattern(jstring arg0);
		QAndroidJniObject getLocale();
		QAndroidJniObject getPluralRules();
		jint hashCode();
		void setCurrencyPluralPattern(jstring arg0, jstring arg1);
		void setLocale(android::icu::util::ULocale arg0);
		void setPluralRules(jstring arg0);
	};
} // namespace android::icu::text

