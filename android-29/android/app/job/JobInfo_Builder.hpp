#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class JobInfo_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		JobInfo_Builder(QAndroidJniObject obj);
		// Constructors
		JobInfo_Builder(jint arg0, android::content::ComponentName arg1);
		JobInfo_Builder() = default;
		
		// Methods
		QAndroidJniObject addTriggerContentUri(android::app::job::JobInfo_TriggerContentUri arg0);
		QAndroidJniObject build();
		QAndroidJniObject setBackoffCriteria(jlong arg0, jint arg1);
		QAndroidJniObject setClipData(android::content::ClipData arg0, jint arg1);
		QAndroidJniObject setEstimatedNetworkBytes(jlong arg0, jlong arg1);
		QAndroidJniObject setExtras(android::os::PersistableBundle arg0);
		QAndroidJniObject setImportantWhileForeground(jboolean arg0);
		QAndroidJniObject setMinimumLatency(jlong arg0);
		QAndroidJniObject setOverrideDeadline(jlong arg0);
		QAndroidJniObject setPeriodic(jlong arg0);
		QAndroidJniObject setPeriodic(jlong arg0, jlong arg1);
		QAndroidJniObject setPersisted(jboolean arg0);
		QAndroidJniObject setPrefetch(jboolean arg0);
		QAndroidJniObject setRequiredNetwork(android::net::NetworkRequest arg0);
		QAndroidJniObject setRequiredNetworkType(jint arg0);
		QAndroidJniObject setRequiresBatteryNotLow(jboolean arg0);
		QAndroidJniObject setRequiresCharging(jboolean arg0);
		QAndroidJniObject setRequiresDeviceIdle(jboolean arg0);
		QAndroidJniObject setRequiresStorageNotLow(jboolean arg0);
		QAndroidJniObject setTransientExtras(android::os::Bundle arg0);
		QAndroidJniObject setTriggerContentMaxDelay(jlong arg0);
		QAndroidJniObject setTriggerContentUpdateDelay(jlong arg0);
	};
} // namespace android::app::job

