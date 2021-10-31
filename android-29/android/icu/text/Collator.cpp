#include "./CollationKey.hpp"
#include "./UnicodeSet.hpp"
#include "../util/ULocale.hpp"
#include "../util/VersionInfo.hpp"
#include "../../../java/util/Locale.hpp"
#include "./Collator.hpp"

namespace android::icu::text
{
	// Fields
	jint Collator::CANONICAL_DECOMPOSITION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.Collator",
			"CANONICAL_DECOMPOSITION"
		);
	}
	jint Collator::FULL_DECOMPOSITION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.Collator",
			"FULL_DECOMPOSITION"
		);
	}
	jint Collator::IDENTICAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.Collator",
			"IDENTICAL"
		);
	}
	jint Collator::NO_DECOMPOSITION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.Collator",
			"NO_DECOMPOSITION"
		);
	}
	jint Collator::PRIMARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.Collator",
			"PRIMARY"
		);
	}
	jint Collator::QUATERNARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.Collator",
			"QUATERNARY"
		);
	}
	jint Collator::SECONDARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.Collator",
			"SECONDARY"
		);
	}
	jint Collator::TERTIARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.Collator",
			"TERTIARY"
		);
	}
	
	// QAndroidJniObject forward
	Collator::Collator(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jarray Collator::getAvailableLocales()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Collator",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		).object<jarray>();
	}
	jarray Collator::getAvailableULocales()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Collator",
			"getAvailableULocales",
			"()[Landroid/icu/util/ULocale;"
		).object<jarray>();
	}
	jstring Collator::getDisplayName(android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Collator",
			"getDisplayName",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring Collator::getDisplayName(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Collator",
			"getDisplayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring Collator::getDisplayName(android::icu::util::ULocale arg0, android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Collator",
			"getDisplayName",
			"(Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object(),
			arg1.object()
		).object<jstring>();
	}
	jstring Collator::getDisplayName(java::util::Locale arg0, java::util::Locale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Collator",
			"getDisplayName",
			"(Ljava/util/Locale;Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object(),
			arg1.object()
		).object<jstring>();
	}
	jintArray Collator::getEquivalentReorderCodes(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Collator",
			"getEquivalentReorderCodes",
			"(I)[I",
			arg0
		).object<jintArray>();
	}
	android::icu::util::ULocale Collator::getFunctionalEquivalent(jstring arg0, android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Collator",
			"getFunctionalEquivalent",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/util/ULocale;",
			arg0,
			arg1.object()
		);
	}
	android::icu::util::ULocale Collator::getFunctionalEquivalent(jstring arg0, android::icu::util::ULocale arg1, jbooleanArray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Collator",
			"getFunctionalEquivalent",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;[Z)Landroid/icu/util/ULocale;",
			arg0,
			arg1.object(),
			arg2
		);
	}
	android::icu::text::Collator Collator::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Collator",
			"getInstance",
			"()Landroid/icu/text/Collator;"
		);
	}
	android::icu::text::Collator Collator::getInstance(android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Collator",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/Collator;",
			arg0.object()
		);
	}
	android::icu::text::Collator Collator::getInstance(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Collator",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/Collator;",
			arg0.object()
		);
	}
	jarray Collator::getKeywordValues(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Collator",
			"getKeywordValues",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			arg0
		).object<jarray>();
	}
	jarray Collator::getKeywordValuesForLocale(jstring arg0, android::icu::util::ULocale arg1, jboolean arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Collator",
			"getKeywordValuesForLocale",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;Z)[Ljava/lang/String;",
			arg0,
			arg1.object(),
			arg2
		).object<jarray>();
	}
	jarray Collator::getKeywords()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Collator",
			"getKeywords",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jobject Collator::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	android::icu::text::Collator Collator::cloneAsThawed()
	{
		return callObjectMethod(
			"cloneAsThawed",
			"()Landroid/icu/text/Collator;"
		);
	}
	jint Collator::compare(jobject arg0, jobject arg1)
	{
		return callMethod<jint>(
			"compare",
			"(Ljava/lang/Object;Ljava/lang/Object;)I",
			arg0,
			arg1
		);
	}
	jint Collator::compare(jstring arg0, jstring arg1)
	{
		return callMethod<jint>(
			"compare",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
	jboolean Collator::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean Collator::equals(jstring arg0, jstring arg1)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0,
			arg1
		);
	}
	android::icu::text::Collator Collator::freeze()
	{
		return callObjectMethod(
			"freeze",
			"()Landroid/icu/text/Collator;"
		);
	}
	android::icu::text::CollationKey Collator::getCollationKey(jstring arg0)
	{
		return callObjectMethod(
			"getCollationKey",
			"(Ljava/lang/String;)Landroid/icu/text/CollationKey;",
			arg0
		);
	}
	jint Collator::getDecomposition()
	{
		return callMethod<jint>(
			"getDecomposition",
			"()I"
		);
	}
	jint Collator::getMaxVariable()
	{
		return callMethod<jint>(
			"getMaxVariable",
			"()I"
		);
	}
	jintArray Collator::getReorderCodes()
	{
		return callObjectMethod(
			"getReorderCodes",
			"()[I"
		).object<jintArray>();
	}
	jint Collator::getStrength()
	{
		return callMethod<jint>(
			"getStrength",
			"()I"
		);
	}
	android::icu::text::UnicodeSet Collator::getTailoredSet()
	{
		return callObjectMethod(
			"getTailoredSet",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	android::icu::util::VersionInfo Collator::getUCAVersion()
	{
		return callObjectMethod(
			"getUCAVersion",
			"()Landroid/icu/util/VersionInfo;"
		);
	}
	jint Collator::getVariableTop()
	{
		return callMethod<jint>(
			"getVariableTop",
			"()I"
		);
	}
	android::icu::util::VersionInfo Collator::getVersion()
	{
		return callObjectMethod(
			"getVersion",
			"()Landroid/icu/util/VersionInfo;"
		);
	}
	jint Collator::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Collator::isFrozen()
	{
		return callMethod<jboolean>(
			"isFrozen",
			"()Z"
		);
	}
	void Collator::setDecomposition(jint arg0)
	{
		callMethod<void>(
			"setDecomposition",
			"(I)V",
			arg0
		);
	}
	android::icu::text::Collator Collator::setMaxVariable(jint arg0)
	{
		return callObjectMethod(
			"setMaxVariable",
			"(I)Landroid/icu/text/Collator;",
			arg0
		);
	}
	void Collator::setReorderCodes(jintArray arg0)
	{
		callMethod<void>(
			"setReorderCodes",
			"([I)V",
			arg0
		);
	}
	void Collator::setStrength(jint arg0)
	{
		callMethod<void>(
			"setStrength",
			"(I)V",
			arg0
		);
	}
} // namespace android::icu::text

