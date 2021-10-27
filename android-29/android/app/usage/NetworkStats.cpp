#include "./NetworkStats_Bucket.hpp"
#include "./NetworkStats.hpp"

namespace android::app::usage
{
	// Fields
	
	NetworkStats::NetworkStats(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void NetworkStats::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jboolean NetworkStats::getNextBucket(android::app::usage::NetworkStats_Bucket arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getNextBucket",
			"(Landroid/app/usage/NetworkStats$Bucket;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean NetworkStats::hasNextBucket()
	{
		return __thiz.callMethod<jboolean>(
			"hasNextBucket",
			"()Z"
		);
	}
} // namespace android::app::usage

