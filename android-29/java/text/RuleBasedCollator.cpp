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
	RuleBasedCollator::RuleBasedCollator(jstring arg0)
		: java::text::Collator(
			"java.text.RuleBasedCollator",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	jobject RuleBasedCollator::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint RuleBasedCollator::compare(jstring arg0, jstring arg1)
	{
		return callMethod<jint>(
			"compare",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
	jboolean RuleBasedCollator::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	java::text::CollationElementIterator RuleBasedCollator::getCollationElementIterator(jstring arg0)
	{
		return callObjectMethod(
			"getCollationElementIterator",
			"(Ljava/lang/String;)Ljava/text/CollationElementIterator;",
			arg0
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
	java::text::CollationKey RuleBasedCollator::getCollationKey(jstring arg0)
	{
		return callObjectMethod(
			"getCollationKey",
			"(Ljava/lang/String;)Ljava/text/CollationKey;",
			arg0
		);
	}
	jstring RuleBasedCollator::getRules()
	{
		return callObjectMethod(
			"getRules",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint RuleBasedCollator::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace java::text

