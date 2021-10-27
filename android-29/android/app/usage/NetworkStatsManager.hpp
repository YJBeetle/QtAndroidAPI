#pragma once

#include "../../../__JniBaseClass.hpp"

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

namespace android::app::usage
{
	class NetworkStatsManager : public __JniBaseClass
	{
	public:
		// Fields
		
		NetworkStatsManager(QAndroidJniObject obj);
		// Constructors
		NetworkStatsManager() = default;
		
		// Methods
		QAndroidJniObject queryDetails(jint arg0, jstring arg1, jlong arg2, jlong arg3);
		QAndroidJniObject queryDetails(jint arg0, const QString &arg1, jlong arg2, jlong arg3);
		QAndroidJniObject queryDetailsForUid(jint arg0, jstring arg1, jlong arg2, jlong arg3, jint arg4);
		QAndroidJniObject queryDetailsForUid(jint arg0, const QString &arg1, jlong arg2, jlong arg3, jint arg4);
		QAndroidJniObject queryDetailsForUidTag(jint arg0, jstring arg1, jlong arg2, jlong arg3, jint arg4, jint arg5);
		QAndroidJniObject queryDetailsForUidTag(jint arg0, const QString &arg1, jlong arg2, jlong arg3, jint arg4, jint arg5);
		QAndroidJniObject queryDetailsForUidTagState(jint arg0, jstring arg1, jlong arg2, jlong arg3, jint arg4, jint arg5, jint arg6);
		QAndroidJniObject queryDetailsForUidTagState(jint arg0, const QString &arg1, jlong arg2, jlong arg3, jint arg4, jint arg5, jint arg6);
		QAndroidJniObject querySummary(jint arg0, jstring arg1, jlong arg2, jlong arg3);
		QAndroidJniObject querySummary(jint arg0, const QString &arg1, jlong arg2, jlong arg3);
		QAndroidJniObject querySummaryForDevice(jint arg0, jstring arg1, jlong arg2, jlong arg3);
		QAndroidJniObject querySummaryForDevice(jint arg0, const QString &arg1, jlong arg2, jlong arg3);
		QAndroidJniObject querySummaryForUser(jint arg0, jstring arg1, jlong arg2, jlong arg3);
		QAndroidJniObject querySummaryForUser(jint arg0, const QString &arg1, jlong arg2, jlong arg3);
		void registerUsageCallback(jint arg0, jstring arg1, jlong arg2, android::app::usage::NetworkStatsManager_UsageCallback arg3);
		void registerUsageCallback(jint arg0, const QString &arg1, jlong arg2, android::app::usage::NetworkStatsManager_UsageCallback arg3);
		void registerUsageCallback(jint arg0, jstring arg1, jlong arg2, android::app::usage::NetworkStatsManager_UsageCallback arg3, android::os::Handler arg4);
		void registerUsageCallback(jint arg0, const QString &arg1, jlong arg2, android::app::usage::NetworkStatsManager_UsageCallback arg3, android::os::Handler arg4);
		void unregisterUsageCallback(android::app::usage::NetworkStatsManager_UsageCallback arg0);
	};
} // namespace android::app::usage

