#include "../../../JIntArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JBooleanArray.hpp"
#include "./CollationKey.hpp"
#include "./UnicodeSet.hpp"
#include "../util/ULocale.hpp"
#include "../util/VersionInfo.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.hpp"
#include "./Collator.hpp"

namespace android::icu::text
{
	// Fields
	jint Collator::CANONICAL_DECOMPOSITION()
	{
		return getStaticField<jint>(
			"android.icu.text.Collator",
			"CANONICAL_DECOMPOSITION"
		);
	}
	jint Collator::FULL_DECOMPOSITION()
	{
		return getStaticField<jint>(
			"android.icu.text.Collator",
			"FULL_DECOMPOSITION"
		);
	}
	jint Collator::IDENTICAL()
	{
		return getStaticField<jint>(
			"android.icu.text.Collator",
			"IDENTICAL"
		);
	}
	jint Collator::NO_DECOMPOSITION()
	{
		return getStaticField<jint>(
			"android.icu.text.Collator",
			"NO_DECOMPOSITION"
		);
	}
	jint Collator::PRIMARY()
	{
		return getStaticField<jint>(
			"android.icu.text.Collator",
			"PRIMARY"
		);
	}
	jint Collator::QUATERNARY()
	{
		return getStaticField<jint>(
			"android.icu.text.Collator",
			"QUATERNARY"
		);
	}
	jint Collator::SECONDARY()
	{
		return getStaticField<jint>(
			"android.icu.text.Collator",
			"SECONDARY"
		);
	}
	jint Collator::TERTIARY()
	{
		return getStaticField<jint>(
			"android.icu.text.Collator",
			"TERTIARY"
		);
	}
	
	// QAndroidJniObject forward
	Collator::Collator(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JArray Collator::getAvailableLocales()
	{
		return callStaticObjectMethod(
			"android.icu.text.Collator",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		);
	}
	JArray Collator::getAvailableULocales()
	{
		return callStaticObjectMethod(
			"android.icu.text.Collator",
			"getAvailableULocales",
			"()[Landroid/icu/util/ULocale;"
		);
	}
	JString Collator::getDisplayName(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.Collator",
			"getDisplayName",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString Collator::getDisplayName(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.Collator",
			"getDisplayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString Collator::getDisplayName(android::icu::util::ULocale arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.Collator",
			"getDisplayName",
			"(Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object(),
			arg1.object()
		);
	}
	JString Collator::getDisplayName(java::util::Locale arg0, java::util::Locale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.Collator",
			"getDisplayName",
			"(Ljava/util/Locale;Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object(),
			arg1.object()
		);
	}
	JIntArray Collator::getEquivalentReorderCodes(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.Collator",
			"getEquivalentReorderCodes",
			"(I)[I",
			arg0
		);
	}
	android::icu::util::ULocale Collator::getFunctionalEquivalent(JString arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.Collator",
			"getFunctionalEquivalent",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/util/ULocale;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	android::icu::util::ULocale Collator::getFunctionalEquivalent(JString arg0, android::icu::util::ULocale arg1, JBooleanArray arg2)
	{
		return callStaticObjectMethod(
			"android.icu.text.Collator",
			"getFunctionalEquivalent",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;[Z)Landroid/icu/util/ULocale;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object<jbooleanArray>()
		);
	}
	android::icu::text::Collator Collator::getInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.Collator",
			"getInstance",
			"()Landroid/icu/text/Collator;"
		);
	}
	android::icu::text::Collator Collator::getInstance(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.Collator",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/Collator;",
			arg0.object()
		);
	}
	android::icu::text::Collator Collator::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.Collator",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/Collator;",
			arg0.object()
		);
	}
	JArray Collator::getKeywordValues(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.Collator",
			"getKeywordValues",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JArray Collator::getKeywordValuesForLocale(JString arg0, android::icu::util::ULocale arg1, jboolean arg2)
	{
		return callStaticObjectMethod(
			"android.icu.text.Collator",
			"getKeywordValuesForLocale",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;Z)[Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2
		);
	}
	JArray Collator::getKeywords()
	{
		return callStaticObjectMethod(
			"android.icu.text.Collator",
			"getKeywords",
			"()[Ljava/lang/String;"
		);
	}
	JObject Collator::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	android::icu::text::Collator Collator::cloneAsThawed() const
	{
		return callObjectMethod(
			"cloneAsThawed",
			"()Landroid/icu/text/Collator;"
		);
	}
	jint Collator::compare(JObject arg0, JObject arg1) const
	{
		return callMethod<jint>(
			"compare",
			"(Ljava/lang/Object;Ljava/lang/Object;)I",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	jint Collator::compare(JString arg0, JString arg1) const
	{
		return callMethod<jint>(
			"compare",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	jboolean Collator::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean Collator::equals(JString arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	android::icu::text::Collator Collator::freeze() const
	{
		return callObjectMethod(
			"freeze",
			"()Landroid/icu/text/Collator;"
		);
	}
	android::icu::text::CollationKey Collator::getCollationKey(JString arg0) const
	{
		return callObjectMethod(
			"getCollationKey",
			"(Ljava/lang/String;)Landroid/icu/text/CollationKey;",
			arg0.object<jstring>()
		);
	}
	jint Collator::getDecomposition() const
	{
		return callMethod<jint>(
			"getDecomposition",
			"()I"
		);
	}
	jint Collator::getMaxVariable() const
	{
		return callMethod<jint>(
			"getMaxVariable",
			"()I"
		);
	}
	JIntArray Collator::getReorderCodes() const
	{
		return callObjectMethod(
			"getReorderCodes",
			"()[I"
		);
	}
	jint Collator::getStrength() const
	{
		return callMethod<jint>(
			"getStrength",
			"()I"
		);
	}
	android::icu::text::UnicodeSet Collator::getTailoredSet() const
	{
		return callObjectMethod(
			"getTailoredSet",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	android::icu::util::VersionInfo Collator::getUCAVersion() const
	{
		return callObjectMethod(
			"getUCAVersion",
			"()Landroid/icu/util/VersionInfo;"
		);
	}
	jint Collator::getVariableTop() const
	{
		return callMethod<jint>(
			"getVariableTop",
			"()I"
		);
	}
	android::icu::util::VersionInfo Collator::getVersion() const
	{
		return callObjectMethod(
			"getVersion",
			"()Landroid/icu/util/VersionInfo;"
		);
	}
	jint Collator::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Collator::isFrozen() const
	{
		return callMethod<jboolean>(
			"isFrozen",
			"()Z"
		);
	}
	void Collator::setDecomposition(jint arg0) const
	{
		callMethod<void>(
			"setDecomposition",
			"(I)V",
			arg0
		);
	}
	android::icu::text::Collator Collator::setMaxVariable(jint arg0) const
	{
		return callObjectMethod(
			"setMaxVariable",
			"(I)Landroid/icu/text/Collator;",
			arg0
		);
	}
	void Collator::setReorderCodes(JIntArray arg0) const
	{
		callMethod<void>(
			"setReorderCodes",
			"([I)V",
			arg0.object<jintArray>()
		);
	}
	void Collator::setStrength(jint arg0) const
	{
		callMethod<void>(
			"setStrength",
			"(I)V",
			arg0
		);
	}
} // namespace android::icu::text

