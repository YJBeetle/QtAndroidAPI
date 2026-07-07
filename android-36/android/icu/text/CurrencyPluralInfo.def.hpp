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
		CurrencyPluralInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		CurrencyPluralInfo();
		CurrencyPluralInfo(android::icu::util::ULocale arg0);
		CurrencyPluralInfo(java::util::Locale arg0);
		
		// Methods
		static android::icu::text::CurrencyPluralInfo getInstance();
		static android::icu::text::CurrencyPluralInfo getInstance(android::icu::util::ULocale arg0);
		static android::icu::text::CurrencyPluralInfo getInstance(java::util::Locale arg0);
		JObject clone() const;
		jboolean equals(JObject arg0) const;
		JString getCurrencyPluralPattern(JString arg0) const;
		android::icu::util::ULocale getLocale() const;
		android::icu::text::PluralRules getPluralRules() const;
		jint hashCode() const;
		void setCurrencyPluralPattern(JString arg0, JString arg1) const;
		void setLocale(android::icu::util::ULocale arg0) const;
		void setPluralRules(JString arg0) const;
	};
} // namespace android::icu::text

