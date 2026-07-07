#pragma once

#include "../icu/util/ULocale.def.hpp"
#include "../../JString.hpp"
#include "./WordSegmentFinder.def.hpp"

namespace android::text
{
	// Fields
	
	// Constructors
	inline WordSegmentFinder::WordSegmentFinder(JString arg0, android::icu::util::ULocale arg1)
		: android::text::SegmentFinder(
			"android.text.WordSegmentFinder",
			"(Ljava/lang/CharSequence;Landroid/icu/util/ULocale;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	inline jint WordSegmentFinder::nextEndBoundary(jint arg0) const
	{
		return callMethod<jint>(
			"nextEndBoundary",
			"(I)I",
			arg0
		);
	}
	inline jint WordSegmentFinder::nextStartBoundary(jint arg0) const
	{
		return callMethod<jint>(
			"nextStartBoundary",
			"(I)I",
			arg0
		);
	}
	inline jint WordSegmentFinder::previousEndBoundary(jint arg0) const
	{
		return callMethod<jint>(
			"previousEndBoundary",
			"(I)I",
			arg0
		);
	}
	inline jint WordSegmentFinder::previousStartBoundary(jint arg0) const
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
