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
		static jint STANDBY_BUCKET_RESTRICTED();
		static jint STANDBY_BUCKET_WORKING_SET();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UsageStatsManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		UsageStatsManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint getAppStandbyBucket();
		jboolean isAppInactive(jstring arg0);
		__JniBaseClass queryAndAggregateUsageStats(jlong arg0, jlong arg1);
		__JniBaseClass queryConfigurations(jint arg0, jlong arg1, jlong arg2);
		__JniBaseClass queryEventStats(jint arg0, jlong arg1, jlong arg2);
		android::app::usage::UsageEvents queryEvents(jlong arg0, jlong arg1);
		android::app::usage::UsageEvents queryEventsForSelf(jlong arg0, jlong arg1);
		__JniBaseClass queryUsageStats(jint arg0, jlong arg1, jlong arg2);
	};
} // namespace android::app::usage

