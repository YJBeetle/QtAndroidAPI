#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./StringCharacterIterator.def.hpp"

namespace java::text
{
	// Fields
	
	// Constructors
	inline StringCharacterIterator::StringCharacterIterator(JString arg0)
		: JObject(
			"java.text.StringCharacterIterator",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline StringCharacterIterator::StringCharacterIterator(JString arg0, jint arg1)
		: JObject(
			"java.text.StringCharacterIterator",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	inline StringCharacterIterator::StringCharacterIterator(JString arg0, jint arg1, jint arg2, jint arg3)
		: JObject(
			"java.text.StringCharacterIterator",
			"(Ljava/lang/String;III)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	inline JObject StringCharacterIterator::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline jchar StringCharacterIterator::current() const
	{
		return callMethod<jchar>(
			"current",
			"()C"
		);
	}
	inline jboolean StringCharacterIterator::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jchar StringCharacterIterator::first() const
	{
		return callMethod<jchar>(
			"first",
			"()C"
		);
	}
	inline jint StringCharacterIterator::getBeginIndex() const
	{
		return callMethod<jint>(
			"getBeginIndex",
			"()I"
		);
	}
	inline jint StringCharacterIterator::getEndIndex() const
	{
		return callMethod<jint>(
			"getEndIndex",
			"()I"
		);
	}
	inline jint StringCharacterIterator::getIndex() const
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	inline jint StringCharacterIterator::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jchar StringCharacterIterator::last() const
	{
		return callMethod<jchar>(
			"last",
			"()C"
		);
	}
	inline jchar StringCharacterIterator::next() const
	{
		return callMethod<jchar>(
			"next",
			"()C"
		);
	}
	inline jchar StringCharacterIterator::previous() const
	{
		return callMethod<jchar>(
			"previous",
			"()C"
		);
	}
	inline jchar StringCharacterIterator::setIndex(jint arg0) const
	{
		return callMethod<jchar>(
			"setIndex",
			"(I)C",
			arg0
		);
	}
	inline void StringCharacterIterator::setText(JString arg0) const
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace java::text

// Base class headers

