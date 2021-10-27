#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app::usage
{
	class NetworkStats_Bucket;
}

namespace android::app::usage
{
	class NetworkStats : public __JniBaseClass
	{
	public:
		// Fields
		
		NetworkStats(QAndroidJniObject obj);
		// Constructors
		NetworkStats() = default;
		
		// Methods
		void close();
		jboolean getNextBucket(android::app::usage::NetworkStats_Bucket arg0);
		jboolean hasNextBucket();
	};
} // namespace android::app::usage

