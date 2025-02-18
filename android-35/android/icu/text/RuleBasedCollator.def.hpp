#pragma once

#include "./Collator.def.hpp"

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
		RuleBasedCollator(QJniObject obj) : android::icu::text::Collator(obj) {}
		
		// Constructors
		RuleBasedCollator(JString arg0);
		
		// Methods
		JObject clone() const;
		android::icu::text::RuleBasedCollator cloneAsThawed() const;
		jint compare(JString arg0, JString arg1) const;
		jboolean equals(JObject arg0) const;
		android::icu::text::Collator freeze() const;
		android::icu::text::CollationElementIterator getCollationElementIterator(android::icu::text::UCharacterIterator arg0) const;
		android::icu::text::CollationElementIterator getCollationElementIterator(JString arg0) const;
		android::icu::text::CollationElementIterator getCollationElementIterator(JObject arg0) const;
		android::icu::text::CollationKey getCollationKey(JString arg0) const;
		void getContractionsAndExpansions(android::icu::text::UnicodeSet arg0, android::icu::text::UnicodeSet arg1, jboolean arg2) const;
		jint getDecomposition() const;
		jint getMaxVariable() const;
		jboolean getNumericCollation() const;
		JIntArray getReorderCodes() const;
		JString getRules() const;
		JString getRules(jboolean arg0) const;
		jint getStrength() const;
		android::icu::text::UnicodeSet getTailoredSet() const;
		android::icu::util::VersionInfo getUCAVersion() const;
		jint getVariableTop() const;
		android::icu::util::VersionInfo getVersion() const;
		jint hashCode() const;
		jboolean isAlternateHandlingShifted() const;
		jboolean isCaseLevel() const;
		jboolean isFrenchCollation() const;
		jboolean isFrozen() const;
		jboolean isLowerCaseFirst() const;
		jboolean isUpperCaseFirst() const;
		void setAlternateHandlingDefault() const;
		void setAlternateHandlingShifted(jboolean arg0) const;
		void setCaseFirstDefault() const;
		void setCaseLevel(jboolean arg0) const;
		void setCaseLevelDefault() const;
		void setDecomposition(jint arg0) const;
		void setDecompositionDefault() const;
		void setFrenchCollation(jboolean arg0) const;
		void setFrenchCollationDefault() const;
		void setLowerCaseFirst(jboolean arg0) const;
		android::icu::text::RuleBasedCollator setMaxVariable(jint arg0) const;
		void setNumericCollation(jboolean arg0) const;
		void setNumericCollationDefault() const;
		void setReorderCodes(JIntArray arg0) const;
		void setStrength(jint arg0) const;
		void setStrengthDefault() const;
		void setUpperCaseFirst(jboolean arg0) const;
	};
} // namespace android::icu::text

