#pragma once

#include "../../../JObject.hpp"

namespace android::icu::number
{
	class FormattedNumber;
}
namespace android::icu::text
{
	class PluralRules_PluralType;
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
	class PluralRules : public JObject
	{
	public:
		// Fields
		static android::icu::text::PluralRules DEFAULT();
		static jstring KEYWORD_FEW();
		static jstring KEYWORD_MANY();
		static jstring KEYWORD_ONE();
		static jstring KEYWORD_OTHER();
		static jstring KEYWORD_TWO();
		static jstring KEYWORD_ZERO();
		static jdouble NO_UNIQUE_VALUE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PluralRules(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PluralRules(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::PluralRules createRules(jstring arg0);
		static android::icu::text::PluralRules forLocale(android::icu::util::ULocale arg0);
		static android::icu::text::PluralRules forLocale(java::util::Locale arg0);
		static android::icu::text::PluralRules forLocale(android::icu::util::ULocale arg0, android::icu::text::PluralRules_PluralType arg1);
		static android::icu::text::PluralRules forLocale(java::util::Locale arg0, android::icu::text::PluralRules_PluralType arg1);
		static android::icu::text::PluralRules parseDescription(jstring arg0);
		jboolean equals(android::icu::text::PluralRules arg0);
		jboolean equals(jobject arg0);
		JObject getAllKeywordValues(jstring arg0);
		JObject getKeywords();
		JObject getSamples(jstring arg0);
		jdouble getUniqueKeywordValue(jstring arg0);
		jint hashCode();
		jstring select(android::icu::number::FormattedNumber arg0);
		jstring select(jdouble arg0);
		jstring toString();
	};
} // namespace android::icu::text

