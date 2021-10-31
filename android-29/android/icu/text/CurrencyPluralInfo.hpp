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
		
		// QJniObject forward
		template<typename ...Ts> explicit CurrencyPluralInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CurrencyPluralInfo(QJniObject obj);
		
		// Constructors
		CurrencyPluralInfo();
		CurrencyPluralInfo(android::icu::util::ULocale arg0);
		CurrencyPluralInfo(java::util::Locale arg0);
		
		// Methods
		static android::icu::text::CurrencyPluralInfo getInstance();
		static android::icu::text::CurrencyPluralInfo getInstance(android::icu::util::ULocale arg0);
		static android::icu::text::CurrencyPluralInfo getInstance(java::util::Locale arg0);
		jobject clone();
		jboolean equals(jobject arg0);
		jstring getCurrencyPluralPattern(jstring arg0);
		android::icu::util::ULocale getLocale();
		android::icu::text::PluralRules getPluralRules();
		jint hashCode();
		void setCurrencyPluralPattern(jstring arg0, jstring arg1);
		void setLocale(android::icu::util::ULocale arg0);
		void setPluralRules(jstring arg0);
	};
} // namespace android::icu::text

