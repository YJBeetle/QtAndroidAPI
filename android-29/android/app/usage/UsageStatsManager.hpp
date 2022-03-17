#pragma once

#include "./UsageEvents.def.hpp"
#include "../../../JString.hpp"
#include "./UsageStatsManager.def.hpp"

namespace android::app::usage
{
	// Fields
	inline jint UsageStatsManager::INTERVAL_BEST()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageStatsManager",
			"INTERVAL_BEST"
		);
	}
	inline jint UsageStatsManager::INTERVAL_DAILY()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageStatsManager",
			"INTERVAL_DAILY"
		);
	}
	inline jint UsageStatsManager::INTERVAL_MONTHLY()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageStatsManager",
			"INTERVAL_MONTHLY"
		);
	}
	inline jint UsageStatsManager::INTERVAL_WEEKLY()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageStatsManager",
			"INTERVAL_WEEKLY"
		);
	}
	inline jint UsageStatsManager::INTERVAL_YEARLY()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageStatsManager",
			"INTERVAL_YEARLY"
		);
	}
	inline jint UsageStatsManager::STANDBY_BUCKET_ACTIVE()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageStatsManager",
			"STANDBY_BUCKET_ACTIVE"
		);
	}
	inline jint UsageStatsManager::STANDBY_BUCKET_FREQUENT()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageStatsManager",
			"STANDBY_BUCKET_FREQUENT"
		);
	}
	inline jint UsageStatsManager::STANDBY_BUCKET_RARE()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageStatsManager",
			"STANDBY_BUCKET_RARE"
		);
	}
	inline jint UsageStatsManager::STANDBY_BUCKET_WORKING_SET()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageStatsManager",
			"STANDBY_BUCKET_WORKING_SET"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint UsageStatsManager::getAppStandbyBucket() const
	{
		return callMethod<jint>(
			"getAppStandbyBucket",
			"()I"
		);
	}
	inline jboolean UsageStatsManager::isAppInactive(JString arg0) const
	{
		return callMethod<jboolean>(
			"isAppInactive",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline JObject UsageStatsManager::queryAndAggregateUsageStats(jlong arg0, jlong arg1) const
	{
		return callObjectMethod(
			"queryAndAggregateUsageStats",
			"(JJ)Ljava/util/Map;",
			arg0,
			arg1
		);
	}
	inline JObject UsageStatsManager::queryConfigurations(jint arg0, jlong arg1, jlong arg2) const
	{
		return callObjectMethod(
			"queryConfigurations",
			"(IJJ)Ljava/util/List;",
			arg0,
			arg1,
			arg2
		);
	}
	inline JObject UsageStatsManager::queryEventStats(jint arg0, jlong arg1, jlong arg2) const
	{
		return callObjectMethod(
			"queryEventStats",
			"(IJJ)Ljava/util/List;",
			arg0,
			arg1,
			arg2
		);
	}
	inline android::app::usage::UsageEvents UsageStatsManager::queryEvents(jlong arg0, jlong arg1) const
	{
		return callObjectMethod(
			"queryEvents",
			"(JJ)Landroid/app/usage/UsageEvents;",
			arg0,
			arg1
		);
	}
	inline android::app::usage::UsageEvents UsageStatsManager::queryEventsForSelf(jlong arg0, jlong arg1) const
	{
		return callObjectMethod(
			"queryEventsForSelf",
			"(JJ)Landroid/app/usage/UsageEvents;",
			arg0,
			arg1
		);
	}
	inline JObject UsageStatsManager::queryUsageStats(jint arg0, jlong arg1, jlong arg2) const
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

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::usage;
#endif
