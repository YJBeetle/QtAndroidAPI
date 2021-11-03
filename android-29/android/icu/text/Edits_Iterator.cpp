#include "../../../JCharArray.hpp"
#include "../../../JString.hpp"
#include "./Edits_Iterator.hpp"

namespace android::icu::text
{
	// Fields
	
	// QJniObject forward
	Edits_Iterator::Edits_Iterator(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint Edits_Iterator::destinationIndex() const
	{
		return callMethod<jint>(
			"destinationIndex",
			"()I"
		);
	}
	jint Edits_Iterator::destinationIndexFromSourceIndex(jint arg0) const
	{
		return callMethod<jint>(
			"destinationIndexFromSourceIndex",
			"(I)I",
			arg0
		);
	}
	jboolean Edits_Iterator::findDestinationIndex(jint arg0) const
	{
		return callMethod<jboolean>(
			"findDestinationIndex",
			"(I)Z",
			arg0
		);
	}
	jboolean Edits_Iterator::findSourceIndex(jint arg0) const
	{
		return callMethod<jboolean>(
			"findSourceIndex",
			"(I)Z",
			arg0
		);
	}
	jboolean Edits_Iterator::hasChange() const
	{
		return callMethod<jboolean>(
			"hasChange",
			"()Z"
		);
	}
	jint Edits_Iterator::newLength() const
	{
		return callMethod<jint>(
			"newLength",
			"()I"
		);
	}
	jboolean Edits_Iterator::next() const
	{
		return callMethod<jboolean>(
			"next",
			"()Z"
		);
	}
	jint Edits_Iterator::oldLength() const
	{
		return callMethod<jint>(
			"oldLength",
			"()I"
		);
	}
	jint Edits_Iterator::replacementIndex() const
	{
		return callMethod<jint>(
			"replacementIndex",
			"()I"
		);
	}
	jint Edits_Iterator::sourceIndex() const
	{
		return callMethod<jint>(
			"sourceIndex",
			"()I"
		);
	}
	jint Edits_Iterator::sourceIndexFromDestinationIndex(jint arg0) const
	{
		return callMethod<jint>(
			"sourceIndexFromDestinationIndex",
			"(I)I",
			arg0
		);
	}
	JString Edits_Iterator::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::text

