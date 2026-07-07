#pragma once

#include "../../JIntArray.hpp"
#include "./SegmentFinder_PrescribedSegmentFinder.def.hpp"

namespace android::text
{
	// Fields
	
	// Constructors
	inline SegmentFinder_PrescribedSegmentFinder::SegmentFinder_PrescribedSegmentFinder(JIntArray arg0)
		: android::text::SegmentFinder(
			"android.text.SegmentFinder$PrescribedSegmentFinder",
			"([I)V",
			arg0.object<jintArray>()
		) {}
	
	// Methods
	inline jint SegmentFinder_PrescribedSegmentFinder::nextEndBoundary(jint arg0) const
	{
		return callMethod<jint>(
			"nextEndBoundary",
			"(I)I",
			arg0
		);
	}
	inline jint SegmentFinder_PrescribedSegmentFinder::nextStartBoundary(jint arg0) const
	{
		return callMethod<jint>(
			"nextStartBoundary",
			"(I)I",
			arg0
		);
	}
	inline jint SegmentFinder_PrescribedSegmentFinder::previousEndBoundary(jint arg0) const
	{
		return callMethod<jint>(
			"previousEndBoundary",
			"(I)I",
			arg0
		);
	}
	inline jint SegmentFinder_PrescribedSegmentFinder::previousStartBoundary(jint arg0) const
	{
		return callMethod<jint>(
			"previousStartBoundary",
			"(I)I",
			arg0
		);
	}
} // namespace android::text

// Base class headers
#include "./SegmentFinder.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text;
#endif
