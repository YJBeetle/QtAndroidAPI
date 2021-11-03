#include "./BreakIterator.hpp"
#include "./SearchIterator_ElementComparisonType.hpp"
#include "../../../JString.hpp"
#include "./SearchIterator.hpp"

namespace android::icu::text
{
	// Fields
	jint SearchIterator::DONE()
	{
		return getStaticField<jint>(
			"android.icu.text.SearchIterator",
			"DONE"
		);
	}
	
	// QJniObject forward
	SearchIterator::SearchIterator(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint SearchIterator::first() const
	{
		return callMethod<jint>(
			"first",
			"()I"
		);
	}
	jint SearchIterator::following(jint arg0) const
	{
		return callMethod<jint>(
			"following",
			"(I)I",
			arg0
		);
	}
	android::icu::text::BreakIterator SearchIterator::getBreakIterator() const
	{
		return callObjectMethod(
			"getBreakIterator",
			"()Landroid/icu/text/BreakIterator;"
		);
	}
	android::icu::text::SearchIterator_ElementComparisonType SearchIterator::getElementComparisonType() const
	{
		return callObjectMethod(
			"getElementComparisonType",
			"()Landroid/icu/text/SearchIterator$ElementComparisonType;"
		);
	}
	jint SearchIterator::getIndex() const
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	jint SearchIterator::getMatchLength() const
	{
		return callMethod<jint>(
			"getMatchLength",
			"()I"
		);
	}
	jint SearchIterator::getMatchStart() const
	{
		return callMethod<jint>(
			"getMatchStart",
			"()I"
		);
	}
	JString SearchIterator::getMatchedText() const
	{
		return callObjectMethod(
			"getMatchedText",
			"()Ljava/lang/String;"
		);
	}
	JObject SearchIterator::getTarget() const
	{
		return callObjectMethod(
			"getTarget",
			"()Ljava/text/CharacterIterator;"
		);
	}
	jboolean SearchIterator::isOverlapping() const
	{
		return callMethod<jboolean>(
			"isOverlapping",
			"()Z"
		);
	}
	jint SearchIterator::last() const
	{
		return callMethod<jint>(
			"last",
			"()I"
		);
	}
	jint SearchIterator::next() const
	{
		return callMethod<jint>(
			"next",
			"()I"
		);
	}
	jint SearchIterator::preceding(jint arg0) const
	{
		return callMethod<jint>(
			"preceding",
			"(I)I",
			arg0
		);
	}
	jint SearchIterator::previous() const
	{
		return callMethod<jint>(
			"previous",
			"()I"
		);
	}
	void SearchIterator::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void SearchIterator::setBreakIterator(android::icu::text::BreakIterator arg0) const
	{
		callMethod<void>(
			"setBreakIterator",
			"(Landroid/icu/text/BreakIterator;)V",
			arg0.object()
		);
	}
	void SearchIterator::setElementComparisonType(android::icu::text::SearchIterator_ElementComparisonType arg0) const
	{
		callMethod<void>(
			"setElementComparisonType",
			"(Landroid/icu/text/SearchIterator$ElementComparisonType;)V",
			arg0.object()
		);
	}
	void SearchIterator::setIndex(jint arg0) const
	{
		callMethod<void>(
			"setIndex",
			"(I)V",
			arg0
		);
	}
	void SearchIterator::setOverlapping(jboolean arg0) const
	{
		callMethod<void>(
			"setOverlapping",
			"(Z)V",
			arg0
		);
	}
	void SearchIterator::setTarget(JObject arg0) const
	{
		callMethod<void>(
			"setTarget",
			"(Ljava/text/CharacterIterator;)V",
			arg0.object()
		);
	}
} // namespace android::icu::text

