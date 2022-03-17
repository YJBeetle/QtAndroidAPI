#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../lang/StringBuffer.def.hpp"
#include "./CollationElementIterator.def.hpp"
#include "./CollationKey.def.hpp"
#include "./RuleBasedCollator.def.hpp"

namespace java::text
{
	// Fields
	
	// Constructors
	inline RuleBasedCollator::RuleBasedCollator(JString arg0)
		: java::text::Collator(
			"java.text.RuleBasedCollator",
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
	inline java::text::CollationElementIterator RuleBasedCollator::getCollationElementIterator(JString arg0) const
	{
		return callObjectMethod(
			"getCollationElementIterator",
			"(Ljava/lang/String;)Ljava/text/CollationElementIterator;",
			arg0.object<jstring>()
		);
	}
	inline java::text::CollationElementIterator RuleBasedCollator::getCollationElementIterator(JObject arg0) const
	{
		return callObjectMethod(
			"getCollationElementIterator",
			"(Ljava/text/CharacterIterator;)Ljava/text/CollationElementIterator;",
			arg0.object()
		);
	}
	inline java::text::CollationKey RuleBasedCollator::getCollationKey(JString arg0) const
	{
		return callObjectMethod(
			"getCollationKey",
			"(Ljava/lang/String;)Ljava/text/CollationKey;",
			arg0.object<jstring>()
		);
	}
	inline JString RuleBasedCollator::getRules() const
	{
		return callObjectMethod(
			"getRules",
			"()Ljava/lang/String;"
		);
	}
	inline jint RuleBasedCollator::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace java::text

// Base class headers
#include "./Collator.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::text;
#endif
