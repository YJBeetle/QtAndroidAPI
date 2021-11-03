#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./StringCharacterIterator.hpp"

namespace java::text
{
	// Fields
	
	// QAndroidJniObject forward
	StringCharacterIterator::StringCharacterIterator(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	StringCharacterIterator::StringCharacterIterator(JString arg0)
		: JObject(
			"java.text.StringCharacterIterator",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	StringCharacterIterator::StringCharacterIterator(JString arg0, jint arg1)
		: JObject(
			"java.text.StringCharacterIterator",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	StringCharacterIterator::StringCharacterIterator(JString arg0, jint arg1, jint arg2, jint arg3)
		: JObject(
			"java.text.StringCharacterIterator",
			"(Ljava/lang/String;III)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	JObject StringCharacterIterator::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	jchar StringCharacterIterator::current()
	{
		return callMethod<jchar>(
			"current",
			"()C"
		);
	}
	jboolean StringCharacterIterator::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jchar StringCharacterIterator::first()
	{
		return callMethod<jchar>(
			"first",
			"()C"
		);
	}
	jint StringCharacterIterator::getBeginIndex()
	{
		return callMethod<jint>(
			"getBeginIndex",
			"()I"
		);
	}
	jint StringCharacterIterator::getEndIndex()
	{
		return callMethod<jint>(
			"getEndIndex",
			"()I"
		);
	}
	jint StringCharacterIterator::getIndex()
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	jint StringCharacterIterator::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jchar StringCharacterIterator::last()
	{
		return callMethod<jchar>(
			"last",
			"()C"
		);
	}
	jchar StringCharacterIterator::next()
	{
		return callMethod<jchar>(
			"next",
			"()C"
		);
	}
	jchar StringCharacterIterator::previous()
	{
		return callMethod<jchar>(
			"previous",
			"()C"
		);
	}
	jchar StringCharacterIterator::setIndex(jint arg0)
	{
		return callMethod<jchar>(
			"setIndex",
			"(I)C",
			arg0
		);
	}
	void StringCharacterIterator::setText(JString arg0)
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace java::text

