#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app::usage
{
	class UsageEvents;
}

namespace android::app::usage
{
	class UsageStatsManager : public __JniBaseClass
	{
	public:
		// Fields
		static jint INTERVAL_BEST();
		static jint INTERVAL_DAILY();
		static jint INTERVAL_MONTHLY();
		static jint INTERVAL_WEEKLY();
		static jint INTERVAL_YEARLY();
		static jint STANDBY_BUCKET_ACTIVE();
		static jint STANDBY_BUCKET_FREQUENT();
		static jint STANDBY_BUCKET_RARE();
		static jint STANDBY_BUCKET_WORKING_SET();
		
		UsageStatsManager(QAndroidJniObject obj);
		// Constructors
		UsageStatsManager() = default;
		
		// Methods
		jint getAppStandbyBucket();
		jboolean isAppInactive(jstring arg0);
		jboolean isAppInactive(const QString &arg0);
		QAndroidJniObject queryAndAggregateUsageStats(jlong arg0, jlong arg1);
		QAndroidJniObject queryConfigurations(jint arg0, jlong arg1, jlong arg2);
		QAndroidJniObject queryEventStats(jint arg0, jlong arg1, jlong arg2);
		QAndroidJniObject queryEvents(jlong arg0, jlong arg1);
		QAndroidJniObject queryEventsForSelf(jlong arg0, jlong arg1);
		QAndroidJniObject queryUsageStats(jint arg0, jlong arg1, jlong arg2);
	};
} // namespace android::app::usage

