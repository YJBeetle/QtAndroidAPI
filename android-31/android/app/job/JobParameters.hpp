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
		static __JniBaseClass CREATOR();
		static jint STOP_REASON_APP_STANDBY();
		static jint STOP_REASON_BACKGROUND_RESTRICTION();
		static jint STOP_REASON_CANCELLED_BY_APP();
		static jint STOP_REASON_CONSTRAINT_BATTERY_NOT_LOW();
		static jint STOP_REASON_CONSTRAINT_CHARGING();
		static jint STOP_REASON_CONSTRAINT_CONNECTIVITY();
		static jint STOP_REASON_CONSTRAINT_DEVICE_IDLE();
		static jint STOP_REASON_CONSTRAINT_STORAGE_NOT_LOW();
		static jint STOP_REASON_DEVICE_STATE();
		static jint STOP_REASON_PREEMPT();
		static jint STOP_REASON_QUOTA();
		static jint STOP_REASON_SYSTEM_PROCESSING();
		static jint STOP_REASON_TIMEOUT();
		static jint STOP_REASON_UNDEFINED();
		static jint STOP_REASON_USER();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit JobParameters(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		JobParameters(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void completeWork(android::app::job::JobWorkItem arg0);
		android::app::job::JobWorkItem dequeueWork();
		jint describeContents();
		android::content::ClipData getClipData();
		jint getClipGrantFlags();
		android::os::PersistableBundle getExtras();
		jint getJobId();
		android::net::Network getNetwork();
		jint getStopReason();
		android::os::Bundle getTransientExtras();
		jarray getTriggeredContentAuthorities();
		jarray getTriggeredContentUris();
		jboolean isExpeditedJob();
		jboolean isOverrideDeadlineExpired();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::job

