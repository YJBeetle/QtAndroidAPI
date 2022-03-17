#pragma once

#include "./RuleBasedCollator.def.hpp"
#include "./UCharacterIterator.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./CollationElementIterator.def.hpp"

namespace android::icu::text
{
	// Fields
	inline jint CollationElementIterator::IGNORABLE()
	{
		return getStaticField<jint>(
			"android.icu.text.CollationElementIterator",
			"IGNORABLE"
		);
	}
	inline jint CollationElementIterator::NULLORDER()
	{
		return getStaticField<jint>(
			"android.icu.text.CollationElementIterator",
			"NULLORDER"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint CollationElementIterator::primaryOrder(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.text.CollationElementIterator",
			"primaryOrder",
			"(I)I",
			arg0
		);
	}
	inline jint CollationElementIterator::secondaryOrder(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.text.CollationElementIterator",
			"secondaryOrder",
			"(I)I",
			arg0
		);
	}
	inline jint CollationElementIterator::tertiaryOrder(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.text.CollationElementIterator",
			"tertiaryOrder",
			"(I)I",
			arg0
		);
	}
	inline jboolean CollationElementIterator::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
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
	inline jint CollationElementIterator::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
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
	inline void CollationElementIterator::setText(android::icu::text::UCharacterIterator arg0) const
	{
		callMethod<void>(
			"setText",
			"(Landroid/icu/text/UCharacterIterator;)V",
			arg0.object()
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
} // namespace android::icu::text

// Base class headers

