#pragma once

#include "../../JIntArray.hpp"
#include "../../JString.hpp"
#include "../lang/StringBuilder.def.hpp"
#include "./RuleBasedCollator.def.hpp"
#include "./CollationElementIterator.def.hpp"

namespace java::text
{
	// Fields
	inline jint CollationElementIterator::NULLORDER()
	{
		return getStaticField<jint>(
			"java.text.CollationElementIterator",
			"NULLORDER"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint CollationElementIterator::primaryOrder(jint arg0)
	{
		return callStaticMethod<jint>(
			"java.text.CollationElementIterator",
			"primaryOrder",
			"(I)I",
			arg0
		);
	}
	inline jshort CollationElementIterator::secondaryOrder(jint arg0)
	{
		return callStaticMethod<jshort>(
			"java.text.CollationElementIterator",
			"secondaryOrder",
			"(I)S",
			arg0
		);
	}
	inline jshort CollationElementIterator::tertiaryOrder(jint arg0)
	{
		return callStaticMethod<jshort>(
			"java.text.CollationElementIterator",
			"tertiaryOrder",
			"(I)S",
			arg0
		);
	}
	inline jint CollationElementIterator::getMaxExpansion(jint arg0) const
	{
		return callMethod<jint>(
			"getMaxExpansion",
			"(I)I",
			arg0
		);
	}
	inline jint CollationElementIterator::getOffset() const
	{
		return callMethod<jint>(
			"getOffset",
			"()I"
		);
	}
	inline jint CollationElementIterator::next() const
	{
		return callMethod<jint>(
			"next",
			"()I"
		);
	}
	inline jint CollationElementIterator::previous() const
	{
		return callMethod<jint>(
			"previous",
			"()I"
		);
	}
	inline void CollationElementIterator::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline void CollationElementIterator::setOffset(jint arg0) const
	{
		callMethod<void>(
			"setOffset",
			"(I)V",
			arg0
		);
	}
	inline void CollationElementIterator::setText(JString arg0) const
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void CollationElementIterator::setText(JObject arg0) const
	{
		callMethod<void>(
			"setText",
			"(Ljava/text/CharacterIterator;)V",
			arg0.object()
		);
	}
} // namespace java::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::text;
#endif
