#include "./NetworkStats.hpp"
#include "./NetworkStats_Bucket.hpp"
#include "./NetworkStatsManager_UsageCallback.hpp"
#include "../../os/Handler.hpp"
#include "../../../JString.hpp"
#include "./NetworkStatsManager.hpp"

namespace android::app::usage
{
	// Fields
	
	// Constructors
	
	// Methods
	android::app::usage::NetworkStats NetworkStatsManager::queryDetails(jint arg0, JString arg1, jlong arg2, jlong arg3) const
	{
		return callObjectMethod(
			"queryDetails",
			"(ILjava/lang/String;JJ)Landroid/app/usage/NetworkStats;",
			arg0,
			arg1.object<jstring>(),
			arg2,
			arg3
		);
	}
	android::app::usage::NetworkStats NetworkStatsManager::queryDetailsForUid(jint arg0, JString arg1, jlong arg2, jlong arg3, jint arg4) const
	{
		return callObjectMethod(
			"queryDetailsForUid",
			"(ILjava/lang/String;JJI)Landroid/app/usage/NetworkStats;",
			arg0,
			arg1.object<jstring>(),
			arg2,
			arg3,
			arg4
		);
	}
	android::app::usage::NetworkStats NetworkStatsManager::queryDetailsForUidTag(jint arg0, JString arg1, jlong arg2, jlong arg3, jint arg4, jint arg5) const
	{
		return callObjectMethod(
			"queryDetailsForUidTag",
			"(ILjava/lang/String;JJII)Landroid/app/usage/NetworkStats;",
			arg0,
			arg1.object<jstring>(),
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	android::app::usage::NetworkStats NetworkStatsManager::queryDetailsForUidTagState(jint arg0, JString arg1, jlong arg2, jlong arg3, jint arg4, jint arg5, jint arg6) const
	{
		return callObjectMethod(
			"queryDetailsForUidTagState",
			"(ILjava/lang/String;JJIII)Landroid/app/usage/NetworkStats;",
			arg0,
			arg1.object<jstring>(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	android::app::usage::NetworkStats NetworkStatsManager::querySummary(jint arg0, JString arg1, jlong arg2, jlong arg3) const
	{
		return callObjectMethod(
			"querySummary",
			"(ILjava/lang/String;JJ)Landroid/app/usage/NetworkStats;",
			arg0,
			arg1.object<jstring>(),
			arg2,
			arg3
		);
	}
	android::app::usage::NetworkStats_Bucket NetworkStatsManager::querySummaryForDevice(jint arg0, JString arg1, jlong arg2, jlong arg3) const
	{
		return callObjectMethod(
			"querySummaryForDevice",
			"(ILjava/lang/String;JJ)Landroid/app/usage/NetworkStats$Bucket;",
			arg0,
			arg1.object<jstring>(),
			arg2,
			arg3
		);
	}
	android::app::usage::NetworkStats_Bucket NetworkStatsManager::querySummaryForUser(jint arg0, JString arg1, jlong arg2, jlong arg3) const
	{
		return callObjectMethod(
			"querySummaryForUser",
			"(ILjava/lang/String;JJ)Landroid/app/usage/NetworkStats$Bucket;",
			arg0,
			arg1.object<jstring>(),
			arg2,
			arg3
		);
	}
	void NetworkStatsManager::registerUsageCallback(jint arg0, JString arg1, jlong arg2, android::app::usage::NetworkStatsManager_UsageCallback arg3) const
	{
		callMethod<void>(
			"registerUsageCallback",
			"(ILjava/lang/String;JLandroid/app/usage/NetworkStatsManager$UsageCallback;)V",
			arg0,
			arg1.object<jstring>(),
			arg2,
			arg3.object()
		);
	}
	void NetworkStatsManager::registerUsageCallback(jint arg0, JString arg1, jlong arg2, android::app::usage::NetworkStatsManager_UsageCallback arg3, android::os::Handler arg4) const
	{
		callMethod<void>(
			"registerUsageCallback",
			"(ILjava/lang/String;JLandroid/app/usage/NetworkStatsManager$UsageCallback;Landroid/os/Handler;)V",
			arg0,
			arg1.object<jstring>(),
			arg2,
			arg3.object(),
			arg4.object()
		);
	}
	void NetworkStatsManager::unregisterUsageCallback(android::app::usage::NetworkStatsManager_UsageCallback arg0) const
	{
		callMethod<void>(
			"unregisterUsageCallback",
			"(Landroid/app/usage/NetworkStatsManager$UsageCallback;)V",
			arg0.object()
		);
	}
} // namespace android::app::usage

