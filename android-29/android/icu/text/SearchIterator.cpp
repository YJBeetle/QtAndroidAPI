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
	
	SearchIterator::SearchIterator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint SearchIterator::first()
	{
		return __thiz.callMethod<jint>(
			"first",
			"()I"
		);
	}
	jint SearchIterator::following(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"following",
			"(I)I",
			arg0
		);
	}
	QAndroidJniObject SearchIterator::getBreakIterator()
	{
		return __thiz.callObjectMethod(
			"getBreakIterator",
			"()Landroid/icu/text/BreakIterator;"
		);
	}
	QAndroidJniObject SearchIterator::getElementComparisonType()
	{
		return __thiz.callObjectMethod(
			"getElementComparisonType",
			"()Landroid/icu/text/SearchIterator$ElementComparisonType;"
		);
	}
	jint SearchIterator::getIndex()
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	jint SearchIterator::getMatchLength()
	{
		return __thiz.callMethod<jint>(
			"getMatchLength",
			"()I"
		);
	}
	jint SearchIterator::getMatchStart()
	{
		return __thiz.callMethod<jint>(
			"getMatchStart",
			"()I"
		);
	}
	jstring SearchIterator::getMatchedText()
	{
		return __thiz.callObjectMethod(
			"getMatchedText",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SearchIterator::getTarget()
	{
		return __thiz.callObjectMethod(
			"getTarget",
			"()Ljava/text/CharacterIterator;"
		);
	}
	jboolean SearchIterator::isOverlapping()
	{
		return __thiz.callMethod<jboolean>(
			"isOverlapping",
			"()Z"
		);
	}
	jint SearchIterator::last()
	{
		return __thiz.callMethod<jint>(
			"last",
			"()I"
		);
	}
	jint SearchIterator::next()
	{
		return __thiz.callMethod<jint>(
			"next",
			"()I"
		);
	}
	jint SearchIterator::preceding(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"preceding",
			"(I)I",
			arg0
		);
	}
	jint SearchIterator::previous()
	{
		return __thiz.callMethod<jint>(
			"previous",
			"()I"
		);
	}
	void SearchIterator::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void SearchIterator::setBreakIterator(android::icu::text::BreakIterator arg0)
	{
		__thiz.callMethod<void>(
			"setBreakIterator",
			"(Landroid/icu/text/BreakIterator;)V",
			arg0.__jniObject().object()
		);
	}
	void SearchIterator::setElementComparisonType(android::icu::text::SearchIterator_ElementComparisonType arg0)
	{
		__thiz.callMethod<void>(
			"setElementComparisonType",
			"(Landroid/icu/text/SearchIterator$ElementComparisonType;)V",
			arg0.__jniObject().object()
		);
	}
	void SearchIterator::setIndex(jint arg0)
	{
		__thiz.callMethod<void>(
			"setIndex",
			"(I)V",
			arg0
		);
	}
	void SearchIterator::setOverlapping(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setOverlapping",
			"(Z)V",
			arg0
		);
	}
	void SearchIterator::setTarget(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setTarget",
			"(Ljava/text/CharacterIterator;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::icu::text

