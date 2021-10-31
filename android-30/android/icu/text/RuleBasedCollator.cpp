#include "./CollationElementIterator.hpp"
#include "./CollationKey.hpp"
#include "./Collator.hpp"
#include "./UCharacterIterator.hpp"
#include "./UnicodeSet.hpp"
#include "../util/VersionInfo.hpp"
#include "./RuleBasedCollator.hpp"

namespace android::icu::text
{
	// Fields
	
	// QAndroidJniObject forward
	RuleBasedCollator::RuleBasedCollator(QAndroidJniObject obj) : android::icu::text::Collator(obj) {}
	
	// Constructors
	RuleBasedCollator::RuleBasedCollator(jstring arg0)
		: android::icu::text::Collator(
			"android.icu.text.RuleBasedCollator",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	jobject RuleBasedCollator::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	android::icu::text::RuleBasedCollator RuleBasedCollator::cloneAsThawed()
	{
		return callObjectMethod(
			"cloneAsThawed",
			"()Landroid/icu/text/RuleBasedCollator;"
		);
	}
	jint RuleBasedCollator::compare(jstring arg0, jstring arg1)
	{
		return callMethod<jint>(
			"compare",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
	jboolean RuleBasedCollator::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::icu::text::Collator RuleBasedCollator::freeze()
	{
		return callObjectMethod(
			"freeze",
			"()Landroid/icu/text/Collator;"
		);
	}
	android::icu::text::CollationElementIterator RuleBasedCollator::getCollationElementIterator(android::icu::text::UCharacterIterator arg0)
	{
		return callObjectMethod(
			"getCollationElementIterator",
			"(Landroid/icu/text/UCharacterIterator;)Landroid/icu/text/CollationElementIterator;",
			arg0.object()
		);
	}
	android::icu::text::CollationElementIterator RuleBasedCollator::getCollationElementIterator(jstring arg0)
	{
		return callObjectMethod(
			"getCollationElementIterator",
			"(Ljava/lang/String;)Landroid/icu/text/CollationElementIterator;",
			arg0
		);
	}
	android::icu::text::CollationElementIterator RuleBasedCollator::getCollationElementIterator(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"getCollationElementIterator",
			"(Ljava/text/CharacterIterator;)Landroid/icu/text/CollationElementIterator;",
			arg0.object()
		);
	}
	android::icu::text::CollationKey RuleBasedCollator::getCollationKey(jstring arg0)
	{
		return callObjectMethod(
			"getCollationKey",
			"(Ljava/lang/String;)Landroid/icu/text/CollationKey;",
			arg0
		);
	}
	void RuleBasedCollator::getContractionsAndExpansions(android::icu::text::UnicodeSet arg0, android::icu::text::UnicodeSet arg1, jboolean arg2)
	{
		callMethod<void>(
			"getContractionsAndExpansions",
			"(Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;Z)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	jint RuleBasedCollator::getDecomposition()
	{
		return callMethod<jint>(
			"getDecomposition",
			"()I"
		);
	}
	jint RuleBasedCollator::getMaxVariable()
	{
		return callMethod<jint>(
			"getMaxVariable",
			"()I"
		);
	}
	jboolean RuleBasedCollator::getNumericCollation()
	{
		return callMethod<jboolean>(
			"getNumericCollation",
			"()Z"
		);
	}
	jintArray RuleBasedCollator::getReorderCodes()
	{
		return callObjectMethod(
			"getReorderCodes",
			"()[I"
		).object<jintArray>();
	}
	jstring RuleBasedCollator::getRules()
	{
		return callObjectMethod(
			"getRules",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RuleBasedCollator::getRules(jboolean arg0)
	{
		return callObjectMethod(
			"getRules",
			"(Z)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint RuleBasedCollator::getStrength()
	{
		return callMethod<jint>(
			"getStrength",
			"()I"
		);
	}
	android::icu::text::UnicodeSet RuleBasedCollator::getTailoredSet()
	{
		return callObjectMethod(
			"getTailoredSet",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	android::icu::util::VersionInfo RuleBasedCollator::getUCAVersion()
	{
		return callObjectMethod(
			"getUCAVersion",
			"()Landroid/icu/util/VersionInfo;"
		);
	}
	jint RuleBasedCollator::getVariableTop()
	{
		return callMethod<jint>(
			"getVariableTop",
			"()I"
		);
	}
	android::icu::util::VersionInfo RuleBasedCollator::getVersion()
	{
		return callObjectMethod(
			"getVersion",
			"()Landroid/icu/util/VersionInfo;"
		);
	}
	jint RuleBasedCollator::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean RuleBasedCollator::isAlternateHandlingShifted()
	{
		return callMethod<jboolean>(
			"isAlternateHandlingShifted",
			"()Z"
		);
	}
	jboolean RuleBasedCollator::isCaseLevel()
	{
		return callMethod<jboolean>(
			"isCaseLevel",
			"()Z"
		);
	}
	jboolean RuleBasedCollator::isFrenchCollation()
	{
		return callMethod<jboolean>(
			"isFrenchCollation",
			"()Z"
		);
	}
	jboolean RuleBasedCollator::isFrozen()
	{
		return callMethod<jboolean>(
			"isFrozen",
			"()Z"
		);
	}
	jboolean RuleBasedCollator::isLowerCaseFirst()
	{
		return callMethod<jboolean>(
			"isLowerCaseFirst",
			"()Z"
		);
	}
	jboolean RuleBasedCollator::isUpperCaseFirst()
	{
		return callMethod<jboolean>(
			"isUpperCaseFirst",
			"()Z"
		);
	}
	void RuleBasedCollator::setAlternateHandlingDefault()
	{
		callMethod<void>(
			"setAlternateHandlingDefault",
			"()V"
		);
	}
	void RuleBasedCollator::setAlternateHandlingShifted(jboolean arg0)
	{
		callMethod<void>(
			"setAlternateHandlingShifted",
			"(Z)V",
			arg0
		);
	}
	void RuleBasedCollator::setCaseFirstDefault()
	{
		callMethod<void>(
			"setCaseFirstDefault",
			"()V"
		);
	}
	void RuleBasedCollator::setCaseLevel(jboolean arg0)
	{
		callMethod<void>(
			"setCaseLevel",
			"(Z)V",
			arg0
		);
	}
	void RuleBasedCollator::setCaseLevelDefault()
	{
		callMethod<void>(
			"setCaseLevelDefault",
			"()V"
		);
	}
	void RuleBasedCollator::setDecomposition(jint arg0)
	{
		callMethod<void>(
			"setDecomposition",
			"(I)V",
			arg0
		);
	}
	void RuleBasedCollator::setDecompositionDefault()
	{
		callMethod<void>(
			"setDecompositionDefault",
			"()V"
		);
	}
	void RuleBasedCollator::setFrenchCollation(jboolean arg0)
	{
		callMethod<void>(
			"setFrenchCollation",
			"(Z)V",
			arg0
		);
	}
	void RuleBasedCollator::setFrenchCollationDefault()
	{
		callMethod<void>(
			"setFrenchCollationDefault",
			"()V"
		);
	}
	void RuleBasedCollator::setLowerCaseFirst(jboolean arg0)
	{
		callMethod<void>(
			"setLowerCaseFirst",
			"(Z)V",
			arg0
		);
	}
	android::icu::text::RuleBasedCollator RuleBasedCollator::setMaxVariable(jint arg0)
	{
		return callObjectMethod(
			"setMaxVariable",
			"(I)Landroid/icu/text/RuleBasedCollator;",
			arg0
		);
	}
	void RuleBasedCollator::setNumericCollation(jboolean arg0)
	{
		callMethod<void>(
			"setNumericCollation",
			"(Z)V",
			arg0
		);
	}
	void RuleBasedCollator::setNumericCollationDefault()
	{
		callMethod<void>(
			"setNumericCollationDefault",
			"()V"
		);
	}
	void RuleBasedCollator::setReorderCodes(jintArray arg0)
	{
		callMethod<void>(
			"setReorderCodes",
			"([I)V",
			arg0
		);
	}
	void RuleBasedCollator::setStrength(jint arg0)
	{
		callMethod<void>(
			"setStrength",
			"(I)V",
			arg0
		);
	}
	void RuleBasedCollator::setStrengthDefault()
	{
		callMethod<void>(
			"setStrengthDefault",
			"()V"
		);
	}
	void RuleBasedCollator::setUpperCaseFirst(jboolean arg0)
	{
		callMethod<void>(
			"setUpperCaseFirst",
			"(Z)V",
			arg0
		);
	}
} // namespace android::icu::text

