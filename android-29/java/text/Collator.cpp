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
	
	// QJniObject forward
	Collator::Collator(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jarray Collator::getAvailableLocales()
	{
		return callStaticObjectMethod(
			"java.text.Collator",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		).object<jarray>();
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
	jobject Collator::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
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
	java::text::CollationKey Collator::getCollationKey(jstring arg0)
	{
		return callObjectMethod(
			"getCollationKey",
			"(Ljava/lang/String;)Ljava/text/CollationKey;",
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
	jint Collator::getStrength()
	{
		return callMethod<jint>(
			"getStrength",
			"()I"
		);
	}
	jint Collator::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
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
	void Collator::setStrength(jint arg0)
	{
		callMethod<void>(
			"setStrength",
			"(I)V",
			arg0
		);
	}
} // namespace java::text

