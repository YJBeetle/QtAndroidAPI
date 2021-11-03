#pragma once

#include "../../../JObject.hpp"

namespace android::icu::text
{
	class PluralRules_PluralType;
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
	class PluralRules : public JObject
	{
	public:
		// Fields
		static android::icu::text::PluralRules DEFAULT();
		static JString KEYWORD_FEW();
		static JString KEYWORD_MANY();
		static JString KEYWORD_ONE();
		static JString KEYWORD_OTHER();
		static JString KEYWORD_TWO();
		static JString KEYWORD_ZERO();
		static jdouble NO_UNIQUE_VALUE();
		
		// QJniObject forward
		template<typename ...Ts> explicit PluralRules(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PluralRules(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::PluralRules createRules(JString arg0);
		static android::icu::text::PluralRules forLocale(android::icu::util::ULocale arg0);
		static android::icu::text::PluralRules forLocale(java::util::Locale arg0);
		static android::icu::text::PluralRules forLocale(android::icu::util::ULocale arg0, android::icu::text::PluralRules_PluralType arg1);
		static android::icu::text::PluralRules forLocale(java::util::Locale arg0, android::icu::text::PluralRules_PluralType arg1);
		static android::icu::text::PluralRules parseDescription(JString arg0);
		jboolean equals(android::icu::text::PluralRules arg0) const;
		jboolean equals(JObject arg0) const;
		JObject getAllKeywordValues(JString arg0) const;
		JObject getKeywords() const;
		JObject getSamples(JString arg0) const;
		jdouble getUniqueKeywordValue(JString arg0) const;
		jint hashCode() const;
		JString select(jdouble arg0) const;
		JString toString() const;
	};
} // namespace android::icu::text

