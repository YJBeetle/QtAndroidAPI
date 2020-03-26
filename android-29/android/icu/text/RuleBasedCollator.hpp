#pragma once

#ifndef ANDROID_ICU_TEXT_RULEBASEDCOLLATOR
#define ANDROID_ICU_TEXT_RULEBASEDCOLLATOR

#include "../../../__JniBaseClass.hpp"
#include "Collator.hpp"

namespace __jni_impl::android::icu::text
{
	class Collator;
}
namespace __jni_impl::android::icu::util
{
	class VersionInfo;
}
namespace __jni_impl::android::icu::text
{
	class CollationKey;
}
namespace __jni_impl::android::icu::text
{
	class CollationElementIterator;
}
namespace __jni_impl::android::icu::text
{
	class UCharacterIterator;
}
namespace __jni_impl::android::icu::text
{
	class UnicodeSet;
}

namespace __jni_impl::android::icu::text
{
	class RuleBasedCollator : public __jni_impl::android::icu::text::Collator
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jobject clone();
		jint compare(jstring arg0, jstring arg1);
		jboolean isFrozen();
		QAndroidJniObject freeze();
		jstring getRules();
		jstring getRules(jboolean arg0);
		QAndroidJniObject getVersion();
		QAndroidJniObject getCollationKey(jstring arg0);
		void setStrength(jint arg0);
		QAndroidJniObject cloneAsThawed();
		QAndroidJniObject getCollationElementIterator(jstring arg0);
		QAndroidJniObject getCollationElementIterator(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getCollationElementIterator(__jni_impl::android::icu::text::UCharacterIterator arg0);
		void setUpperCaseFirst(jboolean arg0);
		void setLowerCaseFirst(jboolean arg0);
		void setCaseFirstDefault();
		void setAlternateHandlingDefault();
		void setCaseLevelDefault();
		void setDecompositionDefault();
		void setFrenchCollationDefault();
		void setStrengthDefault();
		void setNumericCollationDefault();
		void setFrenchCollation(jboolean arg0);
		void setAlternateHandlingShifted(jboolean arg0);
		void setCaseLevel(jboolean arg0);
		void setDecomposition(jint arg0);
		QAndroidJniObject setMaxVariable(jint arg0);
		jint getMaxVariable();
		void setNumericCollation(jboolean arg0);
		void setReorderCodes(jintArray arg0);
		QAndroidJniObject getTailoredSet();
		void getContractionsAndExpansions(__jni_impl::android::icu::text::UnicodeSet arg0, __jni_impl::android::icu::text::UnicodeSet arg1, jboolean arg2);
		jint getStrength();
		jint getDecomposition();
		jboolean isUpperCaseFirst();
		jboolean isLowerCaseFirst();
		jboolean isAlternateHandlingShifted();
		jboolean isCaseLevel();
		jboolean isFrenchCollation();
		jint getVariableTop();
		jboolean getNumericCollation();
		jintArray getReorderCodes();
		QAndroidJniObject getUCAVersion();
	};
} // namespace __jni_impl::android::icu::text

