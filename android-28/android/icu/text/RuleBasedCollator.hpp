#pragma once

#include "./Collator.hpp"

class JIntArray;
namespace android::icu::text
{
	class CollationElementIterator;
}
namespace android::icu::text
{
	class CollationKey;
}
namespace android::icu::text
{
	class Collator;
}
namespace android::icu::text
{
	class UCharacterIterator;
}
namespace android::icu::text
{
	class UnicodeSet;
}
namespace android::icu::util
{
	class VersionInfo;
}
class JObject;
class JString;

namespace android::icu::text
{
	class RuleBasedCollator : public android::icu::text::Collator
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RuleBasedCollator(const char *className, const char *sig, Ts...agv) : android::icu::text::Collator(className, sig, std::forward<Ts>(agv)...) {}
		RuleBasedCollator(QJniObject obj);
		
		// Constructors
		RuleBasedCollator(JString arg0);
		
		// Methods
		JObject clone();
		android::icu::text::RuleBasedCollator cloneAsThawed();
		jint compare(JString arg0, JString arg1);
		jboolean equals(JObject arg0);
		android::icu::text::Collator freeze();
		android::icu::text::CollationElementIterator getCollationElementIterator(android::icu::text::UCharacterIterator arg0);
		android::icu::text::CollationElementIterator getCollationElementIterator(JString arg0);
		android::icu::text::CollationElementIterator getCollationElementIterator(JObject arg0);
		android::icu::text::CollationKey getCollationKey(JString arg0);
		void getContractionsAndExpansions(android::icu::text::UnicodeSet arg0, android::icu::text::UnicodeSet arg1, jboolean arg2);
		jint getDecomposition();
		jint getMaxVariable();
		jboolean getNumericCollation();
		JIntArray getReorderCodes();
		JString getRules();
		JString getRules(jboolean arg0);
		jint getStrength();
		android::icu::text::UnicodeSet getTailoredSet();
		android::icu::util::VersionInfo getUCAVersion();
		jint getVariableTop();
		android::icu::util::VersionInfo getVersion();
		jint hashCode();
		jboolean isAlternateHandlingShifted();
		jboolean isCaseLevel();
		jboolean isFrenchCollation();
		jboolean isFrozen();
		jboolean isLowerCaseFirst();
		jboolean isUpperCaseFirst();
		void setAlternateHandlingDefault();
		void setAlternateHandlingShifted(jboolean arg0);
		void setCaseFirstDefault();
		void setCaseLevel(jboolean arg0);
		void setCaseLevelDefault();
		void setDecomposition(jint arg0);
		void setDecompositionDefault();
		void setFrenchCollation(jboolean arg0);
		void setFrenchCollationDefault();
		void setLowerCaseFirst(jboolean arg0);
		android::icu::text::RuleBasedCollator setMaxVariable(jint arg0);
		void setNumericCollation(jboolean arg0);
		void setNumericCollationDefault();
		void setReorderCodes(JIntArray arg0);
		void setStrength(jint arg0);
		void setStrengthDefault();
		void setUpperCaseFirst(jboolean arg0);
	};
} // namespace android::icu::text

