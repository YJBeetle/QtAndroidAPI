#include "./UsageEvents.hpp"
#include "../../../JString.hpp"
#include "./UsageStatsManager.hpp"

namespace android::app::usage
{
	// Fields
	jint UsageStatsManager::INTERVAL_BEST()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageStatsManager",
			"INTERVAL_BEST"
		);
	}
	jint UsageStatsManager::INTERVAL_DAILY()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageStatsManager",
			"INTERVAL_DAILY"
		);
	}
	jint UsageStatsManager::INTERVAL_MONTHLY()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageStatsManager",
			"INTERVAL_MONTHLY"
		);
	}
	jint UsageStatsManager::INTERVAL_WEEKLY()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageStatsManager",
			"INTERVAL_WEEKLY"
		);
	}
	jint UsageStatsManager::INTERVAL_YEARLY()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageStatsManager",
			"INTERVAL_YEARLY"
		);
	}
	jint UsageStatsManager::STANDBY_BUCKET_ACTIVE()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageStatsManager",
			"STANDBY_BUCKET_ACTIVE"
		);
	}
	jint UsageStatsManager::STANDBY_BUCKET_FREQUENT()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageStatsManager",
			"STANDBY_BUCKET_FREQUENT"
		);
	}
	jint UsageStatsManager::STANDBY_BUCKET_RARE()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageStatsManager",
			"STANDBY_BUCKET_RARE"
		);
	}
	jint UsageStatsManager::STANDBY_BUCKET_WORKING_SET()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageStatsManager",
			"STANDBY_BUCKET_WORKING_SET"
		);
	}
	
	// Constructors
	
	// Methods
	jint UsageStatsManager::getAppStandbyBucket() const
	{
		return callMethod<jint>(
			"getAppStandbyBucket",
			"()I"
		);
	}
	jboolean UsageStatsManager::isAppInactive(JString arg0) const
	{
		return callMethod<jboolean>(
			"isAppInactive",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	JObject UsageStatsManager::queryAndAggregateUsageStats(jlong arg0, jlong arg1) const
	{
		return callObjectMethod(
			"queryAndAggregateUsageStats",
			"(JJ)Ljava/util/Map;",
			arg0,
			arg1
		);
	}
	JObject UsageStatsManager::queryConfigurations(jint arg0, jlong arg1, jlong arg2) const
	{
		return callObjectMethod(
			"queryConfigurations",
			"(IJJ)Ljava/util/List;",
			arg0,
			arg1,
			arg2
		);
	}
	JObject UsageStatsManager::queryEventStats(jint arg0, jlong arg1, jlong arg2) const
	{
		return callObjectMethod(
			"queryEventStats",
			"(IJJ)Ljava/util/List;",
			arg0,
			arg1,
			arg2
		);
	}
	android::app::usage::UsageEvents UsageStatsManager::queryEvents(jlong arg0, jlong arg1) const
	{
		return callObjectMethod(
			"queryEvents",
			"(JJ)Landroid/app/usage/UsageEvents;",
			arg0,
			arg1
		);
	}
	android::app::usage::UsageEvents UsageStatsManager::queryEventsForSelf(jlong arg0, jlong arg1) const
	{
		return callObjectMethod(
			"queryEventsForSelf",
			"(JJ)Landroid/app/usage/UsageEvents;",
			arg0,
			arg1
		);
	}
	JObject UsageStatsManager::queryUsageStats(jint arg0, jlong arg1, jlong arg2) const
	{
		return callObjectMethod(
			"queryUsageStats",
			"(IJJ)Ljava/util/List;",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace android::app::usage

