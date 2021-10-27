#include "./Edits_Iterator.hpp"

namespace android::icu::text
{
	// Fields
	
	Edits_Iterator::Edits_Iterator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint Edits_Iterator::destinationIndex()
	{
		return __thiz.callMethod<jint>(
			"destinationIndex",
			"()I"
		);
	}
	jint Edits_Iterator::destinationIndexFromSourceIndex(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"destinationIndexFromSourceIndex",
			"(I)I",
			arg0
		);
	}
	jboolean Edits_Iterator::findDestinationIndex(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"findDestinationIndex",
			"(I)Z",
			arg0
		);
	}
	jboolean Edits_Iterator::findSourceIndex(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"findSourceIndex",
			"(I)Z",
			arg0
		);
	}
	jboolean Edits_Iterator::hasChange()
	{
		return __thiz.callMethod<jboolean>(
			"hasChange",
			"()Z"
		);
	}
	jint Edits_Iterator::newLength()
	{
		return __thiz.callMethod<jint>(
			"newLength",
			"()I"
		);
	}
	jboolean Edits_Iterator::next()
	{
		return __thiz.callMethod<jboolean>(
			"next",
			"()Z"
		);
	}
	jint Edits_Iterator::oldLength()
	{
		return __thiz.callMethod<jint>(
			"oldLength",
			"()I"
		);
	}
	jint Edits_Iterator::replacementIndex()
	{
		return __thiz.callMethod<jint>(
			"replacementIndex",
			"()I"
		);
	}
	jint Edits_Iterator::sourceIndex()
	{
		return __thiz.callMethod<jint>(
			"sourceIndex",
			"()I"
		);
	}
	jint Edits_Iterator::sourceIndexFromDestinationIndex(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"sourceIndexFromDestinationIndex",
			"(I)I",
			arg0
		);
	}
	jstring Edits_Iterator::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::text

