#include "./NetworkStats_Bucket.hpp"
#include "./NetworkStats.hpp"

namespace android::app::usage
{
	// Fields
	
	// QAndroidJniObject forward
	NetworkStats::NetworkStats(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void NetworkStats::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jboolean NetworkStats::getNextBucket(android::app::usage::NetworkStats_Bucket arg0) const
	{
		return callMethod<jboolean>(
			"getNextBucket",
			"(Landroid/app/usage/NetworkStats$Bucket;)Z",
			arg0.object()
		);
	}
	jboolean NetworkStats::hasNextBucket() const
	{
		return callMethod<jboolean>(
			"hasNextBucket",
			"()Z"
		);
	}
} // namespace android::app::usage

