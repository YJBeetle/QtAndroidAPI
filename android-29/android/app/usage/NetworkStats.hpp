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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NetworkStats(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NetworkStats(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		jboolean getNextBucket(android::app::usage::NetworkStats_Bucket arg0);
		jboolean hasNextBucket();
	};
} // namespace android::app::usage

