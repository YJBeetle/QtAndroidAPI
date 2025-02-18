#pragma once

#include "./BreakIterator.def.hpp"
#include "./SearchIterator_ElementComparisonType.def.hpp"
#include "../../../JString.hpp"
#include "./SearchIterator.def.hpp"

namespace android::icu::text
{
	// Fields
	inline jint SearchIterator::DONE()
	{
		return getStaticField<jint>(
			"android.icu.text.SearchIterator",
			"DONE"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint SearchIterator::first() const
	{
		return callMethod<jint>(
			"first",
			"()I"
		);
	}
	inline jint SearchIterator::following(jint arg0) const
	{
		return callMethod<jint>(
			"following",
			"(I)I",
			arg0
		);
	}
	inline android::icu::text::BreakIterator SearchIterator::getBreakIterator() const
	{
		return callObjectMethod(
			"getBreakIterator",
			"()Landroid/icu/text/BreakIterator;"
		);
	}
	inline android::icu::text::SearchIterator_ElementComparisonType SearchIterator::getElementComparisonType() const
	{
		return callObjectMethod(
			"getElementComparisonType",
			"()Landroid/icu/text/SearchIterator$ElementComparisonType;"
		);
	}
	inline jint SearchIterator::getIndex() const
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	inline jint SearchIterator::getMatchLength() const
	{
		return callMethod<jint>(
			"getMatchLength",
			"()I"
		);
	}
	inline jint SearchIterator::getMatchStart() const
	{
		return callMethod<jint>(
			"getMatchStart",
			"()I"
		);
	}
	inline JString SearchIterator::getMatchedText() const
	{
		return callObjectMethod(
			"getMatchedText",
			"()Ljava/lang/String;"
		);
	}
	inline JObject SearchIterator::getTarget() const
	{
		return callObjectMethod(
			"getTarget",
			"()Ljava/text/CharacterIterator;"
		);
	}
	inline jboolean SearchIterator::isOverlapping() const
	{
		return callMethod<jboolean>(
			"isOverlapping",
			"()Z"
		);
	}
	inline jint SearchIterator::last() const
	{
		return callMethod<jint>(
			"last",
			"()I"
		);
	}
	inline jint SearchIterator::next() const
	{
		return callMethod<jint>(
			"next",
			"()I"
		);
	}
	inline jint SearchIterator::preceding(jint arg0) const
	{
		return callMethod<jint>(
			"preceding",
			"(I)I",
			arg0
		);
	}
	inline jint SearchIterator::previous() const
	{
		return callMethod<jint>(
			"previous",
			"()I"
		);
	}
	inline void SearchIterator::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline void SearchIterator::setBreakIterator(android::icu::text::BreakIterator arg0) const
	{
		callMethod<void>(
			"setBreakIterator",
			"(Landroid/icu/text/BreakIterator;)V",
			arg0.object()
		);
	}
	inline void SearchIterator::setElementComparisonType(android::icu::text::SearchIterator_ElementComparisonType arg0) const
	{
		callMethod<void>(
			"setElementComparisonType",
			"(Landroid/icu/text/SearchIterator$ElementComparisonType;)V",
			arg0.object()
		);
	}
	inline void SearchIterator::setIndex(jint arg0) const
	{
		callMethod<void>(
			"setIndex",
			"(I)V",
			arg0
		);
	}
	inline void SearchIterator::setOverlapping(jboolean arg0) const
	{
		callMethod<void>(
			"setOverlapping",
			"(Z)V",
			arg0
		);
	}
	inline void SearchIterator::setTarget(JObject arg0) const
	{
		callMethod<void>(
			"setTarget",
			"(Ljava/text/CharacterIterator;)V",
			arg0.object()
		);
	}
} // namespace android::icu::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
