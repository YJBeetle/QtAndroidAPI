#include "../lang/StringBuffer.hpp"
#include "./RuleBasedCollator.hpp"
#include "./CollationElementIterator.hpp"

namespace java::text
{
	// Fields
	jint CollationElementIterator::NULLORDER()
	{
		return getStaticField<jint>(
			"java.text.CollationElementIterator",
			"NULLORDER"
		);
	}
	
	// QAndroidJniObject forward
	CollationElementIterator::CollationElementIterator(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint CollationElementIterator::primaryOrder(jint arg0)
	{
		return callStaticMethod<jint>(
			"java.text.CollationElementIterator",
			"primaryOrder",
			"(I)I",
			arg0
		);
	}
	jshort CollationElementIterator::secondaryOrder(jint arg0)
	{
		return callStaticMethod<jshort>(
			"java.text.CollationElementIterator",
			"secondaryOrder",
			"(I)S",
			arg0
		);
	}
	jshort CollationElementIterator::tertiaryOrder(jint arg0)
	{
		return callStaticMethod<jshort>(
			"java.text.CollationElementIterator",
			"tertiaryOrder",
			"(I)S",
			arg0
		);
	}
	jint CollationElementIterator::getMaxExpansion(jint arg0)
	{
		return callMethod<jint>(
			"getMaxExpansion",
			"(I)I",
			arg0
		);
	}
	jint CollationElementIterator::getOffset()
	{
		return callMethod<jint>(
			"getOffset",
			"()I"
		);
	}
	jint CollationElementIterator::next()
	{
		return callMethod<jint>(
			"next",
			"()I"
		);
	}
	jint CollationElementIterator::previous()
	{
		return callMethod<jint>(
			"previous",
			"()I"
		);
	}
	void CollationElementIterator::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void CollationElementIterator::setOffset(jint arg0)
	{
		callMethod<void>(
			"setOffset",
			"(I)V",
			arg0
		);
	}
	void CollationElementIterator::setText(jstring arg0)
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void CollationElementIterator::setText(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setText",
			"(Ljava/text/CharacterIterator;)V",
			arg0.object()
		);
	}
} // namespace java::text

