#pragma once

#include "../../../JCharArray.hpp"
#include "../../../JString.hpp"
#include "./Edits_Iterator.def.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint Edits_Iterator::destinationIndex() const
	{
		return callMethod<jint>(
			"destinationIndex",
			"()I"
		);
	}
	inline jint Edits_Iterator::destinationIndexFromSourceIndex(jint arg0) const
	{
		return callMethod<jint>(
			"destinationIndexFromSourceIndex",
			"(I)I",
			arg0
		);
	}
	inline jboolean Edits_Iterator::findDestinationIndex(jint arg0) const
	{
		return callMethod<jboolean>(
			"findDestinationIndex",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Edits_Iterator::findSourceIndex(jint arg0) const
	{
		return callMethod<jboolean>(
			"findSourceIndex",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Edits_Iterator::hasChange() const
	{
		return callMethod<jboolean>(
			"hasChange",
			"()Z"
		);
	}
	inline jint Edits_Iterator::newLength() const
	{
		return callMethod<jint>(
			"newLength",
			"()I"
		);
	}
	inline jboolean Edits_Iterator::next() const
	{
		return callMethod<jboolean>(
			"next",
			"()Z"
		);
	}
	inline jint Edits_Iterator::oldLength() const
	{
		return callMethod<jint>(
			"oldLength",
			"()I"
		);
	}
	inline jint Edits_Iterator::replacementIndex() const
	{
		return callMethod<jint>(
			"replacementIndex",
			"()I"
		);
	}
	inline jint Edits_Iterator::sourceIndex() const
	{
		return callMethod<jint>(
			"sourceIndex",
			"()I"
		);
	}
	inline jint Edits_Iterator::sourceIndexFromDestinationIndex(jint arg0) const
	{
		return callMethod<jint>(
			"sourceIndexFromDestinationIndex",
			"(I)I",
			arg0
		);
	}
	inline JString Edits_Iterator::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
