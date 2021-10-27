#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app::job
{
	class JobWorkItem;
}
namespace android::content
{
	class ClipData;
}
namespace android::net
{
	class Network;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
namespace android::os
{
	class PersistableBundle;
}

namespace android::app::job
{
	class JobParameters : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		JobParameters(QAndroidJniObject obj);
		// Constructors
		JobParameters() = default;
		
		// Methods
		void completeWork(android::app::job::JobWorkItem arg0);
		QAndroidJniObject dequeueWork();
		jint describeContents();
		QAndroidJniObject getClipData();
		jint getClipGrantFlags();
		QAndroidJniObject getExtras();
		jint getJobId();
		QAndroidJniObject getNetwork();
		QAndroidJniObject getTransientExtras();
		jarray getTriggeredContentAuthorities();
		jarray getTriggeredContentUris();
		jboolean isOverrideDeadlineExpired();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::job

