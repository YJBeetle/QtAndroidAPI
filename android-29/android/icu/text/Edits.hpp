#pragma once

#include "./Edits_Iterator.def.hpp"
#include "./Edits.def.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	inline Edits::Edits()
		: JObject(
			"android.icu.text.Edits",
			"()V"
		) {}
	
	// Methods
	inline void Edits::addReplace(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"addReplace",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void Edits::addUnchanged(jint arg0) const
	{
		callMethod<void>(
			"addUnchanged",
			"(I)V",
			arg0
		);
	}
	inline android::icu::text::Edits_Iterator Edits::getCoarseChangesIterator() const
	{
		return callObjectMethod(
			"getCoarseChangesIterator",
			"()Landroid/icu/text/Edits$Iterator;"
		);
	}
	inline android::icu::text::Edits_Iterator Edits::getCoarseIterator() const
	{
		return callObjectMethod(
			"getCoarseIterator",
			"()Landroid/icu/text/Edits$Iterator;"
		);
	}
	inline android::icu::text::Edits_Iterator Edits::getFineChangesIterator() const
	{
		return callObjectMethod(
			"getFineChangesIterator",
			"()Landroid/icu/text/Edits$Iterator;"
		);
	}
	inline android::icu::text::Edits_Iterator Edits::getFineIterator() const
	{
		return callObjectMethod(
			"getFineIterator",
			"()Landroid/icu/text/Edits$Iterator;"
		);
	}
	inline jboolean Edits::hasChanges() const
	{
		return callMethod<jboolean>(
			"hasChanges",
			"()Z"
		);
	}
	inline jint Edits::lengthDelta() const
	{
		return callMethod<jint>(
			"lengthDelta",
			"()I"
		);
	}
	inline android::icu::text::Edits Edits::mergeAndAppend(android::icu::text::Edits arg0, android::icu::text::Edits arg1) const
	{
		return callObjectMethod(
			"mergeAndAppend",
			"(Landroid/icu/text/Edits;Landroid/icu/text/Edits;)Landroid/icu/text/Edits;",
			arg0.object(),
			arg1.object()
		);
	}
	inline jint Edits::numberOfChanges() const
	{
		return callMethod<jint>(
			"numberOfChanges",
			"()I"
		);
	}
	inline void Edits::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
} // namespace android::icu::text

// Base class headers

