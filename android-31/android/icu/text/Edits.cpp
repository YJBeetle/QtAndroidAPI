#include "./Edits_Iterator.hpp"
#include "./Edits.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	Edits::Edits()
		: JObject(
			"android.icu.text.Edits",
			"()V"
		) {}
	
	// Methods
	void Edits::addReplace(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"addReplace",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Edits::addUnchanged(jint arg0) const
	{
		callMethod<void>(
			"addUnchanged",
			"(I)V",
			arg0
		);
	}
	android::icu::text::Edits_Iterator Edits::getCoarseChangesIterator() const
	{
		return callObjectMethod(
			"getCoarseChangesIterator",
			"()Landroid/icu/text/Edits$Iterator;"
		);
	}
	android::icu::text::Edits_Iterator Edits::getCoarseIterator() const
	{
		return callObjectMethod(
			"getCoarseIterator",
			"()Landroid/icu/text/Edits$Iterator;"
		);
	}
	android::icu::text::Edits_Iterator Edits::getFineChangesIterator() const
	{
		return callObjectMethod(
			"getFineChangesIterator",
			"()Landroid/icu/text/Edits$Iterator;"
		);
	}
	android::icu::text::Edits_Iterator Edits::getFineIterator() const
	{
		return callObjectMethod(
			"getFineIterator",
			"()Landroid/icu/text/Edits$Iterator;"
		);
	}
	jboolean Edits::hasChanges() const
	{
		return callMethod<jboolean>(
			"hasChanges",
			"()Z"
		);
	}
	jint Edits::lengthDelta() const
	{
		return callMethod<jint>(
			"lengthDelta",
			"()I"
		);
	}
	android::icu::text::Edits Edits::mergeAndAppend(android::icu::text::Edits arg0, android::icu::text::Edits arg1) const
	{
		return callObjectMethod(
			"mergeAndAppend",
			"(Landroid/icu/text/Edits;Landroid/icu/text/Edits;)Landroid/icu/text/Edits;",
			arg0.object(),
			arg1.object()
		);
	}
	jint Edits::numberOfChanges() const
	{
		return callMethod<jint>(
			"numberOfChanges",
			"()I"
		);
	}
	void Edits::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
} // namespace android::icu::text

