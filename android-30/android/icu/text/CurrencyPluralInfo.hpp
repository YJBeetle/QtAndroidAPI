#pragma once

#include "../../../JObject.hpp"

namespace android::icu::text
{
	class PluralRules;
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
	class CurrencyPluralInfo : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CurrencyPluralInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CurrencyPluralInfo(QJniObject obj);
		
		// Constructors
		CurrencyPluralInfo();
		CurrencyPluralInfo(android::icu::util::ULocale arg0);
		CurrencyPluralInfo(java::util::Locale arg0);
		
		// Methods
		static android::icu::text::CurrencyPluralInfo getInstance();
		static android::icu::text::CurrencyPluralInfo getInstance(android::icu::util::ULocale arg0);
		static android::icu::text::CurrencyPluralInfo getInstance(java::util::Locale arg0);
		JObject clone();
		jboolean equals(JObject arg0);
		JString getCurrencyPluralPattern(JString arg0);
		android::icu::util::ULocale getLocale();
		android::icu::text::PluralRules getPluralRules();
		jint hashCode();
		void setCurrencyPluralPattern(JString arg0, JString arg1);
		void setLocale(android::icu::util::ULocale arg0);
		void setPluralRules(JString arg0);
	};
} // namespace android::icu::text

