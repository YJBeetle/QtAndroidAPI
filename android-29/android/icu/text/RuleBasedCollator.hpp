#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Collator.hpp"

namespace __jni_impl::android::icu::text
{
	class CollationElementIterator;
}
namespace __jni_impl::android::icu::text
{
	class CollationKey;
}
namespace __jni_impl::android::icu::text
{
	class Collator;
}
namespace __jni_impl::android::icu::text
{
	class UCharacterIterator;
}
namespace __jni_impl::android::icu::text
{
	class UnicodeSet;
}
namespace __jni_impl::android::icu::util
{
	class VersionInfo;
}

namespace __jni_impl::android::icu::text
{
	class RuleBasedCollator : public __jni_impl::android::icu::text::Collator
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		jobject clone();
		QAndroidJniObject cloneAsThawed();
		jint compare(jstring arg0, jstring arg1);
		jint compare(const QString &arg0, const QString &arg1);
		jboolean equals(jobject arg0);
		QAndroidJniObject freeze();
		QAndroidJniObject getCollationElementIterator(__jni_impl::android::icu::text::UCharacterIterator arg0);
		QAndroidJniObject getCollationElementIterator(jstring arg0);
		QAndroidJniObject getCollationElementIterator(const QString &arg0);
		QAndroidJniObject getCollationElementIterator(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getCollationKey(jstring arg0);
		QAndroidJniObject getCollationKey(const QString &arg0);
		void getContractionsAndExpansions(__jni_impl::android::icu::text::UnicodeSet arg0, __jni_impl::android::icu::text::UnicodeSet arg1, jboolean arg2);
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
} // namespace __jni_impl::android::icu::text

#include "./CollationElementIterator.hpp"
#include "./CollationKey.hpp"
#include "./Collator.hpp"
#include "./UCharacterIterator.hpp"
#include "./UnicodeSet.hpp"
#include "../util/VersionInfo.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	
	// Constructors
	void RuleBasedCollator::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.RuleBasedCollator",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void RuleBasedCollator::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.RuleBasedCollator",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jobject RuleBasedCollator::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject RuleBasedCollator::cloneAsThawed()
	{
		return __thiz.callObjectMethod(
			"cloneAsThawed",
			"()Landroid/icu/text/RuleBasedCollator;"
		);
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
	jint RuleBasedCollator::compare(const QString &arg0, const QString &arg1)
	{
		return __thiz.callMethod<jint>(
			"compare",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jboolean RuleBasedCollator::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject RuleBasedCollator::freeze()
	{
		return __thiz.callObjectMethod(
			"freeze",
			"()Landroid/icu/text/Collator;"
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
	QAndroidJniObject RuleBasedCollator::getCollationElementIterator(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCollationElementIterator",
			"(Ljava/lang/String;)Landroid/icu/text/CollationElementIterator;",
			arg0
		);
	}
	QAndroidJniObject RuleBasedCollator::getCollationElementIterator(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getCollationElementIterator",
			"(Ljava/lang/String;)Landroid/icu/text/CollationElementIterator;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	QAndroidJniObject RuleBasedCollator::getCollationKey(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCollationKey",
			"(Ljava/lang/String;)Landroid/icu/text/CollationKey;",
			arg0
		);
	}
	QAndroidJniObject RuleBasedCollator::getCollationKey(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getCollationKey",
			"(Ljava/lang/String;)Landroid/icu/text/CollationKey;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jint RuleBasedCollator::getDecomposition()
	{
		return __thiz.callMethod<jint>(
			"getDecomposition",
			"()I"
		);
	}
	jint RuleBasedCollator::getMaxVariable()
	{
		return __thiz.callMethod<jint>(
			"getMaxVariable",
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
	jint RuleBasedCollator::getStrength()
	{
		return __thiz.callMethod<jint>(
			"getStrength",
			"()I"
		);
	}
	QAndroidJniObject RuleBasedCollator::getTailoredSet()
	{
		return __thiz.callObjectMethod(
			"getTailoredSet",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	QAndroidJniObject RuleBasedCollator::getUCAVersion()
	{
		return __thiz.callObjectMethod(
			"getUCAVersion",
			"()Landroid/icu/util/VersionInfo;"
		);
	}
	jint RuleBasedCollator::getVariableTop()
	{
		return __thiz.callMethod<jint>(
			"getVariableTop",
			"()I"
		);
	}
	QAndroidJniObject RuleBasedCollator::getVersion()
	{
		return __thiz.callObjectMethod(
			"getVersion",
			"()Landroid/icu/util/VersionInfo;"
		);
	}
	jint RuleBasedCollator::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
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
	jboolean RuleBasedCollator::isFrozen()
	{
		return __thiz.callMethod<jboolean>(
			"isFrozen",
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
	jboolean RuleBasedCollator::isUpperCaseFirst()
	{
		return __thiz.callMethod<jboolean>(
			"isUpperCaseFirst",
			"()Z"
		);
	}
	void RuleBasedCollator::setAlternateHandlingDefault()
	{
		__thiz.callMethod<void>(
			"setAlternateHandlingDefault",
			"()V"
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
	void RuleBasedCollator::setCaseFirstDefault()
	{
		__thiz.callMethod<void>(
			"setCaseFirstDefault",
			"()V"
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
	void RuleBasedCollator::setCaseLevelDefault()
	{
		__thiz.callMethod<void>(
			"setCaseLevelDefault",
			"()V"
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
	void RuleBasedCollator::setDecompositionDefault()
	{
		__thiz.callMethod<void>(
			"setDecompositionDefault",
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
	void RuleBasedCollator::setFrenchCollationDefault()
	{
		__thiz.callMethod<void>(
			"setFrenchCollationDefault",
			"()V"
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
	QAndroidJniObject RuleBasedCollator::setMaxVariable(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setMaxVariable",
			"(I)Landroid/icu/text/RuleBasedCollator;",
			arg0
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
	void RuleBasedCollator::setNumericCollationDefault()
	{
		__thiz.callMethod<void>(
			"setNumericCollationDefault",
			"()V"
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
	void RuleBasedCollator::setStrength(jint arg0)
	{
		__thiz.callMethod<void>(
			"setStrength",
			"(I)V",
			arg0
		);
	}
	void RuleBasedCollator::setStrengthDefault()
	{
		__thiz.callMethod<void>(
			"setStrengthDefault",
			"()V"
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

