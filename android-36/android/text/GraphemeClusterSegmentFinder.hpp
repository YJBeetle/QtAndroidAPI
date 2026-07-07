#pragma once

#include "./TextPaint.def.hpp"
#include "../../JString.hpp"
#include "./GraphemeClusterSegmentFinder.def.hpp"

namespace android::text
{
	// Fields
	
	// Constructors
	inline GraphemeClusterSegmentFinder::GraphemeClusterSegmentFinder(JString arg0, android::text::TextPaint arg1)
		: android::text::SegmentFinder(
			"android.text.GraphemeClusterSegmentFinder",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	inline jint GraphemeClusterSegmentFinder::nextEndBoundary(jint arg0) const
	{
		return callMethod<jint>(
			"nextEndBoundary",
			"(I)I",
			arg0
		);
	}
	inline jint GraphemeClusterSegmentFinder::nextStartBoundary(jint arg0) const
	{
		return callMethod<jint>(
			"nextStartBoundary",
			"(I)I",
			arg0
		);
	}
	inline jint GraphemeClusterSegmentFinder::previousEndBoundary(jint arg0) const
	{
		return callMethod<jint>(
			"previousEndBoundary",
			"(I)I",
			arg0
		);
	}
	inline jint GraphemeClusterSegmentFinder::previousStartBoundary(jint arg0) const
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
