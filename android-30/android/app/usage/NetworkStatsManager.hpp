#pragma once

#include "../../../JObject.hpp"

namespace android::app::usage
{
	class NetworkStats;
}
namespace android::app::usage
{
	class NetworkStats_Bucket;
}
namespace android::app::usage
{
	class NetworkStatsManager_UsageCallback;
}
namespace android::os
{
	class Handler;
}
class JString;

namespace android::app::usage
{
	class NetworkStatsManager : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NetworkStatsManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NetworkStatsManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::app::usage::NetworkStats queryDetails(jint arg0, JString arg1, jlong arg2, jlong arg3) const;
		android::app::usage::NetworkStats queryDetailsForUid(jint arg0, JString arg1, jlong arg2, jlong arg3, jint arg4) const;
		android::app::usage::NetworkStats queryDetailsForUidTag(jint arg0, JString arg1, jlong arg2, jlong arg3, jint arg4, jint arg5) const;
		android::app::usage::NetworkStats queryDetailsForUidTagState(jint arg0, JString arg1, jlong arg2, jlong arg3, jint arg4, jint arg5, jint arg6) const;
		android::app::usage::NetworkStats querySummary(jint arg0, JString arg1, jlong arg2, jlong arg3) const;
		android::app::usage::NetworkStats_Bucket querySummaryForDevice(jint arg0, JString arg1, jlong arg2, jlong arg3) const;
		android::app::usage::NetworkStats_Bucket querySummaryForUser(jint arg0, JString arg1, jlong arg2, jlong arg3) const;
		void registerUsageCallback(jint arg0, JString arg1, jlong arg2, android::app::usage::NetworkStatsManager_UsageCallback arg3) const;
		void registerUsageCallback(jint arg0, JString arg1, jlong arg2, android::app::usage::NetworkStatsManager_UsageCallback arg3, android::os::Handler arg4) const;
		void unregisterUsageCallback(android::app::usage::NetworkStatsManager_UsageCallback arg0) const;
	};
} // namespace android::app::usage

