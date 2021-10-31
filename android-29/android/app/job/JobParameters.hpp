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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit JobParameters(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		JobParameters(QAndroidJniObject obj);
		
		// Constructors
		
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

