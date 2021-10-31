#include "./RuleBasedCollator.hpp"
#include "./UCharacterIterator.hpp"
#include "./CollationElementIterator.hpp"

namespace android::icu::text
{
	// Fields
	jint CollationElementIterator::IGNORABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.CollationElementIterator",
			"IGNORABLE"
		);
	}
	jint CollationElementIterator::NULLORDER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.CollationElementIterator",
			"NULLORDER"
		);
	}
	
	CollationElementIterator::CollationElementIterator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint CollationElementIterator::primaryOrder(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.text.CollationElementIterator",
			"primaryOrder",
			"(I)I",
			arg0
		);
	}
	jint CollationElementIterator::secondaryOrder(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.text.CollationElementIterator",
			"secondaryOrder",
			"(I)I",
			arg0
		);
	}
	jint CollationElementIterator::tertiaryOrder(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.text.CollationElementIterator",
			"tertiaryOrder",
			"(I)I",
			arg0
		);
	}
	jboolean CollationElementIterator::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint CollationElementIterator::getMaxExpansion(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getMaxExpansion",
			"(I)I",
			arg0
		);
	}
	jint CollationElementIterator::getOffset()
	{
		return __thiz.callMethod<jint>(
			"getOffset",
			"()I"
		);
	}
	jint CollationElementIterator::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint CollationElementIterator::next()
	{
		return __thiz.callMethod<jint>(
			"next",
			"()I"
		);
	}
	jint CollationElementIterator::previous()
	{
		return __thiz.callMethod<jint>(
			"previous",
			"()I"
		);
	}
	void CollationElementIterator::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void CollationElementIterator::setOffset(jint arg0)
	{
		__thiz.callMethod<void>(
			"setOffset",
			"(I)V",
			arg0
		);
	}
	void CollationElementIterator::setText(android::icu::text::UCharacterIterator arg0)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Landroid/icu/text/UCharacterIterator;)V",
			arg0.__jniObject().object()
		);
	}
	void CollationElementIterator::setText(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void CollationElementIterator::setText(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/text/CharacterIterator;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::icu::text

