#pragma once

#include "./ConstrainedFieldPosition.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./DateIntervalFormat_FormattedDateInterval.def.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject DateIntervalFormat_FormattedDateInterval::appendTo(JObject arg0) const
	{
		return callObjectMethod(
			"appendTo",
			"(Ljava/lang/Appendable;)Ljava/lang/Appendable;",
			arg0.object()
		);
	}
	inline jchar DateIntervalFormat_FormattedDateInterval::charAt(jint arg0) const
	{
		return callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	inline jint DateIntervalFormat_FormattedDateInterval::length() const
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	inline jboolean DateIntervalFormat_FormattedDateInterval::nextPosition(android::icu::text::ConstrainedFieldPosition arg0) const
	{
		return callMethod<jboolean>(
			"nextPosition",
			"(Landroid/icu/text/ConstrainedFieldPosition;)Z",
			arg0.object()
		);
	}
	inline JString DateIntervalFormat_FormattedDateInterval::subSequence(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		);
	}
	inline JObject DateIntervalFormat_FormattedDateInterval::toCharacterIterator() const
	{
		return callObjectMethod(
			"toCharacterIterator",
			"()Ljava/text/AttributedCharacterIterator;"
		);
	}
	inline JString DateIntervalFormat_FormattedDateInterval::toString() const
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
