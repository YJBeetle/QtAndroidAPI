#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Collator.hpp"

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

namespace android::icu::text
{
	class RuleBasedCollator : public android::icu::text::Collator
	{
	public:
		// Fields
		
		RuleBasedCollator(QAndroidJniObject obj);
		// Constructors
		RuleBasedCollator(jstring arg0);
		RuleBasedCollator() = default;
		
		// Methods
		jobject clone();
		QAndroidJniObject cloneAsThawed();
		jint compare(jstring arg0, jstring arg1);
		jboolean equals(jobject arg0);
		QAndroidJniObject freeze();
		QAndroidJniObject getCollationElementIterator(android::icu::text::UCharacterIterator arg0);
		QAndroidJniObject getCollationElementIterator(jstring arg0);
		QAndroidJniObject getCollationElementIterator(__JniBaseClass arg0);
		QAndroidJniObject getCollationKey(jstring arg0);
		void getContractionsAndExpansions(android::icu::text::UnicodeSet arg0, android::icu::text::UnicodeSet arg1, jboolean arg2);
		jint getDecomposition();
		jint getMaxVariable();
		jboolean getNumericCollation();
		jintArray getReorderCodes();
		jstring getRules();
		jstring getRules(jboolean arg0);
		jint getStrength();
		QAndroidJniObject getTailoredSet();
		QAndroidJniObject getUCAVersion();
		jint getVariableTop();
		QAndroidJniObject getVersion();
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
		QAndroidJniObject setMaxVariable(jint arg0);
		void setNumericCollation(jboolean arg0);
		void setNumericCollationDefault();
		void setReorderCodes(jintArray arg0);
		void setStrength(jint arg0);
		void setStrengthDefault();
		void setUpperCaseFirst(jboolean arg0);
	};
} // namespace android::icu::text

