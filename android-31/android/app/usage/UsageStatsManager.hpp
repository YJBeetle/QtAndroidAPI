#pragma once

#include "../../../JObject.hpp"

namespace android::app::usage
{
	class UsageEvents;
}
class JString;

namespace android::app::usage
{
	class UsageStatsManager : public JObject
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
		
		// QJniObject forward
		template<typename ...Ts> explicit UsageStatsManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UsageStatsManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint getAppStandbyBucket() const;
		jboolean isAppInactive(JString arg0) const;
		JObject queryAndAggregateUsageStats(jlong arg0, jlong arg1) const;
		JObject queryConfigurations(jint arg0, jlong arg1, jlong arg2) const;
		JObject queryEventStats(jint arg0, jlong arg1, jlong arg2) const;
		android::app::usage::UsageEvents queryEvents(jlong arg0, jlong arg1) const;
		android::app::usage::UsageEvents queryEventsForSelf(jlong arg0, jlong arg1) const;
		JObject queryUsageStats(jint arg0, jlong arg1, jlong arg2) const;
	};
} // namespace android::app::usage

