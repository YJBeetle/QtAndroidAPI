#pragma once

#include "../../../JObject.hpp"

class JIntArray;
class JArray;
class JArray;
class JArray;
class JBooleanArray;
namespace android::icu::text
{
	class CollationKey;
}
namespace android::icu::text
{
	class UnicodeSet;
}
namespace android::icu::util
{
	class ULocale;
}
namespace android::icu::util
{
	class VersionInfo;
}
class JObject;
class JString;
namespace java::util
{
	class Locale;
}

namespace android::icu::text
{
	class Collator : public JObject
	{
	public:
		// Fields
		static jint CANONICAL_DECOMPOSITION();
		static jint FULL_DECOMPOSITION();
		static jint IDENTICAL();
		static jint NO_DECOMPOSITION();
		static jint PRIMARY();
		static jint QUATERNARY();
		static jint SECONDARY();
		static jint TERTIARY();
		
		// QJniObject forward
		template<typename ...Ts> explicit Collator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Collator(QJniObject obj);
		
		// Constructors
		
		// Methods
		static JArray getAvailableLocales();
		static JArray getAvailableULocales();
		static JString getDisplayName(android::icu::util::ULocale arg0);
		static JString getDisplayName(java::util::Locale arg0);
		static JString getDisplayName(android::icu::util::ULocale arg0, android::icu::util::ULocale arg1);
		static JString getDisplayName(java::util::Locale arg0, java::util::Locale arg1);
		static JIntArray getEquivalentReorderCodes(jint arg0);
		static android::icu::util::ULocale getFunctionalEquivalent(JString arg0, android::icu::util::ULocale arg1);
		static android::icu::util::ULocale getFunctionalEquivalent(JString arg0, android::icu::util::ULocale arg1, JBooleanArray arg2);
		static android::icu::text::Collator getInstance();
		static android::icu::text::Collator getInstance(android::icu::util::ULocale arg0);
		static android::icu::text::Collator getInstance(java::util::Locale arg0);
		static JArray getKeywordValues(JString arg0);
		static JArray getKeywordValuesForLocale(JString arg0, android::icu::util::ULocale arg1, jboolean arg2);
		static JArray getKeywords();
		JObject clone();
		android::icu::text::Collator cloneAsThawed();
		jint compare(JObject arg0, JObject arg1);
		jint compare(JString arg0, JString arg1);
		jboolean equals(JObject arg0);
		jboolean equals(JString arg0, JString arg1);
		android::icu::text::Collator freeze();
		android::icu::text::CollationKey getCollationKey(JString arg0);
		jint getDecomposition();
		jint getMaxVariable();
		JIntArray getReorderCodes();
		jint getStrength();
		android::icu::text::UnicodeSet getTailoredSet();
		android::icu::util::VersionInfo getUCAVersion();
		jint getVariableTop();
		android::icu::util::VersionInfo getVersion();
		jint hashCode();
		jboolean isFrozen();
		void setDecomposition(jint arg0);
		android::icu::text::Collator setMaxVariable(jint arg0);
		void setReorderCodes(JIntArray arg0);
		void setStrength(jint arg0);
	};
} // namespace android::icu::text

