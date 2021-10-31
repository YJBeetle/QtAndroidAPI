#include "./BreakIterator.hpp"
#include "./SearchIterator_ElementComparisonType.hpp"
#include "./SearchIterator.hpp"

namespace android::icu::text
{
	// Fields
	jint SearchIterator::DONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.SearchIterator",
			"DONE"
		);
	}
	
	// QAndroidJniObject forward
	SearchIterator::SearchIterator(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint SearchIterator::first()
	{
		return callMethod<jint>(
			"first",
			"()I"
		);
	}
	jint SearchIterator::following(jint arg0)
	{
		return callMethod<jint>(
			"following",
			"(I)I",
			arg0
		);
	}
	android::icu::text::BreakIterator SearchIterator::getBreakIterator()
	{
		return callObjectMethod(
			"getBreakIterator",
			"()Landroid/icu/text/BreakIterator;"
		);
	}
	android::icu::text::SearchIterator_ElementComparisonType SearchIterator::getElementComparisonType()
	{
		return callObjectMethod(
			"getElementComparisonType",
			"()Landroid/icu/text/SearchIterator$ElementComparisonType;"
		);
	}
	jint SearchIterator::getIndex()
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	jint SearchIterator::getMatchLength()
	{
		return callMethod<jint>(
			"getMatchLength",
			"()I"
		);
	}
	jint SearchIterator::getMatchStart()
	{
		return callMethod<jint>(
			"getMatchStart",
			"()I"
		);
	}
	jstring SearchIterator::getMatchedText()
	{
		return callObjectMethod(
			"getMatchedText",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	__JniBaseClass SearchIterator::getTarget()
	{
		return callObjectMethod(
			"getTarget",
			"()Ljava/text/CharacterIterator;"
		);
	}
	jboolean SearchIterator::isOverlapping()
	{
		return callMethod<jboolean>(
			"isOverlapping",
			"()Z"
		);
	}
	jint SearchIterator::last()
	{
		return callMethod<jint>(
			"last",
			"()I"
		);
	}
	jint SearchIterator::next()
	{
		return callMethod<jint>(
			"next",
			"()I"
		);
	}
	jint SearchIterator::preceding(jint arg0)
	{
		return callMethod<jint>(
			"preceding",
			"(I)I",
			arg0
		);
	}
	jint SearchIterator::previous()
	{
		return callMethod<jint>(
			"previous",
			"()I"
		);
	}
	void SearchIterator::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void SearchIterator::setBreakIterator(android::icu::text::BreakIterator arg0)
	{
		callMethod<void>(
			"setBreakIterator",
			"(Landroid/icu/text/BreakIterator;)V",
			arg0.object()
		);
	}
	void SearchIterator::setElementComparisonType(android::icu::text::SearchIterator_ElementComparisonType arg0)
	{
		callMethod<void>(
			"setElementComparisonType",
			"(Landroid/icu/text/SearchIterator$ElementComparisonType;)V",
			arg0.object()
		);
	}
	void SearchIterator::setIndex(jint arg0)
	{
		callMethod<void>(
			"setIndex",
			"(I)V",
			arg0
		);
	}
	void SearchIterator::setOverlapping(jboolean arg0)
	{
		callMethod<void>(
			"setOverlapping",
			"(Z)V",
			arg0
		);
	}
	void SearchIterator::setTarget(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setTarget",
			"(Ljava/text/CharacterIterator;)V",
			arg0.object()
		);
	}
} // namespace android::icu::text

