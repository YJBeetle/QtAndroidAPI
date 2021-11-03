#include "./RuleBasedCollator.hpp"
#include "./UCharacterIterator.hpp"
#include "./CollationElementIterator.hpp"

namespace android::icu::text
{
	// Fields
	jint CollationElementIterator::IGNORABLE()
	{
		return getStaticField<jint>(
			"android.icu.text.CollationElementIterator",
			"IGNORABLE"
		);
	}
	jint CollationElementIterator::NULLORDER()
	{
		return getStaticField<jint>(
			"android.icu.text.CollationElementIterator",
			"NULLORDER"
		);
	}
	
	// QAndroidJniObject forward
	CollationElementIterator::CollationElementIterator(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint CollationElementIterator::primaryOrder(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.text.CollationElementIterator",
			"primaryOrder",
			"(I)I",
			arg0
		);
	}
	jint CollationElementIterator::secondaryOrder(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.text.CollationElementIterator",
			"secondaryOrder",
			"(I)I",
			arg0
		);
	}
	jint CollationElementIterator::tertiaryOrder(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.text.CollationElementIterator",
			"tertiaryOrder",
			"(I)I",
			arg0
		);
	}
	jboolean CollationElementIterator::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
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
	jint CollationElementIterator::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
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
	void CollationElementIterator::setText(android::icu::text::UCharacterIterator arg0)
	{
		callMethod<void>(
			"setText",
			"(Landroid/icu/text/UCharacterIterator;)V",
			arg0.object()
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
	void CollationElementIterator::setText(JObject arg0)
	{
		callMethod<void>(
			"setText",
			"(Ljava/text/CharacterIterator;)V",
			arg0.object()
		);
	}
} // namespace android::icu::text

