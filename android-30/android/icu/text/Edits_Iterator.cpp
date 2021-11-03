#include "../../../JString.hpp"
#include "./Edits_Iterator.hpp"

namespace android::icu::text
{
	// Fields
	
	// QJniObject forward
	Edits_Iterator::Edits_Iterator(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint Edits_Iterator::destinationIndex()
	{
		return callMethod<jint>(
			"destinationIndex",
			"()I"
		);
	}
	jint Edits_Iterator::destinationIndexFromSourceIndex(jint arg0)
	{
		return callMethod<jint>(
			"destinationIndexFromSourceIndex",
			"(I)I",
			arg0
		);
	}
	jboolean Edits_Iterator::findDestinationIndex(jint arg0)
	{
		return callMethod<jboolean>(
			"findDestinationIndex",
			"(I)Z",
			arg0
		);
	}
	jboolean Edits_Iterator::findSourceIndex(jint arg0)
	{
		return callMethod<jboolean>(
			"findSourceIndex",
			"(I)Z",
			arg0
		);
	}
	jboolean Edits_Iterator::hasChange()
	{
		return callMethod<jboolean>(
			"hasChange",
			"()Z"
		);
	}
	jint Edits_Iterator::newLength()
	{
		return callMethod<jint>(
			"newLength",
			"()I"
		);
	}
	jboolean Edits_Iterator::next()
	{
		return callMethod<jboolean>(
			"next",
			"()Z"
		);
	}
	jint Edits_Iterator::oldLength()
	{
		return callMethod<jint>(
			"oldLength",
			"()I"
		);
	}
	jint Edits_Iterator::replacementIndex()
	{
		return callMethod<jint>(
			"replacementIndex",
			"()I"
		);
	}
	jint Edits_Iterator::sourceIndex()
	{
		return callMethod<jint>(
			"sourceIndex",
			"()I"
		);
	}
	jint Edits_Iterator::sourceIndexFromDestinationIndex(jint arg0)
	{
		return callMethod<jint>(
			"sourceIndexFromDestinationIndex",
			"(I)I",
			arg0
		);
	}
	JString Edits_Iterator::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::text

