#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../lang/StringBuffer.hpp"
#include "./CollationElementIterator.hpp"
#include "./CollationKey.hpp"
#include "./RuleBasedCollator.hpp"

namespace java::text
{
	// Fields
	
	// QAndroidJniObject forward
	RuleBasedCollator::RuleBasedCollator(QAndroidJniObject obj) : java::text::Collator(obj) {}
	
	// Constructors
	RuleBasedCollator::RuleBasedCollator(JString arg0)
		: java::text::Collator(
			"java.text.RuleBasedCollator",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	JObject RuleBasedCollator::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	jint RuleBasedCollator::compare(JString arg0, JString arg1)
	{
		return callMethod<jint>(
			"compare",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	jboolean RuleBasedCollator::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	java::text::CollationElementIterator RuleBasedCollator::getCollationElementIterator(JString arg0)
	{
		return callObjectMethod(
			"getCollationElementIterator",
			"(Ljava/lang/String;)Ljava/text/CollationElementIterator;",
			arg0.object<jstring>()
		);
	}
	java::text::CollationElementIterator RuleBasedCollator::getCollationElementIterator(JObject arg0)
	{
		return callObjectMethod(
			"getCollationElementIterator",
			"(Ljava/text/CharacterIterator;)Ljava/text/CollationElementIterator;",
			arg0.object()
		);
	}
	java::text::CollationKey RuleBasedCollator::getCollationKey(JString arg0)
	{
		return callObjectMethod(
			"getCollationKey",
			"(Ljava/lang/String;)Ljava/text/CollationKey;",
			arg0.object<jstring>()
		);
	}
	JString RuleBasedCollator::getRules()
	{
		return callObjectMethod(
			"getRules",
			"()Ljava/lang/String;"
		);
	}
	jint RuleBasedCollator::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace java::text

