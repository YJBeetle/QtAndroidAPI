#pragma once

#include "../../../JObject.hpp"

class JArray;
class JArray;
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
	class JobParameters : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
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
		
		// QJniObject forward
		template<typename ...Ts> explicit JobParameters(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		JobParameters(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void completeWork(android::app::job::JobWorkItem arg0) const;
		android::app::job::JobWorkItem dequeueWork() const;
		jint describeContents() const;
		android::content::ClipData getClipData() const;
		jint getClipGrantFlags() const;
		android::os::PersistableBundle getExtras() const;
		jint getJobId() const;
		android::net::Network getNetwork() const;
		jint getStopReason() const;
		android::os::Bundle getTransientExtras() const;
		JArray getTriggeredContentAuthorities() const;
		JArray getTriggeredContentUris() const;
		jboolean isExpeditedJob() const;
		jboolean isOverrideDeadlineExpired() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::job

