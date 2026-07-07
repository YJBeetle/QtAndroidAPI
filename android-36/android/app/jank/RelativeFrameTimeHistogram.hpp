#pragma once

#include "../../../JIntArray.hpp"
#include "./RelativeFrameTimeHistogram.def.hpp"

namespace android::app::jank
{
	// Fields
	
	// Constructors
	inline RelativeFrameTimeHistogram::RelativeFrameTimeHistogram()
		: JObject(
			"android.app.jank.RelativeFrameTimeHistogram",
			"()V"
		) {}
	
	// Methods
	inline void RelativeFrameTimeHistogram::addRelativeFrameTimeMillis(jint arg0) const
	{
		callMethod<void>(
			"addRelativeFrameTimeMillis",
			"(I)V",
			arg0
		);
	}
	inline JIntArray RelativeFrameTimeHistogram::getBucketCounters() const
	{
		return callObjectMethod(
			"getBucketCounters",
			"()[I"
		);
	}
	inline JIntArray RelativeFrameTimeHistogram::getBucketEndpointsMillis() const
	{
		return callObjectMethod(
			"getBucketEndpointsMillis",
			"()[I"
		);
	}
} // namespace android::app::jank

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::jank;
#endif
