#pragma once

#include "./SegmentFinder.def.hpp"

namespace android::text
{
	// Fields
	inline jint SegmentFinder::DONE()
	{
		return getStaticField<jint>(
			"android.text.SegmentFinder",
			"DONE"
		);
	}
	
	// Constructors
	inline SegmentFinder::SegmentFinder()
		: JObject(
			"android.text.SegmentFinder",
			"()V"
		) {}
	
	// Methods
	inline jint SegmentFinder::nextEndBoundary(jint arg0) const
	{
		return callMethod<jint>(
			"nextEndBoundary",
			"(I)I",
			arg0
		);
	}
	inline jint SegmentFinder::nextStartBoundary(jint arg0) const
	{
		return callMethod<jint>(
			"nextStartBoundary",
			"(I)I",
			arg0
		);
	}
	inline jint SegmentFinder::previousEndBoundary(jint arg0) const
	{
		return callMethod<jint>(
			"previousEndBoundary",
			"(I)I",
			arg0
		);
	}
	inline jint SegmentFinder::previousStartBoundary(jint arg0) const
	{
		return callMethod<jint>(
			"previousStartBoundary",
			"(I)I",
			arg0
		);
	}
} // namespace android::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text;
#endif
