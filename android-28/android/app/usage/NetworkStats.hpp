#pragma once

#include "./NetworkStats_Bucket.def.hpp"
#include "./NetworkStats.def.hpp"

namespace android::app::usage
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void NetworkStats::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jboolean NetworkStats::getNextBucket(android::app::usage::NetworkStats_Bucket arg0) const
	{
		return callMethod<jboolean>(
			"getNextBucket",
			"(Landroid/app/usage/NetworkStats$Bucket;)Z",
			arg0.object()
		);
	}
	inline jboolean NetworkStats::hasNextBucket() const
	{
		return callMethod<jboolean>(
			"hasNextBucket",
			"()Z"
		);
	}
} // namespace android::app::usage

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::usage;
#endif
