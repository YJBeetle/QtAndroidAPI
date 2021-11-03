#pragma once

#include "../../../JObject.hpp"

namespace android::app::job
{
	class JobInfo;
}
namespace android::app::job
{
	class JobInfo_TriggerContentUri;
}
namespace android::content
{
	class ClipData;
}
namespace android::content
{
	class ComponentName;
}
namespace android::net
{
	class NetworkRequest;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class PersistableBundle;
}

namespace android::app::job
{
	class JobInfo_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit JobInfo_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		JobInfo_Builder(QAndroidJniObject obj);
		
		// Constructors
		JobInfo_Builder(jint arg0, android::content::ComponentName arg1);
		
		// Methods
		android::app::job::JobInfo_Builder addTriggerContentUri(android::app::job::JobInfo_TriggerContentUri arg0);
		android::app::job::JobInfo build();
		android::app::job::JobInfo_Builder setBackoffCriteria(jlong arg0, jint arg1);
		android::app::job::JobInfo_Builder setClipData(android::content::ClipData arg0, jint arg1);
		android::app::job::JobInfo_Builder setEstimatedNetworkBytes(jlong arg0, jlong arg1);
		android::app::job::JobInfo_Builder setExtras(android::os::PersistableBundle arg0);
		android::app::job::JobInfo_Builder setImportantWhileForeground(jboolean arg0);
		android::app::job::JobInfo_Builder setMinimumLatency(jlong arg0);
		android::app::job::JobInfo_Builder setOverrideDeadline(jlong arg0);
		android::app::job::JobInfo_Builder setPeriodic(jlong arg0);
		android::app::job::JobInfo_Builder setPeriodic(jlong arg0, jlong arg1);
		android::app::job::JobInfo_Builder setPersisted(jboolean arg0);
		android::app::job::JobInfo_Builder setPrefetch(jboolean arg0);
		android::app::job::JobInfo_Builder setRequiredNetwork(android::net::NetworkRequest arg0);
		android::app::job::JobInfo_Builder setRequiredNetworkType(jint arg0);
		android::app::job::JobInfo_Builder setRequiresBatteryNotLow(jboolean arg0);
		android::app::job::JobInfo_Builder setRequiresCharging(jboolean arg0);
		android::app::job::JobInfo_Builder setRequiresDeviceIdle(jboolean arg0);
		android::app::job::JobInfo_Builder setRequiresStorageNotLow(jboolean arg0);
		android::app::job::JobInfo_Builder setTransientExtras(android::os::Bundle arg0);
		android::app::job::JobInfo_Builder setTriggerContentMaxDelay(jlong arg0);
		android::app::job::JobInfo_Builder setTriggerContentUpdateDelay(jlong arg0);
	};
} // namespace android::app::job

