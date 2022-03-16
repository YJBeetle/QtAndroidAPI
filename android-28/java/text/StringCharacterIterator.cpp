#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./StringCharacterIterator.hpp"

namespace java::text
{
	// Fields
	
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
	JObject StringCharacterIterator::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	jchar StringCharacterIterator::current() const
	{
		return callMethod<jchar>(
			"current",
			"()C"
		);
	}
	jboolean StringCharacterIterator::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jchar StringCharacterIterator::first() const
	{
		return callMethod<jchar>(
			"first",
			"()C"
		);
	}
	jint StringCharacterIterator::getBeginIndex() const
	{
		return callMethod<jint>(
			"getBeginIndex",
			"()I"
		);
	}
	jint StringCharacterIterator::getEndIndex() const
	{
		return callMethod<jint>(
			"getEndIndex",
			"()I"
		);
	}
	jint StringCharacterIterator::getIndex() const
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	jint StringCharacterIterator::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jchar StringCharacterIterator::last() const
	{
		return callMethod<jchar>(
			"last",
			"()C"
		);
	}
	jchar StringCharacterIterator::next() const
	{
		return callMethod<jchar>(
			"next",
			"()C"
		);
	}
	jchar StringCharacterIterator::previous() const
	{
		return callMethod<jchar>(
			"previous",
			"()C"
		);
	}
	jchar StringCharacterIterator::setIndex(jint arg0) const
	{
		return callMethod<jchar>(
			"setIndex",
			"(I)C",
			arg0
		);
	}
	void StringCharacterIterator::setText(JString arg0) const
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace java::text

