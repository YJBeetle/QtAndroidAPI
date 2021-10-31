#include "./UsageEvents.hpp"
#include "./UsageStatsManager.hpp"

namespace android::app::usage
{
	// Fields
	jint UsageStatsManager::INTERVAL_BEST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageStatsManager",
			"INTERVAL_BEST"
		);
	}
	jint UsageStatsManager::INTERVAL_DAILY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageStatsManager",
			"INTERVAL_DAILY"
		);
	}
	jint UsageStatsManager::INTERVAL_MONTHLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageStatsManager",
			"INTERVAL_MONTHLY"
		);
	}
	jint UsageStatsManager::INTERVAL_WEEKLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageStatsManager",
			"INTERVAL_WEEKLY"
		);
	}
	jint UsageStatsManager::INTERVAL_YEARLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageStatsManager",
			"INTERVAL_YEARLY"
		);
	}
	jint UsageStatsManager::STANDBY_BUCKET_ACTIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageStatsManager",
			"STANDBY_BUCKET_ACTIVE"
		);
	}
	jint UsageStatsManager::STANDBY_BUCKET_FREQUENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageStatsManager",
			"STANDBY_BUCKET_FREQUENT"
		);
	}
	jint UsageStatsManager::STANDBY_BUCKET_RARE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageStatsManager",
			"STANDBY_BUCKET_RARE"
		);
	}
	jint UsageStatsManager::STANDBY_BUCKET_WORKING_SET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageStatsManager",
			"STANDBY_BUCKET_WORKING_SET"
		);
	}
	
	// QAndroidJniObject forward
	UsageStatsManager::UsageStatsManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint UsageStatsManager::getAppStandbyBucket()
	{
		return callMethod<jint>(
			"getAppStandbyBucket",
			"()I"
		);
	}
	jboolean UsageStatsManager::isAppInactive(jstring arg0)
	{
		return callMethod<jboolean>(
			"isAppInactive",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	__JniBaseClass UsageStatsManager::queryAndAggregateUsageStats(jlong arg0, jlong arg1)
	{
		return callObjectMethod(
			"queryAndAggregateUsageStats",
			"(JJ)Ljava/util/Map;",
			arg0,
			arg1
		);
	}
	__JniBaseClass UsageStatsManager::queryConfigurations(jint arg0, jlong arg1, jlong arg2)
	{
		return callObjectMethod(
			"queryConfigurations",
			"(IJJ)Ljava/util/List;",
			arg0,
			arg1,
			arg2
		);
	}
	__JniBaseClass UsageStatsManager::queryEventStats(jint arg0, jlong arg1, jlong arg2)
	{
		return callObjectMethod(
			"queryEventStats",
			"(IJJ)Ljava/util/List;",
			arg0,
			arg1,
			arg2
		);
	}
	android::app::usage::UsageEvents UsageStatsManager::queryEvents(jlong arg0, jlong arg1)
	{
		return callObjectMethod(
			"queryEvents",
			"(JJ)Landroid/app/usage/UsageEvents;",
			arg0,
			arg1
		);
	}
	android::app::usage::UsageEvents UsageStatsManager::queryEventsForSelf(jlong arg0, jlong arg1)
	{
		return callObjectMethod(
			"queryEventsForSelf",
			"(JJ)Landroid/app/usage/UsageEvents;",
			arg0,
			arg1
		);
	}
	__JniBaseClass UsageStatsManager::queryUsageStats(jint arg0, jlong arg1, jlong arg2)
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

