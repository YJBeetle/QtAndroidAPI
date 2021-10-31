#include "./Edits_Iterator.hpp"
#include "./Edits.hpp"

namespace android::icu::text
{
	// Fields
	
	// QAndroidJniObject forward
	Edits::Edits(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Edits::Edits()
		: __JniBaseClass(
			"android.icu.text.Edits",
			"()V"
		) {}
	
	// Methods
	void Edits::addReplace(jint arg0, jint arg1)
	{
		callMethod<void>(
			"addReplace",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Edits::addUnchanged(jint arg0)
	{
		callMethod<void>(
			"addUnchanged",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject Edits::getCoarseChangesIterator()
	{
		return callObjectMethod(
			"getCoarseChangesIterator",
			"()Landroid/icu/text/Edits$Iterator;"
		);
	}
	QAndroidJniObject Edits::getCoarseIterator()
	{
		return callObjectMethod(
			"getCoarseIterator",
			"()Landroid/icu/text/Edits$Iterator;"
		);
	}
	QAndroidJniObject Edits::getFineChangesIterator()
	{
		return callObjectMethod(
			"getFineChangesIterator",
			"()Landroid/icu/text/Edits$Iterator;"
		);
	}
	QAndroidJniObject Edits::getFineIterator()
	{
		return callObjectMethod(
			"getFineIterator",
			"()Landroid/icu/text/Edits$Iterator;"
		);
	}
	jboolean Edits::hasChanges()
	{
		return callMethod<jboolean>(
			"hasChanges",
			"()Z"
		);
	}
	jint Edits::lengthDelta()
	{
		return callMethod<jint>(
			"lengthDelta",
			"()I"
		);
	}
	QAndroidJniObject Edits::mergeAndAppend(android::icu::text::Edits arg0, android::icu::text::Edits arg1)
	{
		return callObjectMethod(
			"mergeAndAppend",
			"(Landroid/icu/text/Edits;Landroid/icu/text/Edits;)Landroid/icu/text/Edits;",
			arg0.object(),
			arg1.object()
		);
	}
	jint Edits::numberOfChanges()
	{
		return callMethod<jint>(
			"numberOfChanges",
			"()I"
		);
	}
	void Edits::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
} // namespace android::icu::text