#include "Collator.hpp"
#include "../util/VersionInfo.hpp"
#include "CollationKey.hpp"
#include "CollationElementIterator.hpp"
#include "UCharacterIterator.hpp"
#include "UnicodeSet.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	
	// Constructors
	void RuleBasedCollator::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.RuleBasedCollator",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
	jboolean RuleBasedCollator::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint RuleBasedCollator::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jobject RuleBasedCollator::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint RuleBasedCollator::compare(jstring arg0, jstring arg1)
	{
		return __thiz.callMethod<jint>(
			"compare",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
	jboolean RuleBasedCollator::isFrozen()
	{
		return __thiz.callMethod<jboolean>(
			"isFrozen",
			"()Z"
		);
	}
	QAndroidJniObject RuleBasedCollator::freeze()
	{
		return __thiz.callObjectMethod(
			"freeze",
			"()Landroid/icu/text/Collator;"
		);
	}
	jstring RuleBasedCollator::getRules()
	{
		return __thiz.callObjectMethod(
			"getRules",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RuleBasedCollator::getRules(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"getRules",
			"(Z)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject RuleBasedCollator::getVersion()
	{
		return __thiz.callObjectMethod(
			"getVersion",
			"()Landroid/icu/util/VersionInfo;"
		);
	}
	QAndroidJniObject RuleBasedCollator::getCollationKey(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCollationKey",
			"(Ljava/lang/String;)Landroid/icu/text/CollationKey;",
			arg0
		);
	}
	void RuleBasedCollator::setStrength(jint arg0)
	{
		__thiz.callMethod<void>(
			"setStrength",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject RuleBasedCollator::cloneAsThawed()
	{
		return __thiz.callObjectMethod(
			"cloneAsThawed",
			"()Landroid/icu/text/RuleBasedCollator;"
		);
	}
	QAndroidJniObject RuleBasedCollator::getCollationElementIterator(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCollationElementIterator",
			"(Ljava/lang/String;)Landroid/icu/text/CollationElementIterator;",
			arg0
		);
	}
	QAndroidJniObject RuleBasedCollator::getCollationElementIterator(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"getCollationElementIterator",
			"(Ljava/text/CharacterIterator;)Landroid/icu/text/CollationElementIterator;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject RuleBasedCollator::getCollationElementIterator(__jni_impl::android::icu::text::UCharacterIterator arg0)
	{
		return __thiz.callObjectMethod(
			"getCollationElementIterator",
			"(Landroid/icu/text/UCharacterIterator;)Landroid/icu/text/CollationElementIterator;",
			arg0.__jniObject().object()
		);
	}
	void RuleBasedCollator::setUpperCaseFirst(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setUpperCaseFirst",
			"(Z)V",
			arg0
		);
	}
	void RuleBasedCollator::setLowerCaseFirst(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setLowerCaseFirst",
			"(Z)V",
			arg0
		);
	}
	void RuleBasedCollator::setCaseFirstDefault()
	{
		__thiz.callMethod<void>(
			"setCaseFirstDefault",
			"()V"
		);
	}
	void RuleBasedCollator::setAlternateHandlingDefault()
	{
		__thiz.callMethod<void>(
			"setAlternateHandlingDefault",
			"()V"
		);
	}
	void RuleBasedCollator::setCaseLevelDefault()
	{
		__thiz.callMethod<void>(
			"setCaseLevelDefault",
			"()V"
		);
	}
	void RuleBasedCollator::setDecompositionDefault()
	{
		__thiz.callMethod<void>(
			"setDecompositionDefault",
			"()V"
		);
	}
	void RuleBasedCollator::setFrenchCollationDefault()
	{
		__thiz.callMethod<void>(
			"setFrenchCollationDefault",
			"()V"
		);
	}
	void RuleBasedCollator::setStrengthDefault()
	{
		__thiz.callMethod<void>(
			"setStrengthDefault",
			"()V"
		);
	}
	void RuleBasedCollator::setNumericCollationDefault()
	{
		__thiz.callMethod<void>(
			"setNumericCollationDefault",
			"()V"
		);
	}
	void RuleBasedCollator::setFrenchCollation(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFrenchCollation",
			"(Z)V",
			arg0
		);
	}
	void RuleBasedCollator::setAlternateHandlingShifted(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAlternateHandlingShifted",
			"(Z)V",
			arg0
		);
	}
	void RuleBasedCollator::setCaseLevel(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setCaseLevel",
			"(Z)V",
			arg0
		);
	}
	void RuleBasedCollator::setDecomposition(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDecomposition",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject RuleBasedCollator::setMaxVariable(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setMaxVariable",
			"(I)Landroid/icu/text/RuleBasedCollator;",
			arg0
		);
	}
	jint RuleBasedCollator::getMaxVariable()
	{
		return __thiz.callMethod<jint>(
			"getMaxVariable",
			"()I"
		);
	}
	void RuleBasedCollator::setNumericCollation(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setNumericCollation",
			"(Z)V",
			arg0
		);
	}
	void RuleBasedCollator::setReorderCodes(jintArray arg0)
	{
		__thiz.callMethod<void>(
			"setReorderCodes",
			"([I)V",
			arg0
		);
	}
	QAndroidJniObject RuleBasedCollator::getTailoredSet()
	{
		return __thiz.callObjectMethod(
			"getTailoredSet",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	void RuleBasedCollator::getContractionsAndExpansions(__jni_impl::android::icu::text::UnicodeSet arg0, __jni_impl::android::icu::text::UnicodeSet arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"getContractionsAndExpansions",
			"(Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;Z)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jint RuleBasedCollator::getStrength()
	{
		return __thiz.callMethod<jint>(
			"getStrength",
			"()I"
		);
	}
	jint RuleBasedCollator::getDecomposition()
	{
		return __thiz.callMethod<jint>(
			"getDecomposition",
			"()I"
		);
	}
	jboolean RuleBasedCollator::isUpperCaseFirst()
	{
		return __thiz.callMethod<jboolean>(
			"isUpperCaseFirst",
			"()Z"
		);
	}
	jboolean RuleBasedCollator::isLowerCaseFirst()
	{
		return __thiz.callMethod<jboolean>(
			"isLowerCaseFirst",
			"()Z"
		);
	}
	jboolean RuleBasedCollator::isAlternateHandlingShifted()
	{
		return __thiz.callMethod<jboolean>(
			"isAlternateHandlingShifted",
			"()Z"
		);
	}
	jboolean RuleBasedCollator::isCaseLevel()
	{
		return __thiz.callMethod<jboolean>(
			"isCaseLevel",
			"()Z"
		);
	}
	jboolean RuleBasedCollator::isFrenchCollation()
	{
		return __thiz.callMethod<jboolean>(
			"isFrenchCollation",
			"()Z"
		);
	}
	jint RuleBasedCollator::getVariableTop()
	{
		return __thiz.callMethod<jint>(
			"getVariableTop",
			"()I"
		);
	}
	jboolean RuleBasedCollator::getNumericCollation()
	{
		return __thiz.callMethod<jboolean>(
			"getNumericCollation",
			"()Z"
		);
	}
	jintArray RuleBasedCollator::getReorderCodes()
	{
		return __thiz.callObjectMethod(
			"getReorderCodes",
			"()[I"
		).object<jintArray>();
	}
	QAndroidJniObject RuleBasedCollator::getUCAVersion()
	{
		return __thiz.callObjectMethod(
			"getUCAVersion",
			"()Landroid/icu/util/VersionInfo;"
		);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class RuleBasedCollator : public __jni_impl::android::icu::text::RuleBasedCollator
	{
	public:
		RuleBasedCollator(QAndroidJniObject obj) { __thiz = obj; }
		RuleBasedCollator(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_RULEBASEDCOLLATOR

