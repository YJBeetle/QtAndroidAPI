#pragma once

#include "../../JArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CollationKey.def.hpp"
#include "../util/Locale.def.hpp"
#include "./Collator.def.hpp"

namespace java::text
{
	// Fields
	inline jint Collator::CANONICAL_DECOMPOSITION()
	{
		return getStaticField<jint>(
			"java.text.Collator",
			"CANONICAL_DECOMPOSITION"
		);
	}
	inline jint Collator::FULL_DECOMPOSITION()
	{
		return getStaticField<jint>(
			"java.text.Collator",
			"FULL_DECOMPOSITION"
		);
	}
	inline jint Collator::IDENTICAL()
	{
		return getStaticField<jint>(
			"java.text.Collator",
			"IDENTICAL"
		);
	}
	inline jint Collator::NO_DECOMPOSITION()
	{
		return getStaticField<jint>(
			"java.text.Collator",
			"NO_DECOMPOSITION"
		);
	}
	inline jint Collator::PRIMARY()
	{
		return getStaticField<jint>(
			"java.text.Collator",
			"PRIMARY"
		);
	}
	inline jint Collator::SECONDARY()
	{
		return getStaticField<jint>(
			"java.text.Collator",
			"SECONDARY"
		);
	}
	inline jint Collator::TERTIARY()
	{
		return getStaticField<jint>(
			"java.text.Collator",
			"TERTIARY"
		);
	}
	
	// Constructors
	
	// Methods
	inline JArray Collator::getAvailableLocales()
	{
		return callStaticObjectMethod(
			"java.text.Collator",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		);
	}
	inline java::text::Collator Collator::getInstance()
	{
		return callStaticObjectMethod(
			"java.text.Collator",
			"getInstance",
			"()Ljava/text/Collator;"
		);
	}
	inline java::text::Collator Collator::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"java.text.Collator",
			"getInstance",
			"(Ljava/util/Locale;)Ljava/text/Collator;",
			arg0.object()
		);
	}
	inline JObject Collator::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline jint Collator::compare(JObject arg0, JObject arg1) const
	{
		return callMethod<jint>(
			"compare",
			"(Ljava/lang/Object;Ljava/lang/Object;)I",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	inline jint Collator::compare(JString arg0, JString arg1) const
	{
		return callMethod<jint>(
			"compare",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline jboolean Collator::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean Collator::equals(JString arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline java::text::CollationKey Collator::getCollationKey(JString arg0) const
	{
		return callObjectMethod(
			"getCollationKey",
			"(Ljava/lang/String;)Ljava/text/CollationKey;",
			arg0.object<jstring>()
		);
	}
	inline jint Collator::getDecomposition() const
	{
		return callMethod<jint>(
			"getDecomposition",
			"()I"
		);
	}
	inline jint Collator::getStrength() const
	{
		return callMethod<jint>(
			"getStrength",
			"()I"
		);
	}
	inline jint Collator::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void Collator::setDecomposition(jint arg0) const
	{
		callMethod<void>(
			"setDecomposition",
			"(I)V",
			arg0
		);
	}
	inline void Collator::setStrength(jint arg0) const
	{
		callMethod<void>(
			"setStrength",
			"(I)V",
			arg0
		);
	}
} // namespace java::text

// Base class headers

