#pragma once

#include "../../../JIntArray.hpp"
#include "./CollationElementIterator.def.hpp"
#include "./CollationKey.def.hpp"
#include "./Collator.def.hpp"
#include "./UCharacterIterator.def.hpp"
#include "./UnicodeSet.def.hpp"
#include "../util/VersionInfo.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./RuleBasedCollator.def.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	inline RuleBasedCollator::RuleBasedCollator(JString arg0)
		: android::icu::text::Collator(
			"android.icu.text.RuleBasedCollator",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline JObject RuleBasedCollator::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline android::icu::text::RuleBasedCollator RuleBasedCollator::cloneAsThawed() const
	{
		return callObjectMethod(
			"cloneAsThawed",
			"()Landroid/icu/text/RuleBasedCollator;"
		);
	}
	inline jint RuleBasedCollator::compare(JString arg0, JString arg1) const
	{
		return callMethod<jint>(
			"compare",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline jboolean RuleBasedCollator::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::icu::text::Collator RuleBasedCollator::freeze() const
	{
		return callObjectMethod(
			"freeze",
			"()Landroid/icu/text/Collator;"
		);
	}
	inline android::icu::text::CollationElementIterator RuleBasedCollator::getCollationElementIterator(android::icu::text::UCharacterIterator arg0) const
	{
		return callObjectMethod(
			"getCollationElementIterator",
			"(Landroid/icu/text/UCharacterIterator;)Landroid/icu/text/CollationElementIterator;",
			arg0.object()
		);
	}
	inline android::icu::text::CollationElementIterator RuleBasedCollator::getCollationElementIterator(JString arg0) const
	{
		return callObjectMethod(
			"getCollationElementIterator",
			"(Ljava/lang/String;)Landroid/icu/text/CollationElementIterator;",
			arg0.object<jstring>()
		);
	}
	inline android::icu::text::CollationElementIterator RuleBasedCollator::getCollationElementIterator(JObject arg0) const
	{
		return callObjectMethod(
			"getCollationElementIterator",
			"(Ljava/text/CharacterIterator;)Landroid/icu/text/CollationElementIterator;",
			arg0.object()
		);
	}
	inline android::icu::text::CollationKey RuleBasedCollator::getCollationKey(JString arg0) const
	{
		return callObjectMethod(
			"getCollationKey",
			"(Ljava/lang/String;)Landroid/icu/text/CollationKey;",
			arg0.object<jstring>()
		);
	}
	inline void RuleBasedCollator::getContractionsAndExpansions(android::icu::text::UnicodeSet arg0, android::icu::text::UnicodeSet arg1, jboolean arg2) const
	{
		callMethod<void>(
			"getContractionsAndExpansions",
			"(Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;Z)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline jint RuleBasedCollator::getDecomposition() const
	{
		return callMethod<jint>(
			"getDecomposition",
			"()I"
		);
	}
	inline jint RuleBasedCollator::getMaxVariable() const
	{
		return callMethod<jint>(
			"getMaxVariable",
			"()I"
		);
	}
	inline jboolean RuleBasedCollator::getNumericCollation() const
	{
		return callMethod<jboolean>(
			"getNumericCollation",
			"()Z"
		);
	}
	inline JIntArray RuleBasedCollator::getReorderCodes() const
	{
		return callObjectMethod(
			"getReorderCodes",
			"()[I"
		);
	}
	inline JString RuleBasedCollator::getRules() const
	{
		return callObjectMethod(
			"getRules",
			"()Ljava/lang/String;"
		);
	}
	inline JString RuleBasedCollator::getRules(jboolean arg0) const
	{
		return callObjectMethod(
			"getRules",
			"(Z)Ljava/lang/String;",
			arg0
		);
	}
	inline jint RuleBasedCollator::getStrength() const
	{
		return callMethod<jint>(
			"getStrength",
			"()I"
		);
	}
	inline android::icu::text::UnicodeSet RuleBasedCollator::getTailoredSet() const
	{
		return callObjectMethod(
			"getTailoredSet",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	inline android::icu::util::VersionInfo RuleBasedCollator::getUCAVersion() const
	{
		return callObjectMethod(
			"getUCAVersion",
			"()Landroid/icu/util/VersionInfo;"
		);
	}
	inline jint RuleBasedCollator::getVariableTop() const
	{
		return callMethod<jint>(
			"getVariableTop",
			"()I"
		);
	}
	inline android::icu::util::VersionInfo RuleBasedCollator::getVersion() const
	{
		return callObjectMethod(
			"getVersion",
			"()Landroid/icu/util/VersionInfo;"
		);
	}
	inline jint RuleBasedCollator::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean RuleBasedCollator::isAlternateHandlingShifted() const
	{
		return callMethod<jboolean>(
			"isAlternateHandlingShifted",
			"()Z"
		);
	}
	inline jboolean RuleBasedCollator::isCaseLevel() const
	{
		return callMethod<jboolean>(
			"isCaseLevel",
			"()Z"
		);
	}
	inline jboolean RuleBasedCollator::isFrenchCollation() const
	{
		return callMethod<jboolean>(
			"isFrenchCollation",
			"()Z"
		);
	}
	inline jboolean RuleBasedCollator::isFrozen() const
	{
		return callMethod<jboolean>(
			"isFrozen",
			"()Z"
		);
	}
	inline jboolean RuleBasedCollator::isLowerCaseFirst() const
	{
		return callMethod<jboolean>(
			"isLowerCaseFirst",
			"()Z"
		);
	}
	inline jboolean RuleBasedCollator::isUpperCaseFirst() const
	{
		return callMethod<jboolean>(
			"isUpperCaseFirst",
			"()Z"
		);
	}
	inline void RuleBasedCollator::setAlternateHandlingDefault() const
	{
		callMethod<void>(
			"setAlternateHandlingDefault",
			"()V"
		);
	}
	inline void RuleBasedCollator::setAlternateHandlingShifted(jboolean arg0) const
	{
		callMethod<void>(
			"setAlternateHandlingShifted",
			"(Z)V",
			arg0
		);
	}
	inline void RuleBasedCollator::setCaseFirstDefault() const
	{
		callMethod<void>(
			"setCaseFirstDefault",
			"()V"
		);
	}
	inline void RuleBasedCollator::setCaseLevel(jboolean arg0) const
	{
		callMethod<void>(
			"setCaseLevel",
			"(Z)V",
			arg0
		);
	}
	inline void RuleBasedCollator::setCaseLevelDefault() const
	{
		callMethod<void>(
			"setCaseLevelDefault",
			"()V"
		);
	}
	inline void RuleBasedCollator::setDecomposition(jint arg0) const
	{
		callMethod<void>(
			"setDecomposition",
			"(I)V",
			arg0
		);
	}
	inline void RuleBasedCollator::setDecompositionDefault() const
	{
		callMethod<void>(
			"setDecompositionDefault",
			"()V"
		);
	}
	inline void RuleBasedCollator::setFrenchCollation(jboolean arg0) const
	{
		callMethod<void>(
			"setFrenchCollation",
			"(Z)V",
			arg0
		);
	}
	inline void RuleBasedCollator::setFrenchCollationDefault() const
	{
		callMethod<void>(
			"setFrenchCollationDefault",
			"()V"
		);
	}
	inline void RuleBasedCollator::setLowerCaseFirst(jboolean arg0) const
	{
		callMethod<void>(
			"setLowerCaseFirst",
			"(Z)V",
			arg0
		);
	}
	inline android::icu::text::RuleBasedCollator RuleBasedCollator::setMaxVariable(jint arg0) const
	{
		return callObjectMethod(
			"setMaxVariable",
			"(I)Landroid/icu/text/RuleBasedCollator;",
			arg0
		);
	}
	inline void RuleBasedCollator::setNumericCollation(jboolean arg0) const
	{
		callMethod<void>(
			"setNumericCollation",
			"(Z)V",
			arg0
		);
	}
	inline void RuleBasedCollator::setNumericCollationDefault() const
	{
		callMethod<void>(
			"setNumericCollationDefault",
			"()V"
		);
	}
	inline void RuleBasedCollator::setReorderCodes(JIntArray arg0) const
	{
		callMethod<void>(
			"setReorderCodes",
			"([I)V",
			arg0.object<jintArray>()
		);
	}
	inline void RuleBasedCollator::setStrength(jint arg0) const
	{
		callMethod<void>(
			"setStrength",
			"(I)V",
			arg0
		);
	}
	inline void RuleBasedCollator::setStrengthDefault() const
	{
		callMethod<void>(
			"setStrengthDefault",
			"()V"
		);
	}
	inline void RuleBasedCollator::setUpperCaseFirst(jboolean arg0) const
	{
		callMethod<void>(
			"setUpperCaseFirst",
			"(Z)V",
			arg0
		);
	}
} // namespace android::icu::text

// Base class headers
#include "./Collator.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
