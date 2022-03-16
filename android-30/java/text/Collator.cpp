#include "../../JArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CollationKey.hpp"
#include "../util/Locale.hpp"
#include "./Collator.hpp"

namespace java::text
{
	// Fields
	jint Collator::CANONICAL_DECOMPOSITION()
	{
		return getStaticField<jint>(
			"java.text.Collator",
			"CANONICAL_DECOMPOSITION"
		);
	}
	jint Collator::FULL_DECOMPOSITION()
	{
		return getStaticField<jint>(
			"java.text.Collator",
			"FULL_DECOMPOSITION"
		);
	}
	jint Collator::IDENTICAL()
	{
		return getStaticField<jint>(
			"java.text.Collator",
			"IDENTICAL"
		);
	}
	jint Collator::NO_DECOMPOSITION()
	{
		return getStaticField<jint>(
			"java.text.Collator",
			"NO_DECOMPOSITION"
		);
	}
	jint Collator::PRIMARY()
	{
		return getStaticField<jint>(
			"java.text.Collator",
			"PRIMARY"
		);
	}
	jint Collator::SECONDARY()
	{
		return getStaticField<jint>(
			"java.text.Collator",
			"SECONDARY"
		);
	}
	jint Collator::TERTIARY()
	{
		return getStaticField<jint>(
			"java.text.Collator",
			"TERTIARY"
		);
	}
	
	// Constructors
	
	// Methods
	JArray Collator::getAvailableLocales()
	{
		return callStaticObjectMethod(
			"java.text.Collator",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		);
	}
	java::text::Collator Collator::getInstance()
	{
		return callStaticObjectMethod(
			"java.text.Collator",
			"getInstance",
			"()Ljava/text/Collator;"
		);
	}
	java::text::Collator Collator::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"java.text.Collator",
			"getInstance",
			"(Ljava/util/Locale;)Ljava/text/Collator;",
			arg0.object()
		);
	}
	JObject Collator::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
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
	java::text::CollationKey Collator::getCollationKey(JString arg0) const
	{
		return callObjectMethod(
			"getCollationKey",
			"(Ljava/lang/String;)Ljava/text/CollationKey;",
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
	jint Collator::getStrength() const
	{
		return callMethod<jint>(
			"getStrength",
			"()I"
		);
	}
	jint Collator::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
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
	void Collator::setStrength(jint arg0) const
	{
		callMethod<void>(
			"setStrength",
			"(I)V",
			arg0
		);
	}
} // namespace java::text

